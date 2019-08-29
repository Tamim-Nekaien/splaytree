#include <iostream>
#include <bits/stdc++.h>

template <typename K>
private:
class SplayTree{
  struct Node {
    Node *left;
    Node *right;
    K key;
    K data;
  };
  int size;
  Node *root = NULL;
  void Splay(Node *n, K const &key){
    if (n == NULL || n->key == key){
      return;
    }
    if( n-> key > key){
      if (key < n->left->key){
        Node *grandchild = n->left->left;
        Splay(grandchild, key);
        //perform LL rotation
        RotateRight(n->left);
        RotateRight(n);
      }
      else{
        Node *granchild = n->left->right;
      }

    }
    else{
      if (key < n->right->key){

      }
      else{

      }

    }
  }
public:
bool contains(K const &key);
void insert(K const &key);
void print();
}
