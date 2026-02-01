#include<stdio.h>
#include "contact_header.h"
extern PB *head;
void Print(void)
{
        PB *temp=NULL;
        temp=head;
        if(temp==NULL)
        {
                printf("No contacts added yet\n");
                return;
        }
        while(temp)
        {
                printf("Name:%s\n",temp->name);
                for(int i=0;i<temp->mob_cnt;i++)
                {
                        printf("mobile-%d:%s\n",i+1,temp->mobile[i]);
                        //printf("\n")
                }
                for(int i=0;i<temp->em_cnt;i++)
                {
                        printf("e-mail %d:%s\n",i+1,temp->email[i]);
                }
                printf("Address:%s\n\n",temp->addr);
                temp=temp->link;
        }
}
