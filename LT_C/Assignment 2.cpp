#include <stdio.h>
#include <stdlib.h>
int main()
{
	int t=0,e,m,f,g,j,z,h;
	int n,arr[30],exit=0,i;
	int a[100];
	float aver;
	int sum=0;

	printf("enter number of elements: = "); scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("%d \t",arr[i]);
	}
	printf("\n menu \n");
	printf("1. Find maximum marks and print to screen;\n");
	printf("2. Find marks that are greater than or equal to average of all the marks;\n");
	printf("3. Insert a mark into the array;\n");
	printf("4. Delete a mark from the array;\n");
	printf("5. Sort the array (Ascending Order)\n");
	printf("6. Input two float numbers c and b (a<b). Show marks that are greater than or equal to c and less than or equal to b.\n");
	printf("\n choose a command to do: \n");scanf("%d",&h);
	
	switch(h)
	{
			case 1:
			    max(arr,n);
			break;
			case 2:
				findave(arr,n);
			break;	
			case 3:
				insert(arr,&n);
			break;
			case 4:
				erase(arr,&n);	
			break;
			case 5:
			    sort(arr,n);
			break;
			case 6:
                inputab(arr,n);
			break;
			default:
				exit = 7;
		}
}
void max(int *arr, int n){
	int i,t=arr[1];
	for(i=1;i<=n;i++){
		if(t<=arr[i]){
			t=arr[i];
		}
	}
	
			printf("Maximum element:(%d,%d).\n",i,t);
			printf("\n");
}
void findave(int *arr, int n){
	int i; float sum=0,ave=0;
	for(i=0;i<n;i++)
	sum=sum+arr[i];
	ave=sum/n;
	printf("Elements are greater than or equal to average:%.2f of all elements in array:\n",sum);
	for(i=0;i<n;i++){
		if(ave<=arr[i])
			printf("(%d,%d)\n",i,arr[i]);
	}
}


		
					
