#include<bits/stdc++.h>
using namespace std;

int minlensubarr(vector<int> &v,int n,int k){
    vector<int> presum(n+1,0);
    for(int i=0; i<n+1; i++){
        presum[i+1]=presum[i]+v[i];
    }
    
    deque<int> dq;

    int minlen = n+1;
    int len;

    for(int i=0; i<=n; i++){
        while(dq.empty()==0 && presum[i]-presum[dq.front()]>=k){
            int len = i-dq.front();
            minlen = min(minlen,len);
            dq.pop_front();
        }
        while(dq.empty()==0 && presum[dq.back()]>=presum[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    if(minlen==n+1) return -1;
    else return minlen;
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> v;

    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int minlen = minlensubarr(v,n,k);
    cout << minlen;
    return 0;
}

