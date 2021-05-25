#pragma once
#include <iostream>
#include <stack>
#include <sstream>
#include <fstream>
#include <string>
#include <stdexcept>

namespace ariel
{

template<typename T>
    class BinaryTree
    {
        struct TreeNode
        {
                T data;
                TreeNode *left;
                TreeNode *right;

                TreeNode(T value){
                    data = value;
                    this->left = nullptr;
                    this->right = nullptr;
                
                }
        };

      private:
        TreeNode *root ;

      public:
        BinaryTree<T>(){}
        ~BinaryTree(){}
        BinaryTree<T> add_root(const T& root){return *this;}
        BinaryTree<T> add_left(const T& rootIn,const T& leftIn){return *this;}
        BinaryTree<T> add_right(const T& rootIn,const T& rightIn){return *this;}

    class iterator
    {
        private:
            std::stack<TreeNode*> st;
            TreeNode* point_current;

        public:
            iterator(TreeNode* ptr = nullptr)
            {
                point_current = ptr;
            }

            T& operator*() const
            {
                return point_current->data;
            }

            T* operator->() const 
            {
                return &(point_current->data);
                }

            iterator& operator++(){return *this;}
            const iterator operator++(int){return *this;}
            bool operator==(const iterator& other) const {
                return point_current == other.point_current;}
            bool operator!=(const iterator& other) const {
                return point_current != other.point_current;}

    };

                    iterator begin_preorder(){return iterator(nullptr);}
                    iterator end_preorder(){return iterator(nullptr);}
                    iterator end_inorder(){return iterator(nullptr);}
                    iterator begin_inorder(){return iterator(nullptr);}
                    iterator end_postorder(){return iterator(nullptr);}
                    iterator begin_postorder(){return iterator(nullptr);}
                    iterator begin(){return iterator(nullptr);}
                    iterator end(){return iterator(nullptr);}
                    friend std::ostream& operator<<(std::ostream& output,const BinaryTree<T> &tree){
                        return output;}

    };
}
