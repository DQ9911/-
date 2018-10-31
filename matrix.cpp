typedef long long ll;
const int mod = 1e9 + 7;
const int N = 2;
struct mat{
#define rep(i, n) for(int i = 0; i < n; i++)
    ll e[N][N];
    void clear() { memset(e, 0, sizeof e);}
    mat() { clear();}
    void E() { clear(); rep(i, N) e[i][i] = 1;}
    mat operator * (const mat &R) {
        mat ret;
        rep(i, N) rep(k, N) if(e[i][k]) rep(j, N)
            (ret.e[i][j] += e[i][k] * R.e[k][j]) %= mod;
        return ret;
    }
    mat pow(ll n) {
        mat ret, t = *this;
        for(ret.E(); n; n >>= 1, t = t * t)
            if(n & 1) ret = ret * t;
        return ret;
    }
};
