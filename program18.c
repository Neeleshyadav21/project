#include<stdio.h>

struct student
{
	int gifts;
	int arrival_time;
};
int main()
{
	char student_name[]={'A','B','C','D','E','F','G','H','I','J'};
	struct student st[10];
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("\n FOR STUDENT - %c\n",student_name[i]);
		printf("Enter Number of gifts\n");
		scanf("%d",&st[i].gifts);
		printf("Enter arrival time\n");
		scanf("%d",&st[i].arrival_time);
	}
	int temp,p;char c;
	for(i=0;i<9;i++)
		{
			int big=st[i].gifts;
			p=i;
			for(j=i+1;j<10;j++)
			{
				if(st[j].gifts>big)
				{
					big=st[j].gifts;
					p=j;
				}
				temp=st[p].gifts;
				st[p].gifts=st[i].gifts;
				st[i].gifts=temp;
				c=student_name[i];
				student_name[i]=student_name[p];
				student_name[p]=c;
			}
		}
	
	printf("\nORDER OF STUDENTS IS");
	for(i=0;i<10;i++)
	{
		printf("\n%c\t- %d",student_name[i],st[i].gifts);
	}
	
}
