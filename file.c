#include"stheader.h"

void save_file() 
{
    st *curr = head;
    char *s = (char *)malloc(7);

    while(curr != NULL) 
    {
        strncpy(s, curr->id, 6);
        s[6] = '\0';

        FILE *fp = fopen(s, "r");
        FILE *temp = fopen("tempfile", "w");

        if(fp != NULL && temp != NULL) 
        {
            st existing;
            while(fscanf(fp, "%9s %29[^\n] %f %5s %d %d %d %d %d %d", existing.id, existing.name, &existing.marks, existing.status, &existing.dob.day, &existing.dob.month, &existing.dob.year, &existing.doj.day, &existing.doj.month, &existing.doj.year) != EOF) 
            {
            	if(strcmp(existing.id, curr->id) != 0) 
            	{
                    fprintf(temp, "%-9s %-29s %.1f %-4s %d %d %d %d %d %d\n", existing.id, existing.name, existing.marks, existing.status, existing.dob.day, existing.dob.month, existing.dob.year, existing.doj.day, existing.doj.month, existing.doj.year);
                }
            }

            fclose(fp);
            fclose(temp);

            remove(s);

            rename("tempfile", s);

            fp = fopen(s, "a");
            fprintf(fp, "%-9s %-29s %.1f %-4s %d %d %d %d %d %d\n", curr->id, curr->name, curr->marks, curr->status, curr->dob.day, curr->dob.month, curr->dob.year, curr->doj.day, curr->doj.month, curr->doj.year);
            fclose(fp);
        } 
        else 
        {
            fp = fopen(s, "w");
          
            fprintf(fp, "%-9s %-29s %.1f %-4s %d %d %d %d %d %d\n", curr->id, curr->name, curr->marks, curr->status, curr->dob.day, curr->dob.month, curr->dob.year, curr->doj.day, curr->doj.month, curr->doj.year);

            fclose(fp);
        }

        curr = curr->next;
    }

    free(s);
    printf("Data saved successfully\n");
}


void read_file()
{	
	char filename[9];
	printf("Enter the file name: ");
	scanf(" %s", filename);
	FILE *fp = fopen(filename, "r");
	if(fp==NULL)
	{
		printf("File not present\n");
		return;
	} 
	
	while(1)
	{
		st *new = (st *)malloc(sizeof(st));
		if (fscanf(fp, "%9s %29[^\n] %f %5s %d %d %d %d %d %d", new->id, new->name, &new->marks, new->status, &new->dob.day, &new->dob.month, &new->dob.year, &new->doj.day, &new->doj.month, &new->doj.year) == EOF)
		{
			free(new);
			break;
		}
		
		int f;
		if(head==NULL || ((f=compare(new->id, head->id))<0))
		{
			new->next = head;
			head = new;
		}
		else
		{
			if(f == 0) continue;
			st *curr = head;
			while(curr->next != NULL && ((f=compare(new->id, curr->next->id))>0)) curr = curr->next;
			
			if(f != 0)
			{
				new->next = curr->next;
				curr->next = new;
			}
		}
	}
	
	
	fclose(fp);
	printf("Data read successfully\n");
}
