#include<string.h>
#include "contact_header.h"
#include<stdlib.h>
extern PB *head;

/* creating a new contact */
void New_Contact(void)
{
        char ch;
        PB *nu=calloc(1,sizeof(PB));
        nu->mob_cnt=0;
        nu->em_cnt=0;
        if(nu==NULL)
                printf("node not created\n");
        else
        {
                printf("Enter name:\n");
                //fgets(nu->name);
                scanf(" %[^\n]",nu->name);
                if(find_by_name(nu->name))
                {
                        printf("Duplicate names are not allowed\n");
                        free(nu);
                        return;
                }
             MB:printf("enter mobile number %d:\n",nu->mob_cnt+1);
                scanf("%s",nu->mobile[nu->mob_cnt++]);+
                printf("Do you want to add another number to same name:(y/n)");
                scanf(" %c",&ch);
		if((ch=='y' || ch=='Y') && nu->mob_cnt<4)
                {
                        goto MB;
                }
                if(nu->mob_cnt==4)
                {
                        printf("Only 4 numbers are allowed per name\n");
                }
EM:printf("enter e-mail %d:\n",nu->em_cnt+1);
                scanf("%s",nu->email[nu->em_cnt++]);
                printf("Do you want to add another e-mail to same name:(y/n)");
                scanf(" %c",&ch);
                if((ch=='y' || ch=='Y') && nu->em_cnt<3)
                {
                        goto EM;
                }
                if(nu->em_cnt==3)
                {
                        printf("Only 3 emails are allowed per name\n");
                }
                printf("enter address:\n");
                //gets(nu->addr);
                scanf(" %[^\n]",nu->addr);
                nu->link=head;
                head=nu;
                printf("Contact added successfully!\n");
		 return;
        }
}
