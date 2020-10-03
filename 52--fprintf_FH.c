#include<stdio.h>
main()
{
    FILE *fp;
    int a,b,c;
    char s1[10],s2[10],s3[10],s4[10],s5[10],s6[10];
    /*fp=fopen("file2.txt","w");
        printf("enter two integers");
        scanf("%d%d",&a,&b);
        fprintf(fp,"sum of two integers %d and %d is %d",a,b,a+b);
        fclose(fp);
}
*/



        fp=fopen("file2.txt","r");
        if(fp==NULL)
        {
            printf("file cannot open");
            exit(1);
        }

        fscanf(fp,"%s %s %s %s %d %s %d %s %d",s1,s2,s3,s4,&a,s5,&b,s6,&c);
        printf("%s %s %s %s %d %s %d %s %d",s1,s2,s3,s4,a,s5,b,s6,c);
        fclose(fp);
}
