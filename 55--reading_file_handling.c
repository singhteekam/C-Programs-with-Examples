#include<stdio.h>
main()
{
    FILE *fp;
    char str[20];
    fp=fopen("file1.txt","r");
        if(fp==NULL)
        {
            printf("file not found");
            exit(1);
        }
      /*  while(fgets(str,9,fp)!=NULL)
        {
            printf("%s",str);
        }
        fclose(fp);
}
*/

while(!feof(fp))
{
    fgets(str,19,fp);
    puts(str);
}
fclose(fp);
}
