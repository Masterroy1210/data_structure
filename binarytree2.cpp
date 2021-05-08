#include<iostream>
using namespace std;

struct node{
    int key;
    struct node *left;
    struct node *right;
};

struct node *getnode(int value){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->key=value;
    newnode->right=NULL;
    newnode->left=NULL;
    return newnode;
}

struct node *insert(struct node *root,int value){
    if(root==NULL){
        return getnode(value);
    }
    if(root->key<value){
        root->right = insert(root->right,value);
    }
    if(root->key>value){
        root->left = insert(root->left,value);
    }
    return root;

}
void inorder(struct node *root){
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}
int search(struct node *root,int key){
    if(root==NULL){
        return 0;
    }
    if(root->key==key){
        return 1;
    }
    if(root->key>key){
        return search(root->left,key);
    }else{
        return search(root->right,key);
    }

}
int getrightmin(struct node *root){
    struct node *tem =root;
    while(tem->left!=NULL){
        tem=tem->left;
    }
    return tem->key;
}

struct node *deletenode(struct node *root,int value){
    if(root==NULL){
        return NULL;
    }
    if(root->key>value){
        root->left = deletenode(root->left,value);
    }
    else if(root->key<value){
        root->right = deletenode(root->right,value);
    }
    else{
        if(root->left==NULL && root->right==NULL){
            free(root);
            return NULL;
        }
        else if(root->left==NULL){
            struct node *temp = root->right;
            free(root);
            return temp;
            
        }
        else if(root->right==NULL){
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        else{
            int rightmin = getrightmin(root);
            root->key=rightmin;
            root->right = deletenode(root->right,rightmin);
        }
    }
}

int main(){
            int ch;
            struct node *root = NULL;
            do{
                cout<<"\n 1.Create Binary Tree"<<endl;
                cout<<"\n 2.Inorder Traversal"<<endl;
                cout<<"\n 3.Search Element"<<endl;
                cout<<"\n4.delete a node from binary tree"<<endl;
                cin>>ch;
                
            switch(ch){
                case 1:{
                        int n;
                    cout<<"Enter the no of nodes"<<endl;
                    cin>>n;
                    for(int i=0;i<n;i++){
                        int val;
                        cout<<"Enter the value"<<endl;
                        cin>>val;
                        root =insert(root,val);
                    }
                }
                    
                    break;
                case 2:
                        inorder(root);
                        break;
                case 3:{
                        int key;
                        cout<<"Enter the key you want to search"<<endl;
                        cin>>key;
                        int f = search(root,key);
                        if(f==0){
                            cout<<"The Key is not present in the Tree"<<endl;

                        }else{
                            cout<<"The Key is present in the tree"<<endl;
                        }
                        }
                        
                        break;
                case 4: {
                        int val;
                        cout<<"\nEnter the node value you want to delete"<<endl;
                        cin>>val;
                        root = deletenode(root,val);
                        }
                        
                        break;

            }
            }while(ch!=5);
            return 0;
}