#include<stdio.h>
#include<stdlib.h>
#include "contact_header.h"
extern PB *head;

void find_contact()
{
        char name[50];
        if(head==NULL)
        {
                printf("contacts not yet added\n");
                return;
        }
        printf("Enter name to search:");
        scanf(" %[^\n]",name);
        PB *con_srch=find_by_name(name);
        if(con_srch==NULL)
        {
                printf("contact not found\n");
                return;
        }
        printf("Name:%s\n",con_srch->name);
        for(int i=0;i<con_srch->mob_cnt;i++)
                printf("mobile num %d:%s\n",i+1,con_srch->mobile[i]);
        for(int i=0;i<con_srch->em_cnt;i++)
                printf("e-mail %d:%s\n",i+1,con_srch->email[i]);
        printf("Address:%s\n",con_srch->addr);
}
