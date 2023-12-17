#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithApplicationVersion_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationVersion_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithApplicationVersion._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithApplicationVersion::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithApplicationVersion::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26eeb08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationVersion*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithApplicationVersion.GetApplicationVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ApplicationVersion* (::Oculus::Platform::MessageWithApplicationVersion::*)()>(&::Oculus::Platform::MessageWithApplicationVersion::GetApplicationVersion)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26f0d98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationVersion*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationVersion*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithApplicationVersion.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ApplicationVersion* (::Oculus::Platform::MessageWithApplicationVersion::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithApplicationVersion::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f0dd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationVersion*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationVersion*>::get(),
                                  72
                                ));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithApplicationVersion* Oculus::Platform::MessageWithApplicationVersion::New_ctor(::cordl_internals::intptr_t  c_message)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithApplicationVersion*>(c_message));
}
inline void Oculus::Platform::MessageWithApplicationVersion::_ctor(::cordl_internals::intptr_t  c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationVersion*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::ApplicationVersion* Oculus::Platform::MessageWithApplicationVersion::GetApplicationVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationVersion*>::get(),
                            "GetApplicationVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ApplicationVersion*, false>(*this, ___internal_method);
}
inline ::Oculus::Platform::Models::ApplicationVersion* Oculus::Platform::MessageWithApplicationVersion::GetDataFromMessage(::cordl_internals::intptr_t  c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationVersion*>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ApplicationVersion*, false>(*this, ___internal_method, c_message);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
