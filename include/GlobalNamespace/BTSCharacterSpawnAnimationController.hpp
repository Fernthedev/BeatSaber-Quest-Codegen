// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: JumpReceiver
  class JumpReceiver;
  // Forward declaring type: MaterialPropertyBlockColorSetter
  class MaterialPropertyBlockColorSetter;
  // Forward declaring type: MaterialPropertyBlockFloatAnimator
  class MaterialPropertyBlockFloatAnimator;
  // Forward declaring type: SongSpeedData
  class SongSpeedData;
  // Forward declaring type: BTSCharacter
  class BTSCharacter;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: ActivationTrack
  class ActivationTrack;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BTSCharacterSpawnAnimationController
  class BTSCharacterSpawnAnimationController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BTSCharacterSpawnAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterSpawnAnimationController*, "", "BTSCharacterSpawnAnimationController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x74
  #pragma pack(push, 1)
  // Autogenerated type: BTSCharacterSpawnAnimationController
  // [TokenAttribute] Offset: FFFFFFFF
  class BTSCharacterSpawnAnimationController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Playables.PlayableDirector _spawnCharacterPlayableDirector
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Playables::PlayableDirector* spawnCharacterPlayableDirector;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableDirector*) == 0x8);
    // [SpaceAttribute] Offset: 0x10DF6E8
    // private JumpReceiver _jumpReceiver
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::JumpReceiver* jumpReceiver;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::JumpReceiver*) == 0x8);
    // private System.Single _appearAnimationEndTime
    // Size: 0x4
    // Offset: 0x28
    float appearAnimationEndTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _disappearAnimationStartTime
    // Size: 0x4
    // Offset: 0x2C
    float disappearAnimationStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0x10DF740
    // private MaterialPropertyBlockColorSetter _rimLightColorSetter
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::MaterialPropertyBlockColorSetter* rimLightColorSetter;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MaterialPropertyBlockColorSetter*) == 0x8);
    // private MaterialPropertyBlockFloatAnimator _rimLightIntensityAnimator
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::MaterialPropertyBlockFloatAnimator* rimLightIntensityAnimator;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MaterialPropertyBlockFloatAnimator*) == 0x8);
    // private MaterialPropertyBlockFloatAnimator _rimLightEdgeStartAnimator
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::MaterialPropertyBlockFloatAnimator* rimLightEdgeStartAnimator;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MaterialPropertyBlockFloatAnimator*) == 0x8);
    // [InjectAttribute] Offset: 0x10DF798
    // private readonly SongSpeedData _songSpeedData
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::SongSpeedData* songSpeedData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SongSpeedData*) == 0x8);
    // private UnityEngine.Timeline.ActivationTrack _characterActivationTrack
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Timeline::ActivationTrack* characterActivationTrack;
    // Field size check
    static_assert(sizeof(::UnityEngine::Timeline::ActivationTrack*) == 0x8);
    // private BTSCharacter _currentBtsCharacter
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::BTSCharacter* currentBtsCharacter;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BTSCharacter*) == 0x8);
    // private System.Single _defaultSpawnCharacterDuration
    // Size: 0x4
    // Offset: 0x60
    float defaultSpawnCharacterDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: defaultSpawnCharacterDuration and: playableDirectorTimeBeforePause
    char __padding10[0x4] = {};
    // private System.Double _playableDirectorTimeBeforePause
    // Size: 0x8
    // Offset: 0x68
    double playableDirectorTimeBeforePause;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Single _animatorNormalizedTimeBeforePause
    // Size: 0x4
    // Offset: 0x70
    float animatorNormalizedTimeBeforePause;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kCharacterActivationStreamName
    static constexpr const char* kCharacterActivationStreamName = "CharacterActivationTrack";
    // Get static field: static private System.String kCharacterActivationStreamName
    static ::StringW _get_kCharacterActivationStreamName();
    // Set static field: static private System.String kCharacterActivationStreamName
    static void _set_kCharacterActivationStreamName(::StringW value);
    // Get instance field reference: private UnityEngine.Playables.PlayableDirector _spawnCharacterPlayableDirector
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::PlayableDirector*& dyn__spawnCharacterPlayableDirector();
    // Get instance field reference: private JumpReceiver _jumpReceiver
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::JumpReceiver*& dyn__jumpReceiver();
    // Get instance field reference: private System.Single _appearAnimationEndTime
    [[deprecated("Use field access instead!")]] float& dyn__appearAnimationEndTime();
    // Get instance field reference: private System.Single _disappearAnimationStartTime
    [[deprecated("Use field access instead!")]] float& dyn__disappearAnimationStartTime();
    // Get instance field reference: private MaterialPropertyBlockColorSetter _rimLightColorSetter
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MaterialPropertyBlockColorSetter*& dyn__rimLightColorSetter();
    // Get instance field reference: private MaterialPropertyBlockFloatAnimator _rimLightIntensityAnimator
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MaterialPropertyBlockFloatAnimator*& dyn__rimLightIntensityAnimator();
    // Get instance field reference: private MaterialPropertyBlockFloatAnimator _rimLightEdgeStartAnimator
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MaterialPropertyBlockFloatAnimator*& dyn__rimLightEdgeStartAnimator();
    // Get instance field reference: private readonly SongSpeedData _songSpeedData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SongSpeedData*& dyn__songSpeedData();
    // Get instance field reference: private UnityEngine.Timeline.ActivationTrack _characterActivationTrack
    [[deprecated("Use field access instead!")]] ::UnityEngine::Timeline::ActivationTrack*& dyn__characterActivationTrack();
    // Get instance field reference: private BTSCharacter _currentBtsCharacter
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BTSCharacter*& dyn__currentBtsCharacter();
    // Get instance field reference: private System.Single _defaultSpawnCharacterDuration
    [[deprecated("Use field access instead!")]] float& dyn__defaultSpawnCharacterDuration();
    // Get instance field reference: private System.Double _playableDirectorTimeBeforePause
    [[deprecated("Use field access instead!")]] double& dyn__playableDirectorTimeBeforePause();
    // Get instance field reference: private System.Single _animatorNormalizedTimeBeforePause
    [[deprecated("Use field access instead!")]] float& dyn__animatorNormalizedTimeBeforePause();
    // public System.Boolean get_isCharacterVisible()
    // Offset: 0x1527D88
    bool get_isCharacterVisible();
    // public System.Single get_duration()
    // Offset: 0x1527DB4
    float get_duration();
    // private UnityEngine.Timeline.ActivationTrack get_characterActivationTrack()
    // Offset: 0x1527DF8
    ::UnityEngine::Timeline::ActivationTrack* get_characterActivationTrack();
    // public System.Void .ctor()
    // Offset: 0x15284D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacterSpawnAnimationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BTSCharacterSpawnAnimationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacterSpawnAnimationController*, creationType>()));
    }
    // public System.Void PlayAnimation()
    // Offset: 0x1528148
    void PlayAnimation();
    // public System.Void EndEarlyAnimation()
    // Offset: 0x152821C
    void EndEarlyAnimation();
    // public System.Void StopAnimation()
    // Offset: 0x15282A0
    void StopAnimation();
    // public System.Void SetCharacter(BTSCharacter btsCharacter)
    // Offset: 0x15282BC
    void SetCharacter(::GlobalNamespace::BTSCharacter* btsCharacter);
    // public System.Void WillResumeAnimation()
    // Offset: 0x1528358
    void WillResumeAnimation();
    // public System.Void ResumeAnimation()
    // Offset: 0x15283C4
    void ResumeAnimation();
    // public System.Void PauseAnimation()
    // Offset: 0x1528430
    void PauseAnimation();
  }; // BTSCharacterSpawnAnimationController
  #pragma pack(pop)
  static check_size<sizeof(BTSCharacterSpawnAnimationController), 112 + sizeof(float)> __GlobalNamespace_BTSCharacterSpawnAnimationControllerSizeCheck;
  static_assert(sizeof(BTSCharacterSpawnAnimationController) == 0x74);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::get_isCharacterVisible
// Il2CppName: get_isCharacterVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&GlobalNamespace::BTSCharacterSpawnAnimationController::get_isCharacterVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "get_isCharacterVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&GlobalNamespace::BTSCharacterSpawnAnimationController::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::get_characterActivationTrack
// Il2CppName: get_characterActivationTrack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::ActivationTrack* (GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&GlobalNamespace::BTSCharacterSpawnAnimationController::get_characterActivationTrack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "get_characterActivationTrack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::PlayAnimation
// Il2CppName: PlayAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&GlobalNamespace::BTSCharacterSpawnAnimationController::PlayAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "PlayAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::EndEarlyAnimation
// Il2CppName: EndEarlyAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&GlobalNamespace::BTSCharacterSpawnAnimationController::EndEarlyAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "EndEarlyAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::StopAnimation
// Il2CppName: StopAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&GlobalNamespace::BTSCharacterSpawnAnimationController::StopAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "StopAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::SetCharacter
// Il2CppName: SetCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnAnimationController::*)(::GlobalNamespace::BTSCharacter*)>(&GlobalNamespace::BTSCharacterSpawnAnimationController::SetCharacter)> {
  static const MethodInfo* get() {
    static auto* btsCharacter = &::il2cpp_utils::GetClassFromName("", "BTSCharacter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "SetCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{btsCharacter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::WillResumeAnimation
// Il2CppName: WillResumeAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&GlobalNamespace::BTSCharacterSpawnAnimationController::WillResumeAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "WillResumeAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::ResumeAnimation
// Il2CppName: ResumeAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&GlobalNamespace::BTSCharacterSpawnAnimationController::ResumeAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "ResumeAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnAnimationController::PauseAnimation
// Il2CppName: PauseAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&GlobalNamespace::BTSCharacterSpawnAnimationController::PauseAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnAnimationController*), "PauseAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
