#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILENAME "exam1.txt"
typedef struct employee{
	char employeeID[30];
	char name[30];
	int salaryGrade;
	int yob;
}employee;

void view(employee a[], int *size)
{
	
	char x[30], y[30], z[30], t[30];
	FILE *p;	
	char link[30];
	do
	{
		printf("Input a link of file you want to read: ");
		scanf("%s", &link);
		p=fopen(link,"r");
	} while(p == NULL);
	
	fscanf(p,"%s",&x);
	fscanf(p,"%s",&y);
	fscanf(p,"%s",&z);
	fscanf(p,"%s",&t);
	int i=0;
	while (!feof(p))
	{
		fscanf(p,"%s%s%d%d", &a[i].employeeID, &a[i].name, &a[i].salaryGrade, &a[i].yob);
		i++;
	}
	*size = i;
	printf("%s\t%s\t%s\t%s\n",x,y,z,t);
	for (int i=0; i<*size; i++)
	{
		printf("%s\t\t%s\t%d\t\t%d\n",a[i].employeeID,a[i].name,a[i].salaryGrade, a[i].yob);
	}
	fclose(p);
	
}
void findEmployeeID(employee a[],int size){
	char b[30],f[30];
	printf("enter ID you want to find: ");
	fflush(stdin);
	scanf("%s",&b[30]);
	int q;
	for(int i=0;i<size;i++)
	{
		if(strcmp(b,a[i].employeeID)==0)
		{
			q=0;
			strcpy(f,a[i].employeeID);
			break;
			}
		else {
		q=1;
		}	
	}	
	if(q==0) printf("%s",f);
	if(q!=0) printf("do not have that ID\n");	
}	
void findOldest (employee a[],int size){
	printf("find the oldest employee: ");
	int b=0;
	for(int i=0;i<size;i++){
		if(b<a[i].yob)
		{
			b= a[i].yob;
		}
	}
	printf("%d\n",b);
}
void findMaxsalaryGrade (employee a[],int size){
	printf("find the max salary of employees: ");
	int b=0;
	for(int i=0;i<size;i++){
		if(b<a[i].salaryGrade)
		{
			b= a[i].salaryGrade;
		}
	}
	printf("%d\n",b);
}
void insertEmployee(employee a[],int *size){
	(*size)++;
	int i=*size;
	char b[30],c[30];
	int 
	FILE *p= fopen("D:\\Exam2.txt","w");
	printf("enter employeeID: ")
	
	fscanf(p,"%s%s%d%d", &a[i].employeeID, &a[i].name, &a[i].salaryGrade, &a[i].yob);
	for( i=0;i<*size;i++)
	{
		fprintf(p,"%s\t\t%s\t%d\t\t%d\n",a[i].employeeID,a[i].name,a[i].salaryGrade, a[i].yob);
	}
	fclose(p);
}


int main(){
	int c,n;
	employee a[30];
	int size;
	do{
	printf("menu: \n");
	printf("0. view the list \n");
	printf("1. Find an employee following empID (employee ID);\n");
	printf("2. Find the employees who are oldest and have maximum salary level;\n");
	printf("3. Insert an employee into the list;\n");
	printf("4. Delete an employee from the list;\n");
	printf("5. Quit program.\n");
	scanf("%d",&c);
	switch (c){
		case 0: 
		{
			view(a, &size);
			break;
		}
		case 1:
		{
			findEmployeeID(a,size);
			break;
		}
		case 2:
		{
			findOldest(a,size);
			findMaxsalaryGrade(a,size);
			break;
		}
		case 3:
			insertEmployee(a,&size);
/*		case 4:
			delEmploy(); */
		case 5:
			exit(0);		
	}
	}while(c!=5);
}
	
