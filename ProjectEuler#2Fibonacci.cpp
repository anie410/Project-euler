#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long fibonacci(long n)
{long a=1,b=2,c=0,s=2;
 while(c<n)
 { // cout<<c<<" ";
    c=a+b;
     a=b;
     b=c;
     if(!(c&1)&&c<n)
         s=s+c; 
 }
   return s; 
}
int main(){
    int t;long q;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        q=fibonacci(n);
        cout<< q<<endl;
    }
    return 0;
}
