#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node *left;
    struct node *right;
}node;

    void checkEqual(struct node* left, struct *node right){
        bool equal = false;
        if(left == right){
            equal = true;
            if(equal == true){
                printf("The tree edges are equal");
            }else{
                printf("The tree edges are not equal");
            }
        }

    node *creatnode(int value){
        node* result = malloc(sizeof(node));
        if(result != NULL){
            result->left = NULL;
            result->right = NULL;
            result->value = value;
        }
        return result;
    }
}

int main()
{
    node *n1 = creatnode(10);
    node *n2 = creatnode(11);
    node *n3 = creatnode(12);
    node *n4 = creatnode(13);
    node *n5 = creatnode(14);

    checkEqual(node->left,node->right);

    return 0;
}
