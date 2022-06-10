#include <queue>
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    
    vector<int> ans;
    if(root == NULL)
        return ans;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(q.size() != 0){
        BinaryTreeNode<int>* currNode = q.front();
        q.pop();
        ans.push_back(currNode->val);
        if(currNode->left != NULL)
            q.push(currNode->left);
        if(currNode->right != NULL)
            q.push(currNode->right);
    }
    return ans;
    
}
