// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: BTSStarTextEventEffect
  class BTSStarTextEventEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BTSStarTextEventEffect::StarTextSprite
    class StarTextSprite;
    // Nested type: GlobalNamespace::BTSStarTextEventEffect::StartTextPosition
    class StartTextPosition;
    // private BTSStarTextEventEffect/StarTextSprite[] _starTextSprites
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::BTSStarTextEventEffect::StarTextSprite*>* starTextSprites;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BTSStarTextEventEffect::StarTextSprite*>*) == 0x8);
    // private BTSStarTextEventEffect/StartTextPosition[] _startTextPositions
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::BTSStarTextEventEffect::StartTextPosition*>* startTextPositions;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BTSStarTextEventEffect::StartTextPosition*>*) == 0x8);
    // [InjectAttribute] Offset: 0xE12FBC
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // [InjectAttribute] Offset: 0xE12FCC
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAudioTimeSource*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE12FDC
    // private System.Action`3<UnityEngine.Sprite,UnityEngine.Transform,System.Single> startStarTextAnimationEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_3<UnityEngine::Sprite*, UnityEngine::Transform*, float>* startStarTextAnimationEvent;
    // Field size check
    static_assert(sizeof(System::Action_3<UnityEngine::Sprite*, UnityEngine::Transform*, float>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.Int32,BTSStarTextEventEffect/StarTextSprite> _idsToStarTextSpriteDictionary
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::Dictionary_2<int, GlobalNamespace::BTSStarTextEventEffect::StarTextSprite*>* idsToStarTextSpriteDictionary;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, GlobalNamespace::BTSStarTextEventEffect::StarTextSprite*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Transform> _idsToStarTextPositionDictionary
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::Dictionary_2<int, UnityEngine::Transform*>* idsToStarTextPositionDictionary;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, UnityEngine::Transform*>*) == 0x8);
    // Creating value type constructor for type: BTSStarTextEventEffect
    BTSStarTextEventEffect(::Array<GlobalNamespace::BTSStarTextEventEffect::StarTextSprite*>* starTextSprites_ = {}, ::Array<GlobalNamespace::BTSStarTextEventEffect::StartTextPosition*>* startTextPositions_ = {}, GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}, GlobalNamespace::IAudioTimeSource* audioTimeSource_ = {}, System::Action_3<UnityEngine::Sprite*, UnityEngine::Transform*, float>* startStarTextAnimationEvent_ = {}, System::Collections::Generic::Dictionary_2<int, GlobalNamespace::BTSStarTextEventEffect::StarTextSprite*>* idsToStarTextSpriteDictionary_ = {}, System::Collections::Generic::Dictionary_2<int, UnityEngine::Transform*>* idsToStarTextPositionDictionary_ = {}) noexcept : starTextSprites{starTextSprites_}, startTextPositions{startTextPositions_}, beatmapObjectCallbackController{beatmapObjectCallbackController_}, audioTimeSource{audioTimeSource_}, startStarTextAnimationEvent{startStarTextAnimationEvent_}, idsToStarTextSpriteDictionary{idsToStarTextSpriteDictionary_}, idsToStarTextPositionDictionary{idsToStarTextPositionDictionary_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private BeatmapEventType kStarTextAppearEventType
    static constexpr const int kStarTextAppearEventType = 41;
    // Get static field: static private BeatmapEventType kStarTextAppearEventType
    static GlobalNamespace::BeatmapEventType _get_kStarTextAppearEventType();
    // Set static field: static private BeatmapEventType kStarTextAppearEventType
    static void _set_kStarTextAppearEventType(GlobalNamespace::BeatmapEventType value);
    // public System.Void add_startStarTextAnimationEvent(System.Action`3<UnityEngine.Sprite,UnityEngine.Transform,System.Single> value)
    // Offset: 0x113CE64
    void add_startStarTextAnimationEvent(System::Action_3<UnityEngine::Sprite*, UnityEngine::Transform*, float>* value);
    // public System.Void remove_startStarTextAnimationEvent(System.Action`3<UnityEngine.Sprite,UnityEngine.Transform,System.Single> value)
    // Offset: 0x113CF98
    void remove_startStarTextAnimationEvent(System::Action_3<UnityEngine::Sprite*, UnityEngine::Transform*, float>* value);
    // protected System.Void Start()
    // Offset: 0x113D2CC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x113D480
    void OnDestroy();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0x113D574
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void .ctor()
    // Offset: 0x113D774
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSStarTextEventEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSStarTextEventEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSStarTextEventEffect*, creationType>()));
    }
  }; // BTSStarTextEventEffect
  #pragma pack(pop)
  static check_size<sizeof(BTSStarTextEventEffect), 72 + sizeof(System::Collections::Generic::Dictionary_2<int, UnityEngine::Transform*>*)> __GlobalNamespace_BTSStarTextEventEffectSizeCheck;
  static_assert(sizeof(BTSStarTextEventEffect) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSStarTextEventEffect*, "", "BTSStarTextEventEffect");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEventEffect::add_startStarTextAnimationEvent
// Il2CppName: add_startStarTextAnimationEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSStarTextEventEffect::*)(System::Action_3<UnityEngine::Sprite*, UnityEngine::Transform*, float>*)>(&GlobalNamespace::BTSStarTextEventEffect::add_startStarTextAnimationEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSStarTextEventEffect*), "add_startStarTextAnimationEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEventEffect::remove_startStarTextAnimationEvent
// Il2CppName: remove_startStarTextAnimationEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSStarTextEventEffect::*)(System::Action_3<UnityEngine::Sprite*, UnityEngine::Transform*, float>*)>(&GlobalNamespace::BTSStarTextEventEffect::remove_startStarTextAnimationEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSStarTextEventEffect*), "remove_startStarTextAnimationEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEventEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSStarTextEventEffect::*)()>(&GlobalNamespace::BTSStarTextEventEffect::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSStarTextEventEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEventEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSStarTextEventEffect::*)()>(&GlobalNamespace::BTSStarTextEventEffect::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSStarTextEventEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEventEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
// Il2CppName: HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSStarTextEventEffect::*)(GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::BTSStarTextEventEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger)> {
  const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSStarTextEventEffect*), "HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSStarTextEventEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
