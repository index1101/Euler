#include <iostream>
#include <cmath>

using namespace std;

inline bool is_prime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int  cnt = 0, i = 1;
    while (cnt < 10001) {
        i++;
        if(is_prime(i)) cnt += 1;
    }
    cout << i << endl;
    return 0;
}
