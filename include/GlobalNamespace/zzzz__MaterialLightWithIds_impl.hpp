#pragma once
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialLightWithIds_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithIds.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithIds::*)()>(&::GlobalNamespace::MaterialLightWithIds::Awake)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2111c50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithIds.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithIds::*)(::UnityEngine::Color)>(&::GlobalNamespace::MaterialLightWithIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2111cd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithIds._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithIds::*)()>(&::GlobalNamespace::MaterialLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2111e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MaterialLightWithIds::__set__meshRenderer(::UnityEngine::MeshRenderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshRenderer*, 0x48>(this, std::forward<::UnityEngine::MeshRenderer*>(value));
}
constexpr ::UnityEngine::MeshRenderer* GlobalNamespace::MaterialLightWithIds::__get__meshRenderer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> GlobalNamespace::MaterialLightWithIds::__get__meshRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer*, 0x48>(this);
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__setAlphaOnly(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MaterialLightWithIds::__get__setAlphaOnly()  {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr bool const& GlobalNamespace::MaterialLightWithIds::__get__setAlphaOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__alphaIntoColor(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x51>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MaterialLightWithIds::__get__alphaIntoColor()  {
return ::cordl_internals::getInstanceField<bool, 0x51>(this);
}
constexpr bool const& GlobalNamespace::MaterialLightWithIds::__get__alphaIntoColor() const {
return ::cordl_internals::getInstanceField<bool, 0x51>(this);
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__setColorOnly(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x52>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MaterialLightWithIds::__get__setColorOnly()  {
return ::cordl_internals::getInstanceField<bool, 0x52>(this);
}
constexpr bool const& GlobalNamespace::MaterialLightWithIds::__get__setColorOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x52>(this);
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__colorProperty(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::MaterialLightWithIds::__get__colorProperty()  {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
constexpr ::StringW const& GlobalNamespace::MaterialLightWithIds::__get__colorProperty() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
inline void GlobalNamespace::MaterialLightWithIds::setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get>(std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::MaterialLightWithIds::getStaticF__materialPropertyBlock()  {
return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get>();
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__color(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x60>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::MaterialLightWithIds::__get__color()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x60>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MaterialLightWithIds::__get__color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x60>(this);
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__alpha(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MaterialLightWithIds::__get__alpha()  {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr float_t const& GlobalNamespace::MaterialLightWithIds::__get__alpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__propertyId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x74>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::MaterialLightWithIds::__get__propertyId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this);
}
constexpr int32_t const& GlobalNamespace::MaterialLightWithIds::__get__propertyId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this);
}
inline void GlobalNamespace::MaterialLightWithIds::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MaterialLightWithIds::ColorWasSet(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, color);
}
inline ::GlobalNamespace::MaterialLightWithIds* GlobalNamespace::MaterialLightWithIds::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MaterialLightWithIds*>());
}
inline void GlobalNamespace::MaterialLightWithIds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
