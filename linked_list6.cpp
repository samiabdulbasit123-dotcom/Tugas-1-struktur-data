#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;


void tambahAkhir(int nilai){
    Node *baru = new Node();
    baru->data = nilai;
    baru->next = NULL;

    if(head == NULL){
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
}
void tambahDepan(int nilai){
    Node *baru = new Node();
    baru->data = nilai;
    baru->next = head; 
    head = baru;       
}

// tampilkan
void tampil(){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    tambahAkhir(10);
    tambahAkhir(20);
    tambahAkhir(30);

    cout << "Sebelum tambah depan:\n";
    tampil();

    tambahDepan(5);

    cout << "Setelah tambah depan:\n";
    tampil();

    return 0;
}