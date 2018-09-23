
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int series(string num,int k,int n){
    char ch[n];int p,max=0,t;
    num.copy(ch,n,0);
    for(int i=0;i<n-k;i++){
        p=1;
        for(int j=i;j<k+i;j++){
            t=ch[j]-'0';
            p=p*t;
        }
        if(p>max)
            max=p;
    }
    return max;
}

int main(){
    int t,p;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        string num;
        cin >> num;
        p=series(num,k,n);
        cout<< p<<endl;
        
    }
    return 0;
}
