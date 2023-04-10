#pragma once

#include <cctype>
#include <iostream>
#include "astnode.hpp"

class Mul: public ASTNode {
public:
    inline Mul(ASTNode *left, ASTNode *right) : ASTNode("*", left, right){}
};