#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>
void ngau_nhien_5_so (int *a,int n)
{
	
	int i;
   for (int i=0;i<n;i++)
	{
		a[i] = rand() % 20;
		printf("a[%d] = %d \n",i,a[i]);
		}
}
void output(int *a, int n)
{
	for (int i=0; i<n; i++)
	{
		printf("%d, ",a[i]);
	}
}
void timx(int *a, int n, int x)
{
	
	for (int i=0; i<n; i++)
	{
		if (x==a[i])
		{
			printf("a[%d], ",i);
		}
	}
}
void tim_x( int *a,int n,int x)
{
	int dem =0;
	for (int i=0; i<n; i++)
	{
		if (x==a[i])
		{
			dem++;
		}
	}
	printf(" tim thay %d lan xuat hien ",dem);
	timx(a,n,x);
}

int vitri( int x, int a[], int n)
{
	for ( int i=0; i<n;i++)
	    if (a[i]==x)
	    {
	    	return i;
		}	
	return -1;	    
}
void xoa (int x, int a[], int n)
{
	int i;
	int vt=vitri(x,a,n);
	if (vt==-1)
	printf ("Khong tim thay phan tu muon xoa");
	else
	{
		for ( i=vt; i<=n;i++)
		{
			a[i]=a[i+1];
		    
		}
		n--; 
		printf ("Day sau khi xoa:\n");
		    for (i=0;i<n;i++)
		    printf("a[%d] = %d \n",i,a[i]);
		
	}
}
void them (int z, int a[], int n,int pos)
{
	if (pos>0 && pos<n)
	{
		for (int i=n;i>pos;i--)
		
			a[i]=a[i-1];
			a[pos]=z;
		
		n++;
		printf ("Day sau khi them:\n");
		for (int i=0;i<n;i++)
		printf("a[%d] = %d \n",i,a[i]);
	}
	else 
	printf ("\nVi tri %d khong hop li", pos);
}
void sap_xep_giam(int *a,int n)
{
	
	for (int i= 0; i<n-1;i++)
	{
		for (int j=n-1; j>i;j--)
		if (a[j]>a[j-1])
		{
			int t=a[j];
			a[j]=a[j-1];
			a[j-1]=t;
		}
	}
}
void sap_xep_tang(int*a, int n)
{
	
	for (int i= 0; i<n-1;i++)
	{
		for (int j=i+1; j<n;j++)
		if (a[i]>a[j])
		{
			int t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
}
char* ltrim (char s1[])
{
	int i=0;
	while (s1[i]==' ') i++;
	if (i>0) strcpy(&s1[0], &s1[i]);
	return s1;
}
char * rtrim ( char s1[])
	{
		int i = strlen (s1) -1;
		while (s1[i] == ' ') i--;
		s1[i+1]= '\0';
		return s1;
   }
char* trim (char s1[])
{
	rtrim(ltrim(s1));
	char *ptr = strstr(s1, "  ");
	while (ptr!=NULL)
	{
		strcpy(ptr, ptr+1);
		ptr = strstr(s1, "  ");
	}
	return s1;
}
char* name (char s1[])
{
	trim(s1);
	strlwr(s1);
	int l = strlen(s1);
	for (int i=0; i<l; i++)
	{
		if (i == 0|| (i>0 && s1[i-1]==' ')) s1[i] = toupper (s1[i]);
	}
	return s1;
}
void chuhoa ()
{
	char s1[100];
	char s3[100];
	char s4[0];
	int a,b,i;
	printf("\n your name: ");
	gets(s1);
	name (s1);
	puts (s1);
	strupr(s1);
	printf("chuyen thanh chu hoa:" );
	puts (s1);
	int l = strlen (s1);
	for (i =0; i<l;i++)
	{
		if (s1[i]==' ')
		{
			a = i;
			break;
		}
	}
	for ( i=0; i<=a;i++)
	{
		s3[i]=s1[i];
		s1[i]=' ';
	}
	trim(s1);
	s4[0]=' ';
	strcat(s1,s4);
	printf("%s, %s",s3,strcat(s1,s4));
	
	
}
int menu()
{
	int chon;
	printf ("\n1 Tim x va so lan xuat hien");
	printf ("\n2 Xoa X");
	printf ("\n3 Them mot gia tri vao mot vi tri");
	printf ("\n4 Sap xep gia tri giam dan");
	printf ("\n5 Sap xep gia tri tang dan");
	printf ("\n6 Doi ten thanh chu in hoa sau do doi thanh style tieng anh ");
	printf ("\nQuit\n");
	scanf ("%d", &chon);
	return chon;
}
int main ()
{
	int *a,n;
	a=(int*)calloc(n,sizeof(int));
	int luachon;
	luachon=menu();
	do
	{
		
		switch  (luachon)
		{
			case 1:int x;
		          printf("\nban can bao nhieu so ngau nhien: ");
	             scanf("%d",&n);
	             ngau_nhien_5_so (a,n);
		          printf("\nnhap phan tu can tim\n");
		          scanf("%d",&x);
		          tim_x (a,n,x);
		          break;
			case 2: printf("\nban can bao nhieu so ngau nhien: ");
	              scanf("%d",&n);
	              ngau_nhien_5_so (a,n);
			        printf ("Nhap so X can xoa: ");
			        scanf ("%d", &x);
			        xoa (x,a,n);
			        break;  
			case 3: printf("\nban can bao nhieu so ngau nhien: ");
	              scanf("%d",&n);
	              ngau_nhien_5_so (a,n);
			        int pos,z;
			        printf ("Nhap gia tri bat ki de the: ");
			        scanf ("%d",&z);
			        printf ("Vi tri the: ");
			        scanf ("%d",&pos);
			        them(z,a,n,pos);
			        break;   
			case 4: printf("\nban can bao nhieu so ngau nhien: ");
	              scanf("%d",&n);
	              ngau_nhien_5_so (a,n);
		           printf("\n phan tu tang dan\n");
		           sap_xep_tang(a,n);
		           output(a,n);
		           break;
			case 5: printf("\nban can bao nhieu so ngau nhien: ");
	              scanf("%d",&n);
	              ngau_nhien_5_so (a,n);
		           printf("\n phan tu giam dan\n");
		           sap_xep_giam(a,n);
		           output(a,n);
		           break;
			case 6: chuhoa();
			        break;      
			default: printf ("Cam on da su dung!");
		}
	}
	while (luachon>0 && luachon<7);
	getchar ();
	return 0;
}
