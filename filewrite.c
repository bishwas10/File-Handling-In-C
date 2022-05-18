#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    FILE *fp;
    int a = 10;
    char str[50];
    char ch = 's';
    fp = fopen ("abc.txt","w");
    if (fp == NULL)
    {
        printf ("Error Opening in File\n");
        exit (1);
    }
    printf ("Enter the string\n");
    fprintf (fp, "%d %s %c ", a , str,ch);
    gets (str);
    fputs (str,fp);
     //for (int i = 0; i!= strlen(str);i++)
     //fputc (str[i],fp);
    fclose (fp);
    return 0;
}