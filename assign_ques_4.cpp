#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> cost;
    vector<int> num;

    while(t--){
        int n,k;
        cin >> n >> k;
        long long maxsum=0;
        for(int i=0; i<n; i++){
            int temp1,temp2;
            cin >> temp1 >> temp2;
            cost.push_back(temp1);
            num.push_back(temp2);
        }

        for(int i=0; i<1<<n; i++){
            int temp = k;
            long long sum = 0;
            for(int j=0; j<n; j++){
                if((i&(1<<j))){
                    temp-=cost[j];
                    if(temp<=0){
                        break;
                    }
                    sum+=num[j];
                }
            }
            maxsum=max(sum,maxsum);
        }

        cost.clear();
        num.clear();
        
        cout << maxsum << '\n';

    }
    return 0;
}