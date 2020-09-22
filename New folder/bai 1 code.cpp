#include <stdio.h>
#include <math.h>
int main(){
	int n,s;
	printf("hay nhap vao so n =");
	scanf("%d",&n);
	s=0;
	for(int i = 0; i <= n;i++){
		s+=i;
	}	
	printf("tong S la: %d",s);	
}
	
	
