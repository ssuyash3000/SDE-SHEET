bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
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
        bool ans1 = identicalTrees(root1->left, root2->left);
        bool ans2 = identicalTrees(root1->right, root2->right);
        return ans1 && ans2;
    }
}
