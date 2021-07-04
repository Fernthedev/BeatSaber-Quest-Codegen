// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: TimelineClip
  class TimelineClip;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Timeline.PlayableTrack
  class PlayableTrack : public UnityEngine::Timeline::TrackAsset {
    public:
    // Creating value type constructor for type: PlayableTrack
    PlayableTrack() noexcept {}
    // protected override System.Void OnCreateClip(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x17E4A18
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Void TrackAsset::OnCreateClip(UnityEngine.Timeline.TimelineClip clip)
    void OnCreateClip(UnityEngine::Timeline::TimelineClip* clip);
    // public System.Void .ctor()
    // Offset: 0x17E4ABC
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Void TrackAsset::.ctor()
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayableTrack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::PlayableTrack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayableTrack*, creationType>()));
    }
  }; // UnityEngine.Timeline.PlayableTrack
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::PlayableTrack*, "UnityEngine.Timeline", "PlayableTrack");
// Writing includes for template specializations
#include "UnityEngine/Timeline/TimelineClip.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::PlayableTrack::OnCreateClip
// Il2CppName: OnCreateClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::PlayableTrack::*)(UnityEngine::Timeline::TimelineClip*)>(&UnityEngine::Timeline::PlayableTrack::OnCreateClip)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::PlayableTrack*), "OnCreateClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Timeline::TimelineClip*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::PlayableTrack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
