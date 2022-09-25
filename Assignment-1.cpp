//ASSIGNMENT-1

#include <iostream>;
using namespace std;

//Doubly Linked List
class Node{
    public:
      int age;
      string name;
      Node* prev;
      Node* next;

      Node(int age,string name){
        this->age=age;
        this->name=name;
        this->prev=NULL;
        this->next=NULL;
      }
};

//Function to take input from the user 
Node* input(){
    int age;
    string name;
    int count=0;

    
    Node* head=NULL;
    Node* temp=head;

    //Enter exit to end the Task
    cout << "Enter exit in the name block to end the task of entering family members " << endl;
    cout << "Please enter the name of the family member : " << endl;
    
    //input 
    cin >> name;
    if(name!="exit"){
        cout << "Please enter the age of the family member : " << endl;
        cin >> age;
    }
   
    //While Loop
    while(name!="exit"){
        Node* newNode=new Node(age,name);

        if(head==NULL){
            head=newNode;
            temp=newNode;
        }
        if(temp->next==NULL){
            newNode->prev=temp;
            temp->next=newNode;
            temp=temp->next;
        }
        else{
            newNode->prev=temp;
            temp->next=newNode;
            temp=temp->next;
        }

        cout << "Please enter the name of the family member : "<< endl;
        cin >> name;
        if(name!="exit"){
            cout << "Please enter the age of the family member : " << endl;
            cin >> age;
        }
    }
    return head;
}

//Function to print the Linked List
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout << "The name of the family member is : " << temp->name << "and age is: " << temp->age << endl;
        temp=temp->next;
    }
}


int main(){
    Node* head=input();
    print(head);

    return 0;
}
