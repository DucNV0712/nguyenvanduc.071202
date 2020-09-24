#include <stdio.h>
#include <math.h>
int main(){
	float n,S=0,i=1;
	 printf("nhap n:");
	 scanf("%f",&n);
	 //bài cua Duc
	 
	while(n>=i){
		S+=1/i;
		i++;
	}
	printf("Ket Qua:%f",S);
}

