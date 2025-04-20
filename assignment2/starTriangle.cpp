#include <iostream>
using namespace std;
class Solution {
public:
    void printTriangle(int n) {
        for (int i = 0; i < n; i++) {
            int stars = 2 * i + 1;
            int spaces = n - i - 1;
            for (int j = 0; j < spaces; j++) {
                cout << " ";
            }
            for (int j = 0; j < stars; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;
    Solution solution;
    solution.printTriangle(n);
    return 0;
}
