// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IMultiplayerLevelEndActionsPublisher
#include "GlobalNamespace/IMultiplayerLevelEndActionsPublisher.hpp"
// Including type: IMultiplayerLevelEndActionsListener
#include "GlobalNamespace/IMultiplayerLevelEndActionsListener.hpp"
// Including type: IStartSeekSongControllerProvider
#include "GlobalNamespace/IStartSeekSongControllerProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IStartSeekSongController
  class IStartSeekSongController;
  // Forward declaring type: MultiplayerLocalActivePlayerIntroAnimator
  class MultiplayerLocalActivePlayerIntroAnimator;
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
  // Forward declaring type: MultiplayerLevelCompletionResults
  class MultiplayerLevelCompletionResults;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalActivePlayerFacade
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalActivePlayerFacade : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IMultiplayerLevelEndActionsPublisher, public GlobalNamespace::IMultiplayerLevelEndActionsListener, public GlobalNamespace::IStartSeekSongControllerProvider*/ {
    public:
    // Nested type: GlobalNamespace::MultiplayerLocalActivePlayerFacade::Factory
    class Factory;
    // private UnityEngine.GameObject[] _activeOnlyGameObjects
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::GameObject*>* activeOnlyGameObjects;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::GameObject*>*) == 0x8);
    // private UnityEngine.GameObject _outroAnimator
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::GameObject* outroAnimator;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0xE3A26C
    // private readonly IStartSeekSongController _songController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IStartSeekSongController* songController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IStartSeekSongController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3A27C
    // private readonly MultiplayerLocalActivePlayerIntroAnimator _introAnimator
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* introAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*) == 0x8);
    // [InjectAttribute] Offset: 0xE3A28C
    // private readonly GameSongController _gameSongController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::GameSongController* gameSongController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameSongController*) == 0x8);
    // [InjectAttribute] Offset: 0xE3A29C
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE3A2AC
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // private System.Action`1<MultiplayerLevelCompletionResults> playerDidFinishEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* playerDidFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>*) == 0x8);
    // private System.Action`1<PlayerNetworkFailReason> playerNetworkDidFailedEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* playerNetworkDidFailedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>*) == 0x8);
    // Creating value type constructor for type: MultiplayerLocalActivePlayerFacade
    MultiplayerLocalActivePlayerFacade(::Array<UnityEngine::GameObject*>* activeOnlyGameObjects_ = {}, UnityEngine::GameObject* outroAnimator_ = {}, GlobalNamespace::IStartSeekSongController* songController_ = {}, GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* introAnimator_ = {}, GlobalNamespace::GameSongController* gameSongController_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}, System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* playerDidFinishEvent_ = {}, System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* playerNetworkDidFailedEvent_ = {}) noexcept : activeOnlyGameObjects{activeOnlyGameObjects_}, outroAnimator{outroAnimator_}, songController{songController_}, introAnimator{introAnimator_}, gameSongController{gameSongController_}, beatmapObjectManager{beatmapObjectManager_}, beatmapObjectCallbackController{beatmapObjectCallbackController_}, playerDidFinishEvent{playerDidFinishEvent_}, playerNetworkDidFailedEvent{playerNetworkDidFailedEvent_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerLevelEndActionsPublisher
    operator GlobalNamespace::IMultiplayerLevelEndActionsPublisher() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerLevelEndActionsListener
    operator GlobalNamespace::IMultiplayerLevelEndActionsListener() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerLevelEndActionsListener*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IStartSeekSongControllerProvider
    operator GlobalNamespace::IStartSeekSongControllerProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::IStartSeekSongControllerProvider*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UnityEngine.GameObject[] _activeOnlyGameObjects
    ::Array<UnityEngine::GameObject*>* _get__activeOnlyGameObjects();
    // Set instance field: private UnityEngine.GameObject[] _activeOnlyGameObjects
    void _set__activeOnlyGameObjects(::Array<UnityEngine::GameObject*>* value);
    // Get instance field: private UnityEngine.GameObject _outroAnimator
    UnityEngine::GameObject* _get__outroAnimator();
    // Set instance field: private UnityEngine.GameObject _outroAnimator
    void _set__outroAnimator(UnityEngine::GameObject* value);
    // Get instance field: private readonly IStartSeekSongController _songController
    GlobalNamespace::IStartSeekSongController* _get__songController();
    // Set instance field: private readonly IStartSeekSongController _songController
    void _set__songController(GlobalNamespace::IStartSeekSongController* value);
    // Get instance field: private readonly MultiplayerLocalActivePlayerIntroAnimator _introAnimator
    GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* _get__introAnimator();
    // Set instance field: private readonly MultiplayerLocalActivePlayerIntroAnimator _introAnimator
    void _set__introAnimator(GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* value);
    // Get instance field: private readonly GameSongController _gameSongController
    GlobalNamespace::GameSongController* _get__gameSongController();
    // Set instance field: private readonly GameSongController _gameSongController
    void _set__gameSongController(GlobalNamespace::GameSongController* value);
    // Get instance field: private readonly BeatmapObjectManager _beatmapObjectManager
    GlobalNamespace::BeatmapObjectManager* _get__beatmapObjectManager();
    // Set instance field: private readonly BeatmapObjectManager _beatmapObjectManager
    void _set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager* value);
    // Get instance field: private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    GlobalNamespace::IBeatmapObjectCallbackController* _get__beatmapObjectCallbackController();
    // Set instance field: private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    void _set__beatmapObjectCallbackController(GlobalNamespace::IBeatmapObjectCallbackController* value);
    // Get instance field: private System.Action`1<MultiplayerLevelCompletionResults> playerDidFinishEvent
    System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* _get_playerDidFinishEvent();
    // Set instance field: private System.Action`1<MultiplayerLevelCompletionResults> playerDidFinishEvent
    void _set_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* value);
    // Get instance field: private System.Action`1<PlayerNetworkFailReason> playerNetworkDidFailedEvent
    System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* _get_playerNetworkDidFailedEvent();
    // Set instance field: private System.Action`1<PlayerNetworkFailReason> playerNetworkDidFailedEvent
    void _set_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value);
    // public MultiplayerLocalActivePlayerIntroAnimator get_introAnimator()
    // Offset: 0x1066620
    GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* get_introAnimator();
    // public UnityEngine.GameObject get_outroAnimator()
    // Offset: 0x1066628
    UnityEngine::GameObject* get_outroAnimator();
    // public IStartSeekSongController get_songController()
    // Offset: 0x1066630
    GlobalNamespace::IStartSeekSongController* get_songController();
    // public System.Void add_playerDidFinishEvent(System.Action`1<MultiplayerLevelCompletionResults> value)
    // Offset: 0x1066638
    void add_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* value);
    // public System.Void remove_playerDidFinishEvent(System.Action`1<MultiplayerLevelCompletionResults> value)
    // Offset: 0x10666DC
    void remove_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>* value);
    // public System.Void add_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    // Offset: 0x1066780
    void add_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value);
    // public System.Void remove_playerNetworkDidFailedEvent(System.Action`1<PlayerNetworkFailReason> value)
    // Offset: 0x1066824
    void remove_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value);
    // public System.Void ReportPlayerDidFinish(MultiplayerLevelCompletionResults results)
    // Offset: 0x10668C8
    void ReportPlayerDidFinish(GlobalNamespace::MultiplayerLevelCompletionResults* results);
    // public System.Void ReportPlayerNetworkDidFailed(PlayerNetworkFailReason failReason)
    // Offset: 0x106693C
    void ReportPlayerNetworkDidFailed(GlobalNamespace::PlayerNetworkFailReason failReason);
    // public System.Void DisablePlayer()
    // Offset: 0x10669B0
    void DisablePlayer();
    // public System.Void PauseSpawning()
    // Offset: 0x1066A20
    void PauseSpawning();
    // public System.Void ResumeSpawning()
    // Offset: 0x1066AD4
    void ResumeSpawning();
    // public System.Void __ForceStopSong()
    // Offset: 0x1066B88
    void __ForceStopSong();
    // public UnityEngine.GameObject[] __GetActiveOnlyGameObjects()
    // Offset: 0x1066BD0
    ::Array<UnityEngine::GameObject*>* __GetActiveOnlyGameObjects();
    // public System.Void .ctor()
    // Offset: 0x1066BD8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActivePlayerFacade* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalActivePlayerFacade::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActivePlayerFacade*, creationType>()));
    }
  }; // MultiplayerLocalActivePlayerFacade
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalActivePlayerFacade), 88 + sizeof(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>*)> __GlobalNamespace_MultiplayerLocalActivePlayerFacadeSizeCheck;
  static_assert(sizeof(MultiplayerLocalActivePlayerFacade) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActivePlayerFacade*, "", "MultiplayerLocalActivePlayerFacade");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_introAnimator
// Il2CppName: get_introAnimator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_introAnimator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "get_introAnimator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_outroAnimator
// Il2CppName: get_outroAnimator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_outroAnimator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "get_outroAnimator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_songController
// Il2CppName: get_songController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IStartSeekSongController* (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_songController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "get_songController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerDidFinishEvent
// Il2CppName: add_playerDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerLevelCompletionResults")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "add_playerDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerDidFinishEvent
// Il2CppName: remove_playerDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerLevelCompletionResults")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "remove_playerDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerNetworkDidFailedEvent
// Il2CppName: add_playerNetworkDidFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>*)>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerNetworkDidFailedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "PlayerNetworkFailReason")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "add_playerNetworkDidFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerNetworkDidFailedEvent
// Il2CppName: remove_playerNetworkDidFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>*)>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerNetworkDidFailedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "PlayerNetworkFailReason")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "remove_playerNetworkDidFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerDidFinish
// Il2CppName: ReportPlayerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(GlobalNamespace::MultiplayerLevelCompletionResults*)>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerDidFinish)> {
  static const MethodInfo* get() {
    static auto* results = &::il2cpp_utils::GetClassFromName("", "MultiplayerLevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "ReportPlayerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{results});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerNetworkDidFailed
// Il2CppName: ReportPlayerNetworkDidFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(GlobalNamespace::PlayerNetworkFailReason)>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerNetworkDidFailed)> {
  static const MethodInfo* get() {
    static auto* failReason = &::il2cpp_utils::GetClassFromName("", "PlayerNetworkFailReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "ReportPlayerNetworkDidFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{failReason});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::DisablePlayer
// Il2CppName: DisablePlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::DisablePlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "DisablePlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::PauseSpawning
// Il2CppName: PauseSpawning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::PauseSpawning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "PauseSpawning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::ResumeSpawning
// Il2CppName: ResumeSpawning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::ResumeSpawning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "ResumeSpawning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::__ForceStopSong
// Il2CppName: __ForceStopSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::__ForceStopSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "__ForceStopSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::__GetActiveOnlyGameObjects
// Il2CppName: __GetActiveOnlyGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::GameObject*>* (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::__GetActiveOnlyGameObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "__GetActiveOnlyGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
