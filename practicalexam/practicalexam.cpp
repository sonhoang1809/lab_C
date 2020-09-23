#include <stdio.h>
#include <stdlib.h>
typedef struct {
	char employID[];
	char name[];
	int salary;
	int year;
};
void openfile(){
	employID a[];
	name [];
	FILE *p;
	p = fopen("D:\\exam1.txt","r");
		if(p!= NULL){
		fscanf(p,"%s",&employID);
		fscanf(p,"%c",&name); 
		fscanf(p,"%d",&salary); 
		fscanf(p,"%d",&year);
		int i=0;
		while(!feof(p)){
			fscanf(p,"%d\t%c",&a[i].employID,&a[i].name);
			i=i+1;
			
		}
		printf("%s\t",employID);
		printf("%s\t%d\t%d",name,salary,year);
		for(int i=0;i<n;i++)
		{
			printf("%d\t%d\n",a[i].employID,a[i].name);
		}
	}else printf("the file does not exist !");
	fclose(p);
	}
void findEmployID(){
	

int main(){
	int c;
	
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
			openfile(n);
		case 1:
			findEmployID();
		case 2:
			findOdest();
			findMaxsalary();
		case 3:
			insertEmploy();
		case 4:
			delEmploy();
		case 5:
			exit(0);		
	}
	}while(c!=5);
}
	
