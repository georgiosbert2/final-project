#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Example 1: Print the square of each number from 0 to n
    for (int i = 0; i <= n; ++i) {
        cout << i * i << " ";
    }
    return 0;
}
