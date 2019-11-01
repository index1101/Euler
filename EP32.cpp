#include <iostream>
#include <cmath>

using namespace std;

#define MAX_N 10000
bool add_to_num(int x, int *num) {
    while(x) {
        if(num[x % 10]) return false;
        num[x % 10] += 1;
        x /= 10;    
    }
    return true;
}

inline int digtis(int x) {
    if (x == 0) return 1;
    return floor(log10(x)) + 1;
}

bool is_valid(int a, int b, int c) {
    if (digtis(a) + digtis(b) + digtis(c) - 9) return false;
    int num[10] = {0};
    int flag = 1;
    num[0] = 1;
    flag = flag && add_to_num(a, num);
    flag = flag && add_to_num(b, num);
    flag = flag && add_to_num(c, num);
    return flag;
}

int can[MAX_N + 5];
 
int main() {
    
    int sum = 0;
    for (int a = 1;  a < 100; a++) {
        for (int b = a + 1; b < 10000; b++) {
            if (is_valid(a, b, a * b)) {
                sum += a * b;
            }
            cout << sum <<endl;    
            return 0;
        }
    }
}
