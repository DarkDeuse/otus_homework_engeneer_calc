#pragma once

#include <string>

#include "astnode.hpp"

class Variable : public ASTNode {
  public:
    Variable(const std::string &variable)
        : ASTNode(std::string(variable)){}

    std::string value() const { return variable_; }

  private:
    std::string variable_;
};
