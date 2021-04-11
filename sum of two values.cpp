#include <bits/stdc++.h>
using namespace std;
 
 
 
long long binarySearch(long long arr[], long long l, long long r,long long value, long long x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (value+arr[mid] == x)
            return mid;
        if (value+arr[mid] > x)
            return binarySearch(arr, l, mid - 1,value, x);
        return binarySearch(arr, mid + 1, r,value, x);
    }
    return -1;
}
 
 
int main()
{
	long long n,k;
	cin>>n>>k;
	long long arr[n];
	long long *arr1 = new long long [n];
	long long a[2];
	for(long long i=0;i<n;i++)
	{                                     
		
		cin>>arr[i];
		arr1[i]=arr[i];
		
	}
	sort(arr,arr+n);
	long long x,y;
		for(int i=0;i<n-1;i++)
		{
			 x = i;
			 y = binarySearch( arr,i+1,n-1,arr[i],k);
			if(y!=-1) break;
		}
			if(y==-1) cout<<"IMPOSSIBLE";
			else{
			    int j=0;
				for(int i=0;i<n;i++)
				{
				    if(arr[x]==arr1[i])
				    {
				        a[j]=i;
				        x=y;
				        j++;
				        if(j==2) break;
				        continue;
				        
				    }
				    if(arr[y]==arr1[i])
				    {
				        a[j]=i;
				        y=x;
				        j++;
				        if(j==2) break;
				        continue;
				        
				    }
				    
				}
				
				sort(a,a+2);
				cout<<a[0]+1<<" "<<a[1]+1;
			}
			delete [] arr1;
	
	return 0;
}
