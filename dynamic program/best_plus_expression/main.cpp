//递归解决时，总是先想第一步怎么办，解决第一步后能不能缩小问题规模

//向n个数字组成的字符中添加m个加号，使形成的和最小。求表达式的最小值
//
//设V(m,n)表示在n个数字中插入m个加号所形成的表达式的最小值。
//if m==0 V(m,n)=n个数字构成的整数
//else if n<m+1 V(m,n)=无穷大
//else V(m,n)=Min{V(m-1,i)+Num(i+1,n)} (i=m...n-1)
//
//
//
//

#include <iostream>
using namespace std;

