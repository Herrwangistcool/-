//输入某年某月，判断这一天是这一年的第几天
#define bool int
#define true 1
#define false 0
#include<stdio.h>
bool IsLeapYear(int);
int main(){
	int year, month, day;
	int date=0;
	printf("Please input the date(year-month-day,like 2015-5-3):\n");
	scanf("%d-%d-%d",&year,&month,&day);
	switch(month){
		case 1:
			date=day;
			break;
		case 2:
			date=31+day;
			break;
		case 3:
			date=59+day;
			break;
		case 4:
			date=90+day;
			break;
		case 5:
			date=120+day;
			break;
		case 6:
			date=151+day;
			break;
		case 7:
			date=181+day;
			break;
		case 8:
			date=212+day;
			break;
		case 9:
			date=243+day;
			break;
		case 10:
			date=273+day;
			break;
		case 11:
			date=304+day;
			break;
		case 12:
			date=334+day;
			break;
		default:
			date=-1;
			break;

	}
	if(date==-1){
		printf("Error!\n");
	}else if(IsLeapYear(year) && month>2){
		date=date+1;
		printf("%d\n",date);
	}else{
		printf("%d\n",date);
	}
	return 0;
}

bool IsLeapYear(int year){
	if(year%4==0 && year%100!=0 || year%400==0){
		return true;
	}else{
		return false;
	}
}
