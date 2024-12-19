#include<stdio.h>
#include<string.h>
void nhap(char *a){
    printf("nhap vao chuoi muon nhap: ");
    fflush(stdin);
    fgets(a,100,stdin);
}
void xuat(char *a){
	printf("chuoi vua nhap la: ");
	fputs(a,stdout);
}
int demcai(char a){
     return (a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z');
	}
int demso(char a){
	return (a>='0'&&a<='9');
}
int demkytu(char a){
	return !demcai(a)&&!demso(a);
}
int main(){
		char c[100];
	while(1){
		printf("\nMENU\n");
		printf("1.nhap vao chuoi\n");
		printf("2.in ra chuoi\n");
		printf("3.dem so luong chu cai trong chuoi va in ra\n");
		printf("4.dem so luong chu so trong chuoi va in ra\n");
		printf("5.dem so luong ki tu dac biet trong chuoi va in ra\n");
		printf("6.thoat\n");
		int luachon;
		printf("moi xep chon: ");
		scanf("%d",&luachon);
		switch(luachon){
			case 1:{
				nhap(c);
				break;
			}
			case 2:{
				xuat(c);
				break;
			}
			case 3:{
				int demcai1=0;
				for(int i=0;i<strlen(c);i++){
					if(demcai(c[i])){
						demcai1++;
					}
				}
				printf("so luong chu cai trong chuoi la: %d",demcai1);
				break;
			}
			case 4:{
				int demso1=0;
				for(int i=0;i<strlen(c);i++){
					if(demso(c[i])){
						demso1++;
					}
				}
				printf("so luong chu so co trong mang la: %d",demso1);
				break;
			}
			case 5:{
				int demkytu1=0;
				for(int i=0;i<strlen(c);i++){
					if(demkytu(c[i])){
						demkytu1++;
					}
				}
				printf("so luong ky tu co trong chuoi la: %d", demkytu1);
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
