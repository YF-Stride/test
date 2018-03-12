
#include<stdio.h>
int main (  )
{
    int a[531],i,j;
    for(i=0;i<531;i++)
        a[i]=i;
    int b[19]={0,28,30,25,20,35,50,20,25,36,33,27,27,28,28,29,30,33,26};
    printf("请输入树木的原始序号：");
    scanf("%d",&i);
    for(j=1;i-b[j]>0;j++)
        i=i-b[j];
    printf("是第%d员工，第%d棵树",j,i);
    return 0;

}
