/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    void helper(Node*root, vector<int> &ans){
        if(root == NULL) return;
        ans.push_back(root->val);
        
        for(int i=0; i<root->children.size();i++){
            helper(root->children[i], ans);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> ans;
       helper(root,ans); 
        return ans;
    }
};


//(Another Approach)

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    // first print the root and then its children == preorder
     vector<int> ans;
    vector<int> preorder(Node* root) {
        
        if(root == NULL) return ans;
        
        ans.push_back(root->val);  //first root
        
        for(int i=0; i<root->children.size(); i++){   //then its children
            preorder(root->children[i]);    
        }
        
        return ans;
    }
};
