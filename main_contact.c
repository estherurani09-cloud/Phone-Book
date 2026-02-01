#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "contact_header.h"

PB *head=NULL;
int main()
{
        //PB *head=NULL;
        char ch;
        sync_from_file();
        while(1)
        {
                printf("\n\nc/C:Create a new contact\np/P:Print all contacts\nd/D:Delete contact\nf/F:Find contact\ne/E:EDit a contact\ns/S:To save the contacts in the file\nq/Q:Quit from app\n");
                scanf(" %c",&ch);
                if(ch=='c' || ch=='C')
                {
                        New_Contact();
                }
                else if(ch=='p' || ch=='P')
                {
                        Print();
                }
                else if(ch=='d' || ch=='D')
                {
                        delete_contact();
                }
		 else if(ch=='f' || ch=='F')

                {
                        find_contact();
                }
                else if(ch=='e' || ch=='E')
                {
                        edit_contact();
                }
                else if(ch=='s' || ch=='S')
                {
                        save_contact();
                }
                else if(ch=='q' || ch=='Q')
                {
                        exit(0);
                }
                else
                {
                        printf("Choose corrrect choice\n");
                }
        }
}
