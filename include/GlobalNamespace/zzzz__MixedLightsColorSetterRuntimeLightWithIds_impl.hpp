#pragma once
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__MixedLightsColorSetterRuntimeLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockColorSetter_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::*)(::UnityEngine::Color)>(&::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2111e74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::*)()>(&::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2111ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::__set__materialPropertyBlockColorSetter(::GlobalNamespace::MaterialPropertyBlockColorSetter*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MaterialPropertyBlockColorSetter*, 0x48>(this, std::forward<::GlobalNamespace::MaterialPropertyBlockColorSetter*>(value));
}
constexpr ::GlobalNamespace::MaterialPropertyBlockColorSetter* GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::__get__materialPropertyBlockColorSetter()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MaterialPropertyBlockColorSetter*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockColorSetter*> GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::__get__materialPropertyBlockColorSetter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MaterialPropertyBlockColorSetter*, 0x48>(this);
}
constexpr void GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::__set__lightMultiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::__get__lightMultiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr float_t const& GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::__get__lightMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
inline void GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::ColorWasSet(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, color);
}
inline ::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds* GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*>());
}
inline void GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MixedLightsColorSetterRuntimeLightWithIds*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
