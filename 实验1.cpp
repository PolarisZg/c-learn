#include <stdio.h>
int main(void)
{
  int lirun,a;
  double jiang, jiang1,jiang2,jiang3,jiang4,jiang5,jiang6;
  scanf("%d",&lirun);
  a=lirun/100000;
  jiang1=100000*0.1;
  jiang2=jiang1+100000*0.075;
  jiang3=jiang2+200000*0.05;
  jiang4=jiang3+200000*0.03;
  jiang5=jiang4+400000*0.015;
  jiang6=jiang5+(lirun-1000000)*0.01;
  switch(a) 
  {
    case 0:jiang=lirun*0.1;printf("%.2f",jiang);break;
    case 1:jiang=jiang1+(lirun-100000)*0.075;printf("%.2f",jiang);break;
    case 2:jiang=jiang2+(lirun-200000)*0.05;printf("%.2f",jiang);break;
    case 3:jiang=jiang2+(lirun-200000)*0.05;printf("%.2f",jiang);break;
    case 4:jiang=jiang3+(lirun-400000)*0.03;printf("%.2f",jiang);break;
    case 5:jiang=jiang3+(lirun-400000)*0.03;printf("%.2f",jiang);break;
    case 6:jiang=jiang4+(lirun-600000)*0.015;printf("%.2f",jiang);break;
    case 7:jiang=jiang4+(lirun-600000)*0.015;printf("%.2f",jiang);break;
    case 8:jiang=jiang4+(lirun-600000)*0.015;printf("%.2f",jiang);break;
    case 9:jiang=jiang4+(lirun-600000)*0.015;printf("%.2f",jiang);break;
    default:printf("%.2f",jiang6);                                              
  }
  return 0;
}
