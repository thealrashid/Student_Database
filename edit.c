#include"stheader.h"

void edit_details()
{
	int choice;
	char rollno[10];
	printf("Enter the ID to edit: ");
	scanf(" %s", rollno);
	
	st *curr = head;
	while(curr != NULL)
	{
		if(strcmp(rollno, curr->id) == 0) break;
		curr = curr->next;
	}
	
	if(curr == NULL)
	{
		printf("ID not found\n");
		return;
	}
	
	while(1) 
	{
	    	printf("------------------------------------------------------------------------------\n");
	    	printf("1. ID\n2. Name\n3. Marks\n4. Assessment status\n5. Date of birth\n6. Date of joining\n7. Stop editing\n");
	    	printf("Enter what to edit: ");
	    	scanf("%d", &choice);

	    	char temp[50];  

	    	switch(choice) 
	    	{
			case 1:
			    printf("Enter new ID: ");
			    scanf("%s", temp);
			    strcpy(curr->id, temp);  
			    break;
			case 2:
			    printf("Enter new name: ");
			    scanf(" %[^\n]", temp);
			    strcpy(curr->name, temp);
			    break;
			case 3:
			    printf("Enter new marks: ");
			    scanf("%f", &curr->marks);
			    break;
			case 4:
			    printf("Enter new assessment status: ");
			    scanf("%s", temp);
			    strcpy(curr->status, temp);
			    break;
			case 5:
			    printf("Enter new date of birth: ");
			    scanf("%d%d%d", &curr->dob.day, &curr->dob.month, &curr->dob.year);
			    break;
			case 6:
			    printf("Enter new date of joining: ");
			    scanf("%d%d%d", &curr->doj.day, &curr->doj.month, &curr->doj.year);
			    break;
			case 7:
			    return;
			default:
			    printf("Invalid choice\n");
	    	}	
	}

}
