#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__InstancedMaterialLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockColorSetter_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InstancedMaterialLightWithId.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InstancedMaterialLightWithId::*)(::UnityEngine::Color)>(&::GlobalNamespace::InstancedMaterialLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x210f27c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InstancedMaterialLightWithId.AddNecessaryComponents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InstancedMaterialLightWithId::*)()>(&::GlobalNamespace::InstancedMaterialLightWithId::AddNecessaryComponents)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x210f2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(),
                            "AddNecessaryComponents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InstancedMaterialLightWithId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InstancedMaterialLightWithId::*)()>(&::GlobalNamespace::InstancedMaterialLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x210f400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__set__materialPropertyBlockColorSetter(::GlobalNamespace::MaterialPropertyBlockColorSetter*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MaterialPropertyBlockColorSetter*, 0x30>(this, std::forward<::GlobalNamespace::MaterialPropertyBlockColorSetter*>(value));
}
constexpr ::GlobalNamespace::MaterialPropertyBlockColorSetter* GlobalNamespace::InstancedMaterialLightWithId::__get__materialPropertyBlockColorSetter()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MaterialPropertyBlockColorSetter*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockColorSetter*> GlobalNamespace::InstancedMaterialLightWithId::__get__materialPropertyBlockColorSetter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MaterialPropertyBlockColorSetter*, 0x30>(this);
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__set__setColorOnly(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::InstancedMaterialLightWithId::__get__setColorOnly()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& GlobalNamespace::InstancedMaterialLightWithId::__get__setColorOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__set__intensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::InstancedMaterialLightWithId::__get__intensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr float_t const& GlobalNamespace::InstancedMaterialLightWithId::__get__intensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__set__minAlpha(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::InstancedMaterialLightWithId::__get__minAlpha()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& GlobalNamespace::InstancedMaterialLightWithId::__get__minAlpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__set__hdr(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x44>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::InstancedMaterialLightWithId::__get__hdr()  {
return ::cordl_internals::getInstanceField<bool, 0x44>(this);
}
constexpr bool const& GlobalNamespace::InstancedMaterialLightWithId::__get__hdr() const {
return ::cordl_internals::getInstanceField<bool, 0x44>(this);
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__set__color(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x48>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::InstancedMaterialLightWithId::__get__color()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x48>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::InstancedMaterialLightWithId::__get__color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x48>(this);
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__set__startColorWasSet(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::InstancedMaterialLightWithId::__get__startColorWasSet()  {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr bool const& GlobalNamespace::InstancedMaterialLightWithId::__get__startColorWasSet() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
inline void GlobalNamespace::InstancedMaterialLightWithId::ColorWasSet(::UnityEngine::Color  newColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newColor);
}
inline void GlobalNamespace::InstancedMaterialLightWithId::AddNecessaryComponents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(),
                            "AddNecessaryComponents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::InstancedMaterialLightWithId* GlobalNamespace::InstancedMaterialLightWithId::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::InstancedMaterialLightWithId*>());
}
inline void GlobalNamespace::InstancedMaterialLightWithId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
