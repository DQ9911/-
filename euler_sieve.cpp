const int N = 1e6 + 7;
bool np[N];
int p[N / 8], pn = 0;
void sieve() {
    for(int i = 2; i < N; i++) {
        if(!np[i]) p[pn++] = i;
        for(int j = 0; j < pn && i * p[j] < N; j++) {
            np[i * p[j]] = true;
            if(i % p[j] == 0) break;
        }
    }
}
