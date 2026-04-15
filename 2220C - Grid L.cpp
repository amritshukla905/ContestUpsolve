#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
typedef pair < int, int > pii;
typedef pair < ll, ll > pll;
typedef vector < int > vi;
typedef vector < ll > vll;


const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;


#define all(x)(x).begin(), (x).end()
#define sz(x)(int)(x).size()
#define pb push_back
#define F first
#define S second
#define rep(i, a, b) for (int i = a; i < b; i++)
    #define rrep(i, a, b) for (int i = a; i >= b; i--)


        #ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << "\n"
#else
#define debug(x)
#endif


void solve() {
    ll p, q;
    cin >> p >> q;
    rep(i, 1, 1e5) {
        ll num = p + 2 * q - i;
        if (num <= 0) continue;
        if (num % (2 * i + 1) != 0) continue;

        ll m = num / (2 * i + 1);
        if (m < i) break;

        ll q1 = i * (m + 1);
        if (q1 < q) continue;

        cout << i << " " << m << "\n";
        return;
    }
    cout << -1 << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}