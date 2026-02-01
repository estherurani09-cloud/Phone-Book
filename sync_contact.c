#include<stdio.h>
#include<stdlib.h>
#include "contact_header.h"
#include<string.h>
extern int size;
void sync_from_file(void)
{
        PB *nu=NULL,*temp=NULL;
        PB var;
        FILE *fp;
        fp=fopen("Phone","r");
        if(fp==NULL)
        {
                printf("No data found\n");
                return;
        }
        while(fread(&var,size,1,fp)==1)
        {
                nu=calloc(1,sizeof(PB));
                if(nu==NULL)
                {
                        printf("node not created\n");
                        return;
                }
                strcpy(nu->name,var.name);
                nu->mob_cnt=var.mob_cnt;
                nu->em_cnt=var.em_cnt;
		for(int i=0;i<var.mob_cnt;i++)
                {
                        strcpy(nu->mobile[i],var.mobile[i]);
                }
                for(int i=0;i<var.em_cnt;i++)
                {
                        strcpy(nu->email[i],var.email[i]);
                }
                strcpy(nu->addr,var.addr);
                if(head==NULL)
                        head=nu;
                else
                {
                        for(temp=head;temp->link;temp=temp->link);
                        temp->link=nu;
                }
        }
        fclose(fp);
        return;
}
