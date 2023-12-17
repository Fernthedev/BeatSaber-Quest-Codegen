#pragma once
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaRunnableProxy_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaRunnable_def.hpp"
//  Writing Method size for method: ::UnityEngine::AndroidJavaRunnableProxy._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AndroidJavaRunnableProxy::*)(::UnityEngine::AndroidJavaRunnable*)>(&::UnityEngine::AndroidJavaRunnableProxy::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2c840b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaRunnableProxy*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AndroidJavaRunnable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaRunnableProxy.run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AndroidJavaRunnableProxy::*)()>(&::UnityEngine::AndroidJavaRunnableProxy::run)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c841ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaRunnableProxy*>::get(),
                            "run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::AndroidJavaRunnableProxy::__set_mRunnable(::UnityEngine::AndroidJavaRunnable*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AndroidJavaRunnable*, 0x20>(this, std::forward<::UnityEngine::AndroidJavaRunnable*>(value));
}
constexpr ::UnityEngine::AndroidJavaRunnable* UnityEngine::AndroidJavaRunnableProxy::__get_mRunnable()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AndroidJavaRunnable*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AndroidJavaRunnable*> UnityEngine::AndroidJavaRunnableProxy::__get_mRunnable() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AndroidJavaRunnable*, 0x20>(this);
}
inline ::UnityEngine::AndroidJavaRunnableProxy* UnityEngine::AndroidJavaRunnableProxy::New_ctor(::UnityEngine::AndroidJavaRunnable*  runnable)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::AndroidJavaRunnableProxy*>(runnable));
}
inline void UnityEngine::AndroidJavaRunnableProxy::_ctor(::UnityEngine::AndroidJavaRunnable*  runnable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaRunnableProxy*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AndroidJavaRunnable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, runnable);
}
inline void UnityEngine::AndroidJavaRunnableProxy::run()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaRunnableProxy*>::get(),
                            "run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
