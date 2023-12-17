#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PS5AdvancedHapticsPlayerController_def.hpp"
#include "GlobalNamespace/zzzz__HapticsAudioClipPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PS5AdvancedHapticsPlayerController_def.hpp"
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "GlobalNamespace/zzzz__IHapticFeedbackPlayer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::*)()>(&::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f9ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0._PlayContinuousHapticPreset_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::*)(::GlobalNamespace::HapticsAudioClipPlayer*)>(&::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::_PlayContinuousHapticPreset_b__0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x20f9fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0*>::get(),
                            "<PlayContinuousHapticPreset>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HapticsAudioClipPlayer*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::__set___4__this(::GlobalNamespace::PS5AdvancedHapticsPlayerController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PS5AdvancedHapticsPlayerController*, 0x10>(this, std::forward<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>(value));
}
constexpr ::GlobalNamespace::PS5AdvancedHapticsPlayerController* GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS5AdvancedHapticsPlayerController*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5AdvancedHapticsPlayerController*> GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS5AdvancedHapticsPlayerController*, 0x10>(this);
}
constexpr void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::__set_node(::UnityEngine::XR::XRNode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::XR::XRNode, 0x18>(this, std::forward<::UnityEngine::XR::XRNode>(value));
}
constexpr ::UnityEngine::XR::XRNode& GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::__get_node()  {
return ::cordl_internals::getInstanceField<::UnityEngine::XR::XRNode, 0x18>(this);
}
constexpr ::UnityEngine::XR::XRNode const& GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::__get_node() const {
return ::cordl_internals::getInstanceField<::UnityEngine::XR::XRNode, 0x18>(this);
}
constexpr void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::__set_hapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  value)  {
::cordl_internals::setInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x20>(this, std::forward<::Libraries::HM::HMLib::VR::HapticPresetSO*>(value));
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO* GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::__get_hapticPreset()  {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::__get_hapticPreset() const {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x20>(this);
}
inline ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0* GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0*>());
}
inline void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::_PlayContinuousHapticPreset_b__0(::GlobalNamespace::HapticsAudioClipPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0*>::get(),
                            "<PlayContinuousHapticPreset>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HapticsAudioClipPlayer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, player);
}
//  Writing Method size for method: ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::*)()>(&::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f9ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0._PlayOneShotHapticPreset_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::*)(::GlobalNamespace::HapticsAudioClipPlayer*)>(&::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::_PlayOneShotHapticPreset_b__0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x20fa05c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0*>::get(),
                            "<PlayOneShotHapticPreset>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HapticsAudioClipPlayer*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::__set___4__this(::GlobalNamespace::PS5AdvancedHapticsPlayerController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PS5AdvancedHapticsPlayerController*, 0x10>(this, std::forward<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>(value));
}
constexpr ::GlobalNamespace::PS5AdvancedHapticsPlayerController* GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS5AdvancedHapticsPlayerController*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5AdvancedHapticsPlayerController*> GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PS5AdvancedHapticsPlayerController*, 0x10>(this);
}
constexpr void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::__set_node(::UnityEngine::XR::XRNode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::XR::XRNode, 0x18>(this, std::forward<::UnityEngine::XR::XRNode>(value));
}
constexpr ::UnityEngine::XR::XRNode& GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::__get_node()  {
return ::cordl_internals::getInstanceField<::UnityEngine::XR::XRNode, 0x18>(this);
}
constexpr ::UnityEngine::XR::XRNode const& GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::__get_node() const {
return ::cordl_internals::getInstanceField<::UnityEngine::XR::XRNode, 0x18>(this);
}
constexpr void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::__set_hapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  value)  {
::cordl_internals::setInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x20>(this, std::forward<::Libraries::HM::HMLib::VR::HapticPresetSO*>(value));
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO* GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::__get_hapticPreset()  {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::__get_hapticPreset() const {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x20>(this);
}
inline ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0* GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0*>());
}
inline void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::_PlayOneShotHapticPreset_b__0(::GlobalNamespace::HapticsAudioClipPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0*>::get(),
                            "<PlayOneShotHapticPreset>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HapticsAudioClipPlayer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, player);
}
//  Writing Method size for method: ::GlobalNamespace::PS5AdvancedHapticsPlayerController.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AdvancedHapticsPlayerController::*)()>(&::GlobalNamespace::PS5AdvancedHapticsPlayerController::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20f9a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AdvancedHapticsPlayerController.PlayHapticFeedback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AdvancedHapticsPlayerController::*)(::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*)>(&::GlobalNamespace::PS5AdvancedHapticsPlayerController::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x20f9a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                            "PlayHapticFeedback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AdvancedHapticsPlayerController.CanPlayHapticPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PS5AdvancedHapticsPlayerController::*)(::Libraries::HM::HMLib::VR::HapticPresetSO*)>(&::GlobalNamespace::PS5AdvancedHapticsPlayerController::CanPlayHapticPreset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x20f9e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                            "CanPlayHapticPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AdvancedHapticsPlayerController.PlayContinuousHapticPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AdvancedHapticsPlayerController::*)(::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*)>(&::GlobalNamespace::PS5AdvancedHapticsPlayerController::PlayContinuousHapticPreset)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x20f9c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                            "PlayContinuousHapticPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AdvancedHapticsPlayerController.PlayOneShotHapticPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AdvancedHapticsPlayerController::*)(::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*)>(&::GlobalNamespace::PS5AdvancedHapticsPlayerController::PlayOneShotHapticPreset)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x20f9ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                            "PlayOneShotHapticPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AdvancedHapticsPlayerController.OnHapticPlayFinishedCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AdvancedHapticsPlayerController::*)(::GlobalNamespace::HapticsAudioClipPlayer*)>(&::GlobalNamespace::PS5AdvancedHapticsPlayerController::OnHapticPlayFinishedCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x20f9edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                            "OnHapticPlayFinishedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HapticsAudioClipPlayer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AdvancedHapticsPlayerController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AdvancedHapticsPlayerController::*)()>(&::GlobalNamespace::PS5AdvancedHapticsPlayerController::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x20f9f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IHapticFeedbackPlayer"
constexpr  GlobalNamespace::PS5AdvancedHapticsPlayerController::operator ::GlobalNamespace::IHapticFeedbackPlayer*() noexcept {
return static_cast<::GlobalNamespace::IHapticFeedbackPlayer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr  GlobalNamespace::PS5AdvancedHapticsPlayerController::operator ::Zenject::IInitializable*() noexcept {
return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::PS5AdvancedHapticsPlayerController::__set__hapticsPlayerPool(::GlobalNamespace::__HapticsAudioClipPlayer__Pool*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*, 0x10>(this, std::forward<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*>(value));
}
constexpr ::GlobalNamespace::__HapticsAudioClipPlayer__Pool* GlobalNamespace::PS5AdvancedHapticsPlayerController::__get__hapticsPlayerPool()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*> GlobalNamespace::PS5AdvancedHapticsPlayerController::__get__hapticsPlayerPool() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*, 0x10>(this);
}
constexpr void GlobalNamespace::PS5AdvancedHapticsPlayerController::__set__coroutineStarter(::GlobalNamespace::ICoroutineStarter*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ICoroutineStarter*, 0x18>(this, std::forward<::GlobalNamespace::ICoroutineStarter*>(value));
}
constexpr ::GlobalNamespace::ICoroutineStarter* GlobalNamespace::PS5AdvancedHapticsPlayerController::__get__coroutineStarter()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ICoroutineStarter*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICoroutineStarter*> GlobalNamespace::PS5AdvancedHapticsPlayerController::__get__coroutineStarter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ICoroutineStarter*, 0x18>(this);
}
constexpr void GlobalNamespace::PS5AdvancedHapticsPlayerController::__set__activePlayers(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode,::Libraries::HM::HMLib::VR::HapticPresetSO*>,::GlobalNamespace::HapticsAudioClipPlayer*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode,::Libraries::HM::HMLib::VR::HapticPresetSO*>,::GlobalNamespace::HapticsAudioClipPlayer*>*, 0x20>(this, std::forward<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode,::Libraries::HM::HMLib::VR::HapticPresetSO*>,::GlobalNamespace::HapticsAudioClipPlayer*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode,::Libraries::HM::HMLib::VR::HapticPresetSO*>,::GlobalNamespace::HapticsAudioClipPlayer*>* GlobalNamespace::PS5AdvancedHapticsPlayerController::__get__activePlayers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode,::Libraries::HM::HMLib::VR::HapticPresetSO*>,::GlobalNamespace::HapticsAudioClipPlayer*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode,::Libraries::HM::HMLib::VR::HapticPresetSO*>,::GlobalNamespace::HapticsAudioClipPlayer*>*> GlobalNamespace::PS5AdvancedHapticsPlayerController::__get__activePlayers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode,::Libraries::HM::HMLib::VR::HapticPresetSO*>,::GlobalNamespace::HapticsAudioClipPlayer*>*, 0x20>(this);
}
inline void GlobalNamespace::PS5AdvancedHapticsPlayerController::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PS5AdvancedHapticsPlayerController::PlayHapticFeedback(::UnityEngine::XR::XRNode  node, ::Libraries::HM::HMLib::VR::HapticPresetSO*  hapticPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                            "PlayHapticFeedback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node, hapticPreset);
}
inline bool GlobalNamespace::PS5AdvancedHapticsPlayerController::CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  hapticPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                            "CanPlayHapticPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, hapticPreset);
}
inline void GlobalNamespace::PS5AdvancedHapticsPlayerController::PlayContinuousHapticPreset(::UnityEngine::XR::XRNode  node, ::Libraries::HM::HMLib::VR::HapticPresetSO*  hapticPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                            "PlayContinuousHapticPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node, hapticPreset);
}
inline void GlobalNamespace::PS5AdvancedHapticsPlayerController::PlayOneShotHapticPreset(::UnityEngine::XR::XRNode  node, ::Libraries::HM::HMLib::VR::HapticPresetSO*  hapticPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                            "PlayOneShotHapticPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node, hapticPreset);
}
inline void GlobalNamespace::PS5AdvancedHapticsPlayerController::OnHapticPlayFinishedCallback(::GlobalNamespace::HapticsAudioClipPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                            "OnHapticPlayFinishedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HapticsAudioClipPlayer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, player);
}
inline ::GlobalNamespace::PS5AdvancedHapticsPlayerController* GlobalNamespace::PS5AdvancedHapticsPlayerController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>());
}
inline void GlobalNamespace::PS5AdvancedHapticsPlayerController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
