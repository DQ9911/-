//欧拉筛 or 线性筛...
const int N = 1e6 + 7;
bool np[N];
int p[N / 8], pn = 0;
void sieve() {
    for(int i = 2; i < N; i++) {
        if(!np[i]) p[pn++] = i;
        for(int j = 0; j < pn && i * p[j] < N; j++) { //将最小素因数为p[j] 的 i * p[j]标记为非质数....
            np[i * p[j]] = true;
            if(i % p[j] == 0) break; //下一个质数不可能是i * p[j]的最小素因数...
        }
    }
}
