#define CHECK DOCTEST_CHECK
#include "doctest.h"
#include "BinaryTree.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace doctest;
using namespace  ariel;
using namespace  std;



TEST_CASE(" Tree ") 
{
     
    BinaryTree<int> i_tree;

    CHECK_NOTHROW(i_tree.add_root(9));
    CHECK_NOTHROW(i_tree.add_root(8));

    CHECK_NOTHROW(i_tree.add_left(8,6));
    CHECK_NOTHROW(i_tree.add_right(8,4));
    CHECK_NOTHROW(i_tree.add_left(6,3));
    CHECK_NOTHROW(i_tree.add_right(6,9));
    CHECK_NOTHROW(i_tree.add_left(4,12));
    CHECK_NOTHROW(i_tree.add_right(4,9));
    CHECK_NOTHROW(i_tree.add_right(6,1));
    CHECK_NOTHROW(i_tree.add_right(1,2));
    CHECK_NOTHROW(i_tree.add_left(1,7));


    /* 
                          8
                   
                     6        4
                  
                  3    1   12   9
    */


    BinaryTree<string> s_tree;

    CHECK_NOTHROW(s_tree.add_root("A"));
    CHECK_NOTHROW(s_tree.add_root("H"));

    CHECK_NOTHROW(s_tree.add_left("H","G"));
    CHECK_NOTHROW(s_tree.add_right("H","I"));
    CHECK_NOTHROW(s_tree.add_left("G","E"));
    CHECK_NOTHROW(s_tree.add_right("G","F"));
    CHECK_NOTHROW(s_tree.add_left("I","J"));
    CHECK_NOTHROW(s_tree.add_right("I","K"));
    CHECK_NOTHROW(s_tree.add_left("E","A"));
    CHECK_NOTHROW(s_tree.add_right("E","B"));
    CHECK_NOTHROW(s_tree.add_left("F","C"));
    CHECK_NOTHROW(s_tree.add_right("F","D"));
    CHECK_NOTHROW(s_tree.add_left("J","L"));
    CHECK_NOTHROW(s_tree.add_right("J","M"));
    CHECK_NOTHROW(s_tree.add_left("K","N"));
    CHECK_NOTHROW(s_tree.add_right("K","O"));
   


    /*
                              H
                    
                      G               I
                  
                  E       F       J       K

               A    B   C   D  L    M  N     O
    */



}


TEST_CASE("in/pre/post Orders "){
    BinaryTree<int> tree;
    CHECK_NOTHROW(tree.add_root(12));
    CHECK_NOTHROW(tree.add_left(12,7));
    CHECK_NOTHROW(tree.add_right(12,8));
    CHECK_NOTHROW(tree.add_right(7,4));
    CHECK_NOTHROW(tree.add_left(7,3));

    int inorder[] = {3,7,4,12,8};
    int index = 0;

    for (auto it=tree.begin_inorder(); it!=tree.end_inorder(); ++it) {
        CHECK_EQ((*it) , inorder[index]);
        index++;
    }


    int preorder[] = {12,7,3,4,8};
    index = 0;

    for (auto it=tree.begin_preorder(); it!=tree.end_preorder(); ++it) {
        CHECK_EQ((*it) , inorder[index]);
        index++;
    }

    int postorder[] = {3,4,7,8,12};

    index = 0;
    for (auto it=tree.begin_postorder(); it!=tree.end_postorder(); ++it) {
        CHECK_EQ((*it) , inorder[index]);
        index++;
    }

    /*
                          12
                   
                     7        8
                  
                  3    4   
    */


}