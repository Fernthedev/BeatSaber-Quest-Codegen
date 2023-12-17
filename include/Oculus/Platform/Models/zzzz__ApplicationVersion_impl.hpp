#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationVersion_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::ApplicationVersion._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::ApplicationVersion::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::ApplicationVersion::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x27044c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::ApplicationVersion*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::ApplicationVersion::__set_CurrentCode(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::Models::ApplicationVersion::__get_CurrentCode()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& Oculus::Platform::Models::ApplicationVersion::__get_CurrentCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void Oculus::Platform::Models::ApplicationVersion::__set_CurrentName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::ApplicationVersion::__get_CurrentName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::ApplicationVersion::__get_CurrentName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void Oculus::Platform::Models::ApplicationVersion::__set_LatestCode(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::Models::ApplicationVersion::__get_LatestCode()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& Oculus::Platform::Models::ApplicationVersion::__get_LatestCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void Oculus::Platform::Models::ApplicationVersion::__set_LatestName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::ApplicationVersion::__get_LatestName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::ApplicationVersion::__get_LatestName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void Oculus::Platform::Models::ApplicationVersion::__set_ReleaseDate(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x30>(this, std::forward<int64_t>(value));
}
constexpr int64_t& Oculus::Platform::Models::ApplicationVersion::__get_ReleaseDate()  {
return ::cordl_internals::getInstanceField<int64_t, 0x30>(this);
}
constexpr int64_t const& Oculus::Platform::Models::ApplicationVersion::__get_ReleaseDate() const {
return ::cordl_internals::getInstanceField<int64_t, 0x30>(this);
}
constexpr void Oculus::Platform::Models::ApplicationVersion::__set_Size(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::ApplicationVersion::__get_Size()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::ApplicationVersion::__get_Size() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
inline ::Oculus::Platform::Models::ApplicationVersion* Oculus::Platform::Models::ApplicationVersion::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::ApplicationVersion*>(o));
}
inline void Oculus::Platform::Models::ApplicationVersion::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::ApplicationVersion*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
