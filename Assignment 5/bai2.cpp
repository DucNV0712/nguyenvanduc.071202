#include <stdio.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	
	while(n<=0);
	int S=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			S+=i;
		}
	}
	printf("%d",S);	
}
