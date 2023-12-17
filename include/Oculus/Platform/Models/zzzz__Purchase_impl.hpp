#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Purchase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Purchase::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::Purchase::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x27087ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Purchase*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::Purchase::__set_DeveloperPayload(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::Purchase::__get_DeveloperPayload()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::Purchase::__get_DeveloperPayload() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void Oculus::Platform::Models::Purchase::__set_ExpirationTime(::System::DateTime  value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x18>(this, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime& Oculus::Platform::Models::Purchase::__get_ExpirationTime()  {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x18>(this);
}
constexpr ::System::DateTime const& Oculus::Platform::Models::Purchase::__get_ExpirationTime() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x18>(this);
}
constexpr void Oculus::Platform::Models::Purchase::__set_GrantTime(::System::DateTime  value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x20>(this, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime& Oculus::Platform::Models::Purchase::__get_GrantTime()  {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x20>(this);
}
constexpr ::System::DateTime const& Oculus::Platform::Models::Purchase::__get_GrantTime() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x20>(this);
}
constexpr void Oculus::Platform::Models::Purchase::__set__cordl_ID(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::Purchase::__get__cordl_ID()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::Purchase::__get__cordl_ID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void Oculus::Platform::Models::Purchase::__set_ReportingId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::Purchase::__get_ReportingId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::Purchase::__get_ReportingId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void Oculus::Platform::Models::Purchase::__set_Sku(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Oculus::Platform::Models::Purchase::__get_Sku()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& Oculus::Platform::Models::Purchase::__get_Sku() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
inline ::Oculus::Platform::Models::Purchase* Oculus::Platform::Models::Purchase::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::Purchase*>(o));
}
inline void Oculus::Platform::Models::Purchase::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Purchase*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
