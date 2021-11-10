#include<stdio.h>
int main(){
    int m,n;
    n=11;
    m=n/2;
    for(int i=0; i<=m; i++){
        for(int j=0; j<m-i; j++){   //空格数由大到小
            printf(" ");
        }
        for(int k=0; k<i*2+1; k++){ //*数由小到大
            printf("*");
        }
        printf("\n");
    }
    for(int i=m+1; i<n; i++){
        for(int j=0; j<i-m; j++){
            printf(" ");
        }
        for(int k=0; k<(n-i)*2-1; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}