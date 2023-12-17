#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__DelegateData_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::DelegateData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DelegateData::*)()>(&::System::DelegateData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25f7bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::DelegateData::__set_target_type(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x10>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::DelegateData::__get_target_type()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::DelegateData::__get_target_type() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
constexpr void System::DelegateData::__set_method_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::DelegateData::__get_method_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& System::DelegateData::__get_method_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void System::DelegateData::__set_curried_first_arg(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& System::DelegateData::__get_curried_first_arg()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& System::DelegateData::__get_curried_first_arg() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
inline ::System::DelegateData* System::DelegateData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::DelegateData*>());
}
inline void System::DelegateData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
