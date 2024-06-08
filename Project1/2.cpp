#include <iostream>
#include <fstream>
#include <string>
#include "AVL_Tree.h"
using namespace std;



int main() {
    Node* root = nullptr;
    read_file(root, "Input.txt");
    print_tree(root, "", true);
    write_to_file(root, "Output.txt");
    delete_tree(root);
    return 0;
}
