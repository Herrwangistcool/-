#include<stdio.h>
int main(){
	int  score, s_t;
	char grade;
	printf("Input a student score:\n");
	scanf("%d",&score);
	s_t=score/10;
	if(score<0 || score>100){
		printf("Input error!\n");
	}else{
		switch(s_t){
			case 10:
			case 9: 
				grade='A';
				break;
			case 8:
				grade='B';
				break;
			case 7:
				grade='C';
				break;
			case 6:
				grade='D';
				break;
			default:
				grade='E';
		}
		printf("the student grade:\n%c\n",grade);
	}
	return 0;
}
