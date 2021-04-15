#include <bits/stdc++.h>
using namespace std;
int main()
{
//	unordered_map<long long,long long> mp;
	long long n,m,k;
	cin>>n>>m>>k;
	long long arr[n];
	for(long long i=0;i<n;i++)
	{                                     
		
		cin>>arr[i];
		
	}
	long long arr1[m];
	for(long long i=0;i<m;i++)
	{
		
		cin>>arr1[i];
		
	}
	sort(arr,arr+n);
	sort(arr1,arr1+m);
	long long count =0;
	long long i=0;
	long long j=0;
		while(j<n)
		{
		    if(arr[j]>arr1[i]+k)
				{
					i++;
					continue;
				}
				if(arr[j]<arr1[i]-k)
				{
				    j++;
				    continue;
				}
				count++;
				i++;
				j++;
			
				
		}
 
	cout<<count;
	return 0;
}
