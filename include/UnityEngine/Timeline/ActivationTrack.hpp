// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.TrackAsset
#include "UnityEngine/Timeline/TrackAsset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: ActivationMixerPlayable
  class ActivationMixerPlayable;
  // Skipping declaration: PostPlaybackState because it is already included!
  // Forward declaring type: IPropertyCollector
  class IPropertyCollector;
  // Forward declaring type: TimelineClip
  class TimelineClip;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Skipping declaration: Playable because it is already included!
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Timeline.ActivationTrack
  // [TokenAttribute] Offset: FFFFFFFF
  // [TrackClipTypeAttribute] Offset: DFBA24
  // [TrackBindingTypeAttribute] Offset: DFBA24
  // [ExcludeFromPresetAttribute] Offset: FFFFFFFF
  class ActivationTrack : public UnityEngine::Timeline::TrackAsset {
    public:
    // Nested type: UnityEngine::Timeline::ActivationTrack::PostPlaybackState
    struct PostPlaybackState;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Timeline.ActivationTrack/UnityEngine.Timeline.PostPlaybackState
    // [TokenAttribute] Offset: FFFFFFFF
    struct PostPlaybackState/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: PostPlaybackState
      constexpr PostPlaybackState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Timeline.ActivationTrack/UnityEngine.Timeline.PostPlaybackState Active
      static constexpr const int Active = 0;
      // Get static field: static public UnityEngine.Timeline.ActivationTrack/UnityEngine.Timeline.PostPlaybackState Active
      static UnityEngine::Timeline::ActivationTrack::PostPlaybackState _get_Active();
      // Set static field: static public UnityEngine.Timeline.ActivationTrack/UnityEngine.Timeline.PostPlaybackState Active
      static void _set_Active(UnityEngine::Timeline::ActivationTrack::PostPlaybackState value);
      // static field const value: static public UnityEngine.Timeline.ActivationTrack/UnityEngine.Timeline.PostPlaybackState Inactive
      static constexpr const int Inactive = 1;
      // Get static field: static public UnityEngine.Timeline.ActivationTrack/UnityEngine.Timeline.PostPlaybackState Inactive
      static UnityEngine::Timeline::ActivationTrack::PostPlaybackState _get_Inactive();
      // Set static field: static public UnityEngine.Timeline.ActivationTrack/UnityEngine.Timeline.PostPlaybackState Inactive
      static void _set_Inactive(UnityEngine::Timeline::ActivationTrack::PostPlaybackState value);
      // static field const value: static public UnityEngine.Timeline.ActivationTrack/UnityEngine.Timeline.PostPlaybackState Revert
      static constexpr const int Revert = 2;
      // Get static field: static public UnityEngine.Timeline.ActivationTrack/UnityEngine.Timeline.PostPlaybackState Revert
      static UnityEngine::Timeline::ActivationTrack::PostPlaybackState _get_Revert();
      // Set static field: static public UnityEngine.Timeline.ActivationTrack/UnityEngine.Timeline.PostPlaybackState Revert
      static void _set_Revert(UnityEngine::Timeline::ActivationTrack::PostPlaybackState value);
      // static field const value: static public UnityEngine.Timeline.ActivationTrack/UnityEngine.Timeline.PostPlaybackState LeaveAsIs
      static constexpr const int LeaveAsIs = 3;
      // Get static field: static public UnityEngine.Timeline.ActivationTrack/UnityEngine.Timeline.PostPlaybackState LeaveAsIs
      static UnityEngine::Timeline::ActivationTrack::PostPlaybackState _get_LeaveAsIs();
      // Set static field: static public UnityEngine.Timeline.ActivationTrack/UnityEngine.Timeline.PostPlaybackState LeaveAsIs
      static void _set_LeaveAsIs(UnityEngine::Timeline::ActivationTrack::PostPlaybackState value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // UnityEngine.Timeline.ActivationTrack/UnityEngine.Timeline.PostPlaybackState
    #pragma pack(pop)
    static check_size<sizeof(ActivationTrack::PostPlaybackState), 0 + sizeof(int)> __UnityEngine_Timeline_ActivationTrack_PostPlaybackStateSizeCheck;
    static_assert(sizeof(ActivationTrack::PostPlaybackState) == 0x4);
    // private UnityEngine.Timeline.ActivationTrack/UnityEngine.Timeline.PostPlaybackState m_PostPlaybackState
    // Size: 0x4
    // Offset: 0xA0
    UnityEngine::Timeline::ActivationTrack::PostPlaybackState m_PostPlaybackState;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::ActivationTrack::PostPlaybackState) == 0x4);
    // private UnityEngine.Timeline.ActivationMixerPlayable m_ActivationMixer
    // Size: 0x8
    // Offset: 0xA8
    UnityEngine::Timeline::ActivationMixerPlayable* m_ActivationMixer;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::ActivationMixerPlayable*) == 0x8);
    // Creating value type constructor for type: ActivationTrack
    ActivationTrack(UnityEngine::Timeline::ActivationTrack::PostPlaybackState m_PostPlaybackState_ = {}, UnityEngine::Timeline::ActivationMixerPlayable* m_ActivationMixer_ = {}) noexcept : m_PostPlaybackState{m_PostPlaybackState_}, m_ActivationMixer{m_ActivationMixer_} {}
    // Get instance field reference: private UnityEngine.Timeline.ActivationTrack/UnityEngine.Timeline.PostPlaybackState m_PostPlaybackState
    UnityEngine::Timeline::ActivationTrack::PostPlaybackState& dyn_m_PostPlaybackState();
    // Get instance field reference: private UnityEngine.Timeline.ActivationMixerPlayable m_ActivationMixer
    UnityEngine::Timeline::ActivationMixerPlayable*& dyn_m_ActivationMixer();
    // public UnityEngine.Timeline.ActivationTrack/UnityEngine.Timeline.PostPlaybackState get_postPlaybackState()
    // Offset: 0x181B4D0
    UnityEngine::Timeline::ActivationTrack::PostPlaybackState get_postPlaybackState();
    // public System.Void set_postPlaybackState(UnityEngine.Timeline.ActivationTrack/UnityEngine.Timeline.PostPlaybackState value)
    // Offset: 0x181B4D8
    void set_postPlaybackState(UnityEngine::Timeline::ActivationTrack::PostPlaybackState value);
    // System.Void UpdateTrackMode()
    // Offset: 0x181B4EC
    void UpdateTrackMode();
    // public System.Void .ctor()
    // Offset: 0x181B77C
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Void TrackAsset::.ctor()
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActivationTrack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::ActivationTrack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActivationTrack*, creationType>()));
    }
    // override System.Boolean CanCompileClips()
    // Offset: 0x181B490
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Boolean TrackAsset::CanCompileClips()
    bool CanCompileClips();
    // public override UnityEngine.Playables.Playable CreateTrackMixer(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go, System.Int32 inputCount)
    // Offset: 0x181B500
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: UnityEngine.Playables.Playable TrackAsset::CreateTrackMixer(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go, System.Int32 inputCount)
    UnityEngine::Playables::Playable CreateTrackMixer(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go, int inputCount);
    // public override System.Void GatherProperties(UnityEngine.Playables.PlayableDirector director, UnityEngine.Timeline.IPropertyCollector driver)
    // Offset: 0x181B5DC
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Void TrackAsset::GatherProperties(UnityEngine.Playables.PlayableDirector director, UnityEngine.Timeline.IPropertyCollector driver)
    void GatherProperties(UnityEngine::Playables::PlayableDirector* director, UnityEngine::Timeline::IPropertyCollector* driver);
    // protected override System.Void OnCreateClip(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x181B70C
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Void TrackAsset::OnCreateClip(UnityEngine.Timeline.TimelineClip clip)
    void OnCreateClip(UnityEngine::Timeline::TimelineClip* clip);
  }; // UnityEngine.Timeline.ActivationTrack
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ActivationTrack*, "UnityEngine.Timeline", "ActivationTrack");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ActivationTrack::PostPlaybackState, "UnityEngine.Timeline", "ActivationTrack/PostPlaybackState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationTrack::get_postPlaybackState
// Il2CppName: get_postPlaybackState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::ActivationTrack::PostPlaybackState (UnityEngine::Timeline::ActivationTrack::*)()>(&UnityEngine::Timeline::ActivationTrack::get_postPlaybackState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ActivationTrack*), "get_postPlaybackState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationTrack::set_postPlaybackState
// Il2CppName: set_postPlaybackState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationTrack::*)(UnityEngine::Timeline::ActivationTrack::PostPlaybackState)>(&UnityEngine::Timeline::ActivationTrack::set_postPlaybackState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "ActivationTrack/PostPlaybackState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ActivationTrack*), "set_postPlaybackState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationTrack::UpdateTrackMode
// Il2CppName: UpdateTrackMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationTrack::*)()>(&UnityEngine::Timeline::ActivationTrack::UpdateTrackMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ActivationTrack*), "UpdateTrackMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationTrack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationTrack::CanCompileClips
// Il2CppName: CanCompileClips
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::ActivationTrack::*)()>(&UnityEngine::Timeline::ActivationTrack::CanCompileClips)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ActivationTrack*), "CanCompileClips", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationTrack::CreateTrackMixer
// Il2CppName: CreateTrackMixer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (UnityEngine::Timeline::ActivationTrack::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::GameObject*, int)>(&UnityEngine::Timeline::ActivationTrack::CreateTrackMixer)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ActivationTrack*), "CreateTrackMixer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, go, inputCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationTrack::GatherProperties
// Il2CppName: GatherProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationTrack::*)(UnityEngine::Playables::PlayableDirector*, UnityEngine::Timeline::IPropertyCollector*)>(&UnityEngine::Timeline::ActivationTrack::GatherProperties)> {
  static const MethodInfo* get() {
    static auto* director = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableDirector")->byval_arg;
    static auto* driver = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "IPropertyCollector")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ActivationTrack*), "GatherProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{director, driver});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationTrack::OnCreateClip
// Il2CppName: OnCreateClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationTrack::*)(UnityEngine::Timeline::TimelineClip*)>(&UnityEngine::Timeline::ActivationTrack::OnCreateClip)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimelineClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ActivationTrack*), "OnCreateClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
