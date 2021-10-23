// Q1) 263A  BEAUTIFUL MATRIX 

/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
#define pi 3.1415
#define pb push_back
#define mp make_pair 
#define setbits(x) __builtin_popcount(x)
#define zerobits1(x) __builtin_clz(x) 
#define zerobits2(x) __builtin_ctz(x)
const int Max = 100005;
const int BMax = 10000005;
int help(vector<vector<int>>s)
{
    int temp1 = 0;
    int temp2 = 0;
    // if i find the index of that 1 and subtract it from (2,2).. ill get the answer 
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<s[i].size();j++)
        {
            if(s[i][j] == 1)
            {
                temp1 = i;
                temp2 = j;
                break;
            }
        }
    }
    int ans = 0;
    ans = abs(temp1 - 2) + abs(temp2 - 2);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>>s(5,vector<int>(5,0));
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>s[i][j];
        }
    }
    cout<<help(s);
    return 0;
}
*/


// Q2) 112 A  PETYA AND STRINGS 


/*
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pi 3.1415 
#define pb push_back
#define mp make_pair
#define ll long long 
#define setbits(x) __builtin_popcount(x)
#define zerobits1(x) __builtin_clz(x) // to count the leading zeros in an integer 
#define zerobits2(x) __builtin_ctz(x) // to count the trailing zeros in an integer 
const int Max = 100005;
const int BMax = 10000005;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    if(s1 < s2)
    {
        cout<<(-1);
    }
    else if(s1 > s2)
    {
        cout<<1;
    }
    else 
    {
        cout<<0;
    }
    return 0;
}
*/

