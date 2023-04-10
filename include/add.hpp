#pragma once

#include <cctype>
#include <iostream>
#include "astnode.hpp"

class Add: public ASTNode {
public:
    inline Add(ASTNode *left, ASTNode *right) : ASTNode("+", left, right){}
};