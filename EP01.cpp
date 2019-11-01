#include <iostream>
#define MAX_N 1000
using namespace std;

int main() {
    int sum3 = (3 + 999) * 333 / 2;
    int sum5 = (5 + 995) * 199 / 2;
    int sum15 = (15 + (1000 / 15) * 15) * (1000 / 15) / 2;
    cout << sum3 + sum5 - sum15 << endl;
    return 0;
}
