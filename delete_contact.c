#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "contact_header.h"

extern PB *head;

void delete_contact()
{
        char name[50];
        PB *temp=NULL,*prev=NULL;
        if(head==NULL)
        {
                printf("Contacts not yet added\n");
                return;
        }
        printf("Enter name to delete:");
        scanf(" %[^\n]",name);
        temp=head;
	while(temp)
        {
                if(strcmp(temp->name,name)==0)
                {
                        if(prev)
                        {
                                prev->link=temp->link;
                        }
                        else
                        {
                                head=temp->link;
                        }
                        free(temp);
                        printf("contact delated\n");
                        return;
                }
                prev=temp;
                temp=temp->link;
        }
        printf("contact not found\n");
}
