#include<stdio.h>
int main (){
	struct student {
		char name[50];
		int tuoi;
		char sdt[15];	
	};
	struct student so[5];


for (int i = 1 ;i < 5;i++){
	printf("sv so %d ",i);
	
	printf("\nten: ");
	fgets(so[i].name,sizeof(so[i].name),stdin);
	fflush(stdin);
	printf("tuoi:");
	scanf("%d",&so[i].tuoi);
	fflush(stdin);
	printf("sdt: ");
	scanf("%s",&so[i].sdt); 
	fflush(stdin);

}



for (int i = 1; i < 5; i++) {
        printf("Sinh viên %d:\n", i);
        printf("ten: %s\n", so[i].name);
        printf("tuoi: %d\n", so[i].tuoi);
        printf("sdt: %s\n", so[i].sdt);
    }
	return 0;
}
