//
//  BinaryTreeTester.cpp
//  DataStructures
//
//  Created by Schimel, Dustin on 3/27/18.
//  Copyright © 2018 Schimel, Dustin. All rights reserved.
//

#include "BinaryTreeTester.hpp"

void BinaryTreeTester :: doTreeStuff()
{
    testIntTree.insert(3);
    testIntTree.insert(1);
    testIntTree.insert(2999999);
    testIntTree.insert(-3246000);
    testIntTree.insert(-12);
    testIntTree.insert(7);
    testIntTree.insert(5);
    testIntTree.insert(0);
    testIntTree.insert(867867867);
    testIntTree.insert(5000);
    testIntTree.insert(9001);
    testIntTree.insert(10);
    testIntTree.insert(60350);
    
    testStringTree.insert("I");
    testStringTree.insert("Don't");
    testStringTree.insert("Know");
    testStringTree.insert("What");
    testStringTree.insert("I'm");
    testStringTree.insert("Doing");
    testStringTree.insert("Right");
    testStringTree.insert("Now");
    testStringTree.insert("At");
    testStringTree.insert("This");
    testStringTree.insert("Very");
    testStringTree.insert("Momemt");
    
    cout << "Pre Order Traversal" << endl;
    testIntTree.preOrderTraversal();
    cout << endl;
    testStringTree.preOrderTraversal();
    cout << endl;
    
    cout << "In Order Traversal" << endl;
    testIntTree.inOrderTraversal();
    cout << endl;
    testStringTree.inOrderTraversal();
    cout << endl;
    
    cout << "Post Order Traversal" << endl;
    testIntTree.postOrderTraversal();
    cout << endl;
    testStringTree.postOrderTraversal();
}
