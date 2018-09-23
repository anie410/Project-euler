#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long sum(long n)
{   long s=0,q=0,p=0,r=0;
 p=(n-1)/3;
 
 q=(n-1)/5;

 r=(n-1)/15;
 s=(3*p*(1+p))+(5*q*(1+q))-(15*r*(1+r));

      return s/2;
            
    
}

int main(){
    int t,s;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        s=sum(n);
        cout<< s<<endl;
    }
    return 0;
}
