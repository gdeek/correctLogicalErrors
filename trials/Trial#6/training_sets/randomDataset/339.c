//#include<stdio.h>
 
void main() {
 
   char *str;
 int i=0;
   printf("\nEnter the String to be Encode : ");
   gets(str);
 
   while (str[i] != '\0') {
      str[i] = str[i] - 30;  // Subtract 30 From Charcter
      i++;
   }
   printf("\nEncoded String : %s", str);
}
