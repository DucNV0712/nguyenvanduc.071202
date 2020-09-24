#include <stdio.h>

int main(){
	int a,b,c;
	do
	{
		printf("nhap a:");
		scanf("%d",&a);
		
		printf("nhap b:");
		scanf("%d",&b);
		
		printf("nhap c:");
		scanf("%d",&c);
		
	}while(b+c>a&&a+c>b&&a+b>c);
	
}
