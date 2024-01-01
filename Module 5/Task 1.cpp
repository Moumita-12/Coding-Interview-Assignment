// following function to reverse of a singly linked list

ListNode* reverseList(ListNode* head) {
    ListNode* prevptr = NULL;
    ListNode* currentptr= head;
    ListNode* nextptr;

    while(currentptr!=NULL){
        nextptr = currentptr->next;
        currentptr->next = prevptr;

        prevptr = currentptr;
        currentptr = nextptr;
    }
    return prevptr;
  }

//Time Complexiety = O(n)
//Space Complexiety = O(1)



// here is my created linked list 

/*

// class node
class node{
    public:
    int data;
    node* next;

    //  Constructor of class node
    node(int val){
        data=val;
        next=NULL;

    }
};


// Insert Element At Tail
void insert_at_tail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        }
        temp->next=n;
}

// Display Element
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<' ';
        temp=temp->next;
    }
    //cout<<"NULL"<<endl;
    cout<<endl;
}


int main(){
    node* head =NULL;
    for(int i=0; i<5; i++){
        int x;
        cin>>x;
        insert_at_tail(head,x);

    }
  
    node* newhead = reverse(head);
    display(newhead); 

    return 0;
}

*/
