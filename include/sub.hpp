#pragma once

#include <cctype>
#include <iostream>
#include "astnode.hpp"

class Sub: public ASTNode {
public:
    inline Sub(ASTNode *left, ASTNode *right) : ASTNode("-", left, right){}
};