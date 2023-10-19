#include <stdio.h>
#include <string.h> 
void coment(char *a)

{
	int len=strlen(a);
	if(a[0]=='/'&&a[1]=='/'||a[0]=='/'&&a[1]=='*'||a[len-1]=='*'&&a[len-2]=='/')	
	 {	
	 printf("\nIt is comment");}
  else
  {
	 	printf("\nit is not a comment");
	 }}
void deleteblankspaces(char *s)
{
int  i,k=0;
 for(i=0;s[i];i++)
    {
	 s[i]=s[i+k];
	 if(s[i]==' '|| s[i]=='\t'||s[i]== '/'&& s[i+1]=='/')
     	{
		  k++;
		  i--;
	    }}}
int main()
{
 char s[1000];
 char a[50],length,i;
  printf("Enter  the string : ");
  gets(s);
  printf("enter the input string: ");
	scanf("%s",a);
      deleteblankspaces(s);
	  printf("\nstring after removing all duplicates:\n");
	  printf("%s",s);
	  coment(a);
	  return 0;}