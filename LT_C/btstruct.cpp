#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int ID;
	float marks;
	char name[30];
};

void inputOnestud(student);
void outputOnestud(student);
void inputList(student *,int *);
void outputList(student *,int );
void listHtoL(student *,int );
void findStud(student ,int );
void findThebest(student ,int );
int main()
{
	student a[30];
	int n,t;
	student x;
	char name[30];
	printf("input data of the list: ");
	inputList(a,&n);
	outputList(a,n);
	printf("\n\n");
	printf("******menu: \n");
	printf("1.find a student who belong to the list\n");
	printf("2.rewrite the list from high point to low point \n");
	printf("3. find who the best student \n");
	scanf("%d",&t);
	switch(t)
		{
			case 1:
				{
					findStud(a, 'S',n);
				}
			case 2:
				{
					listHtoL(a, n);
				}	
			case 3:
				{
					findThebest(a, n);
				}
			case 4:
			exit 0;		
		}
}
void inputOnestud(student *p)
{
	int x;
	float y;
	char na[30];
	printf("input the student ID: ");scanf("%d",&x);
	printf("input the student name: ");scanf("%c",&name);
	printf("input the student mark: ");scanf("%f",&y);
	p->ID=x;
	p->name=na;
	p->marks=y;
}
void outputOnestud(student p)
{
	printf("\n The student %d \t has name: %c \t has mark: %f",p.ID,p.name,p.mark);
	printf("\n");
}
void inputList(student p[],int *n)
{
	printf("input the number of the students: ");
	scanf("%d",n);
	for(int i=0;i<*n;i++)
		{
			printf("input data for student %d: \n",i);
			inputOnestud(&p[i]);
		}
}
void outputList(student p[],int *n)
{
	for(int i=0;i<*n;i++)
	{
		outputOnestud(p[i]);
	}
}
void findStud(student ,char c, int *n)
{
	char c1;
	printf("enter name you want to find: ");scanf("%c",&c1);
	for(int i=0;i<*n;i++)
	{
		if(c1==name)
		printf("this student belongs to this list\n");
	}
}
void listHtoL(student *,char , int )
{
	
		}
				
