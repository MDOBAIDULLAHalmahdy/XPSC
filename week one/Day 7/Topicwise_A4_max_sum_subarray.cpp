
#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &a , int n){
        int l=0,r=0;
        long long sum=0,ans=0;
        while(r<n)
        {
            sum+=a[r];
            if((r-l+1)==k)
            {
                ans=max(ans,sum);
                sum-=a[l];
                l++;
                r++;
            }
            else
                r++;
        }
        return ans;
        // code here 
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
