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

    printf("%d  ",n%10);  //这条语句在最外层这个函数一定是最后被执行的，所以输出顺序和输入顺序一致。

}
