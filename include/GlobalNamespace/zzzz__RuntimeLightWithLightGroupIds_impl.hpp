#pragma once
#include "GlobalNamespace/zzzz__LightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithLightGroupIds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithLightGroupIds_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId.get_intensity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId::*)()>(&::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2113e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>::get(),
                            "get_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId.set_intensity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId::*)(float_t)>(&::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId::set_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2113ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>::get(),
                            "set_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId::*)(int32_t, float_t)>(&::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2113cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId::__set__intensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId::__get__intensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId::__get__intensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
inline float_t GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId::get_intensity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>::get(),
                            "get_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId::set_intensity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>::get(),
                            "set_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId* GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId::New_ctor(int32_t  lightId, float_t  intensity)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>(lightId, intensity));
}
inline void GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId::_ctor(int32_t  lightId, float_t  intensity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lightId, intensity);
}
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithLightGroupIds.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RuntimeLightWithLightGroupIds::*)(::UnityEngine::Color)>(&::GlobalNamespace::RuntimeLightWithLightGroupIds::ColorWasSet)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithLightGroupIds*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithLightGroupIds*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithLightGroupIds.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RuntimeLightWithLightGroupIds::*)()>(&::GlobalNamespace::RuntimeLightWithLightGroupIds::Awake)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2113b38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithLightGroupIds*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithLightGroupIds*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithLightGroupIds.ProcessNewColorData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RuntimeLightWithLightGroupIds::*)()>(&::GlobalNamespace::RuntimeLightWithLightGroupIds::ProcessNewColorData)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2113d20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithLightGroupIds*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithLightGroupIds*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithLightGroupIds.GetLightWithIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* (::GlobalNamespace::RuntimeLightWithLightGroupIds::*)()>(&::GlobalNamespace::RuntimeLightWithLightGroupIds::GetLightWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2113e7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithLightGroupIds*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithLightGroupIds*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithLightGroupIds.ProcessColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::RuntimeLightWithLightGroupIds::*)(::UnityEngine::Color, float_t)>(&::GlobalNamespace::RuntimeLightWithLightGroupIds::ProcessColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2113e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithLightGroupIds*>::get(),
                            "ProcessColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithLightGroupIds._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RuntimeLightWithLightGroupIds::*)()>(&::GlobalNamespace::RuntimeLightWithLightGroupIds::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2113e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithLightGroupIds*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RuntimeLightWithLightGroupIds::__set__lightGroupList(::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>, 0x30>(this, std::forward<::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>& GlobalNamespace::RuntimeLightWithLightGroupIds::__get__lightGroupList()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>, 0x30>(this);
}
constexpr ::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*> const& GlobalNamespace::RuntimeLightWithLightGroupIds::__get__lightGroupList() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>, 0x30>(this);
}
constexpr void GlobalNamespace::RuntimeLightWithLightGroupIds::__set__intensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::RuntimeLightWithLightGroupIds::__get__intensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::RuntimeLightWithLightGroupIds::__get__intensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::RuntimeLightWithLightGroupIds::__set__maxIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::RuntimeLightWithLightGroupIds::__get__maxIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr float_t const& GlobalNamespace::RuntimeLightWithLightGroupIds::__get__maxIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr void GlobalNamespace::RuntimeLightWithLightGroupIds::__set__multiplyColorByAlpha(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::RuntimeLightWithLightGroupIds::__get__multiplyColorByAlpha()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& GlobalNamespace::RuntimeLightWithLightGroupIds::__get__multiplyColorByAlpha() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr void GlobalNamespace::RuntimeLightWithLightGroupIds::__set__lightIntensityData(::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*>, 0x48>(this, std::forward<::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*>& GlobalNamespace::RuntimeLightWithLightGroupIds::__get__lightIntensityData()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*>, 0x48>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*> const& GlobalNamespace::RuntimeLightWithLightGroupIds::__get__lightIntensityData() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*>, 0x48>(this);
}
inline void GlobalNamespace::RuntimeLightWithLightGroupIds::ColorWasSet(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithLightGroupIds*>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, color);
}
inline void GlobalNamespace::RuntimeLightWithLightGroupIds::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithLightGroupIds*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::RuntimeLightWithLightGroupIds::ProcessNewColorData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithLightGroupIds*>::get(),
                            "ProcessNewColorData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* GlobalNamespace::RuntimeLightWithLightGroupIds::GetLightWithIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithLightGroupIds*>::get(),
                            "GetLightWithIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>*, false>(*this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::RuntimeLightWithLightGroupIds::ProcessColor(::UnityEngine::Color  color, float_t  intensity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithLightGroupIds*>::get(),
                            "ProcessColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method, color, intensity);
}
inline ::GlobalNamespace::RuntimeLightWithLightGroupIds* GlobalNamespace::RuntimeLightWithLightGroupIds::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RuntimeLightWithLightGroupIds*>());
}
inline void GlobalNamespace::RuntimeLightWithLightGroupIds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithLightGroupIds*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
