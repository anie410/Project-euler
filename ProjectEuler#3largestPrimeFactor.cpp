#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long  prime(long long n)
{  long p;
    for(long i=2;i<=sqrt(n);i++){
        
        while(n%i==0){
            p=n;
            n=n/i;
            
        }
        
    }
   if(n!=1)
        return n;
 else 
     return p;
}
    


int main(){
    long t;long p;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        
        long n;
        cin >> n;
        p=prime(n);
        cout<< p<<endl;
    }
    
    return 0;
}
