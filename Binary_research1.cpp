//求方程e^x + x - 5的根...
double f(double x) {
    return exp(x) + x - 5;
}
void solve() {
    double l = -1000, r = 1000, eps = 1e-6;//eps表示精度...
    while(r - l < eps) {
        double mid = (l + r) / 2;
        if(f(mid) > 0) r = mid;
        else l = mid;
    }
    return l;
}
