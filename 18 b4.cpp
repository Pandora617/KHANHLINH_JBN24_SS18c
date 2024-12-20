#include<stdio.h>
int main (){
	struct student {
		int id;
		char name[50];
		int tuoi;
		char sdt[15];	
	};
	struct student so[5];


for (int i = 1 ;i < 5;i++){
	
	
	printf("sv so %d ",i);
	printf("\nid la: %d",i);
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
        printf("\nSinh viên %d:\n", i);
    	for(int j=1;j<5;j++){
    		printf("id la : %d",i);
    		break;
		}
	    printf("\nten: %s", so[i].name);
        printf("tuoi: %d", so[i].tuoi);
        printf("\nsdt: %s", so[i].sdt);
    }
	return 0;
}
