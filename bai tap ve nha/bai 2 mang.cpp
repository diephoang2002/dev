#include<stdio.h>

int main(){
	
	int mang [100], n, i , min;
	printf("nhap n = ");
	scanf("%d",&n);
	for(i = 0;i < n; i++)//nhap mang

		printf("mang[%d] = ", i);
		scanf("%d",&mang[i]);
	min = mang[0];
	for(i = 1; i < n; i++) //tim so duong nho nhat {
		if(mang[i] < min ){
	   min = mang[i];
	}
}	
	   
