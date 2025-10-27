// ------------------------------------------------------------
// Competitive Programming Fast C++ Template
// ------------------------------------------------------------
// Usage:
//   g++ -std=gnu++20 -O2 -pipe -static -s -o main cp_template.cpp
//   ./main < input.txt > output.txt
//
// Notes:
// - Toggle MULTI_TEST to switch between single and multiple test cases.
// - Debug macros print to stderr only when compiled with -DLOCAL.
// - Includes: fast I/O, utils (chmin/chmax), DSU, Fenwick, basic SegTree,
//   combinatorics (nCr mod), sieve, random, and helpers for reading vectors.
// ------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

// ----------------------- Compiler Hints ----------------------
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("avx2")
// If the judge dislikes pragmas, remove the 2 lines above.

// ----------------------- Aliases & Constants -----------------
using ll  = long long;
using ull = unsigned long long;
using ld  = long double;

constexpr ll  INF64 = (ll)4e18;
constexpr int INF32 = (int)1e9;
constexpr int MOD   = 1'000'000'007; // change if needed

// ----------------------- Fast I/O ----------------------------
struct FastIO {
    FastIO() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
    }
} fastio;

// ----------------------- Random ------------------------------
mt19937_64 rng((ull)chrono::steady_clock::now().time_since_epoch().count());
template<class T> T rnd(T l, T r){ uniform_int_distribution<T> dist(l, r); return dist(rng); }

// ----------------------- Utilities ---------------------------
template<class T, class U> bool chmin(T &a, const U &b){ if((U)a <= b) return false; a = (T)b; return true; }
template<class T, class U> bool chmax(T &a, const U &b){ if((U)a >= b) return false; a = (T)b; return true; }

template<class T> ostream& operator<<(ostream& os, const vector<T>& v){
    for(size_t i=0;i<v.size();++i){ if(i) os<<' '; os<<v[i]; } return os;
}
template<class T> istream& operator>>(istream& is, vector<T>& v){
    for(auto &x: v) is>>x; return is;
}

template<class T> void print_container(const T& a, char sep=' ', char endc='\n'){
    bool f=true; for(auto &x: a){ if(!f) cout<<sep; f=false; cout<<x; } cout<<endc;
}

// ----------------------- Debugging ---------------------------
#ifdef LOCAL
#define dbg(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
template<class T> void _dbg_item(const char* name, const T& val){ cerr<<name<<"="<<val<<" "; }
template<class... Args> void _dbg(const char* names, Args&&... args){
    const char* p = names;
    vector<string> ns;
    string cur;
    while(*p){
        if(*p==',' ){ if(!cur.empty()) ns.push_back(cur); cur.clear(); }
        else if(*p!=' '){ cur.push_back(*p); }
        ++p;
    }
    if(!cur.empty()) ns.push_back(cur);
    size_t i=0; ((cerr<<ns[i++]<<"="<<args<<" "), ...);
    cerr<<"\n";
}
#else
#define dbg(...)
#endif

// ----------------------- Modular Int -------------------------
struct Mint {
    int v;
    Mint(long long _v=0){ if((_v%=MOD)<0) _v+=MOD; v=(int)_v; }
    Mint& operator+=(const Mint& o){ v+=o.v; if(v>=MOD) v-=MOD; return *this; }
    Mint& operator-=(const Mint& o){ v-=o.v; if(v<0) v+=MOD; return *this; }
    Mint& operator*=(const Mint& o){ v=int((long long)v*o.v%MOD); return *this; }
    Mint pow(long long e) const { Mint b=*this, r=1; while(e){ if(e&1) r*=b; b*=b; e>>=1;} return r; }
    Mint inv() const { return pow(MOD-2); }
    Mint& operator/=(const Mint& o){ return (*this)*=o.inv(); }
    friend Mint operator+(Mint a, const Mint& b){ return a+=b; }
    friend Mint operator-(Mint a, const Mint& b){ return a-=b; }
    friend Mint operator*(Mint a, const Mint& b){ return a*=b; }
    friend Mint operator/(Mint a, const Mint& b){ return a/=b; }
    friend ostream& operator<<(ostream& os, const Mint& m){ return os<<m.v; }
    friend istream& operator>>(istream& is, Mint& m){ long long x; is>>x; m=Mint(x); return is; }
};

// ----------------------- Combinatorics -----------------------
struct Comb {
    int N; vector<Mint> fact, ifact;
    Comb(int n=0){ init(n); }
    void init(int n){
        N = n;
        fact.assign(N+1, 1);
        ifact.assign(N+1, 1);
        for(int i=1;i<=N;++i) fact[i] = fact[i-1] * Mint(i);
        ifact[N] = fact[N].inv();
        for(int i=N;i>0;--i) ifact[i-1] = ifact[i] * Mint(i);
    }
    Mint C(int n, int r) const { if(r<0||r>n) return 0; return fact[n]*ifact[r]*ifact[n-r]; }
    Mint P(int n, int r) const { if(r<0||r>n) return 0; return fact[n]*ifact[n-r]; }
};

/* Example:
   Comb cb(1'000'000);
   cout << cb.C(5,2) << "\n";
*/

// ----------------------- Sieve -------------------------------
struct PrimeSieve {
    int n;
    vector<bool> is_prime;
    vector<int> primes;
    PrimeSieve(int N=0){ if(N) build(N); }
    void build(int N){
        n=N; is_prime.assign(n+1,true);
        if(n>=0) is_prime[0]=false; if(n>=1) is_prime[1]=false;
        for(int i=2;i*i<=n;++i) if(is_prime[i]) for(long long j=1LL*i*i;j<=n;j+=i) is_prime[(int)j]=false;
        primes.clear(); for(int i=2;i<=n;++i) if(is_prime[i]) primes.push_back(i);
    }
};

// ----------------------- DSU -------------------------------
struct DSU {
    int n; vector<int> p, sz;
    DSU(int n=0){ init(n); }
    void init(int n_){ n=n_; p.resize(n); sz.assign(n,1); iota(p.begin(), p.end(), 0); }
    int find(int x){ return p[x]==x?x:p[x]=find(p[x]); }
    bool unite(int a,int b){
        a=find(a); b=find(b);
        if(a==b) return false;
        if(sz[a]<sz[b]) swap(a,b);
        p[b]=a; sz[a]+=sz[b]; return true;
    }
};

// ----------------------- Fenwick Tree ------------------------
template<class T>
struct Fenwick {
    int n; vector<T> bit;
    Fenwick(int n=0){ init(n); }
    void init(int n_){ n=n_; bit.assign(n+1, T()); }
    void add(int idx, T val){ for(; idx<=n; idx+=idx&-idx) bit[idx]+=val; } // 1-indexed
    T sum_prefix(int idx) const { T r{}; for(; idx>0; idx-=idx&-idx) r+=bit[idx]; return r; }
    T range_sum(int l, int r) const { return sum_prefix(r)-sum_prefix(l-1); }
};

// ----------------------- Segment Tree (iterative) -----------
template<class T, class F>
struct SegTree {
    int n; T ID; F f; vector<T> st;
    SegTree(int n, T id, F func): n(n), ID(id), f(func), st(2*n, id) {}
    void build(const vector<T>& a){
        for(int i=0;i<(int)a.size();++i) st[i+n]=a[i];
        for(int i=n-1;i>0;--i) st[i]=f(st[i<<1], st[i<<1|1]);
    }
    void set_point(int p, T v){
        for(st[p+=n]=v; p>1; p>>=1) st[p>>1]=f(st[p], st[p^1]);
    }
    T query(int l, int r){ // inclusive
        ++r; T L=ID, R=ID;
        for(l+=n, r+=n; l<r; l>>=1, r>>=1){
            if(l&1) L=f(L, st[l++]);
            if(r&1) R=f(st[--r], R);
        }
        return f(L, R);
    }
};

// ----------------------- Power & GCD -------------------------
ll mod_pow_ll(ll a, ll e, ll m){ ll r=1% m; a%=m; while(e){ if(e&1) r=(__int128)r*a % m; a=(__int128)a*a % m; e>>=1; } return r; }
ll gcdll(ll a, ll b){ while(b){ a%=b; swap(a,b);} return a; }
ll lcmll(ll a, ll b){ if(a==0||b==0) return 0; return a/gcdll(a,b)*b; }

// ----------------------- Input Helpers -----------------------
template<class T> vector<T> read_vec(int n){ vector<T> a(n); for(int i=0;i<n;++i) cin>>a[i]; return a; }
template<class T> vector<vector<T>> read_grid(int n,int m){
    vector<vector<T>> g(n, vector<T>(m)); for(int i=0;i<n;++i) for(int j=0;j<m;++j) cin>>g[i][j]; return g;
}

// ----------------------- Solve Toggle ------------------------
// Set MULTI_TEST = true if input starts with T test cases.
constexpr bool MULTI_TEST = true;

void solve(){
    // Your per-test-case solution goes here.
    // Example: echo the sum of an array.
    int n; if(!(cin>>n)) return;
    auto a = read_vec<ll>(n);
    ll s=0; for(auto x: a) s+=x;
    cout<<s<<"\n";
}

int main(){
    if constexpr (MULTI_TEST){
        int T; if(!(cin>>T)) return 0;
        while(T--) solve();
    } else {
        solve();
    }
    return 0;
}
