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
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: TubeLightTrack
  // [TrackClipTypeAttribute] Offset: E11490
  // [TrackBindingTypeAttribute] Offset: E11490
  // [TrackColorAttribute] Offset: E11490
  class TubeLightTrack : public UnityEngine::Timeline::TrackAsset {
    public:
    // Creating value type constructor for type: TubeLightTrack
    TubeLightTrack() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x111BE08
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Void TrackAsset::.ctor()
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TubeLightTrack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TubeLightTrack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TubeLightTrack*, creationType>()));
    }
  }; // TubeLightTrack
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TubeLightTrack*, "", "TubeLightTrack");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::TubeLightTrack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
