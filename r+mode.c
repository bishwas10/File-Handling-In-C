#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    FILE *fp;
    //char str[30];
    fp = fopen ("abc.txt","r+");
    if ( fp == NULL)
    {
        printf ("Error Opening in File\n");
        exit (1);
    }
    fputs ("Bishwas",fp);
    fputc ('z',fp);
  fclose (fp);
  return 0;
}