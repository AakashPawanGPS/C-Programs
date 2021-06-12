#include <stdlib.h>
#include <stdio.h>	
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* insert(Node *head,int data)
{
    //Complete this function
    Node *ptr,*temp=head;
    ptr=(struct node *)malloc(sizeof(struct Node));
    
    ptr->data=data;
    ptr->next=NULL;
    
    if(temp==NULL){
        head=ptr;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
            
        }
        temp->next=ptr;
    }
    return head;
}

void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;	
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
  display(head);
		
}
