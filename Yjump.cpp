#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,k,flag=0;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=1;i<n;i++)
			{
				if(a[i]>a[i-1])
					{
						if(a[i]<=a[i-1]+k)
						{
						}
						else
							{cout<<i;
							flag=1;
							break;
							}
					}
				else
					{
						if(a[i]+k>=a[i-1])
						{
						}
						else
							{cout<<i;
							flag=1;
							break;
							}
						
					}
			}
			if(!flag)
			cout<<n;
			
	
	
	return 0;
}
