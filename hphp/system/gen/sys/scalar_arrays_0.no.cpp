/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#include <runtime/base/hphp.h>
#include <sys/system_globals.h>
#include <sys/literal_strings.h>

namespace hphp_impl_starter {}

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

StaticArray SystemScalarArrays::ssa_[2];

void SystemScalarArrays::initialize() {
  ssa_[0] = StaticArray(ArrayData::Create());
  ssa_[0].setEvalScalar();
  ssa_[1] = StaticArray(ArrayInit(9).add(NAMSTR(s_sys_ss2058ee93, "bool"), 1L, true).add(NAMSTR(s_sys_ss7352a1bc, "boolean"), 1L, true).add(NAMSTR(s_sys_ss0d4e9a89, "int"), 1L, true).add(NAMSTR(s_sys_ss508ba625, "integer"), 1L, true).add(NAMSTR(s_sys_ss4ed43ee6, "real"), 1L, true).add(NAMSTR(s_sys_ss37da49a8, "double"), 1L, true).add(NAMSTR(s_sys_ss3f37a7c7, "float"), 1L, true).add(NAMSTR(s_sys_ss3b11235d, "string"), 1L, true).add(NAMSTR(s_sys_ss28693096, "array"), 1L, true).create());
  ssa_[1].setEvalScalar();
  SystemScalarArrays::initializeNamed();
}

///////////////////////////////////////////////////////////////////////////////
}
