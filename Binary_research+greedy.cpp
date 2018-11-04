//整数分组...
const int N = 1e5 + 7;
int n, k;
int a[N];
bool chk(int x) { //判断x是否合法
    int t = 0, cnt = 0;
    for(int i = 0; i < n; i++)
        if((t += a[i]) >= x)//贪心分组..
            t = 0, cnt++;
    return cnt >= k; //如果组数大于等于k返回true
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
