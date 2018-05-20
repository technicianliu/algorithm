/*在用递归处理问题时，对问题分类也很关键。
比如这个将m个苹果放在n个篮子里面的放法总数。
先要分析m和n之间的关系，对于每一个类别处理清楚
就解决了问题，其次是如何确定递归终止的条件，
*/
#include <iostream>
using namespace std;

int place_apple(int m,int n);
int main()
{
    int m,n;//当m和n都很大时要用动态规划
    cin>>m>>n;
    cout<<place_apple(m,n)<<endl;
    return 0;
}

/*通过分析m和n如何变化来分析边界条件
m只有通过m-n的方式减少，而且m>=0，所以
当m到0的时候挡一下，就行了
而n有两种减小方式 一种是n=m，一种是
n-1，所以只要当n减到零的时候挡一下
就行了*/
int place_apple(int m,int n)
{
    if(m<n)
        return place_apple(m,m);
    if(m==0)//并不会导致多一种放法，最后算出的结果一定不会是所有的盘子都为空，除非m初始值为0
        return 1;
    if(n==0)
        return 0;
    return place_apple(m,n-1)+place_apple(m-n,n);
}
