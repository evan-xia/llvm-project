// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP___ALGORITHM_FIND_H
#define _LIBCPP___ALGORITHM_FIND_H

#include <__config>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#  pragma GCC system_header
#  pragma clang include_instead(<algorithm>)
#endif

_LIBCPP_BEGIN_NAMESPACE_STD

template <class _InputIterator, class _Tp>
_LIBCPP_NODISCARD_EXT inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17 _InputIterator
find(_InputIterator __first, _InputIterator __last, const _Tp& __value_) {
  for (; __first != __last; ++__first)
    if (*__first == __value_)
      break;
  return __first;
}

_LIBCPP_END_NAMESPACE_STD

#endif // _LIBCPP___ALGORITHM_FIND_H
