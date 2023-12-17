#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ParameterModifier_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ParameterModifier_def.hpp"
constexpr void HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction::__HEU_ParameterModifier__ModifierAction(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction  HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction::MULTIPARM_INSERT{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction  HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction::MULTIPARM_REMOVE{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction  HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction::MULTIPARM_CLEAR{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction  HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction::SET_FLOAT{static_cast<int32_t>(0x3)};
constexpr ::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction  HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction::SET_INT{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ParameterModifier.GetNewModifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ParameterModifier* (*)(::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction, int32_t, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_ParameterModifier::GetNewModifier)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2192d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ParameterModifier*>::get(),
                            "GetNewModifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ParameterModifier.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ParameterModifier::*)(::HoudiniEngineUnity::HEU_ParameterModifier*)>(&::HoudiniEngineUnity::HEU_ParameterModifier::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x2192dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ParameterModifier*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ParameterModifier*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ParameterModifier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ParameterModifier::*)()>(&::HoudiniEngineUnity::HEU_ParameterModifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2192dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ParameterModifier*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterModifier*>"
constexpr  HoudiniEngineUnity::HEU_ParameterModifier::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterModifier*>*() noexcept {
return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ParameterModifier*>*>(static_cast<void*>(this));
}
constexpr void HoudiniEngineUnity::HEU_ParameterModifier::__set__parameterIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_ParameterModifier::__get__parameterIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_ParameterModifier::__get__parameterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_ParameterModifier::__set__action(::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction, 0x14>(this, std::forward<::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction& HoudiniEngineUnity::HEU_ParameterModifier::__get__action()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction, 0x14>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction const& HoudiniEngineUnity::HEU_ParameterModifier::__get__action() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction, 0x14>(this);
}
constexpr void HoudiniEngineUnity::HEU_ParameterModifier::__set__instanceIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_ParameterModifier::__get__instanceIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_ParameterModifier::__get__instanceIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_ParameterModifier::__set__modifierValue(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_ParameterModifier::__get__modifierValue()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_ParameterModifier::__get__modifierValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void HoudiniEngineUnity::HEU_ParameterModifier::__set__floatValue(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_ParameterModifier::__get__floatValue()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_ParameterModifier::__get__floatValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void HoudiniEngineUnity::HEU_ParameterModifier::__set__intValue(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_ParameterModifier::__get__intValue()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_ParameterModifier::__get__intValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
inline ::HoudiniEngineUnity::HEU_ParameterModifier* HoudiniEngineUnity::HEU_ParameterModifier::GetNewModifier(::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction  action, int32_t  parameterIndex, int32_t  instanceIndex, int32_t  modifierValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ParameterModifier*>::get(),
                            "GetNewModifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_ParameterModifier__ModifierAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_ParameterModifier*, false>(nullptr, ___internal_method, action, parameterIndex, instanceIndex, modifierValue);
}
inline bool HoudiniEngineUnity::HEU_ParameterModifier::IsEquivalentTo(::HoudiniEngineUnity::HEU_ParameterModifier*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ParameterModifier*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ParameterModifier*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_ParameterModifier* HoudiniEngineUnity::HEU_ParameterModifier::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_ParameterModifier*>());
}
inline void HoudiniEngineUnity::HEU_ParameterModifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ParameterModifier*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
