#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void input(int nilai){
   
    Node *nodebaru = new Node();
    nodebaru -> data = nilai;
    nodebaru -> next = NULL;
    
    if(head == NULL){
    head = nodebaru;
    tail = nodebaru;
    
    }else{
        tail -> next = nodebaru;
        tail = nodebaru;
    }
    
}

void transvers(){
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
    input (10);
    input (20);
    input (30);
    input (40);
    transvers();
    cout << "jumlah data : " ;
    cout << hitung_data();

}