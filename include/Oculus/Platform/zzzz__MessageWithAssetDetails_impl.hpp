#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAssetDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetails_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetDetails._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithAssetDetails::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithAssetDetails::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26eeb60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetDetails*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetDetails.GetAssetDetails
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetDetails* (::Oculus::Platform::MessageWithAssetDetails::*)()>(&::Oculus::Platform::MessageWithAssetDetails::GetAssetDetails)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26f0e70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetDetails*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetDetails*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetDetails.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetDetails* (::Oculus::Platform::MessageWithAssetDetails::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithAssetDetails::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f0eac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetDetails*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetDetails*>::get(),
                                  72
                                ));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithAssetDetails* Oculus::Platform::MessageWithAssetDetails::New_ctor(::cordl_internals::intptr_t  c_message)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithAssetDetails*>(c_message));
}
inline void Oculus::Platform::MessageWithAssetDetails::_ctor(::cordl_internals::intptr_t  c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetDetails*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::AssetDetails* Oculus::Platform::MessageWithAssetDetails::GetAssetDetails()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetDetails*>::get(),
                            "GetAssetDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetDetails*, false>(*this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetDetails* Oculus::Platform::MessageWithAssetDetails::GetDataFromMessage(::cordl_internals::intptr_t  c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetDetails*>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetDetails*, false>(*this, ___internal_method, c_message);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
