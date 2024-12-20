#include<stdio.h>
struct student {
		int id;
		char name[50];
		int tuoi;
		char sdt[15];	
	};
void goiten(struct student danhsach[] ){
	printf("danh sach ");
	for(int i = 0 ;i < 5;i++){
		printf("id: %d , ten : %s , tuoi: %d, std: %s\n",danhsach[i].id , danhsach[i].name ,danhsach[i].tuoi, danhsach[i].sdt);
	}
}

void saukhisua(struct student danhsach[] ){
	printf("danh sach sau khi sua ");
	for(int i = 0 ;i < 5;i++){
	printf("\nid: %d , ten : %s , tuoi: %d, std: %s\n",danhsach[i].id , danhsach[i].name ,danhsach[i].tuoi, danhsach[i].sdt);
	}
}

int main (){
    struct student danhsach[50] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Le Thi B", 21, "0987654321"},
        {3, "Tran Van C", 19, "0112233445"},
        {4, "Pham Thi D", 22, "0223344556"},
        {5, "Hoang Van E", 23, "0334455667"}
    };
		goiten(danhsach );



int cansua;
printf("nhap id can sua: ");
scanf("%d",&cansua);
int a;
for(int i = 0 ;i < 5 ;i++){
	if(cansua == danhsach[i].id){
		a=1;
		printf("\nnhap ten moi: ");
		scanf(" %[^\n]s", danhsach[i].name);
		printf("nhap tuoi moi: ");
		scanf("%d",&danhsach[i].tuoi);
		printf("nhap sdt moi: ");
		scanf("%s",&danhsach[i].sdt);
	}
	break;
}
    saukhisua( danhsach);
	return 0;
}
