#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void tambahAkhir_cirkular(int nilai){
    Node *baru = new Node();
    baru->data = nilai;
   if (head == NULL){
    head = baru;
    baru -> next = head;
   }else{
    Node *bantu = head;
    while(bantu -> next != head){
        bantu = bantu -> next;
    }
    baru -> next = head;
    bantu -> next = baru;
   }
}


void tambahDepan_cirkular(int nilai){
    Node *baru = new Node();
    baru->data = nilai;
    if (head == NULL){
        head = baru;
        baru -> next = head;
    }else{
        Node *bantu = head;

        while(bantu -> next != head){
            bantu = bantu -> next;

        }
        baru -> next = head;
        bantu -> next = baru;
        head = baru; 

    } 
}


void tampil(){

    
    if(head == NULL ) return;

    Node *temp = head;
    int putaran = 0;
    while(putaran < 2){
        cout << temp -> data << endl;
        temp = temp -> next;
        
        if(temp == head){
            putaran++;
        }
    }
}


int main(){
    
    tambahAkhir_cirkular(100);
    tambahAkhir_cirkular(120);
   
    cout << "sebellum tambah depan : ";
    tampil();

    tambahDepan_cirkular(30);
    tambahDepan_cirkular(40);
    tambahDepan_cirkular(50);
    tambahDepan_cirkular(50);
   
    cout << "\nsetelah tambah depan: "; 
    tampil(); 


    return 0;
}