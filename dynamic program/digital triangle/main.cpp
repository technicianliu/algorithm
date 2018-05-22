//递推型动态规划
#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;

int a[MAX+1][MAX+1];

int main()
{
    int lsum,rsum;
    int n,i,j;  //a[n]本身就是一个指向一维数组的指针。
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=i;j++)
          cin>>a[i][j];

    int *maxsum=a[n];
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            lsum=a[i][j]+maxsum[j];
            rsum=a[i][j]+maxsum[j+1];
            maxsum[j]=max(lsum,rsum);
        }
    }

    cout<<maxsum[1];
    return 0;
}



//记忆性递归动态规划
#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;

int a[MAX+1][MAX+1],n;
int b[MAX+1][MAX+1];

int maxsum(int i,int j);
int main()
{
    int i,j;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=i;j++)
        {
            cin>>a[i][j];
            b[i][j]=-1;
        }
    maxsum(1,1);
    cout<<b[1][1];
    return 0;
}

int maxsum(int i,int j)
{
    int lmax,rmax;

    if(b[i][j]!=-1)
        return b[i][j];

    if(i==n)
    {
        b[i][j]=a[i][j];
    }

    lmax=maxsum(i+1,j)+a[i][j];
    rmax=maxsum(i+1,j+1)+a[i][j];
    b[i][j]=max(lmax,rmax);
    return b[i][j];
}
