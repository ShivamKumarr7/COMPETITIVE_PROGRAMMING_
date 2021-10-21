// CODEFORCES QUESTIONS :- 


// Q1) 231A TEAM 

/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pi 3.1415
#define pb push_back 
#define mp make_pair
#define mod 1000000007
const int Max = 100005;
const int BMax = 10000005;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans = 0;
    while(n--)
    {
        int a1,b1,c1;
        cin>>a1>>b1>>c1;
        if((a1 + b1 + c1) >= 2)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
*/



// Q2) 158A NEXT ROUND :- 

/*
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pi 3.1415
#define pb push_back
#define mp make_pair 
#define ll long long 
const int Max = 100005;
const int BMax = 10000005;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int>s(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int ans = 0;
    int value = s[k-1];
    for(int i=0;i<n;i++)
    {
        if((s[i] >= value) && (s[i] > 0)) 
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
*/


