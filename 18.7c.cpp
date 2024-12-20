#include<stdio.h>
#include<string.h> 
 struct hocsinh{
 	int id;
 	char name[50];
 	int tuoi;
 	char sdt[30];
 };

void xuat (struct hocsinh danhsach[50] , int size){
	for (int i = 0 ;i < size ;i++){
		printf("id: %d , name: %s , tuoi: %d , sdt: %s\n" , danhsach[i].id ,danhsach[i].name ,danhsach[i].tuoi , danhsach[i].sdt );
	}
}



int main(){
  	struct hocsinh danhsach[50]= {
  	{1,"Pham Khanh Linh", 18 , "266227",},
	{2,"Nguyen Thi Mai",37 ,"987456321 "},
	{3,"Nguyen thi Hoa", 78 , " 72727272"},
	{4, "Tran Van Trung", 67, "2662727"},
    {5, "Nguyen Thi Huong", 44, "5754676"}
};
	  
	int size = 5;
	xuat (danhsach , size);
	
char xoaname[50];
printf("nhap ten muon xoa: ");	
fgets(xoaname , sizeof(xoaname), stdin);
xoaname[strcspn(xoaname, "\n")] = 0; 


for(int i = 0 ; i < size ;i++){
	if(strcmp(xoaname, danhsach[i].name) == 0){
	for (int j = i ; j < size-1;j++){
		danhsach[j] = danhsach[j+1];
	}	
		size--;
		break;
	}	
}



xuat (danhsach , size);
	
	return 0;
}
