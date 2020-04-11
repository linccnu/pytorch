#pragma once
#include <string>

namespace torch {
namespace jit {
constexpr size_t BYTECODE_INDEX_INSTRUCTION = 0;
constexpr size_t BYTECODE_INDEX_OPERATOR = 1;
constexpr size_t BYTECODE_INDEX_CONSTANT = 2;
constexpr size_t BYTECODE_INDEX_TYPE = 3;
constexpr char BYTECODE_VERSION_STR[] = "version";
constexpr int64_t BYTECODE_VERSION_NUMBER = 1;
} // namespace jit
} // namespace torch
