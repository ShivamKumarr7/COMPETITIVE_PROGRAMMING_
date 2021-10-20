// Ist question of Codeforces :- 


// 4A WATERMELON :-


/*
#include<iostream>
using namespace std;
int main()
{
    int w;
    cin>>w;
    if((w % 2) != 0)
    {
        cout<<"NO";
    }
    else if(w == 2)
    {
        cout<<"NO";
    }
    else 
    {
        cout<<"YES";
    }
    return 0;
}
*/


// 71A WAY TOO LONG WORDS 


/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
#define pi 3.1415 
#define pb push_back
#define mp make_pair 
const int Max = 100005;
const int BMax = 10000005;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int len = s.size();
        if(len <= 10)
        {
            cout<<s<<"\n";
        }
        else 
        {
            string ans = "";
            char start = s[0];
            char end = s[len-1];
            int in_bw = len - 2;
            string loc = to_string(in_bw);
            ans.pb(start);
            ans = ans + loc;
            ans.pb(end);
            cout<<ans<<"\n";
        }
    }
    return 0;
}
*/

