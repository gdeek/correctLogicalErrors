//#include <stdio.h>
main()
{
	int i,j,c;
	printf("Enter Number");
	scanf("%d",&i);
	c=0;
	for(j=1;j<=i;j++)
	{
    	if(i%j==0)
			c++;
 	}
    if(c==2)
	   	printf("prime");
	else
		printf("Not prime");
}
