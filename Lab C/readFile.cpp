#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int a,b;
	char s[100];
   FILE *fi;
   fi=fopen("INPUT.txt","r");
   //fscanf(fp,"%s",s);
   fscanf(fi,"%d",&a);
   fscanf(fi,"%d",&b);
   fclose(fi);
   printf("\n a= %d & b= %d",a,b);
   int tong =0;
   int hieu;
   int tich;
   float thuong;
   tong = a+b;
   hieu = b-a;
   tich = a*b;
   thuong = (float)b/a;
   FILE *fo; 
   fo=fopen("OUTPUT.txt","w");
   fprintf(fo,"%d + %d = %d\n",a,b,tong);
   fprintf(fo,"%d - %d = %d\n",b,a,hieu);
   fprintf(fo,"%d x %d = %d\n",a,b,tich);
   fprintf(fo,"%d / %d = %f\n",b,a,thuong);
   fclose(fo);
   getch();
	return 0;
}
