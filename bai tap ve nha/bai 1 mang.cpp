#include<stdio.h>
int main(){
    int n;
    int a[100];
    printf("nhap n");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
    	printf("nhap phan tu thu a[%d]: ",i);
    	scanf("%d",&a[i]);
    }
	for(int i=n-1;i>=0;i--){
		if(a[i]%2 != 0){
			printf("phan tu le cuoi cung cua mang la: %d",a[i]);
			break;
		}
	}
	}		
