#include"stheader.h"

void delete_all()
{
	if(head == NULL)
	{
		printf("No records found\n");
		return;
	}
	
	st *del = head;
	while(del != NULL)
	{
		head = del->next;
		free(del);
		del = head;
	}
	
	printf("All records deleted\n");
}

void delete_node()
{
	if(head == NULL)
	{
		printf("No records found\n");
		return;
	}
	char rollno[10];
	printf("Enter the ID to delete: ");
	scanf("%s", rollno);
	st *del = head, *prev;
	while(del != NULL)
	{
		if(strcmp(rollno, del->id)==0)
		{
			if(del == head) head = del->next;
			else prev->next = del->next;
			free(del);
			printf("ID %s deleted successfully\n", rollno);
			return;
		}
		prev = del;
		del = del->next;
	}
	
	printf("ID not found\n");
}
