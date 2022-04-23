#include <iostream>
#include <algorithm>
using namespace std;
int main() {
   int n,m,k;
   int a[10000],b[10000];
   long long c[20000];
   

	   	k=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i],c[k++]=a[i];
		    
		}
		
		cin>>m;
	    for(int i=0;i<m;i++) 
	    {
			cin>>b[i],c[k++]=b[i];
		}
		
		sort(c,c+n+m);
		    
	    for(int i=0;i<n+m;i++)
		{
	        if(c[i]!=c[i+1])
				cout<<c[i];
	    }
	    
    return 0;
} 