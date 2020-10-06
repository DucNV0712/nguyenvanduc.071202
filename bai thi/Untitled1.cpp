#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c;
	printf("nhap a:");
	scanf("%f",&a);
	
	printf("nhap b:");
	scanf("%f",&b);
	
	printf("nhap c:");
	scanf("%f",&c);
	
	if(a>0&&b>0&&c>0){
		if(a<c+b&&b<a+c&&c<a+b){
			float CV,p,Dtich;
			CV=a+b+c;
			p=CV/2;
			Dtich=sqrt(p*(p-a)*(p-b)*(p-c));
			
			printf("CV la:%f\n",CV);
			printf("Dien Tich la:%f\n",Dtich);		
		}else{
			printf("day khong phai ba canh cua tam giac");
		}
	
	}else{
		printf("nhap lai a,b,c>0");
	}

	
}
