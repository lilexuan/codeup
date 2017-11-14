#include <iostream>
#include <vector>
#include <map>
using namespace std;

//使用遍历确实不是一个好的方法，明天再想想有没有其他更加方便的方法

int main()
{
	int n;
	while (cin >> n) {
		vector<pair<int, int> > vi;
		int tmp;
		pair<int, int> p;
		for (int i = 0; i < n; i++) { 
			cin >> tmp;
			p.first = tmp;
			p.second = 1;
			vi.push_back(p);
			for (int j = 0; j < i; j++) {
				if (vi[j].first == tmp) {
					p.second++;
				}
			}
			vi[i].second = p.second;
			for (int j = 0; j < i; j++) {
				if (vi[j].first == tmp) {
					vi[j].second = p.second;
				}
			}
		}
		int flag = 1;
		int pos;
		for (int i = 0; i < n; i++) {
			if (vi[i].second == 1) {
				flag = 0;
				pos = i;
				break;
			}
		}
		if (flag) {
			cout << "None" << endl;
		} else {
			cout << vi[pos].first << endl;
		}
	}
	return 0;
}
