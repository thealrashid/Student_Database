#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
	char id[10];
	char name[30];
	float marks;
	char status[5];
	struct date
	{
		int day;
		int month;
		int year;
	}dob, doj;
	struct student *next;
}st;

extern st *head;

extern void add_student(void);
extern void display(void);
extern void save_file(void);
extern void read_file(void);
extern void delete_node(void);
extern void delete_all(void);
extern void edit_details(void);
extern void search_details(void);

extern void search_id();
extern void search_name();
extern void search_marks();
extern void search_status();
extern void search_dob();
extern void search_doj();
extern int compare(const char *, const char *);
