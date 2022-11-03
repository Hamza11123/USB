// tree->non - linear-> ideal for representing heirarchial data-STructure
// Array, stack, queue, linkList->linear
// In a tree with 'n' [Node]-> n-1 [Edges]

// Types-of-B-Trees;

// 1. Full or Strict Binary Tree:- all nodes have either "0 or 2" cildren
/*
Example:-


     *
    / \
   *   *
  / \
 *   *


*/

// 2. Perfect Binary-Tree :- "Internal Nodes have 2 children" + "all leafs nodes are on Same Level"
/*
Example:-

      *
    /   \
   *     *
  / \   / \
 *   * *   *


*/

// 3. Complete-BtTree :- "All levels are completely filled except possibly the last level"  + "Last level must its keys  [as left as possible]"
/*
Example:-

      *
    /   \
   *     *
  / \   /
 *   * *


*/

// 4. Degenerate-Tree ;- "Every Parent Node has [Only-One-Child]"

/*
 Example :-

      *
    /
   *
    \
     *
      \
       *

 */

// 5. Skewed-Trees; Left & Right Skewed-Tree :- "all the childrens of left/Right-Skewed To The Left/Right"
#include <stdio.h>

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void)
{
    return 0;
}