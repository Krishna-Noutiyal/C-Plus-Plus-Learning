#include <iostream>

using namespace std;


struct Node
{
    int data;
    struct Node *next;
};

void cratenode(int data){
    
}
void insert(struct Node* head, int data){
    
    struct Node* new_node = createnode(data);
    new_node->next = head;

}
int main(){

    struct Node head = {0, NULL};

    return 0;
}