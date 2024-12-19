#include<stdio.h>
void nhap(int *arr, int *size){
	printf("nhap vao so luong phan tu trong mang: ");
	scanf("%d",size);
	for(int i=0;i<*size;i++){
		printf("arr[%d]=",i);
		scanf("%d",arr+i);
	}
}
void hien(int *arr, int *size){
	for(int i=0;i<*size;i++){
		printf("%d ",*(arr+i));
	}
}
int dodai(int *arr, int *size){
	return *size; 
} 
int tong( int *arr, int *size){
	int sum=0;
	for(int i=0;i<*size;i++){
		sum+=*(arr+i);
	}
	return sum;
}
int max(int *arr, int *size){
	int max=*arr;
	for(int i=0;i<*size;i++){
		if(*(arr+i)>max){
			max=*(arr+i);
		}
	}
	return max;
}
int main(){
		int a[100];
		int n;
	while(1){
		printf("\nMENU\n");
		printf("1.nhap so so phan tu va tung phan tu\n");
		printf("2.hien thi cac phan tu trong mang\n");
		printf("3.tinh do dai mang\n");
		printf("4.tinh tong cac phan tu trong mang\n");
		printf("5.hien thi phan tu lon nhat\n");
		printf("6.thoat\n");
		int luachon;
		printf("moi xep chon: ");
		scanf("%d",&luachon);
		switch(luachon){
			case 1:{
				nhap(a,&n);
				break;
			}
			case 2:{
				hien(a,&n);
				break;
			}
			case 3:{
				printf("do dai cua mang la: %d",dodai(a,&n));
				break;
			}
			case 4:{
				printf("tong cac gia tri cua mang la: %d",tong(a,&n));
				break;
			}
			case 5:{
				printf("phan tu lon nhat trong mang la: %d", max(a,&n));
				break;
			}
			case 6:{
				printf("ban da thoat !!");
				return 0;
			}
			default:
				printf("lua chon khong hop le vui long nhap lai!!");
				break;
		}	
	}
	return 0;
}
