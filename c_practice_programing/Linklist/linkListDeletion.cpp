#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
  int data;
  struct Node* next;
  
};
void Travation_of_linkList(struct Node* ptr){
     while(ptr!=NULL){
         cout<<ptr->data<<endl;
         ptr = ptr->next;
     }
}
struct Node* delationOflinkList(struct Node* node ){
   struct Node* ptr =node;
   node = node->next;
   delete ptr;
   return node;
}
int main(){
    struct Node * node;
    struct Node * first;
    struct Node * second;
    struct Node * thirds;
    struct Node * fourth;
    //
    // creating the dynamic memori for the linklist
    node  = new Node();
    first = new Node();
    second = new Node();
    thirds = new Node();
    fourth = new Node();
    //
    //creating the head node which is point the fist node
    node->data = 8;
    node->next = first;
    // this is the first node which is pointing the second node
    first->data = 9;
    first->next = second;
    // this is the point the seconds node which is pointe the thirds node
    second->data = 10;
    second->next= thirds;
    // this second node which is pointing the fourth node;
    thirds->data  = 22;
    thirds->next = fourth;
    // this is fourth node which is point the null value:
    fourth->data = 33;
    fourth->next = NULL;
    Travation_of_linkList(node); 
    delationOflinkList(node);
    Travation_of_linkList(node);

}

