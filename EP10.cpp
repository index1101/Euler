#include <iostream>
#include <cmath>
using namespace std;
#define MAX_N 2000000
int is_prime[MAX_N + 5];
int prime[MAX_N + 5];

int main() {
    long long ans;
    for (int M = 2; M <= MAX_N; M++) {
        if(is_prime[M] == 0) {
            prime[++prime[0]] = M;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * M > MAX_N) break;
            is_prime[prime[j] * M] = 1;
            if (M % prime[j] == 0) break;
            
        }
    }
    for (int i = 0; i < MAX_N; i++) {
        ans += prime[i];
    }
    cout << ans << endl;
    return 0;
}
