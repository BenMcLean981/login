#include <RedBlack.h>

template <typename T>

RedBlack<T>::RedBlack(T data)
{
    this->data = data;
    this->parent = nullptr;
    this->left = nullptr;
    this->right = nullptr;
}

template <typename T>

RedBlack<T>::RedBlack(T data, RedBlack *parent, RedBlack *left, RedBlack *right)
{
    this->data = data;
    this->parent = parent;
    this->left = left;
    this->right = right;
}