/**
 * Copyright 2018 Onchere Bironga
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef WHACK_COMPILEROPT_HPP
#define WHACK_COMPILEROPT_HPP

#pragma once

#include "ast.hpp"

namespace whack::ast {

class CompilerOpt final : public AST {
public:
  explicit CompilerOpt(const mpc_ast_t* const ast)
      : options_{getIdentList(ast->children[2])} {}

  const auto& options() const { return options_; }

private:
  ident_list_t options_;
};

} // end namespace whack::ast

#endif // WHACK_COMPILEROPT_HPP
