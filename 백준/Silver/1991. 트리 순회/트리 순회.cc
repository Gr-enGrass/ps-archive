
#include <iostream>

using namespace std;

struct binaryTreeNode
{
    char value;
    binaryTreeNode* left;
    binaryTreeNode* right;
    
    binaryTreeNode(char val) : value(val), left(nullptr), right(nullptr){}
};

// 전위 순회 (Preorder): Root -> Left -> Right
void preorder(binaryTreeNode* node)
{
    if (!node) 
        return;
    cout << node->value;
    preorder(node->left);
    preorder(node->right);
}

// 중위 순회 (Inorder): Left -> Root -> Right
void inorder(binaryTreeNode* node)
{
    if(!node)
        return;
    inorder(node->left);
    cout << node->value;
    inorder(node->right);
}

// 후위 순회 (Postorder): Left -> Right -> Root
void postorder(binaryTreeNode* node)
{
    if(!node)
    {
        return;
    }
    postorder(node->left);
    postorder(node->right);
    cout << node->value;
}

int main()
{
    int n;
    cin >> n;
    binaryTreeNode* nodes[26] = {nullptr};
    
    for (int i = 0; i < n; i++) 
    {
        nodes[i] = new binaryTreeNode('A' + i);
    }   
    
    for(int i =0;i<n;i++)
    {
        char value, left, right;
        cin >> value >> left >> right;

        //왼쪽자식이 있으면
        if(left!='.')
        {
            nodes[value-'A'] -> left = nodes[left-'A'];
        }
        //오른쪽자식이 있으면
        if(right!='.')
        {
            nodes[value-'A'] -> right = nodes[right-'A'];
        }
    }
    //루트노드는 항상 A
    binaryTreeNode* root = nodes[0];
    
    preorder(root);
    cout << '\n';
    inorder(root);
    cout << '\n';
    postorder(root);
    return 0;
}