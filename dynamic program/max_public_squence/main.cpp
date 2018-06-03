//最长公共子序列，输入两个字符串，找两个字符串的最长公共子序列
// 子序列可以不连续，但是字符顺序与串中字符顺序一样

//输入两个字符串s1,s2.
//设max_len(i,j)表示：
//s1左边的i个字符形成的子串，与s2左边的j个字符形成的子串
//的最长公共子序列的长度(i,j从0开始算)
//max_len(i,j)就是本题状态，表示从s1中拿i个字符，从s2中拿j个字符的最长公共子序列
//若len1=strlen(s1),len2=strlen(s2).那么就是求max_len(len1-1,len2-1);
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
