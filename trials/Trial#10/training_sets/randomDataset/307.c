//#include<stdio.h>
 
int main() {
   int i, j;
   int num;
 
   printf("Enter the number of Digits :");
   scanf("%d", &num);
 
   for (i = 0; i <= num; i++) {
      for (j = 0; j < i; j++) {
         printf("%d ", i);
      }
      printf("\n");
   }
   return (0);
}
