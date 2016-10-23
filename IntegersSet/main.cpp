#include <vector>
#include <iostream>
using namespace std;

int main()
{
	std::vector<int> v1, v2;
 	v1.push_back(1);
	v1.push_back(2);
	v2.push_back(1);
	v2.push_back(2);
	v2.push_back(2);
	if (v1 == v2) {
		cout << "equals" << endl;
	}
	int a;
	cin >> a;
	return 0;
}

