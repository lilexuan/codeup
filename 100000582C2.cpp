#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int number[100001];

int main()
{
	int n, tmp, ans, flag = 0;
	while (cin >> n) {
		fill(number, number + 100001, 0);
		vector<int> v;
		for (int i = 0; i < n; i++) {
			cin >> tmp;
			if (!number[tmp]) {
				v.push_back(tmp);
			}
			number[tmp]++;
		}
		for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
			if (number[*it] == 1) {
				ans = *it;
				flag = 1;
				break;
			} 
		}
		v.clear();
		if (flag) {
			cout << ans << endl;
		} else {
			cout << "None" << endl;
		}
	}
	return 0;
}
