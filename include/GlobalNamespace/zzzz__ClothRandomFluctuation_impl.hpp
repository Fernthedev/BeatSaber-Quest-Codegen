#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ClothRandomFluctuation_def.hpp"
#include "GlobalNamespace/zzzz__ClothRandomFluctuation_def.hpp"
#include "UnityEngine/zzzz__Cloth_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ClothRandomFluctuation__SineLayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ClothRandomFluctuation__SineLayer::*)()>(&::GlobalNamespace::__ClothRandomFluctuation__SineLayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22225d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__ClothRandomFluctuation__SineLayer::__set_multiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__ClothRandomFluctuation__SineLayer::__get_multiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& GlobalNamespace::__ClothRandomFluctuation__SineLayer::__get_multiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void GlobalNamespace::__ClothRandomFluctuation__SineLayer::__set_offset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__ClothRandomFluctuation__SineLayer::__get_offset()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__ClothRandomFluctuation__SineLayer::__get_offset() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
inline ::GlobalNamespace::__ClothRandomFluctuation__SineLayer* GlobalNamespace::__ClothRandomFluctuation__SineLayer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>());
}
inline void GlobalNamespace::__ClothRandomFluctuation__SineLayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::ClothRandomFluctuation.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ClothRandomFluctuation::*)()>(&::GlobalNamespace::ClothRandomFluctuation::Update)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2222354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClothRandomFluctuation*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClothRandomFluctuation.FluctuateCloth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ClothRandomFluctuation::*)(::UnityEngine::Cloth*)>(&::GlobalNamespace::ClothRandomFluctuation::FluctuateCloth)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x222235c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClothRandomFluctuation*>::get(),
                            "FluctuateCloth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cloth*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClothRandomFluctuation.GetNoise
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::ClothRandomFluctuation::*)(float_t, float_t)>(&::GlobalNamespace::ClothRandomFluctuation::GetNoise)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x22224cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClothRandomFluctuation*>::get(),
                            "GetNoise",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClothRandomFluctuation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ClothRandomFluctuation::*)()>(&::GlobalNamespace::ClothRandomFluctuation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22225d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClothRandomFluctuation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ClothRandomFluctuation::__set__cloth(::UnityEngine::Cloth*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Cloth*, 0x18>(this, std::forward<::UnityEngine::Cloth*>(value));
}
constexpr ::UnityEngine::Cloth* GlobalNamespace::ClothRandomFluctuation::__get__cloth()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Cloth*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Cloth*> GlobalNamespace::ClothRandomFluctuation::__get__cloth() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Cloth*, 0x18>(this);
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__set__useLocalExternalFluctuations(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::ClothRandomFluctuation::__get__useLocalExternalFluctuations()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& GlobalNamespace::ClothRandomFluctuation::__get__useLocalExternalFluctuations() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__set__externalFluctuations(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x24>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ClothRandomFluctuation::__get__externalFluctuations()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x24>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ClothRandomFluctuation::__get__externalFluctuations() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x24>(this);
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__set__useLocalRandomFluctuations(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::ClothRandomFluctuation::__get__useLocalRandomFluctuations()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& GlobalNamespace::ClothRandomFluctuation::__get__useLocalRandomFluctuations() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__set__minFluctuations(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x34>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ClothRandomFluctuation::__get__minFluctuations()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x34>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ClothRandomFluctuation::__get__minFluctuations() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x34>(this);
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__set__maxFluctuations(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x40>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ClothRandomFluctuation::__get__maxFluctuations()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x40>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ClothRandomFluctuation::__get__maxFluctuations() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x40>(this);
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__set__compoundSins(::System::Collections::Generic::List_1<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>*, 0x50>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>* GlobalNamespace::ClothRandomFluctuation::__get__compoundSins()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>*> GlobalNamespace::ClothRandomFluctuation::__get__compoundSins() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>*, 0x50>(this);
}
constexpr void GlobalNamespace::ClothRandomFluctuation::__set__speed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::ClothRandomFluctuation::__get__speed()  {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr float_t const& GlobalNamespace::ClothRandomFluctuation::__get__speed() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
inline void GlobalNamespace::ClothRandomFluctuation::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClothRandomFluctuation*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ClothRandomFluctuation::FluctuateCloth(::UnityEngine::Cloth*  cloth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClothRandomFluctuation*>::get(),
                            "FluctuateCloth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Cloth*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cloth);
}
/// @param offset: float_t (default: 0.0)
inline float_t GlobalNamespace::ClothRandomFluctuation::GetNoise(float_t  time, float_t  offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClothRandomFluctuation*>::get(),
                            "GetNoise",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, time, offset);
}
inline ::GlobalNamespace::ClothRandomFluctuation* GlobalNamespace::ClothRandomFluctuation::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ClothRandomFluctuation*>());
}
inline void GlobalNamespace::ClothRandomFluctuation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClothRandomFluctuation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
