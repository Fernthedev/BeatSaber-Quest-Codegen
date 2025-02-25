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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animation
  class Animation;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VFXAnimationEvents
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class VFXAnimationEvents : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::VFXAnimationEvents::VFXAnimationEvent
    class VFXAnimationEvent;
    // private UnityEngine.Animation _animation
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Animation* animation;
    // Field size check
    static_assert(sizeof(UnityEngine::Animation*) == 0x8);
    // private VFXAnimationEvents/VFXAnimationEvent[] _animationEvents
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::VFXAnimationEvents::VFXAnimationEvent*>* animationEvents;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::VFXAnimationEvents::VFXAnimationEvent*>*) == 0x8);
    // private System.Action animationDidPauseEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action* animationDidPauseEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action spawnCharacterEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* spawnCharacterEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action despawnCharacterEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* despawnCharacterEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: VFXAnimationEvents
    VFXAnimationEvents(UnityEngine::Animation* animation_ = {}, ::Array<GlobalNamespace::VFXAnimationEvents::VFXAnimationEvent*>* animationEvents_ = {}, System::Action* animationDidPauseEvent_ = {}, System::Action* spawnCharacterEvent_ = {}, System::Action* despawnCharacterEvent_ = {}) noexcept : animation{animation_}, animationEvents{animationEvents_}, animationDidPauseEvent{animationDidPauseEvent_}, spawnCharacterEvent{spawnCharacterEvent_}, despawnCharacterEvent{despawnCharacterEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Animation _animation
    UnityEngine::Animation*& dyn__animation();
    // Get instance field reference: private VFXAnimationEvents/VFXAnimationEvent[] _animationEvents
    ::Array<GlobalNamespace::VFXAnimationEvents::VFXAnimationEvent*>*& dyn__animationEvents();
    // Get instance field reference: private System.Action animationDidPauseEvent
    System::Action*& dyn_animationDidPauseEvent();
    // Get instance field reference: private System.Action spawnCharacterEvent
    System::Action*& dyn_spawnCharacterEvent();
    // Get instance field reference: private System.Action despawnCharacterEvent
    System::Action*& dyn_despawnCharacterEvent();
    // public System.Void add_animationDidPauseEvent(System.Action value)
    // Offset: 0x2396AF8
    void add_animationDidPauseEvent(System::Action* value);
    // public System.Void remove_animationDidPauseEvent(System.Action value)
    // Offset: 0x2396B9C
    void remove_animationDidPauseEvent(System::Action* value);
    // public System.Void add_spawnCharacterEvent(System.Action value)
    // Offset: 0x2396C40
    void add_spawnCharacterEvent(System::Action* value);
    // public System.Void remove_spawnCharacterEvent(System.Action value)
    // Offset: 0x2396CE4
    void remove_spawnCharacterEvent(System::Action* value);
    // public System.Void add_despawnCharacterEvent(System.Action value)
    // Offset: 0x2396D88
    void add_despawnCharacterEvent(System::Action* value);
    // public System.Void remove_despawnCharacterEvent(System.Action value)
    // Offset: 0x2396E2C
    void remove_despawnCharacterEvent(System::Action* value);
    // private System.Void PlayEvent(System.String eventName)
    // Offset: 0x2396ED0
    void PlayEvent(::Il2CppString* eventName);
    // private System.Void PauseAnimation()
    // Offset: 0x2396FA8
    void PauseAnimation();
    // private System.Void SpawnCharacterEvent()
    // Offset: 0x23971E8
    void SpawnCharacterEvent();
    // private System.Void DeSpawnCharacterEvent()
    // Offset: 0x23971FC
    void DeSpawnCharacterEvent();
    // public System.Void ResumeAnimation()
    // Offset: 0x2397210
    void ResumeAnimation();
    // public System.Void .ctor()
    // Offset: 0x2397440
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VFXAnimationEvents* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VFXAnimationEvents::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VFXAnimationEvents*, creationType>()));
    }
  }; // VFXAnimationEvents
  #pragma pack(pop)
  static check_size<sizeof(VFXAnimationEvents), 56 + sizeof(System::Action*)> __GlobalNamespace_VFXAnimationEventsSizeCheck;
  static_assert(sizeof(VFXAnimationEvents) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VFXAnimationEvents*, "", "VFXAnimationEvents");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VFXAnimationEvents::add_animationDidPauseEvent
// Il2CppName: add_animationDidPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VFXAnimationEvents::*)(System::Action*)>(&GlobalNamespace::VFXAnimationEvents::add_animationDidPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXAnimationEvents*), "add_animationDidPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VFXAnimationEvents::remove_animationDidPauseEvent
// Il2CppName: remove_animationDidPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VFXAnimationEvents::*)(System::Action*)>(&GlobalNamespace::VFXAnimationEvents::remove_animationDidPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXAnimationEvents*), "remove_animationDidPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VFXAnimationEvents::add_spawnCharacterEvent
// Il2CppName: add_spawnCharacterEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VFXAnimationEvents::*)(System::Action*)>(&GlobalNamespace::VFXAnimationEvents::add_spawnCharacterEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXAnimationEvents*), "add_spawnCharacterEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VFXAnimationEvents::remove_spawnCharacterEvent
// Il2CppName: remove_spawnCharacterEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VFXAnimationEvents::*)(System::Action*)>(&GlobalNamespace::VFXAnimationEvents::remove_spawnCharacterEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXAnimationEvents*), "remove_spawnCharacterEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VFXAnimationEvents::add_despawnCharacterEvent
// Il2CppName: add_despawnCharacterEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VFXAnimationEvents::*)(System::Action*)>(&GlobalNamespace::VFXAnimationEvents::add_despawnCharacterEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXAnimationEvents*), "add_despawnCharacterEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VFXAnimationEvents::remove_despawnCharacterEvent
// Il2CppName: remove_despawnCharacterEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VFXAnimationEvents::*)(System::Action*)>(&GlobalNamespace::VFXAnimationEvents::remove_despawnCharacterEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXAnimationEvents*), "remove_despawnCharacterEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VFXAnimationEvents::PlayEvent
// Il2CppName: PlayEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VFXAnimationEvents::*)(::Il2CppString*)>(&GlobalNamespace::VFXAnimationEvents::PlayEvent)> {
  static const MethodInfo* get() {
    static auto* eventName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXAnimationEvents*), "PlayEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VFXAnimationEvents::PauseAnimation
// Il2CppName: PauseAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VFXAnimationEvents::*)()>(&GlobalNamespace::VFXAnimationEvents::PauseAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXAnimationEvents*), "PauseAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VFXAnimationEvents::SpawnCharacterEvent
// Il2CppName: SpawnCharacterEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VFXAnimationEvents::*)()>(&GlobalNamespace::VFXAnimationEvents::SpawnCharacterEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXAnimationEvents*), "SpawnCharacterEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VFXAnimationEvents::DeSpawnCharacterEvent
// Il2CppName: DeSpawnCharacterEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VFXAnimationEvents::*)()>(&GlobalNamespace::VFXAnimationEvents::DeSpawnCharacterEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXAnimationEvents*), "DeSpawnCharacterEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VFXAnimationEvents::ResumeAnimation
// Il2CppName: ResumeAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VFXAnimationEvents::*)()>(&GlobalNamespace::VFXAnimationEvents::ResumeAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VFXAnimationEvents*), "ResumeAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VFXAnimationEvents::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
