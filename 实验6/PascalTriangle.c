/*
杨辉三角，是二项式系数在三角形中的一种几何排列。在欧洲，这个表叫做帕斯卡三角形。
帕斯卡（1623----1662）是在1654年发现这一规律的，比杨辉要迟393年，比贾宪迟600年。
输入
1行：
n,杨辉

输出
n行：
杨辉三角的n行，每个元素点位宽度为6，靠右对齐。
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number.\n");
    scanf("%d",&n);
    int a[n][n];
    //三角的两边赋值为1
    for(int i=0; i<n; i++){
        a[i][i]=1;
        a[i][0]=1;
    }
    //从第三行开始，中间的每一个元素，等于该元素上面一个元素与左上元素之和
    for(int i=2; i<n; i++){
        for(int j=1; j<i; j++){
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("%6d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}