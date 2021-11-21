#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head;

void Insert(int x){
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next 	= NULL;
    if(head != NULL) temp->next = head;
    head =temp;
}
    

void Print(){
    struct Node *temp = head;
    printf("List is:\t");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");




}

int main(){
    head = NULL;
    printf("how many numbers?: ");
    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d",&x);
        Insert(x);
        Print();
    }

	return 0 ;
}
