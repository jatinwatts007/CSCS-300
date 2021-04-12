#include <bits/stdc++.h>
using namespace std;

int main()
{
    //map<long long ,long long>mp;
	unsigned long long int n;
	
	cin>>n;
	unsigned long long int arr[n];
	unsigned long long ans=0;
	cin>>arr[0];
	for(unsigned long long int i=1;i<n;i++)
	{
	    cin>>arr[i];
		if(arr[i]<arr[i-1])
		{
		    ans+=(arr[i-1]-arr[i]);
		    arr[i]=arr[i-1];
		}
		
	}
	cout<<ans;
	
	return 0;
}


