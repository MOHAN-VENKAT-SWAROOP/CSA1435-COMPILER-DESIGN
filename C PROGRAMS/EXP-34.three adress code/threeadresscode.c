#include<stdio.h>
int main(){
	char array[20];
	int op1,op2;
	printf("enter the number of operators:");
	scanf("%d",&op1);
	printf("enter the number of operands:");
	scanf("%d",&op2);
	printf("enter the expression\n");
	int total=op1+op2;
	scanf("%s",array);
	int num=2,val=3,val1=4;
	for(int i=1;i<op2;i++){
		if(i==1){
			printf("t1=%c%c%c\n",array[0],array[1],array[2]);
		}
		printf("t %d = t%d %c %c\n",num,num-1,array[val],array[val1]);
		val+=2;
		val1+=2;
		num++;		
		}
	
	return 0;
	}