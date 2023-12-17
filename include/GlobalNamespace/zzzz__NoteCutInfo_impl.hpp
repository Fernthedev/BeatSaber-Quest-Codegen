#pragma once
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementData_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
constexpr void GlobalNamespace::__NoteCutInfo__FailReason::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__NoteCutInfo__FailReason::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__NoteCutInfo__FailReason::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__NoteCutInfo__FailReason::__NoteCutInfo__FailReason(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__NoteCutInfo__FailReason  GlobalNamespace::__NoteCutInfo__FailReason::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__NoteCutInfo__FailReason  GlobalNamespace::__NoteCutInfo__FailReason::TooSoon{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__NoteCutInfo__FailReason  GlobalNamespace::__NoteCutInfo__FailReason::WrongColor{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__NoteCutInfo__FailReason  GlobalNamespace::__NoteCutInfo__FailReason::CutHarder{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__NoteCutInfo__FailReason  GlobalNamespace::__NoteCutInfo__FailReason::WrongDirection{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::GlobalNamespace::NoteCutInfo.get_allIsOK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::NoteCutInfo::*)()>(&::GlobalNamespace::NoteCutInfo::get_allIsOK)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x12a3fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(),
                            "get_allIsOK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutInfo.get_allExceptSaberTypeIsOK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::NoteCutInfo::*)()>(&::GlobalNamespace::NoteCutInfo::get_allExceptSaberTypeIsOK)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x12a3fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(),
                            "get_allExceptSaberTypeIsOK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutInfo.get_failReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__NoteCutInfo__FailReason (::GlobalNamespace::NoteCutInfo::*)()>(&::GlobalNamespace::NoteCutInfo::get_failReason)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x12a4010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(),
                            "get_failReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutInfo::*)(::GlobalNamespace::NoteData*, bool, bool, bool, bool, float_t, ::UnityEngine::Vector3, ::GlobalNamespace::SaberType, float_t, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::GlobalNamespace::ISaberMovementData*)>(&::GlobalNamespace::NoteCutInfo::_ctor)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x12a4054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementData*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::NoteCutInfo::__set_noteData(::GlobalNamespace::NoteData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteData*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::NoteData*>(value));
}
constexpr ::GlobalNamespace::NoteData* GlobalNamespace::NoteCutInfo::__get_noteData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteData*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteData*> GlobalNamespace::NoteCutInfo::__get_noteData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteData*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::NoteCutInfo::__set_speedOK(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::NoteCutInfo::__get_speedOK()  {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::NoteCutInfo::__get_speedOK() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::NoteCutInfo::__set_directionOK(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x9>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::NoteCutInfo::__get_directionOK()  {
return ::cordl_internals::getInstanceField<bool, 0x9>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::NoteCutInfo::__get_directionOK() const {
return ::cordl_internals::getInstanceField<bool, 0x9>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::NoteCutInfo::__set_saberTypeOK(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::NoteCutInfo::__get_saberTypeOK()  {
return ::cordl_internals::getInstanceField<bool, 0xa>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::NoteCutInfo::__get_saberTypeOK() const {
return ::cordl_internals::getInstanceField<bool, 0xa>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::NoteCutInfo::__set_wasCutTooSoon(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xb>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::NoteCutInfo::__get_wasCutTooSoon()  {
return ::cordl_internals::getInstanceField<bool, 0xb>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::NoteCutInfo::__get_wasCutTooSoon() const {
return ::cordl_internals::getInstanceField<bool, 0xb>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::NoteCutInfo::__set_saberSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::NoteCutInfo::__get_saberSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::NoteCutInfo::__get_saberSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::NoteCutInfo::__set_saberDir(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::NoteCutInfo::__get_saberDir()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::NoteCutInfo::__get_saberDir() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::NoteCutInfo::__set_saberType(::GlobalNamespace::SaberType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SaberType, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::SaberType>(value));
}
constexpr ::GlobalNamespace::SaberType& GlobalNamespace::NoteCutInfo::__get_saberType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberType, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::SaberType const& GlobalNamespace::NoteCutInfo::__get_saberType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberType, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::NoteCutInfo::__set_timeDeviation(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::NoteCutInfo::__get_timeDeviation()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::NoteCutInfo::__get_timeDeviation() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::NoteCutInfo::__set_cutDirDeviation(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::NoteCutInfo::__get_cutDirDeviation()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::NoteCutInfo::__get_cutDirDeviation() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::NoteCutInfo::__set_cutPoint(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::NoteCutInfo::__get_cutPoint()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::NoteCutInfo::__get_cutPoint() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::NoteCutInfo::__set_cutNormal(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x34>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::NoteCutInfo::__get_cutNormal()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x34>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::NoteCutInfo::__get_cutNormal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x34>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::NoteCutInfo::__set_cutAngle(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::NoteCutInfo::__get_cutAngle()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::NoteCutInfo::__get_cutAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::NoteCutInfo::__set_cutDistanceToCenter(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::NoteCutInfo::__get_cutDistanceToCenter()  {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::NoteCutInfo::__get_cutDistanceToCenter() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::NoteCutInfo::__set_worldRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::NoteCutInfo::__get_worldRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::NoteCutInfo::__get_worldRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::NoteCutInfo::__set_inverseWorldRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::NoteCutInfo::__get_inverseWorldRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::NoteCutInfo::__get_inverseWorldRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::NoteCutInfo::__set_noteRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::NoteCutInfo::__get_noteRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::NoteCutInfo::__get_noteRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::NoteCutInfo::__set_notePosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::NoteCutInfo::__get_notePosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::NoteCutInfo::__get_notePosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::NoteCutInfo::__set_saberMovementData(::GlobalNamespace::ISaberMovementData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ISaberMovementData*, 0x88>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::ISaberMovementData*>(value));
}
constexpr ::GlobalNamespace::ISaberMovementData* GlobalNamespace::NoteCutInfo::__get_saberMovementData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ISaberMovementData*, 0x88>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaberMovementData*> GlobalNamespace::NoteCutInfo::__get_saberMovementData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ISaberMovementData*, 0x88>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline bool GlobalNamespace::NoteCutInfo::get_allIsOK()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(),
                            "get_allIsOK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::NoteCutInfo::get_allExceptSaberTypeIsOK()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(),
                            "get_allExceptSaberTypeIsOK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__NoteCutInfo__FailReason GlobalNamespace::NoteCutInfo::get_failReason()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(),
                            "get_failReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__NoteCutInfo__FailReason, false>(*this, ___internal_method);
}
inline void GlobalNamespace::NoteCutInfo::_ctor(::GlobalNamespace::NoteData*  noteData, bool  speedOK, bool  directionOK, bool  saberTypeOK, bool  wasCutTooSoon, float_t  saberSpeed, ::UnityEngine::Vector3  saberDir, ::GlobalNamespace::SaberType  saberType, float_t  timeDeviation, float_t  cutDirDeviation, ::UnityEngine::Vector3  cutPoint, ::UnityEngine::Vector3  cutNormal, float_t  cutDistanceToCenter, float_t  cutAngle, ::UnityEngine::Quaternion  worldRotation, ::UnityEngine::Quaternion  inverseWorldRotation, ::UnityEngine::Quaternion  noteRotation, ::UnityEngine::Vector3  notePosition, ::GlobalNamespace::ISaberMovementData*  saberMovementData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteData, speedOK, directionOK, saberTypeOK, wasCutTooSoon, saberSpeed, saberDir, saberType, timeDeviation, cutDirDeviation, cutPoint, cutNormal, cutDistanceToCenter, cutAngle, worldRotation, inverseWorldRotation, noteRotation, notePosition, saberMovementData);
}
// Ctor Parameters [CppParam { name: "noteData", ty: "::GlobalNamespace::NoteData*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "speedOK", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "directionOK", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "saberTypeOK", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "wasCutTooSoon", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "saberSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "saberDir", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "saberType", ty: "::GlobalNamespace::SaberType", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeDeviation", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cutDirDeviation", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cutPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "cutNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "cutAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cutDistanceToCenter", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "inverseWorldRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "noteRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "notePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "saberMovementData", ty: "::GlobalNamespace::ISaberMovementData*", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::NoteCutInfo::NoteCutInfo(::GlobalNamespace::NoteData*  noteData, bool  speedOK, bool  directionOK, bool  saberTypeOK, bool  wasCutTooSoon, float_t  saberSpeed, ::UnityEngine::Vector3  saberDir, ::GlobalNamespace::SaberType  saberType, float_t  timeDeviation, float_t  cutDirDeviation, ::UnityEngine::Vector3  cutPoint, ::UnityEngine::Vector3  cutNormal, float_t  cutAngle, float_t  cutDistanceToCenter, ::UnityEngine::Quaternion  worldRotation, ::UnityEngine::Quaternion  inverseWorldRotation, ::UnityEngine::Quaternion  noteRotation, ::UnityEngine::Vector3  notePosition, ::GlobalNamespace::ISaberMovementData*  saberMovementData) noexcept : ::bs_hook::ValueTypeWrapper<0x90>() {this->noteData = noteData;
this->speedOK = speedOK;
this->directionOK = directionOK;
this->saberTypeOK = saberTypeOK;
this->wasCutTooSoon = wasCutTooSoon;
this->saberSpeed = saberSpeed;
this->saberDir = saberDir;
this->saberType = saberType;
this->timeDeviation = timeDeviation;
this->cutDirDeviation = cutDirDeviation;
this->cutPoint = cutPoint;
this->cutNormal = cutNormal;
this->cutAngle = cutAngle;
this->cutDistanceToCenter = cutDistanceToCenter;
this->worldRotation = worldRotation;
this->inverseWorldRotation = inverseWorldRotation;
this->noteRotation = noteRotation;
this->notePosition = notePosition;
this->saberMovementData = saberMovementData;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
