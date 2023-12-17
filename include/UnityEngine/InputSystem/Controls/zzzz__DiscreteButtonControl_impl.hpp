#pragma once
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__DiscreteButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__DiscreteButtonControl_def.hpp"
constexpr void UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode::__DiscreteButtonControl__WriteMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode  UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode::WriteDisabled{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode  UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode::WriteNullAndMaxValue{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DiscreteButtonControl.FinishSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::DiscreteButtonControl::*)()>(&::UnityEngine::InputSystem::Controls::DiscreteButtonControl::FinishSetup)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2b0a588;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DiscreteButtonControl.ReadUnprocessedValueFromState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Controls::DiscreteButtonControl::*)(::cordl_internals::Ptr<void>)>(&::UnityEngine::InputSystem::Controls::DiscreteButtonControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2b0a634;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DiscreteButtonControl.WriteValueIntoState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::DiscreteButtonControl::*)(float_t, ::cordl_internals::Ptr<void>)>(&::UnityEngine::InputSystem::Controls::DiscreteButtonControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2b0a6d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DiscreteButtonControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::DiscreteButtonControl::*)()>(&::UnityEngine::InputSystem::Controls::DiscreteButtonControl::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b0a7c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Controls::DiscreteButtonControl::__set_minValue(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x11c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_minValue()  {
return ::cordl_internals::getInstanceField<int32_t, 0x11c>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_minValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x11c>(this);
}
constexpr void UnityEngine::InputSystem::Controls::DiscreteButtonControl::__set_maxValue(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x120>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_maxValue()  {
return ::cordl_internals::getInstanceField<int32_t, 0x120>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_maxValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x120>(this);
}
constexpr void UnityEngine::InputSystem::Controls::DiscreteButtonControl::__set_wrapAtValue(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x124>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_wrapAtValue()  {
return ::cordl_internals::getInstanceField<int32_t, 0x124>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_wrapAtValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x124>(this);
}
constexpr void UnityEngine::InputSystem::Controls::DiscreteButtonControl::__set_nullValue(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x128>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_nullValue()  {
return ::cordl_internals::getInstanceField<int32_t, 0x128>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_nullValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x128>(this);
}
constexpr void UnityEngine::InputSystem::Controls::DiscreteButtonControl::__set_writeMode(::UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode, 0x12c>(this, std::forward<::UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode>(value));
}
constexpr ::UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_writeMode()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode, 0x12c>(this);
}
constexpr ::UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode const& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__get_writeMode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Controls::__DiscreteButtonControl__WriteMode, 0x12c>(this);
}
inline void UnityEngine::InputSystem::Controls::DiscreteButtonControl::FinishSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(),
                            "FinishSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Controls::DiscreteButtonControl::ReadUnprocessedValueFromState(::cordl_internals::Ptr<void>  statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(),
                            "ReadUnprocessedValueFromState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::Controls::DiscreteButtonControl::WriteValueIntoState(float_t  value, ::cordl_internals::Ptr<void>  statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(),
                            "WriteValueIntoState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value, statePtr);
}
inline ::UnityEngine::InputSystem::Controls::DiscreteButtonControl* UnityEngine::InputSystem::Controls::DiscreteButtonControl::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>());
}
inline void UnityEngine::InputSystem::Controls::DiscreteButtonControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
