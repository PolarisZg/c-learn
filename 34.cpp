/*���ǵ�34��Ĵ���*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **mat=NULL;//��ž���
	int x, y, z, m, n, i, j;
	x = y = z = m = n = i = j = 0;//����Щ��ֵ��ʼ��һ�£���ñ���
	printf("����1��ʾѹ��������2��ʾ��ԭ��");//ѹ���뻹ԭ�����ֿ���д�����������뵽����򵥵ķ�����
	scanf_s("%d", &x);
	if (x == 1)
/***************************ѹ������***************************/
	{
		printf("��������������");
		scanf_s("%d", &m);
		printf("��������������");
		scanf_s("%d", &n);
		mat = (int**)malloc(sizeof(int*) * m);//��̬����mat���ڴ�
		for (i = 0; i < m; i++)
			mat[i] = (int*)malloc(sizeof(int) * n);
		printf("��������Կո�ָ�ÿ��Ԫ�أ�\n");
		for(i=0;i<m;i++)
			for (j = 0; j < n; j++)
			{
				scanf_s("%d", &mat[i][j]);
				if (mat[i][j] != 0)
					y = y + 1;
			}
		printf("ѹ�������Ϊ��\n%d %d %d\n", m, n, y);
		for(i=0;i<m;i++)
			for (j = 0; j < n; j++)
				if (mat[i][j] != 0)
					printf("%d %d %d\n", i, j, mat[i][j]);
	}
	else if (x == 2)
/***************************��ԭ����***************************/
	{
		printf("������Ҫ��ԭ�����������");
		scanf_s("%d", &y);
		mat = (int**)malloc(sizeof(int*) * y);//��̬����mat���ڴ�
		for (i = 0; i < y; i++)
			mat[i] = (int*)malloc(sizeof(int) * 3);
		printf("��������Կո�ָ�ÿ��Ԫ�أ�\n");
		for (i = 0; i < y; i++)
			for (j = 0; j < 3; j++)
				scanf_s("%d", &mat[i][j]);
		m = mat[0][0];
		n = mat[0][1];
		z = 1;//ʹ��z��ʾ��ȡ����Ԫ��ĵڼ��У�������Ԫ���һ���Ѿ�����
		printf("��ԭ�����Ϊ��\n");
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (z < y && i == mat[z][0] && j == mat[z][1])
				{
					printf("%d ", mat[z][2]);
					z = z + 1;
				}
				else
					printf("0 ");
			}
			printf("\n");
		}
	}
	system("PAUSE");
	return 0;
}