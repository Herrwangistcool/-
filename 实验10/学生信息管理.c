#include<stdio.h>
#include<malloc.h>
#include<string.h>

typedef int Status;

//学生信息内容
typedef struct{
	char stu_ID[10];
	char name[20];
	float score[3];
	float total;
}student;

typedef student ElemType;

//链表结构
typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode, *LinkList;

//链表初始化
Status InitList(LinkList *L);

//显示学生信息
void Output(ElemType *e);

//获取学生信息
Status GetElem(LinkList L, int i, ElemType *e);

//在指定位置插入某个学生信息
Status ListInsert(LinkList L, int i, ElemType e);

//根据名字进行查找
Status Search(LNode L, char str[], LinkList *p);

//删除指定位置的学生信息
Status ListDelete(LinkList L, int i);

//学生总分排序，从高到低
Status StuSort(LinkList L);

//输入学生信息
void Input(ElemType *e);

int main(){
	LinkList L;
	int n, choose;	//学生个数以及菜单序号
	ElemType a, b;	//用于暂存学生信息
	printf("\n1.构造链表\n");
	printf("2.输入学生信息\n");
	printf("3.显示学生表信息\n");
	printf("9.退出\n\n");
	while(1){
		printf("请选择：");
		scanf("%d",&choose);
		if(choose==9)	break;
		switch(choose){
			case 1: if(InitList(&L)){
						printf("成功建立链表\n");
					}else{
						printf("失败");
					}
					break;
			case 2: printf("请输入要录入的学生人数：");
					scanf("%d",&n);
					for(int i=1; i<=n; i++){
						printf("第%d个学生：\n",i);
						Input(&a);
						ListInsert(L, i, a);
					}
					break;
			case 3: for(int i=1; i<=n; i++){
						GetElem(L,i,&b);
						Output(&b);
					}
					break;
		}
	}
}

Status InitList(LinkList *L){
	(*L)=(LinkList)malloc(sizeof(LNode));
	(*L)->next=NULL;
	return 1;
}
void Output(ElemType *e){
	printf("学号：%s\t姓名：%s\t成绩1：%.1f\t成绩2：%.1f\t成绩3：%.1f\n",
	e->stu_ID,e->name,e->score[0],e->score[1],e->score[2]);
}
Status GetElem(LinkList L, int i, ElemType *e){
	LinkList P;
	P=L->next;
	int j=1;
	while (P&&j<i){
		//P不为空，j小于i
		P=P->next;
		j++;
	}
	if(!P || j>i){
		//如果P为空，或j大于i
		return 0;
	}
	*e=P->data;
	return 1;
}
Status ListInsert(LinkList L, int i, ElemType e){
	LinkList P, S;
	P=L;
	int j=0;
	while(P && j<i-1){
		//j小于i-1，空出i的位置
		P=P->next;
		j++;
	}
	if(!P || j>i-1){
		return 0;
	}
	S=(LinkList)malloc(sizeof(LNode));
	S->data=e;	//把e的值赋给新节点的数据部分
	S->next=P->next;	//把第i-1个节点的下一个节点位置赋给新建节点的next
	P->next=S;	//第i-1的next指向新建节点
	return 1;
}
void Input(ElemType *e){
	printf("学号：");	scanf("%s",e->stu_ID);
	printf("姓名：");	scanf("%s",e->name);
	printf("成绩1：");	scanf("%f",&e->score[0]);	//这里一定要用取地址符，原因未知？
	printf("成绩2：");	scanf("%f",&e->score[1]);
	printf("成绩3：");	scanf("%f",&e->score[2]);
	printf("输入完成\n");
}

// Status StuSort(LinkList L){
// 	LinkList P;
// 	P=L->next;
// 	float Max=0;
// 	while(P){
// 		//*(P)->data.total=*(P)->data.score[0]+*(P)->data.score[1]+*(P)->data.score[2];
// 		P->data.total=P->data.score[0]+P->data.score[1]+P->data.score[2];
// 		if(P->data.total>Max){
// 			Max=P->data.total;
// 		}
// 		P=P->next;
// 	}
	
// }