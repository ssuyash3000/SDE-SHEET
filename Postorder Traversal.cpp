void postorder(TreeNode *root, vector<int> &ans){
    if(root == NULL)
        return;
    postorder(root->left, ans);
    postorder(root->right, ans);
    ans.push_back(root->data);
}
vector<int> getPostOrderTraversal(TreeNode *root)
{
    vector<int> ans1;
    postorder(root, ans1);
    return ans1;
}
