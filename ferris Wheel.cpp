#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long long n,k;
	cin>>n>>k;
	long long arr[n];
	for(long long i=0;i<n;i++)
	{                                     
		
		cin>>arr[i];
	}
	sort(arr,arr+n);
	long long count=0;
	long long  i=0;
	long long  j=n-1;
	while(i<j)
	{
		if(arr[i]+arr[j]<=k)
		{
			i++;
			j--;
		}else{
			j--;
		}
		count++;
	}
 
	if(i==j) cout<<count+1;
	else cout<<count;
	
	//cout<<max;
	
	
	
	return 0;
}
