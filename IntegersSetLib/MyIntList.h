#pragma once

#include <vector>
using namespace std;

class CMyIntList
{
public:
	CMyIntList(const vector<int>& integerVector);
	CMyIntList& CMyIntList::operator++();
	inline bool operator==(const CMyIntList& a);

protected:
	vector<int> m_integers;
	size_t m_numOfInserted; // Number of same lists inserted
};

