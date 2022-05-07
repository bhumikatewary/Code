/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    TreeNode* helper(vector<int> a, int s, int e){   // helper function 
        if(s>e) return NULL;   // if array does not exists return NULL
        
        int mid = (s+e)/2;    // calculate mid value
        int rootData=a[mid];  // assign mid value to root
        
        TreeNode* root= new TreeNode(rootData);  // Constructing the root of the tree with the rootData
        
        root->left= helper(a,s,mid-1);  // traversing the left subtree
        root->right=helper(a,mid+1,e);  // traversing the right subtree
        
        return root;
        
        
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);  // calling helper function to return result
    }
};
