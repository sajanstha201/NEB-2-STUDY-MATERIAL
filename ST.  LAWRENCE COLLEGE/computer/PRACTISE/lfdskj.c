#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("sajan.txt","w");
if(fp==0)
{
    printf("the file is not open");
}
else
printf("The fiel is open");
char s[40]="my name is sajan shrestha";
fprintf(fp,"%s",s);
}