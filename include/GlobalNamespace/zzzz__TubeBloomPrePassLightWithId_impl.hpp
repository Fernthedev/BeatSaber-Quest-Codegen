#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightWithId.get_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::TubeBloomPrePassLightWithId::*)()>(&::GlobalNamespace::TubeBloomPrePassLightWithId::get_color)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2114030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightWithId*>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightWithId.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightWithId::*)(::UnityEngine::Color)>(&::GlobalNamespace::TubeBloomPrePassLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2114050;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightWithId*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightWithId*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightWithId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightWithId::*)()>(&::GlobalNamespace::TubeBloomPrePassLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21140a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TubeBloomPrePassLightWithId::__set__tubeBloomPrePassLight(::GlobalNamespace::TubeBloomPrePassLight*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::TubeBloomPrePassLight*, 0x30>(this, std::forward<::GlobalNamespace::TubeBloomPrePassLight*>(value));
}
constexpr ::GlobalNamespace::TubeBloomPrePassLight* GlobalNamespace::TubeBloomPrePassLightWithId::__get__tubeBloomPrePassLight()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TubeBloomPrePassLight*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> GlobalNamespace::TubeBloomPrePassLightWithId::__get__tubeBloomPrePassLight() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TubeBloomPrePassLight*, 0x30>(this);
}
constexpr void GlobalNamespace::TubeBloomPrePassLightWithId::__set__setOnlyOnce(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::TubeBloomPrePassLightWithId::__get__setOnlyOnce()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& GlobalNamespace::TubeBloomPrePassLightWithId::__get__setOnlyOnce() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void GlobalNamespace::TubeBloomPrePassLightWithId::__set__setColorOnly(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::TubeBloomPrePassLightWithId::__get__setColorOnly()  {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr bool const& GlobalNamespace::TubeBloomPrePassLightWithId::__get__setColorOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
inline ::UnityEngine::Color GlobalNamespace::TubeBloomPrePassLightWithId::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightWithId*>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void GlobalNamespace::TubeBloomPrePassLightWithId::ColorWasSet(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightWithId*>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, color);
}
inline ::GlobalNamespace::TubeBloomPrePassLightWithId* GlobalNamespace::TubeBloomPrePassLightWithId::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TubeBloomPrePassLightWithId*>());
}
inline void GlobalNamespace::TubeBloomPrePassLightWithId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeBloomPrePassLightWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
