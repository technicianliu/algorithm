#include <iostream>
using namespace std;

/*��һ������ֳɺ�ԭ������ͬ������ģ��С��
������������ͨ���������֣����ֱ���ɣ���
ֻ��Ҫѡһ������ɡ�Ȼ���ٴ�����ɺ����һ��
�򼸸����ֵĽ����ʵ��������������
����˼���ǰ�һ����ģ�ϴ�����⻮�ֳ����ɸ���ģ��С
�ģ���������ԭ�������Ƶ������⣬����ݹ����������
��Ȼ�󽫸���������ϲ��õ�ԭ����Ľ�*/


/*
1����ǰһ������
2���Ѻ�һ������
3��������鲢��һ���µ��������飬Ȼ�󿽱���ԭ����
*/

//�ݹ��������������ֻ��һ��Ԫ��
//�鲢������Ҫ����ռ����м���
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
