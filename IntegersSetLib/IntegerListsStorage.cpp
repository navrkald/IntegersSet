#include <iostream>
#include <string>
#include <fstream>

#include "IntegerListsStorage.h"
#include "StringUtils.h"

using namespace std;

const char CIntegerListStorage::integesDelimiter = ',';

CIntegerListStorage::CIntegerListStorage()
{
}


CIntegerListStorage::~CIntegerListStorage()
{
}

bool CIntegerListStorage::Insert(const string& line) {
	vector<string> strings;
	vector<int> integers;
	CStringUtils::split(line, ',', strings);
	bool succeded = CStringUtils::convertStringsToInts(strings, integers);
	if(succeded) {
		Insert(integers);
	}
	else {
		m_wrongInputs.push_back(line);
	}
	return succeded;
}

void CIntegerListStorage::Insert(const vector<int>& integers)
{
	
}

void CIntegerListStorage::ReadFromFile(const string& filename)
{
	std::ifstream myFile;
	myFile.open(filename);
	if (myFile.is_open()) {
		string line;
		while (getline(myFile, line)) {
			Insert(line);
									
		}
	}
	else {
		cout << "Unable to open file: " << filename.c_str() << endl;
	}
}

