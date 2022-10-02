#include <stdio.h>
//Calculate Sum
void sum(int a, int b){
	int tong = a+b;
	printf("SUM: %d\n",tong);
}

//Calculate Substraction
void sub(int a, int b){
	int hieu= a-b;
	printf("Substraction: %d\n",hieu);
}
//Calculate Multiplication
void mul(int a, int b){
	int nhan= a*b;
	printf("Multiplication: %d\n",nhan);
}
//Calculate Division
void div(int a, int b){
	double chia=(a/b);
	printf("Calculate Division: %f",chia);
}
int main(){
	int a,b;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	sum(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
}
