#include <stdio.h>
int main(){
	int n;
	printf("nhap n=:");
	int n=0;
	printf("uoc cua n la: ");
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("%d",i);
			n+=i;
		}
	}printf(" tong cac uoc : %d",n);
