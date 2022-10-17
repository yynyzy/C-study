#include<iostream>
using namespace std;

int main ()
{
    int score = 0;
    int c = 0;
    cout << "请输入你的成绩" << endl;
    cin >> score;
    if(score>600)
    {
        cout<< "一本大学"<< endl;
    }else if(score > 300)
    {
        cout<< "普通大学"<< endl;
    }else
    {
        cout<<"没有学"<<endl;
    }
    /*
    *   三目运算符,c++中对返回值可以继续做操作
    */
    c = (score > 400 ? score : 0) + 101;
    cout<<"c="<<c<<endl;
    return 0;
}