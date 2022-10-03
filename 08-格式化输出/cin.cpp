#include <iostream>
using namespace std;  //不加这个就需要在前面加 std::
int main()
{
    int a;
    cin >> a;
    cout << "int var :" << a << endl;


    float b;
    cin >> b;
    cout << " float var:" << b << endl;

    char c;
    cin >> c;
    cout << " char var:" << c << endl;

    string str;
    cin >> str;
    cout << " string var: " << str << endl;

    return 0;
}