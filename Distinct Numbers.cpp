#include <bits/stdc++.h>
using namespace std;
int main()
{
	unordered_map<long long,long long> mp;
	long long n;
	cin>>n;
	long long arr[n];
	for(long long i=0;i<n;i++)
	{
		
		cin>>arr[i];
		
	}
	sort(arr,arr+n);
	long long count =1;
	long long x = arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x) continue;
		x=arr[i];
		count++;
 
	}
	cout<<count;
	return 0;
}
