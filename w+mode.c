#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    FILE *fp;
    char str[30];
    char ch;
    fp = fopen ("abc.txt","w+");
    if ( fp == NULL)
    {
        printf ("Error Opening in File\n");
        exit (1);
    }
    fputs ("Bishwas",fp);
    rewind (fp);
    while (!feof(fp))
    {
        ch = fgetc (fp);
        printf ("%c",ch);
    }
  fclose (fp);
  return 0;
}