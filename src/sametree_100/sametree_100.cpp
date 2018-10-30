
 // Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Solution {
public:
   class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
         // 采用先序遍历， 先根节点再左子树再右子树
        if(p == NULL && q == NULL){
            return true;
        }
        if((p == NULL && q != NULL) ||
            (p != NULL && q == NULL) ||
            (p->val != q->val) ||
            (!isSameTree(p->right, q->right))||
             (!isSameTree(p->left, q->left))
          ){
                return false;
            }
           return true;

           }
           };
int main(int argc, char const *argv[])
{
    Soluction s;
    // 构造一颗二叉树
    bool result = s.isSameTree();
    cout << result
    return 0;
}
