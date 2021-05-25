#include <iostream>
#include <sstream>
#include <stdexcept>
#include <fstream>
#include <string>
#include "doctest.h"
#include "BinaryTree.hpp"
using namespace ariel;
using namespace std;

TEST_CASE("Char BinaryTree"){
    BinaryTree<char> char_tree;
    CHECK_NOTHROW(char_tree.add_root('a'));
    CHECK_NOTHROW(char_tree.add_left('a','b'));
    CHECK_NOTHROW(char_tree.add_right('a','c'));

    CHECK_NOTHROW(char_tree.add_left('c','j'));
    CHECK_NOTHROW(char_tree.add_right('c','n'));

    CHECK_NOTHROW(char_tree.add_left('b','d'));
    CHECK_NOTHROW(char_tree.add_right('b','e'));

    CHECK_NOTHROW(char_tree.add_left('d','f'));
    CHECK_NOTHROW(char_tree.add_right('d','g'));

    CHECK_NOTHROW(char_tree.add_left('f','h'));
    CHECK_NOTHROW(char_tree.add_right('f','i'));

    CHECK_NOTHROW(char_tree.add_left('e','g'));
    CHECK_NOTHROW(char_tree.add_right('e','k'));

    CHECK_THROWS(char_tree.add_left('l','k'));
    CHECK_THROWS(char_tree.add_right('m','l'));

     CHECK_THROWS(char_tree.add_left('n','k'));
    CHECK_THROWS(char_tree.add_right('o','l'));

     CHECK_THROWS(char_tree.add_left('q','k'));
    CHECK_THROWS(char_tree.add_right('r','l'));

     CHECK_THROWS(char_tree.add_left('s','k'));
    CHECK_THROWS(char_tree.add_right('t','l'));

    char i = 'q';
    char a[] = {'a','b','c','d','e','f','g','h'};
    char b[] = {'i','j','k','l','m','n','o','p'};


for (auto it=char_tree.begin_preorder(); it!=char_tree.end_preorder(); ++it)
    {
        CHECK_EQ(*it,a[i++]);
    }  
    for (auto it=char_tree.begin_preorder(); it!=char_tree.end_preorder(); ++it)
    {
        CHECK_EQ(*it,b[i++]); 
    }  
}