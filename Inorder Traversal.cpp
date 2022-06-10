void help(TreeNode* root, vector<int> &ans){
    if(root == NULL)
        return;
    else{
        help(root->left, ans);
        ans.push_back(root->data);
        help(root->right, ans);
    }
}

vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    help(root, ans);
    return ans;
    // Write your code here.
}
