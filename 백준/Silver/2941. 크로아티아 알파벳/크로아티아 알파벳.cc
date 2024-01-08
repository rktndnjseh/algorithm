#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    string croatianAlphabet[] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

 
    int count = 0;
    int index = 0;
    while (index < word.length()) {
        bool found = false;
        for (int i = 0; i < sizeof(croatianAlphabet) / sizeof(croatianAlphabet[0]); i++) {
            string alphabet = croatianAlphabet[i];
            if (word.substr(index, alphabet.length()) == alphabet) {
                count++;
                index += alphabet.length();
                found = true;
                break;
            }
        }
        if (!found) {
            count++;
            index++;
        }
    }

    cout << count;

    return 0;
}
