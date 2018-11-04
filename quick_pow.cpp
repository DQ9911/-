const int mod = 1e9 + 7;
typedef long long ll; //使用long long类型很重要...
ll quick_pow(ll a, ll b) {
    ll ret = 1; 
    a %= mod;//防止下面a*a溢出
    while(b) {
        if(b & 1) ret = ret * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return ret;
}
