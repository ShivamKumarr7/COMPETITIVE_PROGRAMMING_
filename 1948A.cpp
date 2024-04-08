#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fastio();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n & 1)
        {
            cout<<"NO";
        }
        else
        {
            int start = 1;
            char begin = 'A';
            string ans = "";
            while(start <= n)
            {
                ans.push_back(begin);
                ans.push_back(begin);
                begin += 1;
                start += 2;
            }
            cout<<"YES\n";
            cout<<ans;
        }
        cout<<"\n";
    }
}
