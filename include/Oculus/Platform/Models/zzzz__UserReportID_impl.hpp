#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__UserReportID_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::UserReportID._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::UserReportID::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::UserReportID::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2709434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::UserReportID*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::UserReportID::__set_DidCancel(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& Oculus::Platform::Models::UserReportID::__get_DidCancel()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& Oculus::Platform::Models::UserReportID::__get_DidCancel() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void Oculus::Platform::Models::UserReportID::__set__cordl_ID(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x18>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& Oculus::Platform::Models::UserReportID::__get__cordl_ID()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this);
}
constexpr uint64_t const& Oculus::Platform::Models::UserReportID::__get__cordl_ID() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this);
}
inline ::Oculus::Platform::Models::UserReportID* Oculus::Platform::Models::UserReportID::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::UserReportID*>(o));
}
inline void Oculus::Platform::Models::UserReportID::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::UserReportID*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
