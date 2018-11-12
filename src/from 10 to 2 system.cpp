#include <iostream>
#include <vector>
using namespace std;

int main() {
	int i;
	cin >> i;
	vector<int> dv;
	if (i == 0 || i == 1) {
		dv.insert(dv.begin(), i);
	} else {
		while (i/2 >= 1) {
			dv.insert(dv.begin(), i%2);
			i /= 2;
			if (i == 1 || i == 0) {
					dv.insert(dv.begin(), i);
					break;
			}
		}
	}
	for (auto x : dv) {
		cout << x;
	}
    return 0;
}
