
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void Fibbonaci(int n)
{
	unsigned long long int x=1, y=1, z=1;
	if(n>0) cout<<z<<" ";
	for(int i=1; i<n; i++)
	{
		cout<<z<<" ";
		x=y;
		y=z;
		z=x+y;
	}
}

void Pierwsze(int n)
{
	bool pierw=true;
	if(n>0)
	{
		cout<<"2 ";
		n--;
	}
	for(int i=3; n>0; i+=2)
	{
		for(int j=2; j<=sqrt(i); j++)
		{
			if((i%j)==0)
			{
				pierw=false;
				break;
			}
		}
		if(pierw)
		{
			cout<<i<<" ";
			n--;
		} 
		pierw=true;
	}
}

int main(int argc, char** argv)
{
	char* option=argv[1]; int n=atoi(argv[2]);
	if(*option=='f') Fibbonaci(n);
	else Pierwsze(n);
}