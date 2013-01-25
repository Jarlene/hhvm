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

#ifndef __GENERATED_cls_ReflectionFunction_h10f33f36__
#define __GENERATED_cls_ReflectionFunction_h10f33f36__

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <cls/ReflectionFunctionAbstract.h>
#include <cls/Reflector.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/reflection.php line 552 */
FORWARD_DECLARE_CLASS(ReflectionFunction);
extern const ObjectStaticCallbacks cw_ReflectionFunction;
class c_ReflectionFunction : public c_ReflectionFunctionAbstract {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(ReflectionFunction, ReflectionFunction, ReflectionFunctionAbstract)
  static const ClassPropTable os_prop_table;
  c_ReflectionFunction(const ObjectStaticCallbacks *cb = &cw_ReflectionFunction) : c_ReflectionFunctionAbstract(cb) {
    if (!hhvm) setAttribute(NoDestructor);
  }
  public: void t___construct(Variant v_name);
  public: c_ReflectionFunction *create(CVarRef v_name);
  public: String t___tostring();
  public: static Variant t_export(CVarRef v_name, CVarRef v_ret = false_varNR);
  public: Variant t_invoke(int num_args, Array args = Array());
  public: Variant t_invokeargs(CVarRef v_args);
  public: Variant t_getattribute(CVarRef v_name);
  public: Variant t_getattributes();
  public: Variant t_getattributerecursive(CVarRef v_name);
  public: Variant t_getattributesrecursive();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(export);
  DECLARE_METHOD_INVOKE_HELPERS(invoke);
  DECLARE_METHOD_INVOKE_HELPERS(invokeargs);
  DECLARE_METHOD_INVOKE_HELPERS(getattribute);
  DECLARE_METHOD_INVOKE_HELPERS(getattributes);
  DECLARE_METHOD_INVOKE_HELPERS(getattributerecursive);
  DECLARE_METHOD_INVOKE_HELPERS(getattributesrecursive);
};
ObjectData *coo_ReflectionFunction() NEVER_INLINE;
extern const int64_t q_ReflectionFunction$$IS_DEPRECATED;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_ReflectionFunction_h10f33f36__
