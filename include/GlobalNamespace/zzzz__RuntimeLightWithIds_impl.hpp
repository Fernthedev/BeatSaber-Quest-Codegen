#pragma once
#include "GlobalNamespace/zzzz__LightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__ColorMixAndWeightingApproach_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId.get_intensity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::*)()>(&::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2113b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>::get(),
                            "get_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId.set_intensity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::*)(float_t)>(&::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::set_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2113b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>::get(),
                            "set_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::*)(int32_t, float_t)>(&::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2113b10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::__set__intensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::__get__intensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::__get__intensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
inline float_t GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::get_intensity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>::get(),
                            "get_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::set_intensity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>::get(),
                            "set_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId* GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::New_ctor(int32_t  lightId, float_t  lightIntensity)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>(lightId, lightIntensity));
}
inline void GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId::_ctor(int32_t  lightId, float_t  lightIntensity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lightId, lightIntensity);
}
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds.get_mixType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorMixAndWeightingApproach (::GlobalNamespace::RuntimeLightWithIds::*)()>(&::GlobalNamespace::RuntimeLightWithIds::get_mixType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2112948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                            "get_mixType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RuntimeLightWithIds::*)(::UnityEngine::Color)>(&::GlobalNamespace::RuntimeLightWithIds::ColorWasSet)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds.ProcessNewColorData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RuntimeLightWithIds::*)()>(&::GlobalNamespace::RuntimeLightWithIds::ProcessNewColorData)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x211294c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds.GetLightWithIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* (::GlobalNamespace::RuntimeLightWithIds::*)()>(&::GlobalNamespace::RuntimeLightWithIds::GetLightWithIds)> {
  constexpr static std::size_t size = 0x1008;
  constexpr static std::size_t addrs = 0x2112af8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds.ProcessColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::RuntimeLightWithIds::*)(::UnityEngine::Color, float_t)>(&::GlobalNamespace::RuntimeLightWithIds::ProcessColor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2112ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                            "ProcessColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RuntimeLightWithIds._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RuntimeLightWithIds::*)()>(&::GlobalNamespace::RuntimeLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x210e940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RuntimeLightWithIds::__set__lightIntensityData(::ArrayW<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>*>, 0x30>(this, std::forward<::ArrayW<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>*>& GlobalNamespace::RuntimeLightWithIds::__get__lightIntensityData()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>*>, 0x30>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>*> const& GlobalNamespace::RuntimeLightWithIds::__get__lightIntensityData() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*,::Array<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>*>, 0x30>(this);
}
constexpr void GlobalNamespace::RuntimeLightWithIds::__set__intensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::RuntimeLightWithIds::__get__intensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::RuntimeLightWithIds::__get__intensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::RuntimeLightWithIds::__set__maxIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::RuntimeLightWithIds::__get__maxIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr float_t const& GlobalNamespace::RuntimeLightWithIds::__get__maxIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr void GlobalNamespace::RuntimeLightWithIds::__set__multiplyColorByAlpha(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::RuntimeLightWithIds::__get__multiplyColorByAlpha()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& GlobalNamespace::RuntimeLightWithIds::__get__multiplyColorByAlpha() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr void GlobalNamespace::RuntimeLightWithIds::__set__mixType(::GlobalNamespace::ColorMixAndWeightingApproach  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorMixAndWeightingApproach, 0x44>(this, std::forward<::GlobalNamespace::ColorMixAndWeightingApproach>(value));
}
constexpr ::GlobalNamespace::ColorMixAndWeightingApproach& GlobalNamespace::RuntimeLightWithIds::__get__mixType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorMixAndWeightingApproach, 0x44>(this);
}
constexpr ::GlobalNamespace::ColorMixAndWeightingApproach const& GlobalNamespace::RuntimeLightWithIds::__get__mixType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorMixAndWeightingApproach, 0x44>(this);
}
inline ::GlobalNamespace::ColorMixAndWeightingApproach GlobalNamespace::RuntimeLightWithIds::get_mixType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                            "get_mixType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorMixAndWeightingApproach, false>(*this, ___internal_method);
}
inline void GlobalNamespace::RuntimeLightWithIds::ColorWasSet(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, color);
}
inline void GlobalNamespace::RuntimeLightWithIds::ProcessNewColorData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                            "ProcessNewColorData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* GlobalNamespace::RuntimeLightWithIds::GetLightWithIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                            "GetLightWithIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>*, false>(*this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::RuntimeLightWithIds::ProcessColor(::UnityEngine::Color  color, float_t  intensity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                            "ProcessColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method, color, intensity);
}
inline ::GlobalNamespace::RuntimeLightWithIds* GlobalNamespace::RuntimeLightWithIds::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RuntimeLightWithIds*>());
}
inline void GlobalNamespace::RuntimeLightWithIds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RuntimeLightWithIds*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
