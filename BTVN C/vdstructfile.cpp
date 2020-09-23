// demo write and read struct data from file
#include<stdio.h>

typedef struct stud{
	int ID;
	float mark;
};
int main(){
	stud a[2];
	FILE *p;
	p = fopen("D:\\HOC TAP\\C\\fpt.txt","w");
	fprintf(p,"ID\t|\tMark\n");
	for(int i=0;i<2;i++)
	{
		printf("input data for student %d: \n",i);
		printf("ID: ");scanf("%d",&a[i].ID);
		fprintf(p,"%d  |\t",a[i].ID);
		printf("Mark: ");scanf("%f",&a[i].mark);
		fprintf(p,"%g\n",a[i].mark);
	}
}
