//����������У����������ַ������������ַ����������������
// �����п��Բ������������ַ�˳���봮���ַ�˳��һ��

//���������ַ���s1,s2.
//��max_len(i,j)��ʾ��
//s1��ߵ�i���ַ��γɵ��Ӵ�����s2��ߵ�j���ַ��γɵ��Ӵ�
//������������еĳ���(i,j��0��ʼ��)
//max_len(i,j)���Ǳ���״̬����ʾ��s1����i���ַ�����s2����j���ַ��������������
//��len1=strlen(s1),len2=strlen(s2).��ô������max_len(len1-1,len2-1);
//max_len(n,0)=0 max_len(0,n)=0

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

char s1[1001];
char s2[1001];
int max_len[1000][1000];
int main()
{


    while(cin>>s1>>s2)
    {
        int length1=strlen(s1);
        int length2=strlen(s2);

        int i,j;
        for(j=0;j<=length1;j++)
          max_len[0][j]=0;
        for(i=0;i<=length2;i++)
          max_len[i][0]=0;

        for(i=1;i<=length1;i++)
        {
           for(j=1;j<=length2;j++)
           {
               if(s1[i-1]==s2[j-1])
                 max_len[i][j]=max_len[i-1][j-1]+1;
               else
                max_len[i][j]=max(max_len[i-1][j],max_len[i][j-1]);
           }
        }
        cout<<max_len[length1][length2];


    }

   return 0;
}
