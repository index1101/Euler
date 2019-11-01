#include <iostream>
#define MAX_N 44
#define MAX_M 4000000
using namespace std;
int fib[MAX_N + 5] = {0};

int main() {
    int n = 2;
    fib[1] = 1, fib[2] = 2;
    while (fib[n] + fib[n - 1] < MAX_M) {
        fib[n + 1] = fib[n] + fib[n - 1];
        n += 1;
    }
    long long sum = 0;
    for (int i = 0; i <= n; i++) {
        if (fib[i] % 2) continue;
        sum += fib[i];   
    }
    cout << sum << endl;
    return 0;
}
