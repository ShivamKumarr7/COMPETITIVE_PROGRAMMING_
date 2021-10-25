// Q) 266A    STONES ON THE TABLE :- 


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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ct = 0;
    if(n == 1)
    {
        cout<<0;
    }
    else 
    {
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i] == s[i+1])
            {
                ct++;
            }
        }
        cout<<ct;
    }
    return 0;
}
*/



// Q2) 236A   BOY OR GIRL 


/*
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ll long long 
#define pi 3.1415
#define setbits(x) __builtin_popcount(x)
#define zerobits1(x) __builtin_clz(x) // to count leading zeros in an integer 
#define zerobits2(x) __builtin_ctz(x) // to count the trailing zeros in an integer 
const int Max = 100005;
const int BMax = 10000005;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    bool freq[26] = {0};
    for(int i=0;i<s.size();i++)
    {
        char temp = s[i] - 'a';
        int loc = temp;
        freq[loc]++;
    }
    int ct = 0;
    for(int i=0;i<26;i++)
    {
        if(freq[i] > 0)
        {
            ct++;
        }
    }
    if(ct & 1)
    {
        cout<<"IGNORE HIM!";
    }
    else 
    {
        cout<<"CHAT WITH HER!";
    }
    return 0;
}
*/

