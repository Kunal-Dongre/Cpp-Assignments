#include <iostream>
using namespace std;
struct Node
	{
		int data;
		struct Node* left;
		struct Node* right;
	};
class tree: Node
{
    public:
	
	void PreOrder(struct Node *t)
	{
		if (t != NULL)
		{
		cout<<t->data<<" ";
		PreOrder(t->left);
		PreOrder(t->right);
	    }
	}
	void InOrder(struct Node *t)
	{
		if (t != NULL)
	    {
		InOrder(t->left);
		cout<<t->data<<" ";
		InOrder(t->right);
	    }
	}
	void PostOrder(struct Node *t)
	{
		if (t != NULL)
	    {
		PostOrder(t->left);
		PostOrder(t->right);
		cout<<t->data<<" ";
	    }
	}
	public:
	void operation()
	{
		struct Node *root = new Node;
		struct Node *first = new Node;
		struct Node *second = new Node;
		struct Node *third = new  Node;
		struct Node *fourth = new Node;

		root->data=1;
	    root->left = first;
		root->right = second;

		first->data = 2;
	    first->left = third;
		first->right = fourth;

		second->data = 3;
		second->left =NULL;
		second->right = NULL;

		third->data = 4;
		third->left =NULL;
		third->right = NULL;

		fourth->data = 5;
		fourth->left =NULL;
		fourth->right = NULL;

		cout<<"Preorder traversal of tree is: ";
		PreOrder(root);
		cout<<endl<<"Inorder traversal of tree is: ";
		InOrder(root);
		cout<<endl<<"Postorder traversal of tree is: ";
		PostOrder(root);
	}
};

int main()
{
  tree k;
  k.operation();
  return 0;
}
