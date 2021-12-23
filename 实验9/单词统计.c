#include<stdio.h>
int wordCount(char *s);
int main(){
	char str[100];
	printf("Enter a sentence:\n");
	fgets(str,100,stdin);
	printf("单词个数：%d.\n",wordCount(str));
	return 0;
}
int wordCount(char *s){
	int count=0;
	char *str;
	str=s;
	if(str!=NULL){
		count++;
	}
	while(*str!='\0'){
		if(*str==' '){
			count++;
		}
		str++;
	}	
	return count;
}
