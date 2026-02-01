#include<stdio.h>
#include "contact_header.h"
extern PB *head;
int size=sizeof(PB)-sizeof(PB *);
void save_contact(void)
{
        FILE *fp;
        PB *temp;
        temp=head;
        if(head==NULL)
        {
                printf("no contacts yet added\n");
                return;
        }
        fp=fopen("Phone","w");
        while(temp)
        {
                fwrite(temp,size,1,fp);
                temp=temp->link;
        }
        fclose(fp);
}
