#include <bits/stdc++.h>
using namespace std;

// tree node is defined
class tree{    
	public:
		int data;
		tree *left;
		tree *right;
};

//convert to sum tree
int toSumTree(tree *node){ 
	if(!node) //base case 
		return 0;
	
	//store old value
	int temp=node->data; 
	
	//update to new value
	node->data=toSumTree(node->left)+toSumTree(node->right); 
	
	//return for upper level sums
	return node->data+temp; 
}


//printing the tree using level order traversal
void printTree(tree* root){
	queue<tree*> q;  // using stl
	tree* temp;
	q.push(root);
	q.push(NULL);
	cout<<"root\n";
	while(!q.empty()){
		temp=q.front();
		q.pop();
		if(temp==NULL){
			if(!q.empty()){
				cout<<"\nnext level\n";
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";  //print node
			if(temp->left)
				q.push(temp->left); //EnQueue
			if(temp->right)
				q.push(temp->right); //EnQueue
		}
	}
}

// creating new node
tree* newnode(int data)  
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
	tree *root=newnode(10); 
	root->left= newnode(-2); 
	root->right= newnode(8); 
	root->right->right=newnode(5);
	root->right->left=newnode(-7);
	root->left->left=newnode(6); 
	root->left->right=newnode(-5);

	cout<<"printing the original tree...\n"; 
	printTree(root);

	toSumTree(root);
	cout<<"\nprinting the converted tree...\n";
	printTree(root);

	return 0; 
} 
