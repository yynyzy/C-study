#include<iostream>
using namespace std;
/*   区别在于所占用的数据空间不同
short 短整型            2字节
int   整型              4字节
long  长整型            windows，linux4字节（32位），8字节（64位）
long long  长长整型     8字节
*/
int main()
{
    short num1 = 10;
    int num2 = 11;
    long num3 = 12;
    long num4 = 13;
    cout<<num1<<num2<<num3<<num4<<endl;
    return 0;
}