#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SpriteLightWithId_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "GlobalNamespace/zzzz__SpriteLightWithId_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
constexpr void GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType::__SpriteLightWithId__MultiplyColorByAlphaType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType  GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType  GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType::BeforeApplyingMinAlpha{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType  GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType::AfterApplyingMinAlpha{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::SpriteLightWithId.get_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::SpriteLightWithId::*)()>(&::GlobalNamespace::SpriteLightWithId::get_color)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2113eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteLightWithId*>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteLightWithId.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpriteLightWithId::*)(::UnityEngine::Color)>(&::GlobalNamespace::SpriteLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2113ed0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteLightWithId*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteLightWithId*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteLightWithId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpriteLightWithId::*)()>(&::GlobalNamespace::SpriteLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2114014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteLightWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SpriteLightWithId::__set__spriteRenderer(::UnityEngine::SpriteRenderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::SpriteRenderer*, 0x30>(this, std::forward<::UnityEngine::SpriteRenderer*>(value));
}
constexpr ::UnityEngine::SpriteRenderer* GlobalNamespace::SpriteLightWithId::__get__spriteRenderer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::SpriteRenderer*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> GlobalNamespace::SpriteLightWithId::__get__spriteRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::SpriteRenderer*, 0x30>(this);
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__hideIfAlphaOutOfRange(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::SpriteLightWithId::__get__hideIfAlphaOutOfRange()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& GlobalNamespace::SpriteLightWithId::__get__hideIfAlphaOutOfRange() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__hideAlphaRangeMin(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SpriteLightWithId::__get__hideAlphaRangeMin()  {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr float_t const& GlobalNamespace::SpriteLightWithId::__get__hideAlphaRangeMin() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__hideAlphaRangeMax(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SpriteLightWithId::__get__hideAlphaRangeMax()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& GlobalNamespace::SpriteLightWithId::__get__hideAlphaRangeMax() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__intensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SpriteLightWithId::__get__intensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr float_t const& GlobalNamespace::SpriteLightWithId::__get__intensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__minAlpha(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SpriteLightWithId::__get__minAlpha()  {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr float_t const& GlobalNamespace::SpriteLightWithId::__get__minAlpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__multiplyColorByAlpha(::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType, 0x4c>(this, std::forward<::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType>(value));
}
constexpr ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType& GlobalNamespace::SpriteLightWithId::__get__multiplyColorByAlpha()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType, 0x4c>(this);
}
constexpr ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType const& GlobalNamespace::SpriteLightWithId::__get__multiplyColorByAlpha() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType, 0x4c>(this);
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__setColorOnly(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::SpriteLightWithId::__get__setColorOnly()  {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr bool const& GlobalNamespace::SpriteLightWithId::__get__setColorOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__setAlphaOnly(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x51>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::SpriteLightWithId::__get__setAlphaOnly()  {
return ::cordl_internals::getInstanceField<bool, 0x51>(this);
}
constexpr bool const& GlobalNamespace::SpriteLightWithId::__get__setAlphaOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x51>(this);
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__setOnlyOnce(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x52>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::SpriteLightWithId::__get__setOnlyOnce()  {
return ::cordl_internals::getInstanceField<bool, 0x52>(this);
}
constexpr bool const& GlobalNamespace::SpriteLightWithId::__get__setOnlyOnce() const {
return ::cordl_internals::getInstanceField<bool, 0x52>(this);
}
inline ::UnityEngine::Color GlobalNamespace::SpriteLightWithId::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteLightWithId*>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SpriteLightWithId::ColorWasSet(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteLightWithId*>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, color);
}
inline ::GlobalNamespace::SpriteLightWithId* GlobalNamespace::SpriteLightWithId::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SpriteLightWithId*>());
}
inline void GlobalNamespace::SpriteLightWithId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteLightWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
