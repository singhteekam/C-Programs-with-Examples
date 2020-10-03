#include<stdio.h>
main()
{
    FILE *fp;
    char ch;
    int i;
    char s[100];
    printf("enter string\n");
    gets(s);
    fp=fopen("file1.txt","w");

       for(i=0;i<strlen(s);i++)
        fputc(s[i],fp);
        fclose(fp);
}

/*
        fp=fopen("file1.txt","r");
        if(fp==NULL)
        {
            printf("file not found");
            exit(1);
        }
        ch=fgetc(fp);
        while(!feof(fp))
        {
            printf("%c",ch);
           ch=fgetc(fp);
        }
        fclose(fp);
}

*/
