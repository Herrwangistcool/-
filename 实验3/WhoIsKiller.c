//日本某地发生了一起谋杀案，凶手是A，B，C，D四个嫌疑人中的一个
//以下为四个嫌疑人的供词
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说。
//已知3个人说了真话，1个人说的是假话。
#include<stdio.h>
int main(){
	char killer;
	int result,r1,r2,r3,r4;
	for(killer='A';killer<='D';killer++){
		r1=killer!='A';
		r2=killer=='C';
		r3=killer=='D';
		r4=killer!='D';
		result=r1+r2+r3+r4;
		if(result==3){
			printf("Killer is %c.\n",killer);
			break;
		}
	}
	return 0;
}
