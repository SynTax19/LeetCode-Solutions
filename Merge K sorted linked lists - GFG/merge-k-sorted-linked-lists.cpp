// { Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}

 // } Driver Code Ends
/*Linked list Node structure

struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 

class Solution{
  public:
      struct compare{
       bool operator()(pair<int,Node*>&a,pair<int,Node*>&b){
           return a.first>=b.first==true;
       }
   };
   
    Node * mergeKLists(Node *arr[], int K)
    {
           priority_queue<pair<int,Node*>,vector<pair<int,Node*>>,compare>pq;
           // pq -- > ( 1, {N1 , N2 , N3 . . . . .}
           //           2, {N1 , N2 , N3 . . . . .}  )
           
         for(int i=0;i<K;i++){
             Node*temp=arr[i];
             while(temp!=NULL){
                 
                 pq.push({temp->data,temp});
                 temp=temp->next;
             }
         }
         Node*head=pq.top().second;
         Node*tail=pq.top().second;
         pq.pop();
         while(!pq.empty())
         {
             tail->next=pq.top().second;
             tail=tail->next;
             pq.pop();
         }
         tail->next=NULL;
         return head;
    }
};



// { Driver Code Starts.
// Driver program to test above functions
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}
   		Solution obj;
   		Node *res = obj.mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}
  // } Driver Code Ends