/*
˼·��
1����A����N-1���̽���C(Ŀ����)�Ƶ�B����
2����A����Ψһ�����Ƶ�C����
3����B�������е��̽���A���Ƶ�C����
*/




#include <iostream>
using namespace std;
void move(char sour,char dest);
void hanoi(int n,char a,char b,char c);
int main()
{
    int n;
    cin>>n;
    hanoi(n,'A','B','C');
    cout<<"��ɣ�";
    return 0;
}

void hanoi(int n,char a,char b,char c)
{
    if(n==1)
    {
        move(a,c);
    }
    else
    {
        hanoi(n-1,a,c,b);//����������䰴˳��ִ�����ʱ������������
        move(a,c);
        hanoi(n-1,b,a,c);//����������Ӧ������������衣
    }
}

void move(char sour,char dest)
{
    cout<<"��"<<sour<<"ʯ���������Բ���ƶ���"<<dest<<"ʯ����"<<endl;
}
