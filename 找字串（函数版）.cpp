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

        printf("%s�Ӵ�û���ҵ���", sub);

    else

        printf("�Ӵ�%s������%s�е�һ�γ��ֵ�λ����%d", sub, s, substring(s, sub));

}

