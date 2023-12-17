#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/zzzz__SwitchLevelAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::SwitchLevelAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::SwitchLevelAttribute::*)(::System::Type*)>(&::System::Diagnostics::SwitchLevelAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x296c51c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::SwitchLevelAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::SwitchLevelAttribute.set_SwitchLevelType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::SwitchLevelAttribute::*)(::System::Type*)>(&::System::Diagnostics::SwitchLevelAttribute::set_SwitchLevelType)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x296c548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::SwitchLevelAttribute*>::get(),
                            "set_SwitchLevelType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Diagnostics::SwitchLevelAttribute::__set_type(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x10>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::Diagnostics::SwitchLevelAttribute::__get_type()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::Diagnostics::SwitchLevelAttribute::__get_type() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
inline ::System::Diagnostics::SwitchLevelAttribute* System::Diagnostics::SwitchLevelAttribute::New_ctor(::System::Type*  switchLevelType)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::SwitchLevelAttribute*>(switchLevelType));
}
inline void System::Diagnostics::SwitchLevelAttribute::_ctor(::System::Type*  switchLevelType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::SwitchLevelAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, switchLevelType);
}
inline void System::Diagnostics::SwitchLevelAttribute::set_SwitchLevelType(::System::Type*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::SwitchLevelAttribute*>::get(),
                            "set_SwitchLevelType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
