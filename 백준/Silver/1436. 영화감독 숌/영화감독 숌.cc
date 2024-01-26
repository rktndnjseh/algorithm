#include <iostream>
#include <string> 

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	int num = 666;
	while (n) {
		if (to_string(num).find("666") != string::npos) {
			--n;
		}
		++num;
	}

	cout << num - 1;

	return 0;
}
