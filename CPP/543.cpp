// Given the root of a binary tree, return the length of the diameter of the tree.

// The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

// The length of a path between two nodes is represented by the number of edges between them.

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
    
    //Declare result to use for getting the largest diameter
    int result = 0;
    
public:
    //Recursive funtion to search the tree and find the largest path
    int search (TreeNode* root) {
        //If root is null return 0
        if (root == NULL) {
            return 0;
        }
        
        //recursively travel through possible paths on tree
        int left = search(root->left);
        int right = search(root->right);
        
        //get the current maximum, resetting result if larger path found
        result = max(result, left + right+1);
        
        //return the current maximum value
        return max(left, right)+1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        //Call search function
        search(root);
        
        //return result of search function -1 to get largest diameter
        return result-1;
    }
};