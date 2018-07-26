#include <stdio.h>

int main(void) {
	int notest,a,add,div,i,j,jump;
	scanf("%d",&notest);
	for(i=0;i<notest;i++)
	{
		int count=0;
		scanf("%d%d%d",&a,&add,&div);
		for(j=0;count==0;j++)
		{
			a=a+add;
			if(a%div==0)
			{
				count++;
				jump=a/div;
	                       	printf("%d\n",jump);	
			}
			
		}
	}
	return 0;
}
