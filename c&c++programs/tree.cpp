#include<bits/stdc++.h>
using namespace std;

class tree{ //tree node
	public:
		int data;
		tree *left;
		tree *right;
};

bool hasRootToLeafSum(tree *root, int s){
	bool path=false; //declare boolean variable path
	//base condition checking
	if(root==NULL && s==0)
		return true;

	s-=root->data; //subtract current root value

	//checking whether leaf node reached and remaining sum =0
	if(s==0 && root->left==NULL && root->right==NULL) 
		return true;
	//recursively done for both subtrees
	if(root->left){//for left subtree
		path=path||hasRootToLeafSum(root->left, s);
	}
	if(root->right){//for right subtree
		path=path||hasRootToLeafSum(root->right, s);
	}
	return path;
}


tree* newnode(int data){  //creating new nodes
	tree* node = (tree*)malloc(sizeof(tree)); 
	node->data = data; 
	node->left = NULL; 
	node->right = NULL; 
	return(node); 
} 

int main() { 
	//**same tree is builted as shown in example**
	cout<<"tree in the example is build here"<<endl;
	//building the tree like as in the example
	tree *root=newnode(8); 
	root->left= newnode(5); 
	root->right= newnode(4); 
	root->right->right=newnode(11);
	root->right->right->left=newnode(3);
	root->left->left=newnode(9); 
	root->left->right=newnode(7);
	root->left->right->left=newnode(1);
	root->left->right->right=newnode(12);
	root->left->right->right->left=newnode(2);

	int s;

	cout<<"enter input sum S......"<<endl;
	cin>>s;
	
	if(hasRootToLeafSum(root,s))//if there exists such a path
		cout<<"A root to leaf path with this sum  exists"<<endl;
	else
		cout<<"No such a path exists"<<endl;
	
	return 0; 
} 
