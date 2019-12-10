#include<stdio.h>
int substring(char* s, char* sub)
{
    int xsub, xs, i, j, kx1, x2;
    for (xsub = 0; sub[xsub] != '\0'; xsub++);
    
    for (xs = 0; s[xs] != '\0'; xs++);
    for (i = 0; i <= (xs - xsub); i++)
    {
        j = 0;
        if(s[i]==sub[j])

    }
}
void  main(void)

{

    char s[99], sub[99];

    gets_s(s);

    gets_s(sub);

    if (substring(s, sub) == -1)

        printf("%s子串没有找到！", sub);

    else

        printf("子串%s在主串%s中第一次出现的位置是%d", sub, s, substring(s, sub));

}

