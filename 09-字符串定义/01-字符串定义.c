/*
## 定义字符串的具体格式　
　　
1，char 字符串名称[字符串长度] = {字符串所含元素};
注意点：如果字符串所含元素中我们没有加上'\0'，那么字符串长度应该就为字符串实际长度+1；
例如 ：char name[6] = {'T', 'o', 'm', 'H', 'e'};

2，char 字符串名称[] = {字符串所含元素};
注意点：通过这种方式来定义字符串，则需要在{}中写上'\0'；
例如：char name[] = {'T', 'o', 'm', 'H', 'e', '\0'};

3，char 字符串名称[] = "字符串所包含元素"　　　　
注意点：通过这种方式来定义字符串的底层原理其实就是将"TomHe"，转换为了{'T', 'o', 'm', 'H', 'e', '\0'};
例如：char name[] = "TomHe"; <==> char name[] ={'T', 'o', 'm', 'H', 'e', '\0'};

*/
#include <stdio.h>
int main()
{
    char str1[6] = {'T', 'o', 'm', 'H', 'e'};
    char str2[] = {'7', '8', '8', '\0'};
    char str3[] = "Tomhe789";
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("str3 = %s\n", str3);

    return 0;
}
