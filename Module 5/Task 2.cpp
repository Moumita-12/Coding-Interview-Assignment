   node* mergeTwoLists(node* list1, node* list2) {
   node* p1 = list1;
   node* p2 = list2;
   node* start = new node(0);
   node* p3= start;

   while(p1!=NULL && p2!=NULL){
    if(p1->data <= p2->data){
    p3->next = p1;
    p1 = p1->next;
   }
   else{
    p3->next = p2;
    p2 = p2->next;
   }

   p3 = p3->next;

}

   while(p1!=NULL){
    p3->next = p1;
    p1 = p1->next;
    p3 = p3->next;
   }

   while(p2!=NULL){
    p3->next = p2;
    p2 = p2->next;
    p3 = p3->next;
   }

   return start->next;
}

// Time complexiety = O(n)
//  Space complexiety = O(1)








// here is the linked list which I created and the heads of two linked lists are passed to the above function
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

    node* head1 =NULL;
    node* head2 =NULL;

    for(int i=0; i<3; i++){
        int x;
        cin>>x;
        insert_at_tail(head1,x);

    }

     for(int i=0; i<3; i++){
        int x;
        cin>>x;
        insert_at_tail(head2,x);

    }
  

    node* newhead = mergeTwoLists(head1,head2);
    display(newhead); 

    return 0;
}

*/
