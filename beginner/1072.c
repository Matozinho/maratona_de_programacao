#include <stdio.h>

int main()
{
	int n,x,in,out,i;

	scanf("%d",&n);

	for(in=0,out=0,i=0;i<n;i++)
	{
		scanf("%d",&x);

		(x>=10 && x<=20) ? (in++) : (out++) ;
	}

	printf("%d in\n%d out\n",in,out);
}
