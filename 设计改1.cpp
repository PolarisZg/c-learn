#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ***p=NULL;//�ȼ�һ�㣬���������������
	int **q=NULL;//��������ľ���
	int **e=NULL;//���ÿ������������� 
	int **r=NULL;//�˷������ʱ����Ϊ�м���� 
	int m,n;//����������
	int x,i,j;//������������������������
	int k;//ѭ��һ�£�������ֵ,��ά�����б�ʾ�ڼ�������
	int t;//��ʾ�Ӽ�������ı��� 
	int temp,a,b;//Ϊ�˾�����˶�����ı��� �洢���ӵ�ֵ��Ϊ�˾����������ı��������м���ȵ����� 
	x=0;//��x��һ����ֵ��Ϊʹ�������������� 
	printf("����һ��������������������ʾ�����ľ���ĸ���:");
	scanf("%d",&x);
	p=(int***)malloc(sizeof(int **) *x);
	e=(int**)malloc(sizeof(int *) *(x+2));//��������Ϊ�˴������ʱ���м�ֵ 
	for(k=0;k<x;k++)
	{
		printf("\n�������%d�����������,Ҫ�������������0:",k+1);
		scanf("%d",&m);
		printf("\n�������%d�������������Ҫ�������������0:",k+1);
		scanf("%d",&n);
		if(m<=0||n<=0)
		{
			printf("����������ٴ�����\n");
			k=k-1;
		}
		else
		{
			for(i=0;i<m;i++)
				e[i]=(int *)malloc(sizeof(int) *2);
			p[k]=(int **)malloc(sizeof(int *) *m);//����һ��һάָ��ռ�
			e[k][0]=m;	e[k][1]=n;//�洢ÿһ������������� 
			for(i=0;i<m;i++)
				p[k][i]=(int *)malloc(sizeof(int)*n);//����ÿ��һάָ�룬����һ�����ݵĿռ�
			for(i=0;i<m;i++)
			{
				printf("\n���������%d�е����ݣ��Կո�ֿ�����󰴻س�",i+1);
				for(j=0;j<n;j++)
					scanf("%d",&p[k][i][j]);
			}
		}	
	}
	k=0;
	if(x==1)
	{
		printf("\n����ľ���Ϊ%d��%d��\n",m,n);
		while(t!=3)
		{
			printf("����1��ʾ���ԭ��������2��ʾ���о����ת�ã�����3��ʾ�㲻�������:");
			scanf("%d",&t);	printf("\n");
			if(t==1)
			{
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
						printf("%d ",p[0][i][j]);
					printf("\n");
				}
			}
			if(t==2)//����ת�� 
			{
				for(i=0;i<n;i++)
				{
					for(j=0;j<m;j++)
						printf("%d",p[0][j][i]);
					printf("\n");
				}
			}
		}
		for(i=0;i<m;i++)
		free(p[0][i]);
		free(p[0]);
	}//����������ת�� 
	else
	{
		while(1)
		{
			printf("����������������㣬����1��ʾ��ӣ�����2��ʾ���������3��ʾ���,����4��ʾ��ֹ����,����5��ʾ֮ǰ����������:");
			scanf("%d",&t); printf("\n");
			if(t==4||t==5)
				break;
			if(t==1)
			{	
				if(k==0)
				{
					if(e[k][0]!=e[k+1][0]||e[k][1]!=e[k+1][1])
					{
						printf("��������ͬ�;����޷����,�����һ������\n");
						x=x+1; 
					}
					else
					{
						m=e[k][0];
						printf("%d\n",m);
						n=e[k][1];
						printf("%d\n",n);
						e[x][0]=m;	e[x][1]=n;//��q�������������� 
						q=(int**)malloc(sizeof(int *) *m);//��q����һ���� 
						for(i=0;i<m;i++)
							q[i]=(int *)malloc(sizeof(int)*n);//��q����һ����
						for(i=0;i<m;i++)
							for(j=0;j<n;j++)
								q[i][j]=p[k][i][j]+p[k+1][i][j];
					}		
				}
				else
				{
					if(e[x][0]!=e[k][0]||e[x][1]!=e[k][1])
					{
						printf("֮ǰ�������ý����˾�����ͬ�;����޷����,�����һ������\n");
						x=x+1; 
					}
					else
					{
						for(i=0;i<m;i++)
							for(j=0;j<n;j++)
								q[i][j]=p[k][i][j]+q[i][j];
					}	
				}
			}//����ӷ�����
			else if(t==2)
			{	
				if(k==0)
				{
					if(e[k][0]!=e[k+1][0]||e[k][1]!=e[k+1][1])
					{
						printf("��������ͬ�;����޷����,�����һ������\n");
						x=x+1; 
					}
					else
					{
						m=e[k][0];
						n=e[k][1];
						e[x][0]=m;	e[x][1]=n;//��q�������������� 
						q=(int**)malloc(sizeof(int *) *m);//��q����һ���� 
						for(i=0;i<m;i++)
							q[i]=(int *)malloc(sizeof(int)*n);//��q����һ����
						for(i=0;i<m;i++)
							for(j=0;j<n;j++)
								q[i][j]=p[k][i][j]-p[k+1][i][j];
					}		
				}
				else
				{
					if(e[x][0]!=e[k][0]||e[x][1]!=e[k][1])
					{
						printf("֮ǰ�������ý����˾�����ͬ�;����޷����,�����һ������\n");
						x=x+1; 
					}
					else
					{
						for(i=0;i<m;i++)
							for(j=0;j<n;j++)
								q[i][j]=p[k][i][j]-q[i][j];
					}	
				}
			}//�������
			else if(t==3)
			{
				if(k==0)
				{
					if(e[k][1]!=e[k+1][0])
					{
						printf("��һ���������������ڵڶ��������������޷����\n");
						x=x+1;
					}
					else
					{
						m=e[k][0];
						n=e[k+1][1];
						a=sizeof(p[k][0])/sizeof(p[k][0][0]);
						for(i=0;i<m;i++)
							for(j=0;j<n;j++)
							{
								temp=0;
								for(b=0;b<a;b++)
									temp+=p[k][i][b]*p[k+1][b][j];
								q[i][j]=temp;
							}
					}
				}
				else 
				{
					if((sizeof(q[0])/sizeof(q[0][0]))!=(sizeof(p[k])/sizeof(p[k][0])))
					{
						printf("ǰ�����ý���������������ڴ�ʱ������������޷����\n");
						x=x+1;
					}
					else
					{
						for(i=0;i<m;i++)
							free(r[i]);
						free(r);
						m=sizeof(q)/sizeof(q[0]);
						n=sizeof(p[k][0])/sizeof(p[k][0][0]);
						r=(int**)malloc(sizeof(int *) *m);//��r����һ���� 
						for(i=0;i<m;i++)
							r[i]=(int *)malloc(sizeof(int)*n);//��r����һ����
						for(i=0;i<m;i++)
							for(j=0;j<n;j++)
							{
								temp=0;
								for(b=0;b<a;b++)
									temp+=q[i][b]*p[k][b][j];
								r[i][j]=temp;
							}
						for(i=0;i<m;i++)
							free(r[i]);
						free(r);
					}	
				} 
			} 
		}
		if(t==5)
		{
			printf("\n�����ľ���Ϊ\n");
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
					printf("%4d",q[i][j]);
				printf("\n");
			}
		}
	}
	system("PAUSE");
	return 0;
}
