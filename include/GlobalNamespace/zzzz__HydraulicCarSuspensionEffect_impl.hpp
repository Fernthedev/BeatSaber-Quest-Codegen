#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HydraulicCarSuspensionEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "UnityEngine/zzzz__SpringJoint_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)()>(&::GlobalNamespace::HydraulicCarSuspensionEffect::Start)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x222059c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)()>(&::GlobalNamespace::HydraulicCarSuspensionEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22207bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect.HandleContractBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&::GlobalNamespace::HydraulicCarSuspensionEffect::HandleContractBeatmapEvent)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22207fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(),
                            "HandleContractBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect.HandleExpandBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&::GlobalNamespace::HydraulicCarSuspensionEffect::HandleExpandBeatmapEvent)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22208a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(),
                            "HandleExpandBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)()>(&::GlobalNamespace::HydraulicCarSuspensionEffect::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2220944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__set__contractEvent(::GlobalNamespace::BasicBeatmapEventType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this, std::forward<::GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::HydraulicCarSuspensionEffect::__get__contractEvent()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this);
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::HydraulicCarSuspensionEffect::__get__contractEvent() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this);
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__set__contractEventValues(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& GlobalNamespace::HydraulicCarSuspensionEffect::__get__contractEventValues()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& GlobalNamespace::HydraulicCarSuspensionEffect::__get__contractEventValues() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__set__expandEvent(::GlobalNamespace::BasicBeatmapEventType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x28>(this, std::forward<::GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::HydraulicCarSuspensionEffect::__get__expandEvent()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x28>(this);
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::HydraulicCarSuspensionEffect::__get__expandEvent() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x28>(this);
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__set__expandEventValues(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& GlobalNamespace::HydraulicCarSuspensionEffect::__get__expandEventValues()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& GlobalNamespace::HydraulicCarSuspensionEffect::__get__expandEventValues() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this);
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__set__springJoint(::UnityEngine::SpringJoint*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::SpringJoint*, 0x38>(this, std::forward<::UnityEngine::SpringJoint*>(value));
}
constexpr ::UnityEngine::SpringJoint* GlobalNamespace::HydraulicCarSuspensionEffect::__get__springJoint()  {
return ::cordl_internals::getInstanceField<::UnityEngine::SpringJoint*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpringJoint*> GlobalNamespace::HydraulicCarSuspensionEffect::__get__springJoint() const {
return ::cordl_internals::getInstanceField<::UnityEngine::SpringJoint*, 0x38>(this);
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__set__contractDistance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::HydraulicCarSuspensionEffect::__get__contractDistance()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& GlobalNamespace::HydraulicCarSuspensionEffect::__get__contractDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__set__expandDistance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::HydraulicCarSuspensionEffect::__get__expandDistance()  {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr float_t const& GlobalNamespace::HydraulicCarSuspensionEffect::__get__expandDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__set__rigidbody(::UnityEngine::Rigidbody*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rigidbody*, 0x48>(this, std::forward<::UnityEngine::Rigidbody*>(value));
}
constexpr ::UnityEngine::Rigidbody* GlobalNamespace::HydraulicCarSuspensionEffect::__get__rigidbody()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rigidbody*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rigidbody*> GlobalNamespace::HydraulicCarSuspensionEffect::__get__rigidbody() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rigidbody*, 0x48>(this);
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x50>(this, std::forward<::GlobalNamespace::BeatmapCallbacksController*>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::HydraulicCarSuspensionEffect::__get__beatmapCallbacksController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> GlobalNamespace::HydraulicCarSuspensionEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x50>(this);
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__set__contractEventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<int32_t>*, 0x58>(this, std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* GlobalNamespace::HydraulicCarSuspensionEffect::__get__contractEventValuesHashSet()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<int32_t>*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> GlobalNamespace::HydraulicCarSuspensionEffect::__get__contractEventValuesHashSet() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<int32_t>*, 0x58>(this);
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__set__expandEventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<int32_t>*, 0x60>(this, std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* GlobalNamespace::HydraulicCarSuspensionEffect::__get__expandEventValuesHashSet()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<int32_t>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> GlobalNamespace::HydraulicCarSuspensionEffect::__get__expandEventValuesHashSet() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<int32_t>*, 0x60>(this);
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__set__contractBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x68>(this, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::HydraulicCarSuspensionEffect::__get__contractBeatmapDataCallbackWrapper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> GlobalNamespace::HydraulicCarSuspensionEffect::__get__contractBeatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x68>(this);
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__set__expandBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x70>(this, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::HydraulicCarSuspensionEffect::__get__expandBeatmapDataCallbackWrapper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> GlobalNamespace::HydraulicCarSuspensionEffect::__get__expandBeatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x70>(this);
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::HandleContractBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  basicBeatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(),
                            "HandleContractBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::HandleExpandBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  basicBeatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(),
                            "HandleExpandBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, basicBeatmapEventData);
}
inline ::GlobalNamespace::HydraulicCarSuspensionEffect* GlobalNamespace::HydraulicCarSuspensionEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HydraulicCarSuspensionEffect*>());
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
