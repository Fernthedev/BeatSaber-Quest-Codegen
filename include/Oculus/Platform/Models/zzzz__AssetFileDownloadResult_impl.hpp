#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AssetFileDownloadResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AssetFileDownloadResult::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::AssetFileDownloadResult::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2704b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AssetFileDownloadResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::AssetFileDownloadResult::__set_AssetId(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& Oculus::Platform::Models::AssetFileDownloadResult::__get_AssetId()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this);
}
constexpr uint64_t const& Oculus::Platform::Models::AssetFileDownloadResult::__get_AssetId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this);
}
constexpr void Oculus::Platform::Models::AssetFileDownloadResult::__set_Filepath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::AssetFileDownloadResult::__get_Filepath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::AssetFileDownloadResult::__get_Filepath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::Oculus::Platform::Models::AssetFileDownloadResult* Oculus::Platform::Models::AssetFileDownloadResult::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::AssetFileDownloadResult*>(o));
}
inline void Oculus::Platform::Models::AssetFileDownloadResult::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AssetFileDownloadResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
