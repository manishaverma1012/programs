#include <bits/stdc++.h>
using namespace std;

// tree node is defined
class tree{    
	public:
		int data;
		tree *left;
		tree *right;
};

void printSibling(tree* root)
{
	//Declare queue using STL 
	queue<tree*> q;
	//enqueue the root
	q.push(root);
	vector<int> store;

	tree* temp;
	//do the level order traversal & check for siblings
	while(!q.empty()){
		//dequeue
		temp=q.front();
		q.pop();
		//if the current node has only one child 
		//definitely the child has no sibling
		//store the child node value
		if(temp->left==NULL && temp->right!=NULL){
			store.push_back(temp->right->data);
		}

		if(temp->left!=NULL && temp->right==NULL){
			store.push_back(temp->left->data);
		}
		// do level order traversing
		if(temp->right)
			q.push(temp->right);
		if(temp->left)
			q.push(temp->left);
	}
	//if no node found without having sibling
	//vector size is zero
	//print -1
	if(store.size()==0){
		printf("-1, no such  node\n");
	return;
	}
	//sort the vector to print sorted node value
	sort(store.begin(),store.end());
	//printing
	for(auto it=store.begin();it!=store.end();it++)
		printf("%d ",*it);
}

tree* newnode(int data)  // creating new node
{ 
	tree* node = (tree*)malloc(sizeof(tree)); 
	node->data = data; 
	node->left = NULL; 
	node->right = NULL; 

	return(node); 
} 


int main() 
{ 
	//**same tree is builted as shown in example**
	cout<<"same tree is built as shown in example\n";
	tree *root=newnode(2); 
	root->left= newnode(7); 
	root->right= newnode(5); 
	root->right->right=newnode(9);
	root->right->right->left=newnode(4);
	root->left->left=newnode(2); 
	root->left->right=newnode(6);
	root->left->right->left=newnode(5);
	root->left->right->right=newnode(11);

	cout<<"printing the nodes that don't have sibling...\n"<<endl; 
	printSibling(root);

	return 0; 
} 
