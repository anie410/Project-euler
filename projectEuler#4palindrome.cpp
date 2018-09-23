#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long palindrome(long n){
    long m,rev=0;
    m=n;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if(rev==m)
        return rev;
    else
        return 0;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n,q=0,max=0;
        cin >> n;
        for(long i=100;i<=999;i++){
            for(long j=100;j<=999;j++){
                q=i*j;
                if(palindrome(q) && n>q && q>max)
                    max=q;
            }
        }
    
        cout<< max<<endl;
    }
    return 0;
}
