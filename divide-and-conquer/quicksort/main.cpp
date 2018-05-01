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
    if(s>=e) //�ݹ��������
        return;

    int k=a[s],i=s,j=e;

    while(i!=j) //���ﲻ������Ϊ�ݹ��������
    {
        while(j>i&&a[j]>k) //����ż���ν����󣬾Ͳ�ͣ����a[j]��a[i]���бȽϡ�
            j=j-1;
        Swap(a[i],a[j]);   //ͨ����������ͰѴӺ���ǰ��һ�������ı�kС���Ǹ���������kǰ�档

        while(i<j&&a[i]<k) //���������ν����󣬾Ͳ�ͣ����a[i]��a[j]���бȽ�
            i=i+1;
        Swap(a[i],a[j]);   //��kǰ�������ĵ�һ����k�����������k���档
    }
    //����ִ����󣬵�i����kǰ�涼�Ǳ�kС�ģ����涼�Ǵ��ڻ����k��
    quicksort(a,s,i-1);
    quicksort(a,i+1,e);
}
