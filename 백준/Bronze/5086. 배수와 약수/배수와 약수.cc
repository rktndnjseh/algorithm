#include <iostream>
using namespace std;

const char* factor() { return "factor"; }
const char* multiple() { return "multiple"; }
int main() {
	int a, b;
	
	while (1){
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		if (b % a == 0) {
			cout << factor() << endl;
		}
		else if (a % b == 0) {
			cout << multiple() << endl;
		}
		else {
			cout << "neither" << endl;
		}
	}
	return 0;
}