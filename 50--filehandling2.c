#include<stdio.h>
main()
{
    FILE *fp,*f;
    fp=fopen("file3.txt","w");
    char s[50];
    printf("enter string");
    gets(s);
    fputs(s,fp);
    fclose(fp);
    fopen("file3.txt","r");
    fgets(s,50,fp);
    printf("%s",s);
    fclose(fp);
}
