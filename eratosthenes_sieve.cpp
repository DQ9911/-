const int N = 1e6 + 7;//筛1~n内的所有质数...
bool np[N];
int p[N / 8], pn = 0;//p[]存质数, pn表示质数个数...
void sieve() {
    for(int i = 2; i < N; i++) {
        if(!np[i]) { //说明i为质数
            p[pn++] = i;
            for(int j = i + i; j < N; j += i) //将i的倍数标记为非质数...
                np[j] = true;
        }
    }
}
