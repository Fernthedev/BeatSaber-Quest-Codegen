#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaException_def.hpp"
//  Writing Method size for method: ::UnityEngine::AndroidJavaException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AndroidJavaException::*)(::StringW, ::StringW)>(&::UnityEngine::AndroidJavaException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c7e190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaException*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaException.get_StackTrace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::AndroidJavaException::*)()>(&::UnityEngine::AndroidJavaException::get_StackTrace)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c83e74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaException*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaException*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::AndroidJavaException::__set_mJavaStackTrace(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x90>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::AndroidJavaException::__get_mJavaStackTrace()  {
return ::cordl_internals::getInstanceField<::StringW, 0x90>(this);
}
constexpr ::StringW const& UnityEngine::AndroidJavaException::__get_mJavaStackTrace() const {
return ::cordl_internals::getInstanceField<::StringW, 0x90>(this);
}
inline ::UnityEngine::AndroidJavaException* UnityEngine::AndroidJavaException::New_ctor(::StringW  message, ::StringW  javaStackTrace)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::AndroidJavaException*>(message, javaStackTrace));
}
inline void UnityEngine::AndroidJavaException::_ctor(::StringW  message, ::StringW  javaStackTrace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaException*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, message, javaStackTrace);
}
inline ::StringW UnityEngine::AndroidJavaException::get_StackTrace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaException*>::get(),
                            "get_StackTrace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
