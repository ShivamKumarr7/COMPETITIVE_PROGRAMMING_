#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
int is_she_living(vector<int> seq)
{
	int height= 1;
	bool prev = false;
	for(int i=0; i<(int) seq.size(); i++)
	{
		if(seq[i]==0 and !prev and i!=0)	return -1;
		if(prev)
		{
			if(seq[i]==1)	height+=5;
		}
		else
		{
			if(seq[i]==1)	{prev=true; height+=1;}
		}
		if(seq[i]==0)	prev= false;
	}
	return  height;
}
int main()
{
	int n; cin>>n; int l; int t;
	vector<int> out(n);
	for(int i=0; i<n; i++)
	{
		cin>>l;
		vector<int> input(l);
		for(int j=0; j<l; j++)	{ cin>>t; input[j]=t;}
		out[i]=is_she_living(input);
	}
	for(int i=0; i<n; i++)		cout<<out[i]<<endl;
}
