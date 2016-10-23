#include <vector>

#pragma once

using namespace std;
class CStringUtils
{
public:
	CStringUtils();
	~CStringUtils();

	// Converts string vector to integer vector
	// Input: strings vector
	// Output: integers vector
	// Return: true if conversion succeeded
	static bool convertStringsToInts(const vector<string>& strings, vector<int>& integers);

	// Splits method are copied from http://stackoverflow.com/questions/236129/split-a-string-in-c
	static inline void split(const std::string &s, char delim, std::vector<std::string> &elems);
	static inline std::vector<std::string> split(const std::string &s, char delim);

	//Trim methods are copied from http://stackoverflow.com/questions/216823/whats-the-best-way-to-trim-stdstring
	static inline void ltrim(std::string &s);
	static inline void rtrim(std::string &s);
	static inline void trim(std::string &s);
};

