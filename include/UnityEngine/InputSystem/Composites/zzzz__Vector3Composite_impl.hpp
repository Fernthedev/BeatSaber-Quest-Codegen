#pragma once
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_impl.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__Vector3Composite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__Vector3Composite_def.hpp"
constexpr void UnityEngine::InputSystem::Composites::__Vector3Composite__Mode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Composites::__Vector3Composite__Mode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::__Vector3Composite__Mode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode::__Vector3Composite__Mode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode  UnityEngine::InputSystem::Composites::__Vector3Composite__Mode::Analog{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode  UnityEngine::InputSystem::Composites::__Vector3Composite__Mode::DigitalNormalized{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode  UnityEngine::InputSystem::Composites::__Vector3Composite__Mode::Digital{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::Vector3Composite.ReadValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::InputSystem::Composites::Vector3Composite::*)(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::InputSystem::Composites::Vector3Composite::ReadValue)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2a5bc2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::Vector3Composite*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::Vector3Composite*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::Vector3Composite._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Composites::Vector3Composite::*)()>(&::UnityEngine::InputSystem::Composites::Vector3Composite::_ctor)> {
  constexpr static std::size_t size = 0x1048;
  constexpr static std::size_t addrs = 0x2a5be80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::Vector3Composite*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_up(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector3Composite::__get_up()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector3Composite::__get_up() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_down(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector3Composite::__get_down()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector3Composite::__get_down() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_left(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector3Composite::__get_left()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector3Composite::__get_left() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_right(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector3Composite::__get_right()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector3Composite::__get_right() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_forward(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector3Composite::__get_forward()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector3Composite::__get_forward() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_backward(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Composites::Vector3Composite::__get_backward()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::Vector3Composite::__get_backward() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void UnityEngine::InputSystem::Composites::Vector3Composite::__set_mode(::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode, 0x28>(this, std::forward<::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode>(value));
}
constexpr ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode& UnityEngine::InputSystem::Composites::Vector3Composite::__get_mode()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode, 0x28>(this);
}
constexpr ::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode const& UnityEngine::InputSystem::Composites::Vector3Composite::__get_mode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Composites::__Vector3Composite__Mode, 0x28>(this);
}
inline ::UnityEngine::Vector3 UnityEngine::InputSystem::Composites::Vector3Composite::ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::Vector3Composite*>::get(),
                            "ReadValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method, context);
}
inline ::UnityEngine::InputSystem::Composites::Vector3Composite* UnityEngine::InputSystem::Composites::Vector3Composite::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Composites::Vector3Composite*>());
}
inline void UnityEngine::InputSystem::Composites::Vector3Composite::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::Vector3Composite*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
