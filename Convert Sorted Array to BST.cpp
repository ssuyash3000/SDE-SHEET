
TreeNode<int>* sortedArrToBST(vector<int> &arr, int n, int start = 0)
    
{
    if(start > n - 1)
        return NULL;
    else{
        int mid = start + ((n - 1 - start)/2);
        TreeNode<int>* root = new TreeNode<int>(arr[mid]);
        root->left = sortedArrToBST(arr, mid, start);
        root->right = sortedArrToBST(arr, n, mid + 1);
        return root;
    }
    // Write your code here.
}
