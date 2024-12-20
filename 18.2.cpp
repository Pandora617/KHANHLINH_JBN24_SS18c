#include<stdio.h>
int main (){
//khai bao
	struct student {
		char name[50];
		int tuoi;
		char phoneNumber[15];	
	};
//nhap
	struct student so01;
	printf("moi ban nhap ten:");	
	fgets(so01.name, sizeof(so01.name),stdin);
	printf("hay nhap tuoi cua ban: ");
	scanf("%d",&so01.tuoi);
	printf("hay nhap sdt cua ban: ");
	scanf("%s",&so01.phoneNumber);
//xuat
	printf("ten: %s",so01.name);
	printf("\ntuoi: %d",so01.tuoi);
	printf("\nsdt: %s",so01.phoneNumber);
	
	
	return 0;
}
