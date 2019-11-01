#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : b);
}

int main() {
    int ans = 0;
    for (int n = 1; n <= 33; n++) {
        for (int m = n + 1; m * m + n * n <= 1000; m++) {
            if (gcd(n, m) != 1) continue;
            int a = 2 * n * m;
            int b = m * m - n * n;
            int c = m * m + n * n;
            
            if (1000 % (a + b + c) == 0) {
                int k = 1000 / (a + b + c);
                ans = pow(k,3);
            }
           // int ans;
           // if (a + b + c == 1000)  ans = 100 * a + 10 * b + c;
        }
    }
    cout << ans << endl;
    return 0;
}
