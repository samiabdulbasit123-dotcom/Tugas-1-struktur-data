#include <iostream>
using namespace std;

struct Node{
    int nilai;
    Node *next;
};

int main()
{
    Node *Head = NULL;
    Node *Node2 = NULL;
    Node *Node3 = NULL;

    Head = new Node;
    Node2 = new Node;
    Node3 = new Node;

    Head -> nilai = 10;
    Head -> next = Node2;

    Node2 -> nilai = 20;
    Node2 -> next = Node3;
    
    Node3 -> nilai = 30;
    Node3 -> next = NULL;

    int i = 0;
    while (Head != NULL){
        cout << Head -> nilai << endl;
        Head = Head -> next;
        i++;
    }
    cout << "jumlah data: " << i;

}