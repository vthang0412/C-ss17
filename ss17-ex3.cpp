#include<stdio.h>
#include<string.h>
void nhap(char *a);
void daonguoc(char *a);
void demtu(char *a);
void sosanhchuoi(char *a, char *b);
int demcai(char a);
int demso(char a);
int demkytu(char a);
char vietHoa(char a);
void themchuoi(char *a,char*b);
int main(){
		char c[100];
		char d[100];
	while(1){
		printf("\nMENU\n");
		printf("1.nhap vao chuoi\n");
		printf("2.in ra chuoi dao nguoc\n");
		printf("3.dem so luong tu trong chuoi va in ra\n");
		printf("4.nhap vao chuoi khac so sanh voi chuoi ban dau in ra chuoi ngan hon\n");
		printf("5.dem so luong ki tu dac biet trong chuoi va in ra\n");
		printf("6.in hoa tat ca chu cai trong chuoi\n");
		printf("7.nhap vao chuoi khac va them chuoi do vao chuoi ban dau\n");
		printf("8.thoat\n");
		int luachon;
		printf("moi xep chon: ");
		scanf("%d",&luachon);
		switch(luachon){
			case 1:{
				nhap(c);
				break;
			}
			case 2:{
				printf("chuoi dao nguoc la: ");
				daonguoc(c);
				break;
			}
			case 3:{
				demtu(c);
				break;
			}
			case 4:{
				sosanhchuoi(c,d);
				break;
			}
			case 5:{
				int demkytu1=0;
				for(int i=0;i<strlen(c);i++){
					if(demkytu(c[i])){
						demkytu1++;
					}
				}
				printf("so luong ky tu trong chuoi la: %d",demkytu1);
				break;
			}
			case 6: {
            for (int i = 0; i < strlen(c); i++) {
            if (c[i] != '\n') { 
            c[i] = viethoa(c[i]);
        }
    }
    printf("Chuoi sau khi viet hoa la: %s", c); 
    break;
}
			case 7:{
				themchuoi(c,d);
				break;
			}
			case 8:{
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
void nhap(char *a){
    printf("nhap vao chuoi muon nhap: ");
    fflush(stdin);
    fgets(a,100,stdin);
}
void daonguoc(char *a){
	for(int i=strlen(a);i>=0;i--){
		printf("%c",*(a+i));
	}
}
void demtu(char *a){
	int demtu1=0;
	for(int i=0;i<strlen(a);i++){
		if(*(a+i)==' '){
			if(*(a+i+1)!=' '){
				demtu1++;
			}
		}
	}
	printf("so luong tu trong chuoi la: %d",demtu1+1);
}
void sosanhchuoi(char *a, char *b){
	printf("nhap chuoi thu hai: ");
	fflush(stdin);
	fgets(b,100,stdin);
	if(strlen(a)>strlen(b)){
		printf("chuoi ngan hon la: ");
		for(int i=0;i<strlen(b);i++){
			printf("%c",*(b+i));
		}
	}else if(strlen(a)==strlen(b)){
		printf("hai chuoi bang nhau");
	}
	else{
	    printf("chuoi ngan hon la: ");
		for(int i=0;i<strlen(a);i++){
		printf("%c",*(a+i));	
	}
}
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
char viethoa(char a) {
    if (a >= 'a' && a <= 'z') {
        return a - ('a' - 'A');
    }
    return a;
}
void themchuoi(char *a,char*b){
	printf("nhap chuoi thu hai: ");
	fflush(stdin);
	fgets(b,100,stdin);
	strcat(a, b);
	printf("\nchuoi sau khi noi la: %s",a);
}
