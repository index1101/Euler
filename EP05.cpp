#include <iostream>
using namespace std;

typedef long long lint;
lint gcd(lint a, lint b) {
    return (b ? gcd(b, a % b) : a );
}

lint ex_gcd(lint a, lint b, int &x, int &y) {
    if (b == 0) {
        x =1, y = 0;
        return a;
    }
    int xx, yy, ret;
    //int ret = ex_gcd(b, a % b, y, x);
    //y -= a / b * x;
    ret = ex_gcd(b, a% b, xx, yy);
    x = yy;
    y = xx - a / b * yy;
    return ret;
} 

int main() {
    lint ans = 1;
    for (int i = 2; i <= 20; i++) {
        ans = ans * i / gcd(ans, i);
    }
    cout << ans << endl;
    return 0;
}
