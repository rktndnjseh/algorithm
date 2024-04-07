#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int>stack;
	int k;
	cin >> k;
	
	for(int i=0;i<k;i++){
		int n;
		cin >> n;
		if (n != 0) {
			stack.push(n);
		}
		else {
			stack.pop();
		}
	}
	int sum = 0;
	while (!stack.empty()) {
		sum += stack.top();
		stack.pop();
	}
	cout << sum;
	return 0;
}