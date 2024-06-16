#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> v;
    while(t--){
        int n;
        long long k;
        cin >> n >> k;
        for(int i=0; i<n; i++){
            int num;
            cin >> num;
            v.push_back(num);
        }
        priority_queue<int> pq(v.begin(),v.end());
        while(k>=pq.top() && pq.top()>0){
            int temp = pq.top();
            pq.pop();
            pq.push(temp-1);
            k-=temp;
        }
        cout << pq.top() << '\n';
        v.clear();
    }
    return 0;
}