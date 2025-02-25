// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioClipQueue
  class AudioClipQueue;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayAudioOnGameEventController
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayAudioOnGameEventController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding
    class EventAudioBinding;
    // private AudioClipQueue _audioClipQueue
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AudioClipQueue* audioClipQueue;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioClipQueue*) == 0x8);
    // private PlayAudioOnGameEventController/EventAudioBinding[] _eventAudioBindings
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding*>* eventAudioBindings;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding*>*) == 0x8);
    // Creating value type constructor for type: PlayAudioOnGameEventController
    PlayAudioOnGameEventController(GlobalNamespace::AudioClipQueue* audioClipQueue_ = {}, ::Array<GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding*>* eventAudioBindings_ = {}) noexcept : audioClipQueue{audioClipQueue_}, eventAudioBindings{eventAudioBindings_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private AudioClipQueue _audioClipQueue
    GlobalNamespace::AudioClipQueue*& dyn__audioClipQueue();
    // Get instance field reference: private PlayAudioOnGameEventController/EventAudioBinding[] _eventAudioBindings
    ::Array<GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding*>*& dyn__eventAudioBindings();
    // protected System.Void Awake()
    // Offset: 0x11F3C94
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x11F3DD8
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x11F3ECC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayAudioOnGameEventController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayAudioOnGameEventController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayAudioOnGameEventController*, creationType>()));
    }
  }; // PlayAudioOnGameEventController
  #pragma pack(pop)
  static check_size<sizeof(PlayAudioOnGameEventController), 32 + sizeof(::Array<GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding*>*)> __GlobalNamespace_PlayAudioOnGameEventControllerSizeCheck;
  static_assert(sizeof(PlayAudioOnGameEventController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayAudioOnGameEventController*, "", "PlayAudioOnGameEventController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayAudioOnGameEventController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayAudioOnGameEventController::*)()>(&GlobalNamespace::PlayAudioOnGameEventController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayAudioOnGameEventController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayAudioOnGameEventController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayAudioOnGameEventController::*)()>(&GlobalNamespace::PlayAudioOnGameEventController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayAudioOnGameEventController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayAudioOnGameEventController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
