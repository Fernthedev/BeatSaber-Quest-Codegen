// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: VRControllersRecorderSaveData
#include "GlobalNamespace/VRControllersRecorderSaveData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: VRControllersRecorderSaveData/Keyframe
  // [TokenAttribute] Offset: FFFFFFFF
  class VRControllersRecorderSaveData::Keyframe : public ::Il2CppObject {
    public:
    // public VRControllersRecorderSaveData/PositionAndRotation[] positionsAndRotations
    // Size: 0x8
    // Offset: 0x10
    ::Array<GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation*>* positionsAndRotations;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation*>*) == 0x8);
    // public System.Single time
    // Size: 0x4
    // Offset: 0x18
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Keyframe
    Keyframe(::Array<GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation*>* positionsAndRotations_ = {}, float time_ = {}) noexcept : positionsAndRotations{positionsAndRotations_}, time{time_} {}
    // Get instance field reference: public VRControllersRecorderSaveData/PositionAndRotation[] positionsAndRotations
    ::Array<GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation*>*& dyn_positionsAndRotations();
    // Get instance field reference: public System.Single time
    float& dyn_time();
    // public System.Void .ctor()
    // Offset: 0x12A0500
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllersRecorderSaveData::Keyframe* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRControllersRecorderSaveData::Keyframe::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllersRecorderSaveData::Keyframe*, creationType>()));
    }
  }; // VRControllersRecorderSaveData/Keyframe
  #pragma pack(pop)
  static check_size<sizeof(VRControllersRecorderSaveData::Keyframe), 24 + sizeof(float)> __GlobalNamespace_VRControllersRecorderSaveData_KeyframeSizeCheck;
  static_assert(sizeof(VRControllersRecorderSaveData::Keyframe) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorderSaveData::Keyframe*, "", "VRControllersRecorderSaveData/Keyframe");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderSaveData::Keyframe::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
