#include<stdio.h>
main()
{
    FILE *fp,*f;
    int c1=0,c2=0,flag=0;
    char c,ch,c4,c3;
    fp=fopen("file1.txt","r");
    f=fopen("file2.txt","r");
    if(fp==NULL||f==NULL)
    {
        printf("file cannot open");
        exit(1);
    }
    while(c=fgetc(fp)!=EOF)
        c1++;
    while(ch=fgetc(f)!=EOF)
        c2++;
    while(c3=fgetc(fp)!=EOF)
    {
        c4=fgetc(f);
        if(c3!=c4)
        {
            flag=1;
            break;
        }
    }
    if(flag==0&&c1==c2)
        printf("identical");
    else
        printf("not identical");





    /*

    while(!feof(fp)&&!feof(f))
    {
        c3=fgetc(fp);
        c4=fgetc(f);
        if(c3!=c4)
            flag=1;
    }
    while(!feof(fp))
        c2++;
    while(!feof(f))
        c1++;
    if(flag==0&&c2==c1)
        printf("identical");
    else
        printf("not identical");
        */
    fclose(fp);
    fclose(f);
}
