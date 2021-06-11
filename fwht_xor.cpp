#include <bits/stdc++.h>
using namespace std;

inline void fwht_xor(int n,int *a,int *A,bool inv=false){
    copy(a,a+n,A);

    for(int s = 2 , h = 1 ; s <= n ; s <<=1 ,h<<=1){
        for( int l = 0 ; l < n ;l+=s){
            for(int i = 0; i < h ; i++){
                int t = A[l+h+i];
                A[l+h+i] = A[l+i]-t;
                A[l+i]+=t;
                if(inv)A[l+h+i]/=2,A[l+i]/=2;
            }
        }
    }

   
}

int main(){
    ios_base::sync_with_stdio(false);
    
}