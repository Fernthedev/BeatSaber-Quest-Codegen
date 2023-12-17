#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundLightWithId.get_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::BloomPrePassBackgroundLightWithId::*)()>(&::GlobalNamespace::BloomPrePassBackgroundLightWithId::get_color)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x210e988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundLightWithId.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundLightWithId::*)(::UnityEngine::Color)>(&::GlobalNamespace::BloomPrePassBackgroundLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x210e9a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundLightWithId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundLightWithId::*)()>(&::GlobalNamespace::BloomPrePassBackgroundLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x210e9c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomPrePassBackgroundLightWithId::__set__bloomPrePassBackgroundColor(::GlobalNamespace::BloomPrePassBackgroundColor*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomPrePassBackgroundColor*, 0x30>(this, std::forward<::GlobalNamespace::BloomPrePassBackgroundColor*>(value));
}
constexpr ::GlobalNamespace::BloomPrePassBackgroundColor* GlobalNamespace::BloomPrePassBackgroundLightWithId::__get__bloomPrePassBackgroundColor()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassBackgroundColor*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassBackgroundColor*> GlobalNamespace::BloomPrePassBackgroundLightWithId::__get__bloomPrePassBackgroundColor() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassBackgroundColor*, 0x30>(this);
}
inline ::UnityEngine::Color GlobalNamespace::BloomPrePassBackgroundLightWithId::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundLightWithId::ColorWasSet(::UnityEngine::Color  newColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newColor);
}
inline ::GlobalNamespace::BloomPrePassBackgroundLightWithId* GlobalNamespace::BloomPrePassBackgroundLightWithId::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>());
}
inline void GlobalNamespace::BloomPrePassBackgroundLightWithId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
