 //nhap vao 2 so nguyen, tinh tong va hieu hai so do 
 
#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap vao so nguyen a \n");
	scanf("%d",&a);
	printf("Nhap vao so nguyen b \n");
	scanf("%d",&b);
	int x=a+b;
	int y=a-b;
    printf("Tong cua hai so %d va %d la %d\n",a,b,x);
	printf("Tong cua hai so %d va %d la %d\n",a,b,y);
	
	return 0;
	
	}	
