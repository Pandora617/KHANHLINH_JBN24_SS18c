#include<stdio.h>
struct sinhvien{
	int id;
	char name[50];
	int tuoi; 
	char sdt[30];
}; 

void goiten(struct sinhvien danhsach[] , int size ){
	printf("danh sach ");
	for(int i = 0 ;i < size ;i++){
		printf("id: %d , ten : %s , tuoi: %d, std: %s\n",danhsach[i].id , danhsach[i].name ,danhsach[i].tuoi, danhsach[i].sdt);
	}
}

void saukhithem(struct sinhvien danhsach[],int size ){
	printf("danh sach sau khi sua ");
	for(int i = 0 ;i < size;i++){
		printf("id: %d , ten : %s , tuoi: %d, std: %s\n",danhsach[i].id , danhsach[i].name ,danhsach[i].tuoi, danhsach[i].sdt);
	}
}

int main(){
	
struct sinhvien	danhsach[50] = {
	{1,"do hong ky ", 18 , "0123456789",},
	{2,"Nguyen Xuan Bach",34 ,"987456321 "},
	{3,"ahihi ", 12 , " 123456"},
	{4, "Pham Thi D", 22, "0223344556"},
    {5, "Hoang Van E", 23, "0334455667"}
};
	
	
	int size = 5;
	goiten(danhsach, size );
	if(size < 50 ){
		printf("\nnhap thong tin sv moi ");
		
		printf("\nid: ");
        scanf("%d",&danhsach[size].id);
		
		printf("ten: ");
		getchar();  
        fgets(danhsach[size].name, sizeof(danhsach[size].name), stdin);
        
		printf("tuoi: ");
        scanf("%d", &danhsach[size].tuoi);
		
        printf("sdt: ");
        scanf("%s",danhsach[size].sdt);
        
        size++;
	}
	
	saukhithem(danhsach,size );
	
	return 0;
} 
