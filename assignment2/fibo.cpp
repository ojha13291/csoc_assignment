#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of Fibonacci terms to generate:";
    cin >> n;
    
    if (n <= 0) {
        return 0; 
    }
    
    long long int first = 0, second = 1, next;
    
    cout << first;
  
    for (int i = 2; i <= n; i++) {
        cout << " " << second;
        next = first + second;
        first = second;
        second = next;
    }
    
    cout << endl;
    
    return 0;
}
