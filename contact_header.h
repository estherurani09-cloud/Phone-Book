#include<stdio.h>
#include<string.h>
typedef struct PhoneBook
{
        char name[20];
        int mob_cnt;
        char mobile[4][11];
        int em_cnt;
        char email[3][20];
        char addr[100];
        struct PhoneBook *link;
}PB;
extern PB *head;

void New_Contact(void);
void Print(void);
static PB* find_by_name(char*);
void delete_contact();
void find_contact();
void edit_contact();
void save_contact();
void sync_from_file();

static PB* find_by_name(char *name)
{
        PB *temp=head;
        while(temp)
	{
                if(strcmp(temp->name,name)==0)
                {
                        return temp;
                }
                temp=temp->link;
        }
        return NULL;
}

