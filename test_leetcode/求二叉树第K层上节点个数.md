##### 求二叉树第K层节点个数

- [ ] 方法一

````c
//递推的方式
//已知：左子树第k-1层结点个数left,右子树第k-1层结点个数 right
void LevelK(TreeNode* root,int k){
    if(root==NULL){
        return 0;
    }
    //这里肯定不是空树了
    if(k==1){
        return 1;
    }
    //递推
    return LevelK(root->left,k-1)+LevelK(root->right,k-1);
}
````

