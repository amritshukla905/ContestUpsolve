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
    int n, m;
    cin >> n >> m;
    vi v(n);
    rep(i, 0, n) cin >> v[i];
    if (m == 2) {
        bool ok = true;
        rep(i, 1, n) {
            if (v[i] == v[i - 1]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << "YES" << "\n";
            return;
        }
        else {
            cout << "NO" << "\n";
            return;
        }
    }
    int mxcnt = 0;
    int cnt1 = 1;
    rep(i, 1, n) {
        if (v[i] == v[i - 1]) cnt1++;
        else {
            if (cnt1 > mxcnt) {
                mxcnt = cnt1;
            }
            cnt1 = 1;
        }
    }
    if (cnt1 > mxcnt) {
        mxcnt = cnt1;
    }
    if ( mxcnt >= m) cout << "NO" << "\n";
    else cout << "YES" << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}