/*���õݹ鴦������ʱ�����������Ҳ�ܹؼ���
���������m��ƻ������n����������ķŷ�������
��Ҫ����m��n֮��Ĺ�ϵ������ÿһ����������
�ͽ�������⣬��������ȷ���ݹ���ֹ��������
*/
#include <iostream>
using namespace std;

int place_apple(int m,int n);
int main()
{
    int m,n;//��m��n���ܴ�ʱҪ�ö�̬�滮
    cin>>m>>n;
    cout<<place_apple(m,n)<<endl;
    return 0;
}

/*ͨ������m��n��α仯�������߽�����
mֻ��ͨ��m-n�ķ�ʽ���٣�����m>=0������
��m��0��ʱ��һ�£�������
��n�����ּ�С��ʽ һ����n=m��һ����
n-1������ֻҪ��n�������ʱ��һ��
������*/
int place_apple(int m,int n)
{
    if(m<n)
        return place_apple(m,m);
    if(m==0)//�����ᵼ�¶�һ�ַŷ����������Ľ��һ�����������е����Ӷ�Ϊ�գ�����m��ʼֵΪ0
        return 1;
    if(n==0)
        return 0;
    return place_apple(m,n-1)+place_apple(m-n,n);
}
