#include <iostream>

using namespace std;

int is_valid(int i) {
    if (i % 3 == 0 || i % 5 == 0) return 1;
    return 0;
}

int main() {
    int sum = 0;
    for (int i = 0; i < 1000; i++) {
        if (is_valid(i)) sum += i;
    }
    cout << sum << endl;
    return 0;
}
