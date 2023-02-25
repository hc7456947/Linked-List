#include<iostream>
using namespace std;
struct node{
       int data;
       node* next;
};
void printList(node *n){
      while(n!=0){
        cout<<n->data<<" ";
        n=n->next;
      }

}
int main(){
    node *head=new node();
    node *second=new node();
    head->data=10;
    head->next=second;
    second->data=20;
    second->next=NULL;
    printList(head);
    return 0;
}