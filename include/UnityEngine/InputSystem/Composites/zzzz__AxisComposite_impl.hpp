#pragma once
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_impl.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__AxisComposite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__AxisComposite_def.hpp"
constexpr void UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins::__AxisComposite__WhichSideWins(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins  UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins::Neither{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins  UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins::Positive{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins  UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins::Negative{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::AxisComposite.get_midPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Composites::AxisComposite::*)()>(&::UnityEngine::InputSystem::Composites::AxisComposite::get_midPoint)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a5aabc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(),
                            "get_midPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::AxisComposite.ReadValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Composites::AxisComposite::*)(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::InputSystem::Composites::AxisComposite::ReadValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2a5aad0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::AxisComposite.EvaluateMagnitude
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Composites::AxisComposite::*)(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::InputSystem::Composites::AxisComposite::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2a5abf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::AxisComposite._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Composites::AxisComposite::*)()>(&::UnityEngine::InputSystem::Composites::AxisComposite::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a5ac3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Composites::AxisComposite::__set_negative(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Composites::AxisComposite::__get_negative()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::AxisComposite::__get_negative() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void UnityEngine::InputSystem::Composites::AxisComposite::__set_positive(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Composites::AxisComposite::__get_positive()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::AxisComposite::__get_positive() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void UnityEngine::InputSystem::Composites::AxisComposite::__set_minValue(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::Composites::AxisComposite::__get_minValue()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& UnityEngine::InputSystem::Composites::AxisComposite::__get_minValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void UnityEngine::InputSystem::Composites::AxisComposite::__set_maxValue(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::Composites::AxisComposite::__get_maxValue()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& UnityEngine::InputSystem::Composites::AxisComposite::__get_maxValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void UnityEngine::InputSystem::Composites::AxisComposite::__set_whichSideWins(::UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins, 0x20>(this, std::forward<::UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins>(value));
}
constexpr ::UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins& UnityEngine::InputSystem::Composites::AxisComposite::__get_whichSideWins()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins, 0x20>(this);
}
constexpr ::UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins const& UnityEngine::InputSystem::Composites::AxisComposite::__get_whichSideWins() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins, 0x20>(this);
}
inline float_t UnityEngine::InputSystem::Composites::AxisComposite::get_midPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(),
                            "get_midPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Composites::AxisComposite::ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(),
                            "ReadValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, context);
}
inline float_t UnityEngine::InputSystem::Composites::AxisComposite::EvaluateMagnitude(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(),
                            "EvaluateMagnitude",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, context);
}
inline ::UnityEngine::InputSystem::Composites::AxisComposite* UnityEngine::InputSystem::Composites::AxisComposite::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Composites::AxisComposite*>());
}
inline void UnityEngine::InputSystem::Composites::AxisComposite::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
