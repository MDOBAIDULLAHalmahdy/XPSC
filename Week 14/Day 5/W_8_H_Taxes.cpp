#include<bits/stdc++.h>
using namespace std;
#define ll long long 
bool is_prime(int n)
{
    if(n == 1) return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}
int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    if(is_prime(n))
    {
        cout<<1<<endl;
    }
    else if(n % 2 == 0)
    {
        cout<<2<<endl;
    }
    else
    {
        if(is_prime(n-2))
        {
           cout<<2<<endl;
        }
        else 
        {
            cout<<3<<endl;
        }
    }
    return 0;
}