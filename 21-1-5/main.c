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
//��n��ֽ�ɻ���1,2,3,4....n
//ÿһ�δ�ֽ�ɻ������ڵ���x�Ķ������ӵ�x��ֽ�ɻ�
//�����ٴ���
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
