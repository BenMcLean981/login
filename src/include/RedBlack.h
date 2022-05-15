#ifndef LOGIN_RED_BLACK_H

template <typename T>
class RedBlack
{
private:
    RedBlack *parent;
    T data;
    RedBlack *left;
    RedBlack *right;

    void rotateLeft();
    void rotateRight();

public:
    RedBlack(T);
    RedBlack(T, RedBlack *);
    RedBlack(T, RedBlack *, RedBlack *, RedBlack *);
    void insert(T);
    void remove(T);
    RedBlack<T> *search(T);
    search(T);
};

#endif