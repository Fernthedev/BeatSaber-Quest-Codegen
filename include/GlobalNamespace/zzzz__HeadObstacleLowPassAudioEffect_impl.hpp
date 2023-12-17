#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HeadObstacleLowPassAudioEffect_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeadAndObstacleInteraction_def.hpp"
#include "GlobalNamespace/zzzz__MainAudioEffects_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HeadObstacleLowPassAudioEffect.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadObstacleLowPassAudioEffect::*)()>(&::GlobalNamespace::HeadObstacleLowPassAudioEffect::Update)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23a5620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadObstacleLowPassAudioEffect*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadObstacleLowPassAudioEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HeadObstacleLowPassAudioEffect::*)()>(&::GlobalNamespace::HeadObstacleLowPassAudioEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a567c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadObstacleLowPassAudioEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::HeadObstacleLowPassAudioEffect::__set__playerHeadAndObstacleInteraction(::GlobalNamespace::PlayerHeadAndObstacleInteraction*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerHeadAndObstacleInteraction*, 0x18>(this, std::forward<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(value));
}
constexpr ::GlobalNamespace::PlayerHeadAndObstacleInteraction* GlobalNamespace::HeadObstacleLowPassAudioEffect::__get__playerHeadAndObstacleInteraction()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerHeadAndObstacleInteraction*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeadAndObstacleInteraction*> GlobalNamespace::HeadObstacleLowPassAudioEffect::__get__playerHeadAndObstacleInteraction() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerHeadAndObstacleInteraction*, 0x18>(this);
}
constexpr void GlobalNamespace::HeadObstacleLowPassAudioEffect::__set__mainAudioEffects(::GlobalNamespace::MainAudioEffects*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainAudioEffects*, 0x20>(this, std::forward<::GlobalNamespace::MainAudioEffects*>(value));
}
constexpr ::GlobalNamespace::MainAudioEffects* GlobalNamespace::HeadObstacleLowPassAudioEffect::__get__mainAudioEffects()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainAudioEffects*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainAudioEffects*> GlobalNamespace::HeadObstacleLowPassAudioEffect::__get__mainAudioEffects() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainAudioEffects*, 0x20>(this);
}
constexpr void GlobalNamespace::HeadObstacleLowPassAudioEffect::__set__headWasInObstacle(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::HeadObstacleLowPassAudioEffect::__get__headWasInObstacle()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::HeadObstacleLowPassAudioEffect::__get__headWasInObstacle() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
inline void GlobalNamespace::HeadObstacleLowPassAudioEffect::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadObstacleLowPassAudioEffect*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::HeadObstacleLowPassAudioEffect* GlobalNamespace::HeadObstacleLowPassAudioEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HeadObstacleLowPassAudioEffect*>());
}
inline void GlobalNamespace::HeadObstacleLowPassAudioEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HeadObstacleLowPassAudioEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
