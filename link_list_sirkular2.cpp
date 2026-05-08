#include <iostream>
using namespace std;

struct Node{
    int nilai;
    Node *next;
    // Node *prev;
};

Node *head = NULL;
// Node *tail = NULL;

// void input_double(int data){
   
//     Node *nodebaru = new Node();
//     nodebaru -> nilai = data;
//     nodebaru -> next = head;
//     nodebaru -> prev = NULL;

//     if(head != NULL){
//         head -> prev = nodebaru;
//     }
//     head = nodebaru;
   
   
// }

void insert_sirkular(int data){

    Node *nodebaru = new Node;
    nodebaru -> nilai = data;

    if(head == NULL){
        head = nodebaru;
        nodebaru -> next = head; 
    }else{

        Node *bantu = head;

        while(bantu -> next != head){
            bantu = bantu -> next;
        }
        nodebaru -> next = head;
        bantu -> next = nodebaru;
        head = nodebaru;

    }


}


int cari_nilai_besar(){
    if(head == NULL) return -1;

    Node *temp = head;
    int max = temp -> nilai;
    while(temp -> next != head){
        if (temp -> nilai > max){
            max = temp -> nilai; 
        }
        temp = temp -> next;
    }
    return max;

}

// void traverse_maju(){
// 	int i = 1;
//     Node *temp = head;
// 	while (temp != NULL){
// 		cout << "Data ke " << i << ": ";
// 		cout << temp->nilai;
// 		temp = temp ->next;
// 		cout << endl;
// 		i++;
// 	}
// }

// void traverse_mundur(){
//     int i = 1;
//     Node *temp = head;

//     while(temp -> next != NULL){
//         temp = temp -> next;
//     }

//     while(temp != NULL){
//         cout << "Data ke " << i << ": ";
//         cout << temp -> nilai << endl;
//         temp = temp -> prev;
//         i++;
//     }
// }

void traverse_sirkular(){

    if(head == NULL ) return;

    Node *temp = head;
    int putaran = 0;
    while(putaran < 2){
        cout << temp -> nilai << endl;
        temp = temp -> next;
        
        if(temp == head){
            putaran++;
        }
    }


}

int main()
{
    
//    input_double(10);
//    input_double(20);
//    input_double(30);
//    input_double(40);

   insert_sirkular(10);
   insert_sirkular(20);
   insert_sirkular(30);
   insert_sirkular(40);

//    cout << "tampilan dari depan: " << endl;
//    traverse_maju();

//    cout << "tampilan dari belakang: " << endl;
//    traverse_mundur();

   cout << "tampilan sirkular: " << endl;
    traverse_sirkular();

    cout << "nilai terbesar nya adalah : ";
    cout << cari_nilai_besar();


   return 0;
}





