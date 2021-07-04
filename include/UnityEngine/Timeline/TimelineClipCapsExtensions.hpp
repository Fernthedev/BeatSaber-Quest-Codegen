// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineClip
  class TimelineClip;
  // Forward declaring type: ClipCaps
  struct ClipCaps;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelineClipCapsExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TimelineClipCapsExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TimelineClipCapsExtensions
    TimelineClipCapsExtensions() noexcept {}
    // static public System.Boolean SupportsLooping(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x2339BC8
    static bool SupportsLooping(UnityEngine::Timeline::TimelineClip* clip);
    // static public System.Boolean SupportsExtrapolation(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x2339BE4
    static bool SupportsExtrapolation(UnityEngine::Timeline::TimelineClip* clip);
    // static public System.Boolean SupportsClipIn(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x2339C00
    static bool SupportsClipIn(UnityEngine::Timeline::TimelineClip* clip);
    // static public System.Boolean SupportsSpeedMultiplier(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x2339C1C
    static bool SupportsSpeedMultiplier(UnityEngine::Timeline::TimelineClip* clip);
    // static public System.Boolean SupportsBlending(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x2339C38
    static bool SupportsBlending(UnityEngine::Timeline::TimelineClip* clip);
    // static public System.Boolean HasAll(UnityEngine.Timeline.ClipCaps caps, UnityEngine.Timeline.ClipCaps flags)
    // Offset: 0x2339C54
    static bool HasAll(UnityEngine::Timeline::ClipCaps caps, UnityEngine::Timeline::ClipCaps flags);
    // static public System.Boolean HasAny(UnityEngine.Timeline.ClipCaps caps, UnityEngine.Timeline.ClipCaps flags)
    // Offset: 0x233791C
    static bool HasAny(UnityEngine::Timeline::ClipCaps caps, UnityEngine::Timeline::ClipCaps flags);
  }; // UnityEngine.Timeline.TimelineClipCapsExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineClipCapsExtensions*, "UnityEngine.Timeline", "TimelineClipCapsExtensions");
// Writing includes for template specializations
#include "UnityEngine/Timeline/TimelineClip.hpp"
#include "UnityEngine/Timeline/ClipCaps.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsLooping
// Il2CppName: SupportsLooping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Timeline::TimelineClip*)>(&UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsLooping)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineClipCapsExtensions*), "SupportsLooping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Timeline::TimelineClip*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsExtrapolation
// Il2CppName: SupportsExtrapolation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Timeline::TimelineClip*)>(&UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsExtrapolation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineClipCapsExtensions*), "SupportsExtrapolation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Timeline::TimelineClip*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsClipIn
// Il2CppName: SupportsClipIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Timeline::TimelineClip*)>(&UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsClipIn)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineClipCapsExtensions*), "SupportsClipIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Timeline::TimelineClip*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsSpeedMultiplier
// Il2CppName: SupportsSpeedMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Timeline::TimelineClip*)>(&UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsSpeedMultiplier)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineClipCapsExtensions*), "SupportsSpeedMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Timeline::TimelineClip*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsBlending
// Il2CppName: SupportsBlending
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Timeline::TimelineClip*)>(&UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsBlending)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineClipCapsExtensions*), "SupportsBlending", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Timeline::TimelineClip*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineClipCapsExtensions::HasAll
// Il2CppName: HasAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Timeline::ClipCaps, UnityEngine::Timeline::ClipCaps)>(&UnityEngine::Timeline::TimelineClipCapsExtensions::HasAll)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineClipCapsExtensions*), "HasAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Timeline::ClipCaps>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Timeline::ClipCaps>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineClipCapsExtensions::HasAny
// Il2CppName: HasAny
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Timeline::ClipCaps, UnityEngine::Timeline::ClipCaps)>(&UnityEngine::Timeline::TimelineClipCapsExtensions::HasAny)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineClipCapsExtensions*), "HasAny", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Timeline::ClipCaps>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Timeline::ClipCaps>()});
  }
};
