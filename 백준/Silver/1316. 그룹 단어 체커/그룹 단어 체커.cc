#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	int count = 0;
	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;

		vector<bool> alphabets(26, false);
		bool isGroupWord = true;
		char prevChar = word[0];
		alphabets[prevChar - 'a'] = true;

		for (int j = 1; j < word.length(); j++) {
			if (prevChar != word[j]) {
				if (alphabets[word[j] - 'a']) {
					isGroupWord = false;
					break;
				}
				alphabets[word[j] - 'a'] = true;
			}
			prevChar = word[j];
		}

		if (isGroupWord) {
			count++;
		}
	}

	cout << count;
	return 0;
}
