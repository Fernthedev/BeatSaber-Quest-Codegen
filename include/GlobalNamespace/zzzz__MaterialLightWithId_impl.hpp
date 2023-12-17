#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialLightWithId_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithId.get_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::MaterialLightWithId::*)()>(&::GlobalNamespace::MaterialLightWithId::get_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21119d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithId.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithId::*)()>(&::GlobalNamespace::MaterialLightWithId::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21119e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithId.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithId::*)(::UnityEngine::Color)>(&::GlobalNamespace::MaterialLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2111a64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithId::*)()>(&::GlobalNamespace::MaterialLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2111bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MaterialLightWithId::__set__meshRenderer(::UnityEngine::MeshRenderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshRenderer*, 0x30>(this, std::forward<::UnityEngine::MeshRenderer*>(value));
}
constexpr ::UnityEngine::MeshRenderer* GlobalNamespace::MaterialLightWithId::__get__meshRenderer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> GlobalNamespace::MaterialLightWithId::__get__meshRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer*, 0x30>(this);
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__setAlphaOnly(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MaterialLightWithId::__get__setAlphaOnly()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& GlobalNamespace::MaterialLightWithId::__get__setAlphaOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__alphaIntoColor(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MaterialLightWithId::__get__alphaIntoColor()  {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr bool const& GlobalNamespace::MaterialLightWithId::__get__alphaIntoColor() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__setColorOnly(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3a>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MaterialLightWithId::__get__setColorOnly()  {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this);
}
constexpr bool const& GlobalNamespace::MaterialLightWithId::__get__setColorOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this);
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__colorProperty(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::MaterialLightWithId::__get__colorProperty()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& GlobalNamespace::MaterialLightWithId::__get__colorProperty() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__alphaIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MaterialLightWithId::__get__alphaIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr float_t const& GlobalNamespace::MaterialLightWithId::__get__alphaIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__multiplyColorWithAlpha(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x4c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MaterialLightWithId::__get__multiplyColorWithAlpha()  {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this);
}
constexpr bool const& GlobalNamespace::MaterialLightWithId::__get__multiplyColorWithAlpha() const {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this);
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__multiplyColor(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x4d>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MaterialLightWithId::__get__multiplyColor()  {
return ::cordl_internals::getInstanceField<bool, 0x4d>(this);
}
constexpr bool const& GlobalNamespace::MaterialLightWithId::__get__multiplyColor() const {
return ::cordl_internals::getInstanceField<bool, 0x4d>(this);
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__colorMultiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MaterialLightWithId::__get__colorMultiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr float_t const& GlobalNamespace::MaterialLightWithId::__get__colorMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
inline void GlobalNamespace::MaterialLightWithId::setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get>(std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::MaterialLightWithId::getStaticF__materialPropertyBlock()  {
return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get>();
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__color(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x54>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::MaterialLightWithId::__get__color()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x54>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MaterialLightWithId::__get__color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x54>(this);
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__alpha(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MaterialLightWithId::__get__alpha()  {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this);
}
constexpr float_t const& GlobalNamespace::MaterialLightWithId::__get__alpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this);
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__propertyId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::MaterialLightWithId::__get__propertyId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this);
}
constexpr int32_t const& GlobalNamespace::MaterialLightWithId::__get__propertyId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this);
}
inline ::UnityEngine::Color GlobalNamespace::MaterialLightWithId::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MaterialLightWithId::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MaterialLightWithId::ColorWasSet(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, color);
}
inline ::GlobalNamespace::MaterialLightWithId* GlobalNamespace::MaterialLightWithId::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MaterialLightWithId*>());
}
inline void GlobalNamespace::MaterialLightWithId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
