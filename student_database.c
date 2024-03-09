#include"stheader.h"

int main()
{
	char choice;

	while(1)
	{
		printf("------------------------------------------------------------------------------\n");
		printf("a. Enter new student details\n");
		printf("b. Display records\n");
		printf("c. Save data in files according to batch\n");
		printf("d. Read data from file\n");
		printf("e. Delete an ID from the list\n");
		printf("f. Delete all records from the list\n");
		printf("g. Edit details\n");
		printf("h. Search details\n");
		printf("z. Exit\n");
		printf("Enter choice: ");
		scanf(" %c", &choice);
		printf("------------------------------------------------------------------------------\n");
		
		switch(choice)
		{
			case 'a': add_student(); break;
			case 'b': display(); break;
			case 'c': save_file(); break;
			case 'd': read_file(); break;
			case 'e': delete_node(); break;
			case 'f': delete_all(); break;
			case 'g': edit_details(); break;
			case 'h': search_details(); break;
			case 'z': exit(0);
			default: printf("Unkown choice\n");
		}
	}
}
