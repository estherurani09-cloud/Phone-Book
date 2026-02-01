#include<stdio.h>
#include<stdlib.h>
#include "contact_header.h"

extern PB *head;

void edit_contact(void)
{
        char name[50];
        int choice;
        char ch;
        PB *temp;
        temp=head;
        if(head==NULL)
        {
                printf("No contacts added yet\n");
                return;
        }
        printf("Enter name to to edit the contact\n");
        scanf(" %[^\n]",name);
        while(temp)
        {
                if(strcmp(temp->name,name)==0)
                {
                        while(1)
                        {
                                printf("\n 1.Edit name\n 2.Edit numbers\n 3.Edit email\n 4.Edit address\n 5.Exit\n");
                                printf("enter choice to proceed:");
                                scanf("%d",&choice);
				switch(choice)
                                {
                                        case 1:
                                                printf("enter new name:");
                                                scanf(" %[^\n]",temp->name);
                                                printf("Name updated\n");
                                                break;
                                        case 2:
                                                temp->mob_cnt=0;
                                                do
                                                {
                                                        printf("enter new mobile number %d",temp->mob_cnt+1);
                                                        scanf("%s",temp->mobile[temp->mob_cnt++]);
                                                        if(temp->mob_cnt>4)
                                                        {
                                                                printf("no more number are possible to add\n");
                                                                break;
                                                        }
                                                        printf("want to add another number(y/n):");
                                                        scanf(" %c",&ch);
                                                }while(ch=='y' || ch=='Y');
                                                printf("mobile numbers are edited\n");
                                                break;
					case 3:
                                                temp->em_cnt=0;
                                                do
                                                {
                                                        printf("enter new email\n");
                                                        scanf(" %[^\n]",temp->email[temp->em_cnt++]);
                                                        if(temp->em_cnt>3)
                                                        {
                                                                printf("no emails can be added\n");
                                                                break;
                                                        }
                                                        printf("want to edit another mail(y/n):");
                                                        scanf(" %c",&ch);
                                                }while(ch=='y' || ch=='Y');
                                                printf("emails edited\n");
                                                break;
                                        case 4:
                                                printf("enter new address\n");
                                                scanf(" %[^\n]",temp->addr);
                                                printf("Address updated\n");
                                                break;
                                        case 5:return;
                                        default:printf("Invalid choice\n");
                                }
                        }
                }
                temp=temp->link;
        }
	printf("contact not found\n");
}
