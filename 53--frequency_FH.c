/*
#include<stdio.h>
#include<string.h>
main()
{
    FILE *fp;
    char f[15],str[15];
    int c=0;
    printf("enter the word to be checked\n");
    gets(f);
    fp=fopen("file3.txt","r");
    if(fp=NULL)
    {
        printf("file cannot open");
        exit(1);
    }

    while(!feof(fp))
    {
         fscanf(fp,"%s",str);
        if(strcmp(str,f)==0)
            c++;

    }
    printf("frequency is %d ",c);
    fclose(fp);
}

*/





/*#include<stdio.h>
#include<string.h>
main()
{
    char s[]="abcd";
    char *s1[]="abcd";
    printf("%d%d%d",strlen(s1),strlen(s),strlen("abcd"));
}
*/
