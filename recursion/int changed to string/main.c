#include <stdio.h>
#include <stdlib.h>

void convert(int n);
int main()
{
    int n;
    scanf("%d",&n);
    convert(n);
}

void convert(int n)
{
    int i;
    if((i=n/10)!=0)
      convert(i);

    printf("%d  ",n%10);  //���������������������һ�������ִ�еģ��������˳�������˳��һ�¡�

}
