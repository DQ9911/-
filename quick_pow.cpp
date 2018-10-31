const int mod = 1e9 + 7;
typedef long long ll;
ll quick_pow(ll a, ll b) {
    ll ret = 1; 
    a %= mod;
    while(b) {
        if(b & 1) ret = ret * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return ret;
}
