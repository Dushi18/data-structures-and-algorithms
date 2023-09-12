Node* deletion(Node* root, int val){
//     if(root==NULL){
//         return root;
//     }
//     if(root->data==val){
//         //3 cases of deletion
//         if(root->right==NULL&& root->left==NULL){
//             Node* temp = root;
//             delete root;
//             return temp;
//         }
//         if(root->right!=NULL&& root->left==NULL){
//             Node* temp = root->right;
//             delete root;
//             return temp;
//         }
//         if(root->right==NULL&& root->left!=NULL){
//             Node* temp = root->left;
//             delete root;
//             return temp;
//         }
//         if(root->right!=NULL&& root->left!=NULL){
//             int mini = minVal(root->right)->data;
//             root->data = mini;
//             root->right = deletion(root->right, mini);
//             return root;
//         }
//     }
//     else if(root->data>val){
//         root->left =  deletion(root->left, val);
//         return root;
//     }
//     else{
//         root->right = deletion(root->right, val);
//         return root;
//     }

// }