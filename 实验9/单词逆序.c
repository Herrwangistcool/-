#include<stdio.h>
#include<string.h>
int wordReverse(char *s, char wd[10][20]);
int main(){
	char str[100];
	printf("Enter a sentence:\n");
	gets(str);
	char wd[10][20];
	int row=wordReverse(str,wd);
	for(int i=row; i>=0; i--){
		printf("%s",wd[i]);
	}
	printf("\n");
	return 0;	
}

int wordReverse(char *s, char wd[10][20]){
	int count;
	count=strlen(s);
	int row=0;
	int j=0;
	while(*s!='\0'){
		*(*(wd+row)+j)=*s;
		j++;
		if(*s==' '){
			row++;
			j=0;
		}
		s++;	
	}
	return row;	
}
