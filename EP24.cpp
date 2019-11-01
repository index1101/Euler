

#define MAX_N 10
int fact[MAX_N + 5];

void init(int n) {
    fact[0] = 1;

    for (int i = 1; i <= n; i++) {
        fact[i] = fact[i - 1] * i;
        num[i] = 1;
    }
    return ;
}

int get_num(int k, int val, int n, int &x) {
    int step = k / val;
    x = 0;
    for (int t = 0; t <= step; i++) {
        t += num[i];
    }
    x = i;
    k %= val;
    num[x] = 0;
    return k;
}

int main() {
    init(MAX_N);
    int k = 1000000 - 1;
    for (int i = 10; i >= 1; i--) {
        int x;
        k = get_num(k, fact[i - 1], MAX_N, x);
        cout << x;
    }
    cout << endl;
    return 0;
}
