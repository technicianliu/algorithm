/*
思路：
1、将A塔上N-1个盘借助C(目标塔)移到B塔上
2、将A塔上唯一的盘移到C塔上
3、将B塔上所有的盘借助A塔移到C塔上
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
    cout<<"完成！";
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
        hanoi(n-1,a,c,b);//当这三条语句按顺序执行完的时候，任务就完成了
        move(a,c);
        hanoi(n-1,b,a,c);//这三条语句对应上面的三个步骤。
    }
}

void move(char sour,char dest)
{
    cout<<"把"<<sour<<"石柱最上面的圆盘移动到"<<dest<<"石柱上"<<endl;
}
