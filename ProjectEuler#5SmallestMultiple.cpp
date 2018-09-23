#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
int lcm(int n){
    int ans=1;
        for(int i=1;i<=n;i++){
            ans=(ans*i)/(gcd(ans,i));
    
    }
        return ans;
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int p=lcm(n);
        cout<< p <<endl;
    }
    return 0;
}
