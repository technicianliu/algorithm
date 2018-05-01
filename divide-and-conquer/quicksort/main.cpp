#include <iostream>
using namespace std;

int main()
{
    int i;
    void Swap(int &a,int &b);
    void quicksort(int a[],int s,int e);
    int a[10]={55,34,86,57,45,43,11,68,99,41};
    quicksort(a,0,9);

    for(i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}

void Swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void quicksort(int a[],int s,int e)
{
    if(s>=e) //递归结束条件
        return;

    int k=a[s],i=s,j=e;

    while(i!=j) //这里不可以作为递归结束条件
    {
        while(j>i&&a[j]>k) //发生偶数次交换后，就不停的拿a[j]与a[i]进行比较。
            j=j-1;
        Swap(a[i],a[j]);   //通过这个交换就把从后往前第一次遇到的比k小的那个数换到了k前面。

        while(i<j&&a[i]<k) //发生奇数次交换后，就不停的拿a[i]与a[j]进行比较
            i=i+1;
        Swap(a[i],a[j]);   //把k前面遇到的第一个比k大的数换到了k后面。
    }
    //上面执行完后，第i个数k前面都是比k小的，后面都是大于或等于k的
    quicksort(a,s,i-1);
    quicksort(a,i+1,e);
}
