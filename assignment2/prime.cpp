#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void printPrimes(int n) {
        if (n < 2) return;
        vector<bool> isPrime(n + 1, true);
        for (int p = 2; p * p <= n; p++) {
            if (isPrime[p]) {        
                for (int i = p * p; i <= n; i += p)
                    isPrime[i] = false;
            }
        }          
        for (int p = 2; p <= n; p++) {
            if (isPrime[p])
                cout << p << " ";
        }
    }
};

int main() {
    int n;
    cin >> n;
    Solution solution;
    solution.printPrimes(n);
    return 0;
}
