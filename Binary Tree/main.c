#include <stdio.h>
#include <stdlib.h>

typedef struct treenode{
    int value;
    struct treenode *left;
    struct treenode *right;
}treenode;

    treenode *creatnode(int value){
        treenode* result = malloc(sizeof(treenode));
        if(result != NULL){
            result->left = NULL;
            result->right = NULL;
            result->value = value;
        }
        return result;
    }

    void printtabs(int numtabs){
        for(int i =0; i < numtabs; i++){
            printf("\t");
        }
    }

    void printtree_rec(treenode *root, int level){
        printtabs(level);
        if(root == NULL){
            printf("---<empty>---\n");
            return;
        }
        printf("value = %d\n" ,root->value);
        printf("left\n");
        printtabs(level);
        printtree_rec(root->left, level+1);

        printtabs(level);
        printf("right\n");
        printtree_rec(root->right, level+1);

        printtabs(level);
        printf("done\n");
    }

    void printtree(treenode* root){
        printtree_rec(root, 0);
    }

int main()
{
    treenode *n1 = creatnode(10);
    treenode *n2 = creatnode(11);
    treenode *n3 = creatnode(12);
    treenode *n4 = creatnode(13);
    treenode *n5 = creatnode(14);


    n1->left = n2;
    n1->right = n3;
    n3->right = n4;
    n3->right = n5;

    printtree(n1);


    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);


    return 0;
}
