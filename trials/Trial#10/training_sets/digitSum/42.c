//#include<stdio.h>
void main()
{
	long int num;
	int a,sum=0,temp,b,r;
	printf("enter the number\n");
	scanf("%ld",&num);
	while(num!=0)
	{
		a=num%10;
		sum+=a;
		num/=10;
	}
	r:
	if(sum>9)
	{
		temp=sum;
		sum=0;
	}
	while(temp!=0)
	{
		b=temp%10;
		sum+=b;
		temp/=10;
	}
	if(sum>9)
	{
		goto r;
	}
	printf("the value is %d",sum);
} 
