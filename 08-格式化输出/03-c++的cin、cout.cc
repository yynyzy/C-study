#include <iostream>
using namespace std;  //不加这个就需要在前面加 std::
int main()
{
    int a;
    float b;
    char c;
    char str[10];
    std::cin >> a;
    cin >> b;
    cin >> c;
    cin >> str;

    std::cout << "int var :" << a << endl;
    cout << " float var:" << b << endl;
    cout << " char var:" << c << endl;
    cout << " string var: " << str << endl;
    return 0;
}