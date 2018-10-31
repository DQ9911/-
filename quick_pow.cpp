ll quick_pow(ll a, ll b) {
    ll ret = 1; assert(b >= 0);
    for(a %= mod; b; b >>= 1, a = a * a % mod)
        if(b & 1) ret = ret * a % mod;
    return ret;
}
