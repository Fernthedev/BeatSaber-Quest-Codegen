#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__InstalledApplication_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::InstalledApplication._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::InstalledApplication::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::InstalledApplication::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2706094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::InstalledApplication*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::InstalledApplication::__set_ApplicationId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::InstalledApplication::__get_ApplicationId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::InstalledApplication::__get_ApplicationId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void Oculus::Platform::Models::InstalledApplication::__set_PackageName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::InstalledApplication::__get_PackageName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::InstalledApplication::__get_PackageName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void Oculus::Platform::Models::InstalledApplication::__set_Status(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::InstalledApplication::__get_Status()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::InstalledApplication::__get_Status() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void Oculus::Platform::Models::InstalledApplication::__set_VersionCode(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::Models::InstalledApplication::__get_VersionCode()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& Oculus::Platform::Models::InstalledApplication::__get_VersionCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void Oculus::Platform::Models::InstalledApplication::__set_VersionName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::InstalledApplication::__get_VersionName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::InstalledApplication::__get_VersionName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
inline ::Oculus::Platform::Models::InstalledApplication* Oculus::Platform::Models::InstalledApplication::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::InstalledApplication*>(o));
}
inline void Oculus::Platform::Models::InstalledApplication::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::InstalledApplication*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
