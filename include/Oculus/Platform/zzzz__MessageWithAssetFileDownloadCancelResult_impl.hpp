#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAssetFileDownloadCancelResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadCancelResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26eec68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult.GetAssetFileDownloadCancelResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetFileDownloadCancelResult* (::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::*)()>(&::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::GetAssetFileDownloadCancelResult)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26f10f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AssetFileDownloadCancelResult* (::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithAssetFileDownloadCancelResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f1134;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(),
                                  72
                                ));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult* Oculus::Platform::MessageWithAssetFileDownloadCancelResult::New_ctor(::cordl_internals::intptr_t  c_message)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>(c_message));
}
inline void Oculus::Platform::MessageWithAssetFileDownloadCancelResult::_ctor(::cordl_internals::intptr_t  c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* Oculus::Platform::MessageWithAssetFileDownloadCancelResult::GetAssetFileDownloadCancelResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(),
                            "GetAssetFileDownloadCancelResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadCancelResult*, false>(*this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* Oculus::Platform::MessageWithAssetFileDownloadCancelResult::GetDataFromMessage(::cordl_internals::intptr_t  c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadCancelResult*, false>(*this, ___internal_method, c_message);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
