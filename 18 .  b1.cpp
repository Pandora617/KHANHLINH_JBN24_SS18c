#include<stdio.h>
int main (){
	struct student {
		char name[50];
		int tuoi;
		char phoneNumber[15];	
	};
	
	struct student so01 = {
		"Do Hong Ky",
		18,
		"0123456789"
		};
	
	printf("ten: %s",so01.name);
	printf("\ntuoi: %d",so01.tuoi);
	printf("\nsdt: %s",so01.phoneNumber);
	
	
	return 0;
}
