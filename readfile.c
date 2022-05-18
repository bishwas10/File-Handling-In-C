#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
    FILE *fp;
    char ch;
    char str [10];
    fp = fopen ("bishwas.txt","r");
    if ( fp == NULL)
    {
        printf ("Error in Opening file\n");
        exit (1);
    }
    while (!feof(fp))
    {
    fgets (str,5,fp);
    printf ("%s",str);
    }
    /*while (!feof (fp))
    {
    ch = fgetc (fp);
    printf ("%c",ch);
    }
    */
    fclose (fp);

    return 0;
}