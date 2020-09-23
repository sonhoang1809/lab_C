void view(employee a[], int n)
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
	fscanf(p,"%d",&n);
	fscanf(p,"%s",&x);
	fscanf(p,"%s",&y);
	fscanf(p,"%s",&z);
	fscanf(p,"%s",&t);
	int i=0;
	while (!feof(p))
	{
		fscanf(p,"%s%s%g%d",&a[i].employeeID,&a[i].employeeName, &a[i].salaryGrade, &a[i].yob);
		i++;
	}
	printf("%s\t%s\t%s\t%s\n",x,y,z,t);
	for (int i=0; i<n; i++)
	{
		printf("%s\t\t%s\t\t%g\t%d\n",a[i].employeeID,a[i].employeeName,a[i].salaryGrade, a[i].yob);
	}
	fclose(p);
	
}
