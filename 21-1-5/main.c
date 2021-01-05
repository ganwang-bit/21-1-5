//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    char a;
//    a=-2L;
//    printf("%d",a);
//    return 0;
//}
//有n堆纸飞机，1,2,3,4....n
//每一次从纸飞机数大于等于x的堆数里扔掉x个纸飞机
//求最少次数
#include<stdio.h>
int fei(int n)
{
    if(n==1)
        return 1;
    else
        return 1+fei(n-(n+1)/2);
}
int main()
{
    int n,x;
    scanf("%d",&n);
    x=fei(n);
    printf("%d\n",x);
    return 0;
}
