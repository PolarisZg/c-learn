#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)

{
FILE *fp;
char c;
int a[5]={0};
if((fp=fopen("data.txt","r"))==NULL)
{
printf("can not open the date.txt\n");
exit(0);
}
c=fgetc(fp);
while(c!=EOF)
{
if(((c>='a')&&(c<='z'))||((c>='A')&&(c<='Z')))
{
a[0]++;
}
if((c>='0')&&(c<='9'))
{
a[1]++;
}
if(c==' ')
{
a[2]++;
}
if(c==',')
{
a[3]++;
}
if(c=='.')
{
a[4]++;
}
c=fgetc(fp);
}
fclose(fp);
printf("############the result is :###########\n");
printf("\n Ó¢ÎÄ Êý×Ö ¿Õ¸ñ ¶ººÅ ¾äºÅ\n");
for(int i=0;i<5;i++)
printf("%6d",a[i]);
printf("\n");
system("pause");
return 0;
}

