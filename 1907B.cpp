#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define ppb pop_back
int main()
{
    fastio();
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size();
        map<int,char>omap;
        vector<int>upper_idx;
        vector<int>lower_idx;
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'b')
            {
                if(lower_idx.size() != 0)
                {
                    int idx = lower_idx.size() - 1;
                    int value = lower_idx[idx];
                    omap[value] = '.';
                    lower_idx.pop_back();
                }
            }
            else if(s[i] == 'B')
            {
                if(upper_idx.size() != 0)
                {
                    int idx = upper_idx.size() - 1;
                    int value = upper_idx[idx];
                    omap[value] = '.';
                    upper_idx.pop_back();
                }
            }
            else 
            {
                omap.insert({i,s[i]});
                if(s[i] >= 'A' && s[i] <= 'Z')
                {
                    upper_idx.pb(i);
                }
                else
                {
                    lower_idx.pb(i);
                }
            }
        }
        string res = "";
        map<int,char>:: iterator it = omap.begin();
        while(it != omap.end())
        {
            char temp = it->second;
            if(temp != '.')
            {
                res.pb(temp);
            }
            it++;
        }
        cout<<res<<"\n";
    }
    return 0;
}
