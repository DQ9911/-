typedef long long ll;
const int mod = 1e9 + 7;
const int N = 2;
struct mat{
#define rep(i, n) for(int i = 0; i < n; i++) //定义宏,这个只是为了缩短代码...
    ll e[N][N];
    void clear() { memset(e, 0, sizeof e);}//将矩阵元素初始化为0
    mat() { clear();}//默认构造函数, 声明矩阵时将矩阵初始化为0
    void E() { clear(); rep(i, N) e[i][i] = 1;} //将矩阵单位化...
    mat operator * (const mat &R) {//矩阵乘法实现
        mat ret;
        rep(i, N) rep(k, N) if(e[i][k]) rep(j, N)
            (ret.e[i][j] += e[i][k] * R.e[k][j]) %= mod;
        return ret;
    }
    mat pow(ll n) {//矩阵快速幂...
        mat ret, t = *this;
        for(ret.E(); n; n >>= 1, t = t * t)
            if(n & 1) ret = ret * t;
        return ret;
    }
};
