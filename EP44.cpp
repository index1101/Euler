#include <iostream>

using namespace std;
#define INF 0x7ffffffffffffLL

long long Pent(long long x) {
    return x * (3 * x - 1) / 2;
}

/*bool is_valid(int a, int b) {
    int flag1 = 1, flag 2 = 1;
    for (int i = 1; i < a + b; i++) {
        if (Pent(i) = b - a) flag1 = 0;
        if (Pent(i) = b + a) flag2 = 0;
    }
    if (flag1 == 0 && flag2 == 0) return true;
    return false;
}*/
int binary_search(long long (*func)(long long), long long n, long long x) {
     int head = 0, tail = n - 1, mid;
     while (head <= tail) {
        mid = (head + tail) >> 1;
        if (func(mid) == x) return mid;
        if (func(mid) < x) head = mid + 1;
        else tail = mid - 1;
     }
      return 0;
}

int main() {
    long long D = INF;
    long long pk, pj, n = 2;
    int diff = Pent(n) - Pent(n - 1);
    while (diff < D) {
        pk = Pent(n);
        for (int j = n -1; j >= 1; j--) {
            pj = Pent(j);
            if (pk - pj >= D) break;
            int ind1 = binary_search(Pent, 2 * n, pk + pj);
            int ind2 = binary_search(Pent, 2 * n, pk - pj);
            if (ind1 && ind2) {     
                D = pk - pj;
                cout << D << endl;
                return 0;            
            }             
        }
        n++;
    }
    return 0;
}
