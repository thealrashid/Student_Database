exe: student_database.o search.o file.o delete.o edit.o functions.o
	cc student_database.o search.o file.o delete.o edit.o functions.o -o exe

student_database.o: student_database.c
	cc -c student_database.c
search.o: search.c
	cc -c search.c
file.o: file.c
	cc -c file.c
delete.o: delete.c
	cc -c delete.c
edit.o: edit.c
	cc -c edit.c
functions.o: functions.c
	cc -c functions.c
