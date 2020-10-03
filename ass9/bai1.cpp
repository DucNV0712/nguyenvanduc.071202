#include<stdio.h>
#include<string.h>

int main(){
	char n;
	char s[100];	
	printf("nhap chuoi:");
	scanf("%s",s);
	char temp;
	
	int size= strlen(s);
 
    for (int i = 0; i < size-1; i++){
      for (int j = i+1; j < size; j++) {
         if (s[i] > s[j]) {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
         }
      }
   }
   printf("chuoi sap xep:%s\n",s);
   
}
