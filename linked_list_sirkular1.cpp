#include <iostream>
using namespace std;

struct Node{
    int nilai;
    Node *next;
    Node *prev;
};

int main()
{
    Node *head = NULL;
    Node *Node2 = NULL;
    Node *Node3 = NULL;
    Node *Node4 = NULL;

    head = new Node;
    Node2 = new Node;
    Node3 = new Node;
    Node4 = new Node;

    head -> nilai = 10;
    head -> next = Node2;
    head -> prev = Node4;

    Node2 -> nilai = 20;
    Node2 -> next = Node3;
    Node2 -> prev = head;

    Node3 -> nilai = 30;
    Node3 -> next = Node4;
    Node3 -> prev = Node2;

    Node4 -> nilai = 40;
    Node4 -> next = head;
    Node4 -> prev = Node3;


    int i = 0;
    cout << "singgle linked list: " << endl;
    while (i < 8){
        cout << head -> nilai << endl;
        head = head -> next;
        i++;
    }
    cout << "jumlah data: " << i;

    head = Node4;
    int j = 0;
    cout << "double linked list: " << endl;
    while(j < 8){
        cout << head -> nilai << endl;
        head = head -> prev;
        j++;
    }

        cout << "jumlah data: " << j;
    
        return 0;
}