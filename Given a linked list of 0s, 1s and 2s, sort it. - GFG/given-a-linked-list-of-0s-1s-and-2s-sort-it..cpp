// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


 // } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) 
    {
        Node* cur=head;
        Node* prev=head;
        while(cur)
        {
            if(cur->data==0)
            {
               int t=prev->data;
               prev->data=cur->data;
               cur->data=t;
               prev=prev->next;
            }
            cur=cur->next;
        }
        cur=head;
        while(cur)
        {
            if(cur->data==1)
            {
               int t=prev->data;
               prev->data=cur->data;
               cur->data=t;
               prev=prev->next;
            }
            cur=cur->next;
        }
        return head;
        
        
        
        
        
    //WITH SPACE
    //   vector<int> v;
    //   Node* cur=head;
    //   while(cur)
    //   {
    //       v.push_back(cur->data);
    //       cur=cur->next;
    //   }
    //   sort(v.begin(),v.end());
    //   cur=head;
    //   int i=0;
    //   while(cur)
    //   {
    //       cur->data=v[i++];
    //       cur=cur->next;
    //   }
    //   return head;
    
    }
};


// { Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}  // } Driver Code Ends