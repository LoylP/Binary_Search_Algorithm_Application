#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MaxN = 1 + 1e6;

int n, k, a[MaxN];

bool check(ll days) {
    ll products = 0;
    for (int i = 0; i < n; ++i) products += days / a[i];
    return products >= k;
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; ++i) cin >> a[i];
    ll l = 0, r = 1e18;
    while (l < r) {
        ll tg = (l + r) / 2;
        if (check(tg)) r = tg;
        else l = tg + 1;
    }
    cout << l << endl;

    return 0;
}