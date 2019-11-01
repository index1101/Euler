#include <iostream>

using namespace std;

int is_valid(int x, int base) {
    int raw = x, temp = 0;
    while (x) {
        temp = temp * base + x % base;
        x /= base;
    }
    return temp == raw;
}

int main() {
    int ans = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            if (is_valid(i * j, 10) && i * j > ans) ans = i * j;
        }
    }
    cout << ans <<endl;
    return 0;
}


