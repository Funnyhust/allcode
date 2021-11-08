#include<stdio.h>

int main(){
	float a,b;
	printf("Chieu dai_Chieu rong=");
	scanf("%f %f",&a,&b);
	if(a>0&&b >0){
		float C=2*(a+b);
		float S=a*b;
		printf("Chu vi = %f\n",C);
		printf("Dien tich = %f",S);
		
	} else{
		printf("Errol");
	}
	
	return 0;
}
