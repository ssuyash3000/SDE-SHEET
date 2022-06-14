void postorder(BinaryTreeNode<int> *root, vector<int> &ans){
    if(root == NULL)
        return;
    postorder(root->left, ans);
    postorder(root->right, ans);
    ans.push_back(root->data);
}
void inorder(BinaryTreeNode<int> *root, vector<int> &ans){
    if(root == NULL)
        return;
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
    
}
void preorder(BinaryTreeNode<int> *root, vector<int> &ans){
    if(root == NULL)
        return;
    ans.push_back(root->data);
    preorder(root->left, ans);
    preorder(root->right, ans);
    
}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    vector<int> ans1, ans2, ans3;
    inorder(root, ans1);
    preorder(root, ans2);
    postorder(root, ans3);
    vector<vector<int>> finalAns;
    finalAns.push_back(ans1);
    finalAns.push_back(ans2);
    finalAns.push_back(ans3);
    return finalAns;
    
}
