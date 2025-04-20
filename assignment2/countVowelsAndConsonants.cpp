#include <iostream>
#include <string>
#include <cctype>
using namespace std;
class Solution {
public:
    void countVowelsAndConsonants(const string& str) {
        int vowels = 0;
        int consonants = 0;
        for (char c : str) {
            char lowerC = tolower(c);
            if (isalpha(c)) {
                if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || 
                    lowerC == 'o' || lowerC == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }
        
        cout << "Vowels: " << vowels << endl;
        cout << "Consonants: " << consonants << endl;
    }
};

int main() {
    string input;
    getline(cin, input);
    Solution solution;
    solution.countVowelsAndConsonants(input);
    return 0;
}
