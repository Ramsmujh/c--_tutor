#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node * next;
    
};
void linklistTraverlse(struct Node* ptr){
    while(ptr != NULL){
        cout<<"element ";
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * thirds;
    struct Node * fourth;
    // allocated memory location for nodes in the links list in map;
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    thirds = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));
     
    // link first and seconds nodes 
    head->data = 7;
    head->next =second;
    // link second  and thirds nodes 
    second->data = 11;
    second->next = thirds;
    // link thirdss and fourth nodes 
    thirds->data = 33;
    thirds->next = fourth;
    // link fouth to  null nodes 
    fourth->data = 66;
    fourth->next = NULL;
    linklistTraverlse(head);
return 0;
       
}