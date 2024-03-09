#include"stheader.h"

void search_details()
{
	int choice;
	
	while(1)
	{
		printf("Enter what to search:\n");
		printf("------------------------------------------------------------------------------\n");
		printf("1. ID\n2. Name\n3. Marks\n4. Assessment status\n5. Date of birth\n6. Date of joining\n7. Stop searching\n");
		printf("Enter what to search: ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1: search_id(); break;
			case 2: search_name(); break;
			case 3: search_marks(); break;
			case 4: search_status(); break;
			case 5: search_dob(); break;
			case 6: search_doj(); break;
			case 7: return;
			default: printf("Invalid choice\n");
		}
	}	
}

void search_id()
{
	char temp[10];
	int f = 0;
	
	printf("Enter the ID to search: ");
	scanf(" %s", temp);
	
	st *curr = head;
	
	while(curr != NULL)
	{
		if(strcmp(temp, curr->id) == 0)
		{
			if(f == 0)
			{
				printf("%-10s %-30s %-5s %-5s %-10s %-10s\n", "Batch ID", "Name", "Marks", "Status", "DOB", "DOJ");
				printf("------------------------------------------------------------------------------\n");
				f = 1;
			}
			printf("%-10s %-30s %-5.1f %-6s %02d.%02d.%4d %02d.%02d.%4d\n", curr->id, curr->name, curr->marks, curr->status, curr->dob.day, curr->dob.month, curr->dob.year, curr->doj.day, curr->doj.month, curr->doj.year);
			return;
		}
		curr = curr->next;
	}
	
	printf("ID not found\n");
	printf("------------------------------------------------------------------------------\n");
}

void search_name()
{
	char temp[30];
	int f = 0;
	
	printf("Enter the name to search: ");
	scanf(" %[^\n]", temp);
	
	st *curr = head;
	
	while(curr != NULL)
	{
		if(strcasecmp(temp, curr->name) == -32)
		{
			if(f == 0)
			{
				printf("%-10s %-30s %-5s %-5s %-10s %-10s\n", "Batch ID", "Name", "Marks", "Status", "DOB", "DOJ");
				printf("------------------------------------------------------------------------------\n");
				f = 1;
			}
			printf("%-10s %-30s %-5.1f %-6s %02d.%02d.%4d %02d.%02d.%4d\n", curr->id, curr->name, curr->marks, curr->status, curr->dob.day, curr->dob.month, curr->dob.year, curr->doj.day, curr->doj.month, curr->doj.year);
		}
		curr = curr->next;
	}
	
	if(f == 0) printf("Name not found\n");
	printf("------------------------------------------------------------------------------\n");
}

void search_marks()
{
	int f = 0;
	float temp;
	
	printf("Enter the marks to search: ");
	scanf("%f", &temp);
	
	st *curr = head;
	
	while(curr != NULL)
	{
		if(temp == curr->marks)
		{
			if(f == 0)
			{
				printf("%-10s %-30s %-5s %-5s %-10s %-10s\n", "Batch ID", "Name", "Marks", "Status", "DOB", "DOJ");
				printf("------------------------------------------------------------------------------\n");
				f = 1;
			}
			printf("%-10s %-30s %-5.1f %-6s %02d.%02d.%4d %02d.%02d.%4d\n", curr->id, curr->name, curr->marks, curr->status, curr->dob.day, curr->dob.month, curr->dob.year, curr->doj.day, curr->doj.month, curr->doj.year);
		}
		curr = curr->next;
	}
	
	if(f == 0) printf("Marks not found\n");
	printf("------------------------------------------------------------------------------\n");
}

void search_status()
{
	char temp[5];
	int f = 0;
	
	printf("Enter the status to search: ");
	scanf(" %s", temp);
	
	st *curr = head;
	
	while(curr != NULL)
	{
		if(strcmp(temp, curr->status) == 0)
		{
			if(f == 0)
			{
				printf("%-10s %-30s %-5s %-5s %-10s %-10s\n", "Batch ID", "Name", "Marks", "Status", "DOB", "DOJ");
				printf("------------------------------------------------------------------------------\n");
				f = 1;
			}
			printf("%-10s %-30s %-5.1f %-6s %02d.%02d.%4d %02d.%02d.%4d\n", curr->id, curr->name, curr->marks, curr->status, curr->dob.day, curr->dob.month, curr->dob.year, curr->doj.day, curr->doj.month, curr->doj.year);
		}
		curr = curr->next;
	}
	
	if(f == 0) printf("Assessment status not found\n");
	printf("------------------------------------------------------------------------------\n");
}

void search_dob()
{
	int f = 0, d, m, y;
	
	printf("Enter the date of birth to search: ");
	scanf("%d%d%d", &d, &m, &y);
	
	st *curr = head;
	
	while(curr != NULL)
	{
		if((d==curr->dob.day) && (m==curr->dob.month) && (y==curr->dob.year))
		{
			if(f == 0)
			{
				printf("%-10s %-30s %-5s %-5s %-10s %-10s\n", "Batch ID", "Name", "Marks", "Status", "DOB", "DOJ");
				printf("------------------------------------------------------------------------------\n");
				f = 1;
			}
			printf("%-10s %-30s %-5.1f %-6s %02d.%02d.%4d %02d.%02d.%4d\n", curr->id, curr->name, curr->marks, curr->status, curr->dob.day, curr->dob.month, curr->dob.year, curr->doj.day, curr->doj.month, curr->doj.year);
		}
		curr = curr->next;
	}
	
	if(f == 0) printf("Date if birth not found\n");
	printf("------------------------------------------------------------------------------\n");
}

void search_doj()
{
	int f = 0, d, m, y;
	
	printf("Enter the date of joining to search: ");
	scanf("%d%d%d", &d, &m, &y);
	
	st *curr = head;
	
	while(curr != NULL)
	{
		if((d==curr->doj.day) && (m==curr->doj.month) && (y==curr->doj.year))
		{
			if(f == 0)
			{
				printf("%-10s %-30s %-5s %-5s %-10s %-10s\n", "Batch ID", "Name", "Marks", "Status", "DOB", "DOJ");
				printf("------------------------------------------------------------------------------\n");
				f = 1;
			}
			printf("%-10s %-30s %-5.1f %-6s %02d.%02d.%4d %02d.%02d.%4d\n", curr->id, curr->name, curr->marks, curr->status, curr->dob.day, curr->dob.month, curr->dob.year, curr->doj.day, curr->doj.month, curr->doj.year);
		}
		curr = curr->next;
	}
	
	if(f == 0) printf("Date if joining not found\n");
	printf("------------------------------------------------------------------------------\n");
}


