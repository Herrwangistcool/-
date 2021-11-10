#include<stdio.h>
int main(){
	float i, bonus;
	printf("Input the profit for the month:\n");
	scanf("%f",&i);
	if(i<0){
		printf("No Bonus!\n");	
	}else{
		if(i<=100000){
			bonus=i*0.1;
		}else if(i>100000 && i<=200000){
			bonus=100000*0.1+(i-100000)*0.075;
		}else if(i>200000 && i<=400000){
			bonus=100000*0.1+(200000-100000)*0.075+(i-200000)*0.05;
		}else if(i>400000 && i<=600000){
			bonus=100000*0.1+(200000-100000)*0.075+(400000-200000)*0.05+(i-400000)*0.03;
		}else if(i>600000 && i<=100000){
			bonus=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(i-600000)*0.015;
		}else{
			bonus=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(i-1000000)*0.01;	
		}
		printf("The bonus is %.2f.\n",bonus);
	}
	return 0;
}
