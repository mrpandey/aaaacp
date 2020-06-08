#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define pf pop_front
#define mp make_pair
#define umap unordered_map
#define uset unordered_set
#define mod 1000000009
#define mod2 998244353
#define fo(i,n) for(ll i=0; i<(n); i++)
#define rep(i,s,e,inc) for(ll i=(s); i<(e); i+=inc)
#define repb(i,s,e,inc) for(ll i=(s); i>(e); i+=inc)

using namespace std;
using pll = pair<ll, ll>;

// vector<ll> st, a;

// void build(ll nd, ll s, ll e){
//     if(s==e){
//         st[nd] = a[s];
//         return;
//     }

//     ll lc=2*nd+1, rc=lc+1, mid=(s+e)/2;
//     build(lc, s, mid);
//     build(rc, mid+1, e);
//     st[nd] = max(st[lc], st[rc]);
// }

// ll query(ll nd, ll s, ll e, ll &l, ll &r){
//     if(e<l || r<s) return -1;
//     if(l<=s && e<=r) return st[nd];

//     ll lc=2*nd+1, rc=lc+1, mid=(s+e)/2;
//     ll lq = query(lc, s, mid, l, r);
//     ll rq = query(rc, mid+1, e, l, r);
//     return max(lq,rq);
// }

ll gcd_helper(ll a, ll b){
    if(a%b==0) return b;
    else return gcd_helper(b, a%b);
}

ll gcd(ll a, ll b){
    if(a<0) a*=-1;
    if(b<0) b*=-1;
    if(a<b) swap(a,b);
    if(b==0) return a;
    return gcd_helper(a, b);
}

ll powr(ll a, ll b, ll M){
    if(b==0) return 1;
    if(a==0) return 0;
    ll ret = 1;
    while(b){
        if(b&1){
            ret *= a;
            ret %= M;
        }
        a = (a*a)%M;
        b /= 2;
    }
    return ret;
}

ll find(ll x, vector<ll> &p){
    if(p[x]!=x) p[x] = find(p[x], p);
    return p[x];
}

void unite(ll x, ll y, vector<ll> &p, vector<ll> &sz){
    ll px = find(x, p);
    ll py = find(y, p);

    if(sz[px]<sz[py]){
        swap(px,py);
        swap(x,y);
    }
    p[py] = px;
    sz[px] += sz[py];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}
