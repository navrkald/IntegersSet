#include "StringUtils.h"
#include <string>
#include <sstream>
#include <algorithm>
#include <locale>
#include <cctype>
#include <functional>
#include <iostream>

CStringUtils::CStringUtils()
{
}


CStringUtils::~CStringUtils()
{
}

bool CStringUtils::convertStringsToInts(const vector<string>& strings, vector<int>& integers)
{
	try {
		for (const string& str : strings) {
			integers.push_back(std::stoi(str));
		}
	}	
	catch (const std::exception& e) {
		cerr << e.what();
		return false;
	}

	return true;
}

void CStringUtils::split(const std::string &s, char delim, std::vector<std::string> &elems) {
	std::stringstream ss;
	ss.str(s);
	string item;
	while (getline(ss, item, delim)) {
		trim(item);
		if (!item.empty()) {
			elems.push_back(item);
		}
	}
}
std::vector<std::string> CStringUtils::split(const std::string &s, char delim) {
	std::vector<std::string> elems;
	split(s, delim, elems);
	return elems;
}

// trim from start (in place)
void CStringUtils::ltrim(std::string &s) {
	s.erase(s.begin(), std::find_if(s.begin(), s.end(),
		std::not1(std::ptr_fun<int, int>(std::isspace))));
}

// trim from end (in place)
void CStringUtils::rtrim(std::string &s) {
	s.erase(std::find_if(s.rbegin(), s.rend(),
		std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
}

// trim from both ends (in place)
void CStringUtils::trim(std::string &s) {
	ltrim(s);
	rtrim(s);
}