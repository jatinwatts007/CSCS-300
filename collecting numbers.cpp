#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    map<long long ,long long>mp;
	long long n;
	cin>>n;
	long long sum=0;
	long long arr[n];
	for(long long i=0;i<n;i++)
	{                                     
		
		cin>>arr[i];
		if(mp.count(arr[i]-1)>0)
		{
		    mp[arr[i]]=0;
		    
		}else{
		    mp[arr[i]]++;
		}
		sum=sum+mp[arr[i]];
		
	}
	cout<<sum;
	
	return 0;
}
