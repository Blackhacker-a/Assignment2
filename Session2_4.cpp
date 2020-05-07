#include<stdio.h>
int main(){
	int a1,a2,a3,a4,a5;
	printf("Nhap vao 5 so ban muon tinh tong\n ");
	printf("Nhap vao so thu nhat ");
	scanf("%d",&a1);
	printf("Nhap vao so thu hai ");
	scanf("%d",&a2);
	printf("Nhap vao so thu ba ");
	scanf("%d",&a3);
	printf("Nhap vao so thu tu ");
	scanf("%d",&a4);
	printf("Nhap vao so thu nam ");
	scanf("%d",&a5);
	int s=a1+a2+a3+a4+a5;
	printf("Tong cua 5 so vua nhap la %d+%d+%d+%d+%d=%d",a1,a2,a3,a4,a5,s);
}

