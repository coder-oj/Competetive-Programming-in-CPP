#include<bits/stdc++.h>
using namespace std;

#define size 100000000
bool prime[size+1];

void SieveOfEratosthenes()
{
	memset(prime,true,sizeof(prime));
	prime[0]=false;
	prime[1]=false;
	for(int p=2;p*p<=size;p++)
	{
		if(prime[p])
		{
			for(int i=p*p;i<=size;i+=p)
			prime[i]=false;
		}
	}
}

int main()
{
	int l= 1;
	int r=100;
	SieveOfEratosthenes();
	cout<<"Printing Primes in the range "<<l<<" to "<<r<<endl;
	for(int i=l;i<=r;i++)
	{
		if(prime[i]) cout<<i<<" ";
	}
	return 0;
}
