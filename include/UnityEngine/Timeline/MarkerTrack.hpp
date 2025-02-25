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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Timeline.MarkerTrack
  // [TokenAttribute] Offset: FFFFFFFF
  // [TrackBindingTypeAttribute] Offset: DFBD8C
  // [HideInMenuAttribute] Offset: DFBD8C
  // [ExcludeFromPresetAttribute] Offset: FFFFFFFF
  class MarkerTrack : public UnityEngine::Timeline::TrackAsset {
    public:
    // Creating value type constructor for type: MarkerTrack
    MarkerTrack() noexcept {}
    // public override System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> get_outputs()
    // Offset: 0x18291E0
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> TrackAsset::get_outputs()
    System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>* get_outputs();
    // public System.Void .ctor()
    // Offset: 0x182934C
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Void TrackAsset::.ctor()
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MarkerTrack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::MarkerTrack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MarkerTrack*, creationType>()));
    }
  }; // UnityEngine.Timeline.MarkerTrack
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::MarkerTrack*, "UnityEngine.Timeline", "MarkerTrack");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::MarkerTrack::get_outputs
// Il2CppName: get_outputs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>* (UnityEngine::Timeline::MarkerTrack::*)()>(&UnityEngine::Timeline::MarkerTrack::get_outputs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::MarkerTrack*), "get_outputs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::MarkerTrack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
