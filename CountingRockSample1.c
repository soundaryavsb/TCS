#include <stdio.h>

int main(void) {
    long int nuint;
	int n,a[1000],b,c,i,j;
	scanf("%d\t",&n);
    if(n>=10&&n<=10000)
    {
	 scanf("%d\t",&nuint);
	 for(i=0;i<n;i++)
      {
	    scanf("%d\t",&a[i]);
      }
	 for(j=0;j<nuint;j++)
      {
	    int count=0;
	    scanf("%d\t%d\t",&b,&c);
	    for(i=0;i<n;i++)
	    {
		  if(a[i]>=b&&a[i]<=c)
		  {
			count++;
		  }
	    }
	    printf("%d\n\n",count);
      }	
    }
	return 0;
}
