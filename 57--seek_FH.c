#include<stdio.h>
main()
{
    FILE *fp;
    char str[26];
   fp=fopen("file1.txt","r");
        if(fp==NULL)
        {
            printf("file not found");
            exit(1);
        }

        fseek(fp,7,SEEK_SET);
         fgets(str,18,fp);
        printf("%s\n",str);
        fseek(fp,-12,SEEK_CUR);
        fgets(str,18,fp);
        printf("%s\n",str);
        fseek(fp,-5,SEEK_END);
        fgets(str,18,fp);
        printf("%s\n",str);
         fseek(fp,0,SEEK_SET);
         fgets(str,26,fp);
        printf("%s\n",str);
        fclose(fp);
}
