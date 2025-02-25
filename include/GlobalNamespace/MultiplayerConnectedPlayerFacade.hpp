// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Tweening.EaseType
#include "Tweening/EaseType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerBigAvatarAnimator
  class MultiplayerBigAvatarAnimator;
  // Forward declaring type: MultiplayerConnectedPlayerSongTimeSyncController
  class MultiplayerConnectedPlayerSongTimeSyncController;
  // Forward declaring type: MultiplayerConnectedPlayerIntroAnimator
  class MultiplayerConnectedPlayerIntroAnimator;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: MultiplayerConnectedPlayerScoreDiffText
  class MultiplayerConnectedPlayerScoreDiffText;
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
  // Forward declaring type: AvatarPoseController
  class AvatarPoseController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerFacade
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerFacade : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerConnectedPlayerFacade::Factory
    class Factory;
    // private UnityEngine.GameObject _outroAnimator
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* outroAnimator;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [NullAllowed] Offset: 0xE3FB00
    // private MultiplayerBigAvatarAnimator _bigAvatarAnimator
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerBigAvatarAnimator* bigAvatarAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerBigAvatarAnimator*) == 0x8);
    // [HeaderAttribute] Offset: 0xE3FB38
    // private System.Single _bigAvatarDisappearDuration
    // Size: 0x4
    // Offset: 0x28
    float bigAvatarDisappearDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private Tweening.EaseType _bigAvatarDisappearEasing
    // Size: 0x4
    // Offset: 0x2C
    Tweening::EaseType bigAvatarDisappearEasing;
    // Field size check
    static_assert(sizeof(Tweening::EaseType) == 0x4);
    // [InjectAttribute] Offset: 0xE3FB94
    // private readonly MultiplayerConnectedPlayerSongTimeSyncController _songTimeSyncController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* songTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3FBA4
    // private readonly MultiplayerConnectedPlayerIntroAnimator _introAnimator
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator* introAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*) == 0x8);
    // [InjectAttribute] Offset: 0xE3FBB4
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE3FBC4
    // private readonly MultiplayerConnectedPlayerScoreDiffText _scoreDiffText
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText* scoreDiffText;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText*) == 0x8);
    // [InjectAttribute] Offset: 0xE3FBD4
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // Creating value type constructor for type: MultiplayerConnectedPlayerFacade
    MultiplayerConnectedPlayerFacade(UnityEngine::GameObject* outroAnimator_ = {}, GlobalNamespace::MultiplayerBigAvatarAnimator* bigAvatarAnimator_ = {}, float bigAvatarDisappearDuration_ = {}, Tweening::EaseType bigAvatarDisappearEasing_ = {}, GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* songTimeSyncController_ = {}, GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator* introAnimator_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText* scoreDiffText_ = {}, GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}) noexcept : outroAnimator{outroAnimator_}, bigAvatarAnimator{bigAvatarAnimator_}, bigAvatarDisappearDuration{bigAvatarDisappearDuration_}, bigAvatarDisappearEasing{bigAvatarDisappearEasing_}, songTimeSyncController{songTimeSyncController_}, introAnimator{introAnimator_}, beatmapObjectManager{beatmapObjectManager_}, scoreDiffText{scoreDiffText_}, beatmapObjectCallbackController{beatmapObjectCallbackController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.GameObject _outroAnimator
    UnityEngine::GameObject*& dyn__outroAnimator();
    // Get instance field reference: private MultiplayerBigAvatarAnimator _bigAvatarAnimator
    GlobalNamespace::MultiplayerBigAvatarAnimator*& dyn__bigAvatarAnimator();
    // Get instance field reference: private System.Single _bigAvatarDisappearDuration
    float& dyn__bigAvatarDisappearDuration();
    // Get instance field reference: private Tweening.EaseType _bigAvatarDisappearEasing
    Tweening::EaseType& dyn__bigAvatarDisappearEasing();
    // Get instance field reference: private readonly MultiplayerConnectedPlayerSongTimeSyncController _songTimeSyncController
    GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*& dyn__songTimeSyncController();
    // Get instance field reference: private readonly MultiplayerConnectedPlayerIntroAnimator _introAnimator
    GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*& dyn__introAnimator();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private readonly MultiplayerConnectedPlayerScoreDiffText _scoreDiffText
    GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText*& dyn__scoreDiffText();
    // Get instance field reference: private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    GlobalNamespace::IBeatmapObjectCallbackController*& dyn__beatmapObjectCallbackController();
    // public MultiplayerConnectedPlayerIntroAnimator get_introAnimator()
    // Offset: 0x11C9968
    GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator* get_introAnimator();
    // public UnityEngine.GameObject get_outroAnimator()
    // Offset: 0x11C9970
    UnityEngine::GameObject* get_outroAnimator();
    // public MultiplayerConnectedPlayerScoreDiffText get_scoreDiffText()
    // Offset: 0x11C9978
    GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText* get_scoreDiffText();
    // public System.Void SetSongStartSyncTime(System.Single songStartSyncTime)
    // Offset: 0x11C9980
    void SetSongStartSyncTime(float songStartSyncTime);
    // public System.Void PauseSpawning()
    // Offset: 0x11C9AC0
    void PauseSpawning();
    // public System.Void ResumeSpawning()
    // Offset: 0x11C9B74
    void ResumeSpawning();
    // public System.Void __ForceStopSong()
    // Offset: 0x11C9C28
    void __ForceStopSong();
    // public System.Void HideBigAvatar()
    // Offset: 0x11C9C7C
    void HideBigAvatar();
    // public AvatarPoseController __GetPlayerAvatar()
    // Offset: 0x11C9D18
    GlobalNamespace::AvatarPoseController* __GetPlayerAvatar();
    // public System.Void .ctor()
    // Offset: 0x11C9D6C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerFacade* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerFacade::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerFacade*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerFacade
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerFacade), 80 + sizeof(GlobalNamespace::IBeatmapObjectCallbackController*)> __GlobalNamespace_MultiplayerConnectedPlayerFacadeSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerFacade) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerFacade*, "", "MultiplayerConnectedPlayerFacade");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerFacade::get_introAnimator
// Il2CppName: get_introAnimator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator* (GlobalNamespace::MultiplayerConnectedPlayerFacade::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerFacade::get_introAnimator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerFacade*), "get_introAnimator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerFacade::get_outroAnimator
// Il2CppName: get_outroAnimator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (GlobalNamespace::MultiplayerConnectedPlayerFacade::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerFacade::get_outroAnimator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerFacade*), "get_outroAnimator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerFacade::get_scoreDiffText
// Il2CppName: get_scoreDiffText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText* (GlobalNamespace::MultiplayerConnectedPlayerFacade::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerFacade::get_scoreDiffText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerFacade*), "get_scoreDiffText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerFacade::SetSongStartSyncTime
// Il2CppName: SetSongStartSyncTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerFacade::*)(float)>(&GlobalNamespace::MultiplayerConnectedPlayerFacade::SetSongStartSyncTime)> {
  static const MethodInfo* get() {
    static auto* songStartSyncTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerFacade*), "SetSongStartSyncTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songStartSyncTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerFacade::PauseSpawning
// Il2CppName: PauseSpawning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerFacade::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerFacade::PauseSpawning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerFacade*), "PauseSpawning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerFacade::ResumeSpawning
// Il2CppName: ResumeSpawning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerFacade::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerFacade::ResumeSpawning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerFacade*), "ResumeSpawning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerFacade::__ForceStopSong
// Il2CppName: __ForceStopSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerFacade::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerFacade::__ForceStopSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerFacade*), "__ForceStopSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerFacade::HideBigAvatar
// Il2CppName: HideBigAvatar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerFacade::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerFacade::HideBigAvatar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerFacade*), "HideBigAvatar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerFacade::__GetPlayerAvatar
// Il2CppName: __GetPlayerAvatar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AvatarPoseController* (GlobalNamespace::MultiplayerConnectedPlayerFacade::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerFacade::__GetPlayerAvatar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerFacade*), "__GetPlayerAvatar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerFacade::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
