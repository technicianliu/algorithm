#include <iostream>
using namespace std;

/*把一个任务分成和原任务相同，但规模更小的
几个部分任务（通常是两部分），分别完成，或
只需要选一部分完成。然后再处理完成后的这一个
或几个部分的结果，实现整个任务的完成
基本思想是把一个规模较大的问题划分成若干个规模较小
的，独立的与原问题类似的子问题，逐个递归求解子问题
，然后将各个子问题合并得到原问题的解*/


/*
1、把前一半排序
2、把后一半排序
3、把两半归并到一个新的有序数组，然后拷贝回原数组
*/

//递归结束条件，数组只有一个元素
//归并排序需要额外空间存放中间结果
int main()
{
    int i;
    void Merge(int a[],int s,int m,int e,int tmp[]);
    void mergesort(int a[],int s,int e,int tmp[]);
    int a[10]={98,67,65,34,76,46,23,101,37,122};
    int b[10];
    mergesort(a,0,9,b);
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
void Merge(int a[],int s,int m,int e,int tmp[])
{
    int pb=0,i;
    int p1=s,p2=m+1;
    while(p1<=m&&p2<=e)
    {
        if(a[p1]<=a[p2])
        {
            tmp[pb++]=a[p1];
            p1++;
        }
        else
        {
            tmp[pb++]=a[p2];
            p2++;
        }
    }

    while(p1<=m)
    {
        tmp[pb++]=a[p1];
        p1++;
    }
    while(p2<=e)
    {
        tmp[pb++]=a[p2];
        p2++;
    }

    for(i=0;i<pb;i++)
        a[s+i]=tmp[i];
}
void mergesort(int a[],int s,int e,int tmp[])
{
    if(s<e)
    {
         int m=s+(e-s)/2;
         mergesort(a,s,m,tmp);
         mergesort(a,m+1,e,tmp);
         Merge(a,s,m,e,tmp);
    }
}
