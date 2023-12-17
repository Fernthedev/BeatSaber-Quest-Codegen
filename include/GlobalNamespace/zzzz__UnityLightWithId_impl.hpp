#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__UnityLightWithId_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityLightWithId.get_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::UnityLightWithId::*)()>(&::GlobalNamespace::UnityLightWithId::get_color)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21140b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityLightWithId*>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityLightWithId.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityLightWithId::*)(::UnityEngine::Color)>(&::GlobalNamespace::UnityLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21140cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityLightWithId*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityLightWithId*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityLightWithId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityLightWithId::*)()>(&::GlobalNamespace::UnityLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2114118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityLightWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::UnityLightWithId::__set__light(::UnityEngine::Light*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Light*, 0x30>(this, std::forward<::UnityEngine::Light*>(value));
}
constexpr ::UnityEngine::Light* GlobalNamespace::UnityLightWithId::__get__light()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Light*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Light*> GlobalNamespace::UnityLightWithId::__get__light() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Light*, 0x30>(this);
}
constexpr void GlobalNamespace::UnityLightWithId::__set__intensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::UnityLightWithId::__get__intensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::UnityLightWithId::__get__intensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::UnityLightWithId::__set__minAlpha(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::UnityLightWithId::__get__minAlpha()  {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr float_t const& GlobalNamespace::UnityLightWithId::__get__minAlpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
inline ::UnityEngine::Color GlobalNamespace::UnityLightWithId::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityLightWithId*>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void GlobalNamespace::UnityLightWithId::ColorWasSet(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityLightWithId*>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, color);
}
inline ::GlobalNamespace::UnityLightWithId* GlobalNamespace::UnityLightWithId::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::UnityLightWithId*>());
}
inline void GlobalNamespace::UnityLightWithId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityLightWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
