//#include<stdio.h>
//#include<math.h>
void main()
{
long int num;
 long int rem,sum=0,power=0;
printf("Enter the Binary number (0 and 1): ");
scanf("%ld",&num);
while(num>0)
 {
 rem = num%10;
 num = num/10;
 sum = sum + rem * pow(2,power);
 power++;
 }
 
printf("Decimal number : %d",sum);
}
