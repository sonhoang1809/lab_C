/* TranThienQuy-SE63199 */
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include<ctype.h>
#define max 100

int isfull(int *a, int n)

{

    return n==max;

}

int isempty(int *a, int n)

{

    return n==0;

}

void add(int value, int *a, int *pn)

{
	 a[*pn]=value;

    (*pn)++;

}

void print(int *a, int n)

{

    for (int i=0;i<n;i++)

        printf("%3d", a[i]);

}
void even (int value, int *a,int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		if (a[i] %2==0)
		{
			printf("%d ",a[i]);
		}
	}
}

int Min(int a[], int n) 
{
	int min = a[0];
	for(int i=1; i<n; i++)		
		if(a[i] > min)
			min = a[i];
	return min;
}
	

void xoa_gtri(int *a, int x, int n)
{	
	int i,j,t=0,k;
	for( i=0;i<n;i++)
	{
	
		if(a[i]==x)
		{
			t++;
			j=i; break;
		}
	}
	if (t==0)
	{
		printf("No fouded!\n");		
	}
	else
	{
		for(k=j;k<n;k++)
			{
				a[k]=a[k+1];
			}
			printf("Day da xoa la: ");
		for(i=0;i<n-1;i++)
			printf("%d ",a[i]);
	}
		
}
void tim(int *a, int x,int n)
{
	printf("Nhap x can tim: ");
	scanf("%d",&x);
	xoa_gtri(a,x,n);
}
void bubblesort(int* a,int n)
{

	int i,j;
	for (i=0;i< n;i++)
	{
		for(j=n;j>i;j--)
			if(a[j]>a[j-1])
			{
				int t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
	}
	print(a,n);
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
void chuyen_chu_hoa ()
{
	char s1[100];
	char s3[100];
	char s4[0];
	int a,b,i;
	printf("\n Your Name: ");
	gets(s1);
	name (s1);
	puts (s1);
	strupr(s1);
	printf("Chuyen thanh chu hoa:" );
	puts (s1);
}

void nhapmatran(int a[max][max], int n)
{

	for (int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			a[i][j]=0+rand()%(20-1);	
			
}

void xuatMaTran(int a[max][max], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
}


int menu()

{   printf("\n Simple 1-D array:");

    printf("\n1. Add a value");

    printf("\n2. Print array ");

    printf("\n3. Even number of array");

    printf("\n4. Smallest number of array ");

    printf("\n5. Remove all  existence of a value");

    printf("\n6. Descending oder by Selection sort");

    printf("\n7. Input and print name");

    printf("\n8. Input 2D-array");

    printf("\n9. Print 2D-array");

    printf("\n10. Total diagonal square matrix");

    printf("\n11. Exit");

    int choice;

    printf("\nPlease choice:");

    scanf("%d",&choice);

    return choice;

}
int main()

{

    int a[max];

    int n=0;

    int value;

    int choice;

    do

    {

        choice=menu();

        switch(choice)

        {

        case 1: if (isfull(a,n)) 
					 printf("\nSorry! The array is full.");
				    else 
				    {
				    	printf("\nInput an added value: ");
				    	scanf("%d",&value);
				    	add(value,a, &n);
				    	printf("added\n");
					 }
					 break;
        case 2: print(a,n);
				    break;
        case 3: if (isempty(a,n)) 
					 printf("\nSorry! The array is empty.");
					 else
					 {
					 	even (value,a,n);
                }
        case 4: Min(a,n);
                break;
           

        case 5: int x;
		          tim(a,x,n);
                break;

            

        case 6: bubblesort(a,n);
                break;
            

        case 7: chuyen_chu_hoa ();
                break;
            

        case 8:int b[max][max];
        	   int canh;
        	   printf("Nhap ma tran vuong NxN:\n");
			   printf("Nhap N =");
			   scanf("%d",&canh);
			   nhapmatran(b,canh);
               break;         

        case 9: int n;
               int a[max][max];
               printf("\nNhap vao so phan tu cua mang: ");
               scanf("%d",&n);  
               nhapmatran(b,canh);
               xuatMaTran(a,n);
                

        case 10:

                

        default: printf("Exit"); 

        }

    }

    while (choice>0 && choice <12);

    return 0;

}


