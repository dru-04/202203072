#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
struct node* tail=NULL;
void inserthead(int data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->next=head;
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        head=temp;

}
void inserttail(int data)
{
    struct node* temp2=(struct node*)malloc(sizeof(struct node));
    temp2->data=data;
    if(tail==NULL)
    {
        temp2->next=NULL;
        tail=temp2;
        head=temp2;
    }
    else
    {
	    tail->next = temp2;
	    tail = tail->next;
    }
}
void insert(int index,int data)
{
    if(index==1)
    {
        inserthead(data);
        return;
    }
    else
    {
        struct node* temp3=(struct node*)malloc(sizeof(struct node));
        int count=1;
        struct node* ptr=head;
        while(count<index-1)
        {
            ptr=ptr->next;
            count++;
        }
        if(ptr->next==NULL)
        {
            inserttail(data);
        }
        else
        {
            temp3->next=ptr->next;
            temp3->data=data;
            ptr->next=temp3;
        }
    }
}
void printll(){
    struct node* ptr=head;

    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    
    printf("NULL\n");

}
int main(){
    inserttail(1);
    inserttail(5);
    inserttail(7);
    inserttail(3);
    inserttail(8);
    inserttail(2);
    inserttail(3);
    printll();
    struct node* ptr=head;
    int index=1;
    while(ptr!=NULL)
    {
        if(ptr->data==7)
        {
            printf("7 was found at index:%d\n",index);
            return 0;
        }
        ptr=ptr->next;
        index++;
    }
}