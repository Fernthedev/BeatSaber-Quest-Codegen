// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.ControlTrack
#include "UnityEngine/Timeline/ControlTrack.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CustomControlTrack
  class CustomControlTrack;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CustomControlTrack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomControlTrack*, "", "CustomControlTrack");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: CustomControlTrack
  // [TokenAttribute] Offset: FFFFFFFF
  // [TrackClipTypeAttribute] Offset: 10DDB10
  class CustomControlTrack : public ::UnityEngine::Timeline::ControlTrack {
    public:
    // public System.Void .ctor()
    // Offset: 0x1493F2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomControlTrack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CustomControlTrack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomControlTrack*, creationType>()));
    }
  }; // CustomControlTrack
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CustomControlTrack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
