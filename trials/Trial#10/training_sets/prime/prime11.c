//#include <stdio.h> 
int main()
{
	int num, count = 2, temp = 0;
    	printf("\nEnter a Number:\t");
    	scanf("%d", &num);
    	while(count <= num - 1)
    	{
        	if(num%count == 0)
        	{
            		temp = 1;
            		break;
        	}
		count++;
    	}
    	if(temp == 0)
        {
		printf("\n%d is a Prime Number\n", num);
	}
    	else
	{
        	printf("\n%d is Not a Prime Number\n", num);
	}
    	return 0;
}
