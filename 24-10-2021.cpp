// Q1) 339A   HELPFUL MATHS 


/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define pi 3.1415
#define setbits(x) __builtin_popcount(x)
#define zerobits1(x) __builtin_clz(x)  // to count the leading zeros in an integer 
#define zerobits2(x) __builtin_ctz(x) // to count the trailing zeros in an integer
const int Max = 100005;
const int BMax = 10000005;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    string only_digits = "";
    int ct = 0;  // to count total number of '+' 
    for(int i=0;i<s.size();i++)
    {
        if(isdigit(s[i]))
        {
            only_digits.push_back(s[i]);
        }
        else
        {
            ct++;
        }
    }
    string ans = "";
    sort(only_digits.begin(),only_digits.end());
    int start = 0;
    if(s.size() == 1)
    {
        cout<<s;
    }
    else 
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '+')
            {
                ans.push_back(only_digits[start]);
                start++;
                ans.push_back(s[i]);
            }
        }
        ans.push_back(only_digits[start]);
        cout<<ans;
    }
    return 0;
}
*/



// Q2) 281A WORD CAPITALISATION


/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define pi 3.1415
#define setbits(x) __builtin_popcount(x)
#define zerobits1(x) __builtin_clz(x)  // to count the leading zeros in an integer 
#define zerobits2(x) __builtin_ctz(x) // to count the trailing zeros in an integer
const int Max = 100005;
const int BMax = 10000005;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    if(s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] = s[0] - 32;
    }
    cout<<s;
    return 0;
}
*/

