#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__DrawIfAttribute_def.hpp"
#include "GlobalNamespace/zzzz__DrawIfAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
constexpr void GlobalNamespace::__DrawIfAttribute__DisablingType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__DrawIfAttribute__DisablingType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__DrawIfAttribute__DisablingType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DrawIfAttribute__DisablingType::__DrawIfAttribute__DisablingType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__DrawIfAttribute__DisablingType  GlobalNamespace::__DrawIfAttribute__DisablingType::ReadOnly{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__DrawIfAttribute__DisablingType  GlobalNamespace::__DrawIfAttribute__DisablingType::DontDraw{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::DrawIfAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DrawIfAttribute::*)(::StringW, ::System::Object*, ::GlobalNamespace::__DrawIfAttribute__DisablingType)>(&::GlobalNamespace::DrawIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2101038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DrawIfAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DrawIfAttribute__DisablingType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawIfAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DrawIfAttribute::*)(::StringW, ::System::Object*, ::System::Object*, ::GlobalNamespace::__DrawIfAttribute__DisablingType)>(&::GlobalNamespace::DrawIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2101074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DrawIfAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DrawIfAttribute__DisablingType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DrawIfAttribute::__set_propertyName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::DrawIfAttribute::__get_propertyName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::DrawIfAttribute::__get_propertyName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::DrawIfAttribute::__set_value(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::DrawIfAttribute::__get_value()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::DrawIfAttribute::__get_value() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::DrawIfAttribute::__set_orValue(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x20>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::DrawIfAttribute::__get_orValue()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::DrawIfAttribute::__get_orValue() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr void GlobalNamespace::DrawIfAttribute::__set_disablingType(::GlobalNamespace::__DrawIfAttribute__DisablingType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__DrawIfAttribute__DisablingType, 0x28>(this, std::forward<::GlobalNamespace::__DrawIfAttribute__DisablingType>(value));
}
constexpr ::GlobalNamespace::__DrawIfAttribute__DisablingType& GlobalNamespace::DrawIfAttribute::__get_disablingType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__DrawIfAttribute__DisablingType, 0x28>(this);
}
constexpr ::GlobalNamespace::__DrawIfAttribute__DisablingType const& GlobalNamespace::DrawIfAttribute::__get_disablingType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__DrawIfAttribute__DisablingType, 0x28>(this);
}
/// @param disablingType: ::GlobalNamespace::__DrawIfAttribute__DisablingType (default: static_cast<int32_t>(0x1))
inline ::GlobalNamespace::DrawIfAttribute* GlobalNamespace::DrawIfAttribute::New_ctor(::StringW  propertyName, ::System::Object*  value, ::GlobalNamespace::__DrawIfAttribute__DisablingType  disablingType)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DrawIfAttribute*>(propertyName, value, disablingType));
}
/// @param disablingType: ::GlobalNamespace::__DrawIfAttribute__DisablingType (default: static_cast<int32_t>(0x1))
inline void GlobalNamespace::DrawIfAttribute::_ctor(::StringW  propertyName, ::System::Object*  value, ::GlobalNamespace::__DrawIfAttribute__DisablingType  disablingType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DrawIfAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DrawIfAttribute__DisablingType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, propertyName, value, disablingType);
}
/// @param disablingType: ::GlobalNamespace::__DrawIfAttribute__DisablingType (default: static_cast<int32_t>(0x1))
inline ::GlobalNamespace::DrawIfAttribute* GlobalNamespace::DrawIfAttribute::New_ctor(::StringW  propertyName, ::System::Object*  value, ::System::Object*  orValue, ::GlobalNamespace::__DrawIfAttribute__DisablingType  disablingType)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DrawIfAttribute*>(propertyName, value, orValue, disablingType));
}
/// @param disablingType: ::GlobalNamespace::__DrawIfAttribute__DisablingType (default: static_cast<int32_t>(0x1))
inline void GlobalNamespace::DrawIfAttribute::_ctor(::StringW  propertyName, ::System::Object*  value, ::System::Object*  orValue, ::GlobalNamespace::__DrawIfAttribute__DisablingType  disablingType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DrawIfAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DrawIfAttribute__DisablingType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, propertyName, value, orValue, disablingType);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
