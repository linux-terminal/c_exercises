#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100];
	printf("pls input a,b\n");
	gets(a);
	gets(b);
	
	int la=strlen(a),lb=strlen(b);
	int location=0;
	for(int i=0;i<=la-lb;i++)
	{
		if(a[i]==b[0])
		{
			for(int j=1;j<lb;j++)
			{
				if(a[i+j]==b[j])
				location=i+j;
				break;
			}
		}
	}
	printf("b appears in %d",location);
	return 0;
}