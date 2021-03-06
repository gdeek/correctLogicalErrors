//#include <stdio.h>
int main(int argc, char **argv)
{
 char buffer[BUFSIZ];
 FILE *fp;
 if (argc != 2) /* then have wrong number of arguments */
 {
 fprintf(stderr, "Usage: %s filename\n", argv[0]);
 exit(1);
 }
 if (( fp = fopen(argv[1], "r") ) == NULL) /* can't open file for input */
 {
 perror(argv[1]);
 exit(2);
 }
 while (1) /* process the input file */
 {
 if (fgets(buffer, sizeof(buffer), fp) == NULL) /* no more input... */
 {
 if (feof(fp)) /* ... because end of file was reached */
 printf("Encountered end of file\n");
 if (ferror(fp)) /* ... because error was encountered while reading */
 printf("Encountered error\n");
 fclose(fp);
 break;
 }
 fputs(buffer, stdout);
 }
}
