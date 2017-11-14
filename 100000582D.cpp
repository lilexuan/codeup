#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
	while (getline(cin, s1)) {
		getline(cin, s2);
		for (int i = 0; i < s1.size(); i++) {
			if (s2.find(s1[i]) == -1) {
				cout << s1[i];
			} else {
				continue;
			}
		}
		cout << endl;
	}
	return 0;
}
