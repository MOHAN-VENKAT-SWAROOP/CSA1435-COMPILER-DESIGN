#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int singleline=0,multiline=0;
	printf("enter the input:");
	fgets(str,sizeof(str),stdin);
	int len=strlen(str);
	if(len >= 2 && strncmp(str,"//",2)==0){
		singleline=1;
	}
	 if (len >= 4 && strncmp(str, "/*", 2) == 0 && strncmp(str + len - 3, "*/", 2) == 0) {
        multiline = 1;
    }
    if(singleline || multiline){
    	printf("it is comment");
	}
	else{
		printf("it is not comment");
	}
}
