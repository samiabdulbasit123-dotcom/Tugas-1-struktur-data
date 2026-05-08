#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
};

Node *head = NULL;
Node *tail = NULL;

void input_sircular(int nilai){
    Node *baru = new Node;
    baru -> data = nilai;
    if(tail == NULL){
        tail = baru;
        baru -> next = tail;
        return ;
    }
    Node *bantu = tail;
    while (bantu -> next != tail){
        bantu = bantu -> next;
    }
    baru -> next = tail;
    bantu -> next = baru;
    tail = baru;
}

void travers_cirkular(){
    Node *temp = tail;
    if (tail == NULL) return;

    do{
        cout << temp -> data << endl;
        temp = temp -> next;
        
    }while(temp != tail);
}

void input_double(int nilai){
   
    Node *nodebaru = new Node();
    nodebaru -> data = nilai;
    nodebaru -> next = head;
    nodebaru -> prev = NULL;
    
    if(head != NULL){
        head -> prev = nodebaru;
    }
    head = nodebaru;
}

void transvers_maju(){
    Node *temp = head; 

    int i = 1;
    while(temp != NULL){
        cout << "data ke " << i  << ": ";
        cout << temp ->data;
        temp = temp ->next;
        cout << endl;
       
        i++;
    }


}

void transvers_mundur(){

    Node *temp = head;
    int i = 1;
    while(temp -> next != NULL){
        temp = temp ->next;
        
    }

    while(temp != NULL){
        cout << "data ke " << i  << ": ";
        cout << temp ->data;
        temp = temp -> prev;
        cout << endl;
       
        i++;
    }


}



int hitung_data(){
    Node *temp = head;
    int jumlah = 0;
    while (temp != NULL){
        temp ->data;
        jumlah += temp ->data;
        temp = temp ->next;
        
    }
    return jumlah;
}

int main (){
    input_double (10);
    input_double(20);
    input_double(30);
    input_double(40);
    cout << "traversal maju\n";
    transvers_maju();

    cout << "traversal mundur\n";
    transvers_mundur();
    cout << "jumlah data : " ;
    cout << hitung_data();

    input_sircular(30);
    input_sircular(40);
    input_sircular(40);
    input_sircular(60);

    cout << "\ntampil sirkular\n";
    travers_cirkular();

}