// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.TrackAsset
#include "UnityEngine/Timeline/TrackAsset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: PlayableTrack
  class PlayableTrack;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::PlayableTrack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::PlayableTrack*, "UnityEngine.Timeline", "PlayableTrack");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Timeline.PlayableTrack
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayableTrack : public ::UnityEngine::Timeline::TrackAsset {
    public:
    // public System.Void .ctor()
    // Offset: 0x1DB1368
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Void TrackAsset::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayableTrack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::PlayableTrack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayableTrack*, creationType>()));
    }
    // protected override System.Void OnCreateClip(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x1DB12C4
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Void TrackAsset::OnCreateClip(UnityEngine.Timeline.TimelineClip clip)
    void OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip);
  }; // UnityEngine.Timeline.PlayableTrack
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::PlayableTrack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::PlayableTrack::OnCreateClip
// Il2CppName: OnCreateClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::PlayableTrack::*)(::UnityEngine::Timeline::TimelineClip*)>(&UnityEngine::Timeline::PlayableTrack::OnCreateClip)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimelineClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::PlayableTrack*), "OnCreateClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
