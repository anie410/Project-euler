#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long sum(long n){
    long m,b,s;
    m=(n*(n+1))/2;
    b=(n*(n+1)*(2*n+1))/6;
    s=(pow(m,2))-b;
    return s;
}

int main(){
    int t;long p;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        p=sum(n);
       cout<< p<<endl;
    }
    return 0;
}
