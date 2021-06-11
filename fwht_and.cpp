#include <bits/stdc++.h>
using namespace std;

void fwht_and(int n, int *a, int *A) {
    copy(a, a + n, A);
    for (int s = 2, h = 1; s <= n; s <<= 1, h <<= 1)
        for (int l = 0; l < n; l += s)
            for (int i = 0; i < h; i++)
                A[l + i] += A[l + h + i];
}

void ifwht_and(int n, int *a, int *A) { 
    copy(A, A + n, a);
    // If n is guaranteed to be a power of 2 then we don't need n_ and the min(...) in the inner loop.
    int n_ = 1; while (n_ < n) n_ <<= 1; 
    for (int s = n_, h = n_ / 2; h; s >>= 1, h >>= 1)
        for (int l = 0; l < n; l += s)
            for (int i = 0; i < std::min(i, n - l - h); i++)
                a[l + i] -= a[l + h + i];
}

int main(){
    ios_base::sync_with_stdio(false);
}