#include <iostream>
#include <fstream>
#include <string>
#include "AVL_Tree.h"
using namespace std;



int main() {
    AVLTree tree;
    tree.read_from_file("Input.txt");
    tree.print();
    tree.write_to_file("Output.txt");
    return 0;
}
