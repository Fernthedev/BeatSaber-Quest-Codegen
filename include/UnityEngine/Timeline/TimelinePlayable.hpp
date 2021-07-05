// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: IntervalTree`1<T>
  template<typename T>
  class IntervalTree_1;
  // Forward declaring type: RuntimeElement
  class RuntimeElement;
  // Forward declaring type: ITimelineEvaluateCallback
  class ITimelineEvaluateCallback;
  // Forward declaring type: TrackAsset
  class TrackAsset;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: ScriptPlayable`1<T>
  template<typename T>
  struct ScriptPlayable_1;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimationPlayableOutput
  struct AnimationPlayableOutput;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelinePlayable
  class TimelinePlayable : public UnityEngine::Playables::PlayableBehaviour {
    public:
    // private UnityEngine.Timeline.IntervalTree`1<UnityEngine.Timeline.RuntimeElement> m_IntervalTree
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement*>* m_IntervalTree;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Timeline.RuntimeElement> m_ActiveClips
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement*>* m_ActiveClips;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Timeline.RuntimeElement> m_CurrentListOfActiveClips
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement*>* m_CurrentListOfActiveClips;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement*>*) == 0x8);
    // private System.Int32 m_ActiveBit
    // Size: 0x4
    // Offset: 0x28
    int m_ActiveBit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_ActiveBit and: m_EvaluateCallbacks
    char __padding3[0x4] = {};
    // private System.Collections.Generic.List`1<UnityEngine.Timeline.ITimelineEvaluateCallback> m_EvaluateCallbacks
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<UnityEngine::Timeline::ITimelineEvaluateCallback*>* m_EvaluateCallbacks;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Timeline::ITimelineEvaluateCallback*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<UnityEngine.Timeline.TrackAsset,UnityEngine.Playables.Playable> m_PlayableCache
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<UnityEngine::Timeline::TrackAsset*, UnityEngine::Playables::Playable>* m_PlayableCache;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::Timeline::TrackAsset*, UnityEngine::Playables::Playable>*) == 0x8);
    // Creating value type constructor for type: TimelinePlayable
    TimelinePlayable(UnityEngine::Timeline::IntervalTree_1<UnityEngine::Timeline::RuntimeElement*>* m_IntervalTree_ = {}, System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement*>* m_ActiveClips_ = {}, System::Collections::Generic::List_1<UnityEngine::Timeline::RuntimeElement*>* m_CurrentListOfActiveClips_ = {}, int m_ActiveBit_ = {}, System::Collections::Generic::List_1<UnityEngine::Timeline::ITimelineEvaluateCallback*>* m_EvaluateCallbacks_ = {}, System::Collections::Generic::Dictionary_2<UnityEngine::Timeline::TrackAsset*, UnityEngine::Playables::Playable>* m_PlayableCache_ = {}) noexcept : m_IntervalTree{m_IntervalTree_}, m_ActiveClips{m_ActiveClips_}, m_CurrentListOfActiveClips{m_CurrentListOfActiveClips_}, m_ActiveBit{m_ActiveBit_}, m_EvaluateCallbacks{m_EvaluateCallbacks_}, m_PlayableCache{m_PlayableCache_} {}
    // Get static field: static System.Boolean muteAudioScrubbing
    static bool _get_muteAudioScrubbing();
    // Set static field: static System.Boolean muteAudioScrubbing
    static void _set_muteAudioScrubbing(bool value);
    // static public UnityEngine.Playables.ScriptPlayable`1<UnityEngine.Timeline.TimelinePlayable> Create(UnityEngine.Playables.PlayableGraph graph, System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> tracks, UnityEngine.GameObject go, System.Boolean autoRebalance, System.Boolean createOutputs)
    // Offset: 0x233B0B0
    static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::TimelinePlayable*> Create(UnityEngine::Playables::PlayableGraph graph, System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset*>* tracks, UnityEngine::GameObject* go, bool autoRebalance, bool createOutputs);
    // public System.Void Compile(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Playables.Playable timelinePlayable, System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> tracks, UnityEngine.GameObject go, System.Boolean autoRebalance, System.Boolean createOutputs)
    // Offset: 0x233B27C
    void Compile(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::Playable timelinePlayable, System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset*>* tracks, UnityEngine::GameObject* go, bool autoRebalance, bool createOutputs);
    // private System.Void CompileTrackList(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Playables.Playable timelinePlayable, System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> tracks, UnityEngine.GameObject go, System.Boolean createOutputs)
    // Offset: 0x233B488
    void CompileTrackList(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::Playable timelinePlayable, System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset*>* tracks, UnityEngine::GameObject* go, bool createOutputs);
    // private System.Void CreateTrackOutput(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Timeline.TrackAsset track, UnityEngine.GameObject go, UnityEngine.Playables.Playable playable, System.Int32 port)
    // Offset: 0x233C05C
    void CreateTrackOutput(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Timeline::TrackAsset* track, UnityEngine::GameObject* go, UnityEngine::Playables::Playable playable, int port);
    // private System.Void EvaluateWeightsForAnimationPlayableOutput(UnityEngine.Timeline.TrackAsset track, UnityEngine.Animations.AnimationPlayableOutput animOutput)
    // Offset: 0x233C5E4
    void EvaluateWeightsForAnimationPlayableOutput(UnityEngine::Timeline::TrackAsset* track, UnityEngine::Animations::AnimationPlayableOutput animOutput);
    // private System.Void EvaluateAnimationPreviewUpdateCallback(UnityEngine.Timeline.TrackAsset track, UnityEngine.Animations.AnimationPlayableOutput animOutput)
    // Offset: 0x233C678
    void EvaluateAnimationPreviewUpdateCallback(UnityEngine::Timeline::TrackAsset* track, UnityEngine::Animations::AnimationPlayableOutput animOutput);
    // private UnityEngine.Playables.Playable CreateTrackPlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Playables.Playable timelinePlayable, UnityEngine.Timeline.TrackAsset track, UnityEngine.GameObject go, System.Boolean createOutputs)
    // Offset: 0x233BC28
    UnityEngine::Playables::Playable CreateTrackPlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::Playable timelinePlayable, UnityEngine::Timeline::TrackAsset* track, UnityEngine::GameObject* go, bool createOutputs);
    // private System.Void Evaluate(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData frameData)
    // Offset: 0x233CA70
    void Evaluate(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData frameData);
    // private System.Void CacheTrack(UnityEngine.Timeline.TrackAsset track, UnityEngine.Playables.Playable playable, System.Int32 port, UnityEngine.Playables.Playable parent)
    // Offset: 0x233C9C0
    void CacheTrack(UnityEngine::Timeline::TrackAsset* track, UnityEngine::Playables::Playable playable, int port, UnityEngine::Playables::Playable parent);
    // static private System.Void ForAOTCompilationOnly()
    // Offset: 0x233CF04
    static void ForAOTCompilationOnly();
    // static private System.Void .cctor()
    // Offset: 0x233D044
    static void _cctor();
    // public override System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x233CA40
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void .ctor()
    // Offset: 0x233CF5C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimelinePlayable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::TimelinePlayable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimelinePlayable*, creationType>()));
    }
  }; // UnityEngine.Timeline.TimelinePlayable
  #pragma pack(pop)
  static check_size<sizeof(TimelinePlayable), 56 + sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::Timeline::TrackAsset*, UnityEngine::Playables::Playable>*)> __UnityEngine_Timeline_TimelinePlayableSizeCheck;
  static_assert(sizeof(TimelinePlayable) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelinePlayable*, "UnityEngine.Timeline", "TimelinePlayable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelinePlayable::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::TimelinePlayable*> (*)(UnityEngine::Playables::PlayableGraph, System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset*>*, UnityEngine::GameObject*, bool, bool)>(&UnityEngine::Timeline::TimelinePlayable::Create)> {
  const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* tracks = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")})->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* autoRebalance = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* createOutputs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelinePlayable*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, tracks, go, autoRebalance, createOutputs});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelinePlayable::Compile
// Il2CppName: Compile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelinePlayable::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::Playables::Playable, System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset*>*, UnityEngine::GameObject*, bool, bool)>(&UnityEngine::Timeline::TimelinePlayable::Compile)> {
  const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* timelinePlayable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* tracks = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")})->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* autoRebalance = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* createOutputs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelinePlayable*), "Compile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, timelinePlayable, tracks, go, autoRebalance, createOutputs});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelinePlayable::CompileTrackList
// Il2CppName: CompileTrackList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelinePlayable::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::Playables::Playable, System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset*>*, UnityEngine::GameObject*, bool)>(&UnityEngine::Timeline::TimelinePlayable::CompileTrackList)> {
  const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* timelinePlayable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* tracks = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")})->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* createOutputs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelinePlayable*), "CompileTrackList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, timelinePlayable, tracks, go, createOutputs});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelinePlayable::CreateTrackOutput
// Il2CppName: CreateTrackOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelinePlayable::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::Timeline::TrackAsset*, UnityEngine::GameObject*, UnityEngine::Playables::Playable, int)>(&UnityEngine::Timeline::TimelinePlayable::CreateTrackOutput)> {
  const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* track = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelinePlayable*), "CreateTrackOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, track, go, playable, port});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelinePlayable::EvaluateWeightsForAnimationPlayableOutput
// Il2CppName: EvaluateWeightsForAnimationPlayableOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelinePlayable::*)(UnityEngine::Timeline::TrackAsset*, UnityEngine::Animations::AnimationPlayableOutput)>(&UnityEngine::Timeline::TimelinePlayable::EvaluateWeightsForAnimationPlayableOutput)> {
  const MethodInfo* get() {
    static auto* track = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")->byval_arg;
    static auto* animOutput = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationPlayableOutput")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelinePlayable*), "EvaluateWeightsForAnimationPlayableOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{track, animOutput});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelinePlayable::EvaluateAnimationPreviewUpdateCallback
// Il2CppName: EvaluateAnimationPreviewUpdateCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelinePlayable::*)(UnityEngine::Timeline::TrackAsset*, UnityEngine::Animations::AnimationPlayableOutput)>(&UnityEngine::Timeline::TimelinePlayable::EvaluateAnimationPreviewUpdateCallback)> {
  const MethodInfo* get() {
    static auto* track = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")->byval_arg;
    static auto* animOutput = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationPlayableOutput")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelinePlayable*), "EvaluateAnimationPreviewUpdateCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{track, animOutput});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelinePlayable::CreateTrackPlayable
// Il2CppName: CreateTrackPlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (UnityEngine::Timeline::TimelinePlayable::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::Playables::Playable, UnityEngine::Timeline::TrackAsset*, UnityEngine::GameObject*, bool)>(&UnityEngine::Timeline::TimelinePlayable::CreateTrackPlayable)> {
  const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* timelinePlayable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* track = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* createOutputs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelinePlayable*), "CreateTrackPlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, timelinePlayable, track, go, createOutputs});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelinePlayable::Evaluate
// Il2CppName: Evaluate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelinePlayable::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::TimelinePlayable::Evaluate)> {
  const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* frameData = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelinePlayable*), "Evaluate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, frameData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelinePlayable::CacheTrack
// Il2CppName: CacheTrack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelinePlayable::*)(UnityEngine::Timeline::TrackAsset*, UnityEngine::Playables::Playable, int, UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::TimelinePlayable::CacheTrack)> {
  const MethodInfo* get() {
    static auto* track = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")->byval_arg;
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelinePlayable*), "CacheTrack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{track, playable, port, parent});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelinePlayable::ForAOTCompilationOnly
// Il2CppName: ForAOTCompilationOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Timeline::TimelinePlayable::ForAOTCompilationOnly)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelinePlayable*), "ForAOTCompilationOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelinePlayable::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Timeline::TimelinePlayable::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelinePlayable*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelinePlayable::PrepareFrame
// Il2CppName: PrepareFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelinePlayable::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::TimelinePlayable::PrepareFrame)> {
  const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelinePlayable*), "PrepareFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelinePlayable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
