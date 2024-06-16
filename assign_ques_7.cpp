#include<bits/stdc++.h>
using namespace std;

#define D 998244353


long long fun(long long sum, int k){
    if(sum==0) return 1;
    if(k==1) return 1;
    long long ans = 0;
    for(int i=1; i<=k; i++){
        if(sum-i<=0){
            ans = ans+(fun(sum-i,k)%D);
            break;
        }
        else
        ans = ans+(fun(sum-i,k)%D);
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        cout << fun(n,k) << '\n';
    }
    return 0;
}
