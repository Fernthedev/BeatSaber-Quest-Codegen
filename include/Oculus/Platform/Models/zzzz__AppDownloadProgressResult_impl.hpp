#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AppDownloadProgressResult_def.hpp"
#include "Oculus/Platform/zzzz__AppStatus_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AppDownloadProgressResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AppDownloadProgressResult::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::AppDownloadProgressResult::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2703de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AppDownloadProgressResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::AppDownloadProgressResult::__set_DownloadBytes(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this, std::forward<int64_t>(value));
}
constexpr int64_t& Oculus::Platform::Models::AppDownloadProgressResult::__get_DownloadBytes()  {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr int64_t const& Oculus::Platform::Models::AppDownloadProgressResult::__get_DownloadBytes() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr void Oculus::Platform::Models::AppDownloadProgressResult::__set_DownloadedBytes(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this, std::forward<int64_t>(value));
}
constexpr int64_t& Oculus::Platform::Models::AppDownloadProgressResult::__get_DownloadedBytes()  {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
constexpr int64_t const& Oculus::Platform::Models::AppDownloadProgressResult::__get_DownloadedBytes() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
constexpr void Oculus::Platform::Models::AppDownloadProgressResult::__set_StatusCode(::Oculus::Platform::AppStatus  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::AppStatus, 0x20>(this, std::forward<::Oculus::Platform::AppStatus>(value));
}
constexpr ::Oculus::Platform::AppStatus& Oculus::Platform::Models::AppDownloadProgressResult::__get_StatusCode()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::AppStatus, 0x20>(this);
}
constexpr ::Oculus::Platform::AppStatus const& Oculus::Platform::Models::AppDownloadProgressResult::__get_StatusCode() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::AppStatus, 0x20>(this);
}
inline ::Oculus::Platform::Models::AppDownloadProgressResult* Oculus::Platform::Models::AppDownloadProgressResult::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::AppDownloadProgressResult*>(o));
}
inline void Oculus::Platform::Models::AppDownloadProgressResult::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AppDownloadProgressResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
