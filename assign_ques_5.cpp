#include<bits/stdc++.h>
using namespace std;

int main(){
    long long cnt = 0;
    int t;
    cin >> t;
    int arr[9][51];
    for(int i=0; i<9; i++){
        for(int j=0; j<51; j++){
            arr[i][j]=0;
        }
    }
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=s[i]-'0';
        }
        if(sum<=50 && n>1){
            arr[n-2][sum]++;
        }
    }

    for(int i=0;i<=3; i++){
        for(int j=0; j<=50; j++){
           cnt += arr[i][j]*arr[8-i][50-j];
        }
    }

    for(int j=0; j<25; j++){
        cnt+=arr[4][j]*arr[4][50-j];
    }

    cnt = 2*cnt;
    cnt += arr[4][25]*(arr[4][25]-1);
    cout << cnt ;
    return 0;
}