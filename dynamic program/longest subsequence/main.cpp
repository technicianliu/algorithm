#include <iostream>
#include <algorithm>
using namespace std;

const int MAX=1010;
int a[MAX],maxlen[MAX];

int main()
{
    int i,j,n;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        maxlen[i]=1;
    }

    for(i=2;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            if(a[i]>a[j])
                maxlen[i]=max(maxlen[i],maxlen[j]+1);
        }
    }
    cout<<*max_element(maxlen+1,maxlen+n+1); //这个函数返回数组中最大元素的地址。
    return 0;
}


