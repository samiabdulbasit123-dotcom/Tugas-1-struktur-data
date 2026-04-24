#include <iostream>
using namespace std;

struct Node{
    int nilai;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;
void input(int data){
   
    Node *nodebaru = new Node();
    nodebaru -> nilai = data;
    nodebaru -> next = NULL;
    
    if(head == NULL){
    head = nodebaru;
    tail = nodebaru;
    
    }else{
        tail -> next = nodebaru;
        tail = nodebaru;
    }
    
}


int cari_nilai_besar(){
    Node *temp = head;
    int max = temp -> nilai;
    while(temp != NULL){
        if (temp -> nilai > max){
            max = temp -> nilai; 
        }
        temp = temp -> next;
    }
    return max;

}

void traverse(){
	int i = 1;
    Node *temp = head;
	while (temp != NULL){
		cout << "Data ke " << i << ": ";
		cout << temp->nilai;
		temp = temp ->next;
		cout << endl;
		i++;
	}
}

int main()
{
    
   input(40);
   input(15);
   input(100);
   input(90);
   traverse();

    cout << "nilai terbesar nya adalah : ";
    cout << cari_nilai_besar();


   return 0;
}




