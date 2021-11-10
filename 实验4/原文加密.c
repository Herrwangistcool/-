/*
编程实现一个简单的加密方法，把所有字母用它后面第四个字母代替，数字和符号不变，如A替换成E，z替换成d。
*/
#include<stdio.h>
int main(){
    char c;
    //输入字符“#”退出程序
    while ((c=getchar())!='#')
    {
        if((int)c>=65 && (int)c<=90){
            c=(c+4-65)%26+65;
        }else if ((int)c>=97 && (int)c<=122)
        {
            c=(c+4-97)%26+97;
        }
        putchar(c);
    }
    putchar('\n');
    return 0;
}