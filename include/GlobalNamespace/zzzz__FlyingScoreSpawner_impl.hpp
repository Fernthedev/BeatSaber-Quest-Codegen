#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreSpawner_def.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreEffect_def.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreSpawner_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyCutScoreBuffer_def.hpp"
#include "GlobalNamespace/zzzz__IFlyingObjectEffectDidFinishEvent_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
constexpr void GlobalNamespace::__FlyingScoreSpawner__SpawnPosition::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__FlyingScoreSpawner__SpawnPosition::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__FlyingScoreSpawner__SpawnPosition::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition::__FlyingScoreSpawner__SpawnPosition(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition  GlobalNamespace::__FlyingScoreSpawner__SpawnPosition::Underground{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition  GlobalNamespace::__FlyingScoreSpawner__SpawnPosition::AboveGround{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::__FlyingScoreSpawner__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FlyingScoreSpawner__InitData::*)(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition)>(&::GlobalNamespace::__FlyingScoreSpawner__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23a1dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlyingScoreSpawner__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__FlyingScoreSpawner__InitData::__set_spawnPosition(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition, 0x10>(this, std::forward<::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition>(value));
}
constexpr ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition& GlobalNamespace::__FlyingScoreSpawner__InitData::__get_spawnPosition()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition, 0x10>(this);
}
constexpr ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition const& GlobalNamespace::__FlyingScoreSpawner__InitData::__get_spawnPosition() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition, 0x10>(this);
}
inline ::GlobalNamespace::__FlyingScoreSpawner__InitData* GlobalNamespace::__FlyingScoreSpawner__InitData::New_ctor(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition  spawnPosition)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__FlyingScoreSpawner__InitData*>(spawnPosition));
}
inline void GlobalNamespace::__FlyingScoreSpawner__InitData::_ctor(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition  spawnPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlyingScoreSpawner__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, spawnPosition);
}
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreSpawner.SpawnFlyingScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreSpawner::*)(::GlobalNamespace::IReadonlyCutScoreBuffer*, ::UnityEngine::Color)>(&::GlobalNamespace::FlyingScoreSpawner::SpawnFlyingScore)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x23a1a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(),
                            "SpawnFlyingScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyCutScoreBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreSpawner.HandleFlyingObjectEffectDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreSpawner::*)(::GlobalNamespace::FlyingObjectEffect*)>(&::GlobalNamespace::FlyingScoreSpawner::HandleFlyingObjectEffectDidFinish)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x23a1ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(),
                            "HandleFlyingObjectEffectDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FlyingObjectEffect*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreSpawner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreSpawner::*)()>(&::GlobalNamespace::FlyingScoreSpawner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a1dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
constexpr  GlobalNamespace::FlyingScoreSpawner::operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*() noexcept {
return static_cast<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::FlyingScoreSpawner::__set__flyingScoreEffectPool(::GlobalNamespace::__FlyingScoreEffect__Pool*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__FlyingScoreEffect__Pool*, 0x18>(this, std::forward<::GlobalNamespace::__FlyingScoreEffect__Pool*>(value));
}
constexpr ::GlobalNamespace::__FlyingScoreEffect__Pool* GlobalNamespace::FlyingScoreSpawner::__get__flyingScoreEffectPool()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__FlyingScoreEffect__Pool*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FlyingScoreEffect__Pool*> GlobalNamespace::FlyingScoreSpawner::__get__flyingScoreEffectPool() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__FlyingScoreEffect__Pool*, 0x18>(this);
}
constexpr void GlobalNamespace::FlyingScoreSpawner::__set__initData(::GlobalNamespace::__FlyingScoreSpawner__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__FlyingScoreSpawner__InitData*, 0x20>(this, std::forward<::GlobalNamespace::__FlyingScoreSpawner__InitData*>(value));
}
constexpr ::GlobalNamespace::__FlyingScoreSpawner__InitData* GlobalNamespace::FlyingScoreSpawner::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__FlyingScoreSpawner__InitData*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FlyingScoreSpawner__InitData*> GlobalNamespace::FlyingScoreSpawner::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__FlyingScoreSpawner__InitData*, 0x20>(this);
}
inline void GlobalNamespace::FlyingScoreSpawner::SpawnFlyingScore(::GlobalNamespace::IReadonlyCutScoreBuffer*  cutScoreBuffer, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(),
                            "SpawnFlyingScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyCutScoreBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cutScoreBuffer, color);
}
inline void GlobalNamespace::FlyingScoreSpawner::HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect*  flyingObjectEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(),
                            "HandleFlyingObjectEffectDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FlyingObjectEffect*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, flyingObjectEffect);
}
inline ::GlobalNamespace::FlyingScoreSpawner* GlobalNamespace::FlyingScoreSpawner::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FlyingScoreSpawner*>());
}
inline void GlobalNamespace::FlyingScoreSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
