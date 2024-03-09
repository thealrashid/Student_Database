#include"stheader.h"

st *head = NULL;

void add_student()
{
	st *new = (st *)malloc(sizeof(st));
	
	printf("Enter batch ID: ");
	scanf("%s", new->id);
	
	int f;
	if(head==NULL || (f=compare(new->id, head->id)<0))
	{
		printf("Enter name: ");
		scanf(" %[^\n]", new->name);
		printf("Enter marks: ");
		scanf("%f", &new->marks);
		printf("Enter assessment status: ");
		scanf("%s", new->status);
		printf("Enter date of birth: ");
		scanf("%d%d%d", &new->dob.day, &new->dob.month, &new->dob.year);
		printf("Enter date of joining: ");
		scanf("%d%d%d", &new->doj.day, &new->doj.month, &new->doj.year);
		new->next = head;
		head = new;
		return;
	}
	st *curr = head;
	while(curr->next != NULL && ((f=compare(new->id, curr->next->id))>0)) curr = curr->next;
	if(f==0)
	{
		printf("This batch ID is not available\n");
		return;
	}
	
	printf("Enter name: ");
	scanf(" %[^\n]", new->name);
	printf("Enter marks: ");
	scanf("%f", &new->marks);
	printf("Enter assessment status: ");
	scanf("%s", new->status);
	printf("Enter date of birth: ");
	scanf("%d%d%d", &new->dob.day, &new->dob.month, &new->dob.year);
	printf("Enter date of joining: ");
	scanf("%d%d%d", &new->doj.day, &new->doj.month, &new->doj.year);
	new->next = curr->next;
	curr->next = new;
	
}

void display()
{
	if(head == NULL)
	{
		printf("No records found\n");
		return;
	}
	st *curr = head;
	printf("%-10s %-30s %-5s %-5s %-10s %-10s\n", "Batch ID", "Name", "Marks", "Status", "DOB", "DOJ");
	printf("------------------------------------------------------------------------------\n");
	while(curr != NULL)
	{
		printf("%-10s %-30s %-5.1f %-6s %02d.%02d.%4d %02d.%02d.%4d\n", curr->id, curr->name, curr->marks, curr->status, curr->dob.day, curr->dob.month, curr->dob.year, curr->doj.day, curr->doj.month, curr->doj.year);
		curr = curr->next;
	}
}

int compare(const char *s1, const char *s2)
{
	int a1 = atoi(s1+1), a2 = atoi(s2+1);
	
	if(a1>a2) return 1;
	else if(a1<a2) return -1;
	
	if(s1[5]>s2[5]) return 1;
	else if(s1[5]<s2[5]) return -1;
	
	if(s1[6]>s2[6]) return 1;
	else if(s1[6]<s2[6]) return -1;
	
	a1 = atoi(s1+7);
	a2 = atoi(s2+7);
	
	if(a1>a2) return 1;
	else if(a1<a2) return -1;
	
	return 0;
}
