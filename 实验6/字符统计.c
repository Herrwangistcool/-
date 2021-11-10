/*
有一段文章，共有3行文字，每行有80个字符。
要求分别统计出其中英文大写字母、小写字母、空格、数字以及其他字符的个数。
输入
3行：
每行输入80个字符。
输出
1行：
分别输出大写字母、小写字母、数字、空格以及其他字符的个数。
*/
#include<stdio.h>
#include<string.h>
int main(){
    char s[3][80];
    //大写字母个数，小写字母个数，空格个数，数字个数，其他字符个数
    int Upper=0, Lower=0, space=0, number=0, other=0;
    for(int i=0; i<3; i++){
        int j=0;
        do{
            scanf("%c",&s[i][j]);
            if(s[i][j]==' '){
                space++;
            }else if (s[i][j]>=65 && s[i][j]<=90)
            {
                Upper++;
            }else if (s[i][j]>=97 && s[i][j]<=122)
            {
                Lower++;
            }else if (s[i][j]>=48 && s[i][j]<=57)
            {
                number++;
            }else{
                other++;
            }                        
        }while(s[i][j]!='\n');
    }
    printf("Upper: %d\n",Upper);
    printf("Lower: %d\n",Lower);
    printf("space: %d\n",space);
    printf("number: %d\n",number);
    printf("other: %d\n",other-3);  //减去三个'\n'
    return 0;
}