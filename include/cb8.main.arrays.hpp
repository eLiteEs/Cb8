/*
 * @author: Blas Fernández (c) 2026
 * @def Functions to work with Arrays
 * @copyright Blas Fernández (c) 2026
 * @category arrays, sorting
 * @since 1.0
 */

#pragma once

template<typename T>

namespace Arrays {
  void sortbmin(std::vector<T>& vec);
  void sortbmax(std::vector<T>& vec);
  void sortbchar(std::vector<std::string> vec);
  void randomize(std::vector<T>& v);
  T getrandi(const std::vector<T>& vec);
  std::vector<std::vector<T>> splitv(const std::vector<T>& vec, size_t parts);
}
