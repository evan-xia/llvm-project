//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP___RANDOM_UNIFORM_RANDOM_BIT_GENERATOR_H
#define _LIBCPP___RANDOM_UNIFORM_RANDOM_BIT_GENERATOR_H

#include <__concepts/arithmetic.h>
#include <__concepts/invocable.h>
#include <__concepts/same_as.h>
#include <__config>
#include <type_traits>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#  pragma GCC system_header
#  pragma clang include_instead(<random>)
#endif

_LIBCPP_PUSH_MACROS
#include <__undef_macros>

_LIBCPP_BEGIN_NAMESPACE_STD

#if !defined(_LIBCPP_HAS_NO_CONCEPTS)

// [rand.req.urng]
template<class _Gen>
concept uniform_random_bit_generator =
  invocable<_Gen&> && unsigned_integral<invoke_result_t<_Gen&>> &&
  requires {
    { _Gen::min() } -> same_as<invoke_result_t<_Gen&>>;
    { _Gen::max() } -> same_as<invoke_result_t<_Gen&>>;
    requires bool_constant<(_Gen::min() < _Gen::max())>::value;
  };

#endif // !defined(_LIBCPP_HAS_NO_CONCEPTS)

_LIBCPP_END_NAMESPACE_STD

_LIBCPP_POP_MACROS

#endif // _LIBCPP___RANDOM_UNIFORM_RANDOM_BIT_GENERATOR_H
