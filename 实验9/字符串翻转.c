#include<stdio.h>
#include<string.h>
int strReverse(char *s);
int main(){
	char str[80];
	printf("Enter a sentence:\n");	
	fgets(str,80,stdin);
	int count;
	count=strReverse(str);
	for(int i=0; i<count; i++){
		printf("%c",str[i]);
	}
	printf("\n");
	return 0;
}
int strReverse(char *s){
	char *str;
	int count=0;
	count=strlen(s);
	str=s+count-1;
	while(s<str){
		char tmp;
		tmp=*str;
		*(str--)=*s;
		*(s++)=tmp;
	}
	return count;
}
