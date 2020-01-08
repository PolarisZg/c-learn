/*这是第34题的代码*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **mat=NULL;//存放矩阵
	int x, y, z, m, n, i, j;
	x = y = z = m = n = i = j = 0;//把这些数值初始化一下，免得报错
	printf("输入1表示压缩，输入2表示还原：");//压缩与还原操作分开来写，这是我能想到的最简单的方法了
	scanf_s("%d", &x);
	if (x == 1)
/***************************压缩运算***************************/
	{
		printf("输入矩阵的行数：");
		scanf_s("%d", &m);
		printf("输入矩阵的列数：");
		scanf_s("%d", &n);
		mat = (int**)malloc(sizeof(int*) * m);//动态分配mat的内存
		for (i = 0; i < m; i++)
			mat[i] = (int*)malloc(sizeof(int) * n);
		printf("输入矩阵，以空格分隔每个元素：\n");
		for(i=0;i<m;i++)
			for (j = 0; j < n; j++)
			{
				scanf_s("%d", &mat[i][j]);
				if (mat[i][j] != 0)
					y = y + 1;
			}
		printf("压缩后矩阵为：\n%d %d %d\n", m, n, y);
		for(i=0;i<m;i++)
			for (j = 0; j < n; j++)
				if (mat[i][j] != 0)
					printf("%d %d %d\n", i, j, mat[i][j]);
	}
	else if (x == 2)
/***************************还原运算***************************/
	{
		printf("输入需要还原矩阵的行数：");
		scanf_s("%d", &y);
		mat = (int**)malloc(sizeof(int*) * y);//动态分配mat的内存
		for (i = 0; i < y; i++)
			mat[i] = (int*)malloc(sizeof(int) * 3);
		printf("输入矩阵，以空格分隔每个元素：\n");
		for (i = 0; i < y; i++)
			for (j = 0; j < 3; j++)
				scanf_s("%d", &mat[i][j]);
		m = mat[0][0];
		n = mat[0][1];
		z = 1;//使用z表示读取到三元组的第几行，现在三元组第一行已经废了
		printf("还原后矩阵为：\n");
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