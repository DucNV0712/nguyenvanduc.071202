#include <stdio.h>
int main(){
	int n,i=1,S=0;
	 printf("nhap n:");
	 scanf("%d",&n);
	 
	 while(i<=n){
	 	S+=i,i++;
	 }
	 printf("S=%d",S);		
}
