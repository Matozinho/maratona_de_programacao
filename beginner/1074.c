#include <stdio.h>

int main()
{
	int n,x,i;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x==0){printf("NULL\n");}else{printf("%s%s", (x%2==0? "EVEN " : "ODD ") , ( x>0 ? "POSITIVE\n" : "NEGATIVE\n") );}
		
	}
}
