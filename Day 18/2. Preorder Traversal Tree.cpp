void inorder(TreeNode* root , vector<int> &in)
{
    if(root == NULL)return ;
    
    in.push_back(root->data);
    inorder(root->left,in);
    inorder(root->right,in); 
}

vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> ans ; 
    inorder(root,ans);
    return ans ;
}
