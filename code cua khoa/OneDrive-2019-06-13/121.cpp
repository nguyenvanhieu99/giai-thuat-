#include <iostream>

using namespace std;

struct node
{
	int data;
	node *left;
	node *right;
};

class BST
{
	protected:
		node *root;
	public:
		
		BST(){root = nullptr;}
		
		node *newNode(int v){
			node *n = new node;
			n->data = v;
			n->left = n->right = nullptr;
			return n;
		}
		
		node *insert(node *root, int v){
			if (root == nullptr) return newNode(v);
			if (root->data > v) root->left = insert(root->left, v);
			else root->right = insert(root->right, v);
			return root;
		}
		

		void inOrder(node *root){
			if (root != nullptr){
				inOrder(root->left);
				cout << root->data << " ";
				inOrder(root->right);
			}
		}		
	
		
		void solve(){
			int n, v;
			
			cin >> n;
			while (n--){
				cin >> v;
				root = insert(root, v);
			}
			
			inOrder(root);
			cout << "\n";
			
			
		}
		
};


int main()
{
	int t;
	cin >> t;
	while (t--){
		BST tree;
		tree.solve();
	}
	
	return 0;
}




