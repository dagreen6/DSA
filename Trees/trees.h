#ifndef trees
#define trees

typedef struct{
	int day, month, year;
}Date;

typedef struct{
	char prodName[20];
	float prodPrice;
	int prodQty;
	Date expDate;
}Product;

typedef struct node{
	Product item;
	struct node *left, *right;
}NodeType, *NodePtr;

NodePtr createNode(Product item);
NodePtr insertNode(NodePtr root, Product item);
NodePtr deleteNode(NodePtr root, char *prodName);
void inorderTraversal(NodePtr root);
void preorderTraversal(NodePtr root);
void postorderTraversal(NodePtr root);
void bfsTraversal(NodePtr root);


#endif
