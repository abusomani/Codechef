#include<bits/stdc++.h>
using namespace std;
#define SIZE 100009
int checkdigit(long long n)
{int N;
	while(n)
		{N=n%10;
			if(N!=0&&N!=1&&N!=4&&N!=9)
				{
				return 0;
				}
			n/=10;
		}
	return 1;
		
}
int perfectdigit(long long a[])
{int count=0;
	for(long long i=0;i<SIZE;i++)
		{
			long long sq=i*i;
			int x=checkdigit(sq);
			if(x)
				{
					a[count++]=sq;
					//cout<<sq<< "  "<< i<<endl;
				}
		}
	return count;
}
int main()
{	long long a[SIZE];
	int count=perfectdigit(a);
	int t;
	cin>>t;
	while(t--)
		{
			long long A,B,number=0;
			cin>>A>>B;
			for(int i=0;i<count;i++)
				{
					if(a[i]>=A&&a[i]<=B)
					number++;
					else if(a[i]>B)
					break;
				}
			cout<<number<<endl;
			
		}
	return 0;

}
