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
    int n,k;
    cin>>n>>k;
    vi v(n) , z(k);
    rep(i,0,n) cin>>v[i];
    rep(i,0,k)cin>>z[i];
    vi od,ev;
    bool podd = false;
    bool peven = false;
    rep(i,0,n){
        if((i+1)%2 == 0){
            ev.pb(v[i]);
        }
        else if((i+1)%2 != 0){
            od.pb(v[i]);
        }
    }
    sort(all(od));
    sort(all(ev));
    
    rep(i,0,k){
        if(z[i]%2){
            if(!od.empty() && !(od.back()<0 && podd)){
                od.pop_back();
                podd = true;
            }
        }
        else {
            if(!ev.empty() && !(ev.back()<0 && peven)){
                ev.pop_back();
                peven = true;
            }
        }
    }
    ll ans = 0;
    for(auto x : ev) ans+=x;
    for(auto x : od) ans+=x;
    cout<<ans<<"\n";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}