#pragma once

#include <cctype>
#include <iostream>
#include "astnode.hpp"

class Div: public ASTNode {
public:
    inline Div(ASTNode *left, ASTNode *right) : ASTNode("/", left, right){}
};
