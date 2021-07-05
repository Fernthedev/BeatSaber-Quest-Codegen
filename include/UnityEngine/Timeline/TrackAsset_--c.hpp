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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineClip
  class TimelineClip;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TrackAsset/<>c
  // [CompilerGeneratedAttribute] Offset: DD7964
  class TrackAsset::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.Timeline.TrackAsset/<>c <>9
    static UnityEngine::Timeline::TrackAsset::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.Timeline.TrackAsset/<>c <>9
    static void _set_$$9(UnityEngine::Timeline::TrackAsset::$$c* value);
    // Get static field: static public System.Comparison`1<UnityEngine.Timeline.TimelineClip> <>9__121_0
    static System::Comparison_1<UnityEngine::Timeline::TimelineClip*>* _get_$$9__121_0();
    // Set static field: static public System.Comparison`1<UnityEngine.Timeline.TimelineClip> <>9__121_0
    static void _set_$$9__121_0(System::Comparison_1<UnityEngine::Timeline::TimelineClip*>* value);
    // static private System.Void .cctor()
    // Offset: 0x2342DE4
    static void _cctor();
    // System.Int32 <SortClips>b__121_0(UnityEngine.Timeline.TimelineClip clip1, UnityEngine.Timeline.TimelineClip clip2)
    // Offset: 0x2342E50
    int $SortClips$b__121_0(UnityEngine::Timeline::TimelineClip* clip1, UnityEngine::Timeline::TimelineClip* clip2);
    // public System.Void .ctor()
    // Offset: 0x2342E48
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackAsset::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::TrackAsset::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackAsset::$$c*, creationType>()));
    }
  }; // UnityEngine.Timeline.TrackAsset/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TrackAsset::$$c*, "UnityEngine.Timeline", "TrackAsset/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TrackAsset::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Timeline::TrackAsset::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TrackAsset::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TrackAsset::$$c::$SortClips$b__121_0
// Il2CppName: <SortClips>b__121_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Timeline::TrackAsset::$$c::*)(UnityEngine::Timeline::TimelineClip*, UnityEngine::Timeline::TimelineClip*)>(&UnityEngine::Timeline::TrackAsset::$$c::$SortClips$b__121_0)> {
  const MethodInfo* get() {
    static auto* clip1 = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimelineClip")->byval_arg;
    static auto* clip2 = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimelineClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TrackAsset::$$c*), "<SortClips>b__121_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip1, clip2});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TrackAsset::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
