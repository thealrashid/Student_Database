# Student Database Management System

The Student Database Management System is a project implemented using structures and linked lists in C. It provides various functionalities for managing student records, including adding new student data, displaying records in sorted order, saving data to separate files according to batches, and editing or deleting records.

## Features

- **Add New Student:** Allows users to add new student data, including batch ID, name, marks, assessment status, date of birth (DOB), and date of joining (DOJ). Before adding a new student, the system checks if the batch ID already exists to avoid duplicate records.

- **Display Records:** Displays all records in a sorted manner, making it easier to view and manage student data.

- **Save Data to Files:** Saves student data to separate files according to batches. Before saving any record, the system checks if the data already exists to avoid duplicates.

- **Read Data from Files:** Reads student data from files. It ensures that the same data is not read more than once from a file to maintain data integrity.

- **Edit Records:** Allows users to edit details of a particular record, such as name, marks, assessment status, DOB, or DOJ. If a record is edited and then saved to a file, the previous information is updated.

- **Search Records:** Provides the ability to search for records based on any field, such as assessment status or batch ID.

- **Delete Records:** Users can delete a particular record based on ID or delete all records from the list.
