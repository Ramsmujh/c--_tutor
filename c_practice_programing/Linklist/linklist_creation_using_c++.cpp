#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node * next;
};
void travationOfLinklist(struct Node* ptr){
   while(ptr!= NULL){
       cout<<ptr->data<<endl;
       ptr = ptr->next;
   }
}
struct Node * insertAtfist(struct Node* head,int data){
    struct Node * ptr = new Node();
   // struct Node* p = head;
    ptr->next = head;
    ptr->data = data;
    return ptr;

}
struct Node* insertAtIndex(struct Node* head,int data, int index){
   struct Node* ptr = new Node();
   struct Node* p =head;
   int i=0;
   while( i!= index-1){
       p = p->next;
     //  p++;
       i++; 
   }
   ptr->data = p->data;
   ptr->next = p->next;
   p->next = ptr;
   return head;

}

int main(){
    struct Node* head;
    struct Node* first;
    struct Node* second;
    struct Node* thirds;

    // creation a dynamic memory allocation
    first = new Node();
    head = new Node();
    second  = new Node();
    thirds = new Node();
    
    // asigning the value of the node 
     // fistally assign the head to the frst node;
     head->data = 7;
     head->next = first;
     //first node to assign the second node;
     first->data = 9;
     first->next = second;
     // this is asign the second node to thirds node
     second->data = 77;
     second->next = thirds;
     //this is assign the new of last node which can inte having the null value
     thirds->data = 55;
     thirds->next = NULL;
     travationOfLinklist(head);
     //cout<<insertAtfist(head,23);
    // head = insertAtfist(head,44);
    head = insertAtIndex(head,15,2);
     travationOfLinklist(head);
     return 0;
    
}
