#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long long n,k;
	cin>>n;
	long long sum = 0;
	long long arr[n];
	for(long long i=0;i<n;i++)
	{                                     
		
		cin>>arr[i];
	}
	sort(arr,arr+n);
	if(n%2==1)
	{
		long long x = n/2;
		long long sum = 0;
		for(long long i=0;i<n;i++)
		{
				sum+=abs(arr[i]-arr[x]);
		}
		cout<<sum;
 
	}
	else{
	    long long x = n/2;
		long long sum1 = 0;
		for(long long i=0;i<n;i++)
		{
				sum1+=abs(arr[i]-arr[x]);
		}
		long long y = n/2-1;
		long long sum2 = 0;
		for(long long i=0;i<n;i++)
		{
				sum2+=abs(arr[i]-arr[y]);
		}
		if(sum1<sum2) cout<<sum1;
		else cout<<sum2;
		
	}
	
	//cout<<max;
	
	
	
	return 0;
}
