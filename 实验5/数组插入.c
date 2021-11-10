#include<stdio.h>
int main(){
    int a[10]={2,5,7,10,14,17,20};
    int n, i;
    scanf("%d",&n);
    for(i=0; i<7;i++){
        if(n<=a[i]){
            for(int j=7; j>i; j--){
                a[j]=a[j-1];
                //printf("%d\n",a[j]);
            }
            a[i]=n;
            //printf("%d\n",a[i]);
            break;
        }else if (n>a[6])
        {
            a[7]=n;
        } 
    }
    for(int k=0; k<8; k++){
        printf("%d\t",a[k]);
    }
    printf("\n");
    return 0;
}