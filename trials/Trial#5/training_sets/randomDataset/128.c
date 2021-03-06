//#include <stdio.h>
#ifndef SEEK_SET
#define SEEK_SET 0
#define SEEK_END 2
#endif
main(int argc, char *argv[])
{
 char ch;
 long int location;
 FILE *fp;
 if ( (fp = fopen(argv[1], "r")) == NULL)
 {
 fprintf(stderr, "Error opening file: %s\n", argv[1]);
 exit(1);
 }
 /*
 * go to the end of file and get its location - in this case ftell will return
 * the total number of actual characters in the file; another interpretation is
 * the byte location of the end of file in the data stream.
 */
 fseek(fp, 0, SEEK_END);
 location = ftell(fp);
 printf("ftell returns %d for ending position\n", location);
 /* print out the contents of the file in reverse byte order */
 while (location >= 0)
 {
 fseek(fp, location, SEEK_SET); /* set to point to byte at specified location */
 ch = getc(fp);
 printf("char #%3d = 0x%02X", location, ch); /* print hex value of character */
 if ( isprint(ch) )
 printf(" '%c'", ch);
 printf("\n");
 location--;
 }
 fclose(fp);
 exit(0);
}
