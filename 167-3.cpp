#include <stdio.h>
#define max 1000
int main()
{
	for(int n=6;n<=max;n++)
	{
		int sum=0;
		for(int i=2;i<=n/2;i++)
		{
			if(n%i==0)
			sum+=i;
		}
		sum++;
		if(sum==n)
		printf("%d\n",n);
	}
}