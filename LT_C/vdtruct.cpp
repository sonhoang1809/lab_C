#include<stdio.h>
void input(int *,int *);

	struct stud{
		int ID;
		float marks;
	};
int main ()
{
	stud a[10];
	int n;
	input(a,&n);
	output(a,n);
}
void inputforone(stud x){
	printf("input stud ID: ");
	scanf("%d",&x.ID);
	printf("input studMark: ");
	scanf("%f",&x.marks);
	}
void outputforone(stud x){
	printf("%d \n%f",x.ID,x.marsks);
	}
void input(int *p,int *m){
	printf("input the number of stud: ");
	scanf("%d",m);
	for(int i=0;i<*m;i++)
	{
		printf("input data for stud %d",i);
		inputforone(p[i]);}
	}
void output(*q,int k){
	for(int i=0;i<k;i++)
	outforone(q[i]);
	}						
