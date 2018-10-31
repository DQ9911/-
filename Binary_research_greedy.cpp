const int N = 1e5 + 7;
int n, k;
int a[N];
bool chk(int x) {
    int t = 0, cnt = 0;
    for(int i = 0; i < n; i++)
        if((t += a[i]) >= x)
            t = 0, cnt++;
    return cnt >= k;
}
void solve() {
    int l = 0, r = 1001, mid, ans = 0;
    while(l <= r) {
        mid = (l + r) >> 1;
        if(chk(mid)) l = mid + 1, ans = mid;
        else r = mid - 1;
    }
    printf("%d\n", ans);
}
