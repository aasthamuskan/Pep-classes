#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    int n;

    cin >> a >> b;   // first two fibonacci numbers
    cin >> n;        // total terms (1 < n < 100000)

    a = abs(a);
    b = abs(b);

    
    const long long MOD = 1000000007;
    int limit = min(n, 100);// range constraint

    if (limit >= 1) cout << a << " ";
    if (limit >= 2) cout << b << " ";

    for (int i = 3; i <= limit; i++) {
        long long c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}
