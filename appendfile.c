#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    FILE *fp;
    char str[30];
    fp = fopen ("abc.txt","a");
    if ( fp == NULL)
    {
        printf ("Error Opening in File\n");
        exit (1);
    }
    printf ("Enter the content you want to append:\n");
    gets (str);
   // fputs (str,fp);
    fprintf (fp, "\n%s",str);
    printf ("Succesfully Appended \n");
    fclose (fp);
    return 0;
}