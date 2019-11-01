#include <iostream>

using namespace std;
#define MAX_N 4000000

int main() {
    long long sum = 0;
    int a = 0, b = 1;
    while (a + b < MAX_N) {
        b = a + b;
        a = b - a;
        if (!(b & 1)) sum += b;
    }
    cout << sum << endl;
    return 0;
}
