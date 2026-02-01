phonebook:main_contact.o new_contact.o print_contact.o delete_contact.o search_contact.o edit_contact.o save_contact.o sync_contact.o
	gcc main_contact.o new_contact.o print_contact.o delete_contact.o search_contact.o edit_contact.o save_contact.o sync_contact.o -o phonebook

main_contact.o:main_contact.c
	gcc -c main_contact.c

new_contact.o:new_contact.c
	gcc -c new_contact.c

print_contact.o:print_contact.c
	gcc -c print_contact.c

delete_contact.o:delete_contact.c
	gcc -c delete_contact.c

search_contact.o:search_contact.c
	gcc -c search_contact.c

edit_contact.o:edit_contact.c
	gcc -c edit_contact.c

save_contact.o:save_contact.c
	gcc -c save_contact.c

sync_contact.o:sync_contact.c
	gcc -c sync_contact.c
