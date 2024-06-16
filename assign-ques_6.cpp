#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    int cnt = 0;
    cin >> a >> b;

    if(a==1 &&  b==1){
        cout << 0 << '\n';
        return 0;
    }

    if(a==1){
        if(b==2) cout << 1 << '\n';
        else cout << -1 <<'\n';
        return 0;
    }

    if(b==1){
        if(a==2) cout << 1 << '\n';
        else cout << -1 <<'\n';
        return 0;
    } 


    int sum = a+b;
    a = max(a,b);
    b = sum-a;
    if((a-b)&1){
        a--;
        cnt = 1;
    }
    int ans = 2*(a-1)+cnt;
    cout << ans << '\n';
    return 0;
}
