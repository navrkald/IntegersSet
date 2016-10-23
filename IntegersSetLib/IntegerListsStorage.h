#include <unordered_map>

using namespace std;

class CIntegerListStorage
{
public:
	CIntegerListStorage();
	~CIntegerListStorage();

	// Parse integers from line. If succeeded insert new list of integers, 
	// if not add wrong line to vector of wrong inputs.
	// Return true if line is correct and false if parse line failed.
	bool Insert(const string& line);
	void Insert(const vector<int>& integers);


	void ReadFromFile(const string& filename);

protected:
	//unordered_map<std::hash<vector<int>>,vector<int>> m_container;
	vector<string> m_wrongInputs;

protected:
	static const char integesDelimiter;
	
};

