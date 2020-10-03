#include<stdio.h>
main()
{
    FILE *fp;
    char str[20];
    fp=fopen("file1.txt","w");
        printf("enter string");
        gets(str);
        fputs(str,fp);
        fclose(fp);
}
