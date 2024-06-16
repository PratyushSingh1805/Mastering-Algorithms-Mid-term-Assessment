#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> v;
    vector<int> q;
    long long sum=0;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        sum+=temp;
        v.push_back(temp);
    }
    int maxval=0;
    for(int i=0; i<k; i++){
        int temp;
        cin >> temp;
        maxval = max(maxval,temp);
        q.push_back(temp);
    }

    long long arr[maxval+1]={0};

    priority_queue<int> maxpq(v.begin(),v.end());
    priority_queue<int,vector<int>,greater<int>> minpq(v.begin(),v.end());

    arr[0]=sum;
    int minel;
    int maxel;
    int newel;

    for(int i=1; i<=maxval; i++){
        minel = minpq.top();
        maxel = maxpq.top();
        newel = maxel-minel;
        minpq.pop();
        maxpq.pop();
        minpq.push(newel);
        maxpq.push(newel);
        sum = sum-2*minel;
        arr[i]=sum;
    }

    for(int i=0; i<k; i++){
        cout << arr[q[i]] << ' ';
    }

    return 0;
}