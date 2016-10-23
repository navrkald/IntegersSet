#include "MyIntList.h"
#include <algorithm>


CMyIntList::CMyIntList(const vector<int>& integerVector) : 
m_integers(integerVector)
{
	sort(m_integers.begin(), m_integers.end());
}

bool CMyIntList::operator==(const CMyIntList& a)
{
	return m_integers == m_integers;
}

CMyIntList& CMyIntList::operator++() {
	m_numOfInserted++;
	return *this;
}
