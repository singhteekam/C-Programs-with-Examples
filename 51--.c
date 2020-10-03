#include<stdio.h>
main()
{
    FILE *fp,*f;

    char s[20],ch,c;
    int c1;
    printf("enter character\n");
    scanf("%c",&ch);
 /*       fp=fopen("file3.txt","w");
    printf("enter string");
    gets(s);
    fputs(s,fp);
    fclose(fp);
   */
    fp=fopen("file3.txt","r");
    if(fp==NULL)
 {
     printf("cannot open");
    exit(1);
}

    while(c=fgetc(fp)!=EOF)
    {
        if(ch==c)
            c1++;

    }
    printf("%d",c1);
    fclose(fp);
}

