#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long 
int main()
{
    fastio();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>v(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int median_index = 0;
        int median_value = 0;
        sort(v.begin(),v.end());
        if(n & 1)
        {
            // odd number of elements in array 
            median_index = n/2;
            median_value = v[median_index];
        }
        else
        {
            // even number of elements in array 
            median_index = (n-1)/2;
            median_value = v[median_index];
        }
        // minimum 1 operation is reqd ... 
        // find count of median_value from median_index 
        int ans = 0;
        for(int i=median_index;i<n;i++)
        {
            if(v[i] == median_value)
            {
                ans += 1;
            }
        }
        cout<<ans<<"\n";
    }
}
