#include <stdio.h>

int main(void) {
	int no_input,a[no_input],i,j;
	scanf("%d",&no_input);
	for(i=0;i<no_input;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<no_input;j++)
	{
		printf("%d\t",a[j]);
	}
	
	return 0;
}
