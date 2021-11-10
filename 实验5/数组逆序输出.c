#include<stdio.h>
int main(){
    int a[100];
    char ch;
    int len=0;
    do{
        scanf("%d%c",&a[len],&ch);
        len++;
    }while(ch!='\n');
    int a_mirror[len];
    for(int i=0; i<len; i++){
        a_mirror[i]=a[len-i-1];
        printf("%d ", a_mirror[i]);
    }
    printf("\n");
    return 0;
}
