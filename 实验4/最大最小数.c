#include<stdio.h>
int input();
int main(){
    //输入部分
    int a[100];
    int count=0;
    //输入提示
    printf("请输入10个数，用任意字符隔开：\n");
    //接收返回的数组长度
    count=input(a);
    //根据返回长度建立数组
    int num[count];
    //把a数组的值，赋值到num中
    for(int i=0; i<count; i++){
        num[i]=a[i];
        //printf("%d\n",num[i]);
    }

    //比较最大最小值
    int min=num[0], max=num[0];
    for(int j=0; j<count; j++){
        if(num[j]>max){
            max=num[j];
        }else if (num[j]<min)
        {
            min=num[j];
        }else{
            continue;
        }
    }
    printf("%d\t%d\n",max, min);
    return 0;
}
//用于输入一行数组，数组个数不超过100，返回个数
int input(int *a){
    int len=0;
    char ch;
    //读取输入数组，直到读入回车字符则停止
    do{
        scanf("%d%c",&a[len],&ch);
        len++;
    }while(ch!='\n');
    return len;
}

