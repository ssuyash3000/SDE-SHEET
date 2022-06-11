bool eqauLTree(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2){
    if(root1 == NULL and root2 == NULL)
        return true;
    else if(root1 != NULL and root2 == NULL)
        return false;
    else if(root1 == NULL and root2 != NULL)
        return false;
    else{
        if(root1->data != root2->data){
            return false;
        }
        bool ans1 = eqauLTree(root1->left, root2->right);
        bool ans2 = eqauLTree(root1->right, root2->left);
        return ans1 && ans2;
    }
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    if(root == NULL)
        return true;
    return eqauLTree(root->left, root->right);
}
