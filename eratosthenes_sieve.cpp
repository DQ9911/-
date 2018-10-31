const int N = 1e6 + 7;
bool np[N];
int p[N / 8], pn = 0;
void sieve() {
    for(int i = 2; i < N; i++) {
        if(!np[i]) {
            p[pn++] = i;
            for(int j = i + i; j < N; j += i)
                np[j] = true;
        }
    }
}
