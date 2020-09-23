#include<stdio.h>
#include<math.h>
int _2To10(long sonhiphan);
long _10To2(long sothapphan);
void BangCuuChuong();
//bai 1
int _2To10(long sonhiphan)
{
	int sothapphan = 0;
	int t;
	int i = 0;
	while (sonhiphan != 0)
	{
		t = sonhiphan % 10;
		sothapphan = sothapphan + t * pow((float)2, i);
		i=i+1;
		sonhiphan = sothapphan / 10;
	}
	return sothapphan;
}
//bai 2
long _10To2(long sothapphan){
	long temp;
	long sonhiphan = 0;
	long i = 0;
	while (sothapphan != 0){
		temp = sothapphan % 2;
		sonhiphan += temp*pow((float)10, i);
		i++;
		sothapphan /= 2;
	}
	return sonhiphan;
}
//bai 3
void BangCuuChuong(){
	for (int i = 1; i <= 10; i++){
		for (int j = 1; j <= 5; j++){
			printf("%i * %i = %i\t", j, i, i*j);
		}
		printf("\n");
	}
	for (int i = 1; i <= 10; i++){
		printf("\n");
		for (int j = 6; j <= 10; j++){
			printf("%i * %i = %i\t", j, i, i*j);
		}
	}
}
//bai 4
int SoChuSo(long x){
	int sochuso = 0;
	while (x != 0){
		x /= 10;
		sochuso++;
	}
	return sochuso;
}
//bai 5
long DaoNguocSo(long x){
	long sodaonguoc=0;
	long temp;
	while (x!=0){
		temp = x % 10;
		sodaonguoc = sodaonguoc*10 + temp;
		x /= 10;
	}
	return sodaonguoc;
}
int main()
{
	
	//bai 1
	long x1,x2,x4,x5;
	long sodaonguoc;
	int sochuso;
	printf("Nhap so kieu he nhi phan\n");
	scanf("%d", &x1);
	printf("Chuyen sang he thap phan la: %d\n", _2To10(x1));
	//bai 2
	printf("Nhap so kieu he thap phan\n");
	scanf("%d", &x2);
	printf("Chuyen sang he thap phan la: %d\n", _10To2(x2));
	//bai 3
	printf("Bang cuu chuong la:\n");
	BangCuuChuong();
	//bai 4
	printf("\nNhap so nguyen de dem chu so: \n");
	scanf("%d", &x4);
	sochuso = SoChuSo(x4);
	printf("So chu so la: %i\n",sochuso);
	//bai 5
	printf("Nhap so nguyen can dao nguoc: \n");
	scanf("%d", &x5);
	sodaonguoc = DaoNguocSo(x5);
	printf("So dao nguoc la: %d\n", sodaonguoc);
}

