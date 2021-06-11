#include <bits/stdc++.h>
using namespace std;


inline void fwht_or(int n,int *a,int *A,int dir=1){
    copy(a,a+n,A);
    for(int s = 2 ,h = 1;s <=n ; s <<= 1,h <<= 1){
        for(int l = 0;l<n;l+=s){
            for(int i = 0 ; i < h ; i++){
                cout<<l+h+i<<" ";
                A[l+h+i] += dir*A[l+i];
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    
}