#include<stdio.h>
int printchar(char *s);
int main(){
	char str[20];
	printf("Enter a word.\n");
	fgets(str, 20, stdin);
	printchar(str);
	printf("\n");
	return 0;
}

int printchar(char *s){
	char *str;
	str=s;
	while(*str!='\0'){
		printf("%c",*str);
		str=str+2;
	}
	return 0;
}
