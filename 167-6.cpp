#include <stdio.h>
int main()
{
	int a[20];
	printf("pls input a[20]\n");
	for(int i=0;i<20;i++)
		scanf("%d",&a[i]);
		
	int n=1,max=1;
	int num=0;
	for(int i=0;i<20;i++)
	{
		for(int j=i;j<20;j++)
		{
			if(a[i]==a[j+1])
			{
				n++;
				if(n>max)
				{
					max=n;
					num=a[i];
				}
			}
		}
		n=1;
	}
	
	printf("%d %d",num,max);
	
	return 0;
}