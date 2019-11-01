#include <iostream>
#define MAX_N 1000
int cnt[MAX_N + 5] = {0}; 
using namespace std;

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);   
}
int main() {
    for (int n = 2; n <= 32; n++) {
        for (int m = n + 1; m <= 32; m++) {
            if (gcd(n, m) - 1) continue;
            int a = m * m- n * n;
            int b = 2 * m * n;
            int c = m * m + n * n;
            for( int p = a + b + c; p <= MAX_N; p += (a + b + c)) {
                cnt[p] += 1;
            }
        }
    }
    int ans = 0;
    for ( int i = 1; i <= MAX_N; i++) {
        if (cnt[i] > cnt[ans]) ans = i;
    }   
    cout << ans << endl;
    return 0;
}   
