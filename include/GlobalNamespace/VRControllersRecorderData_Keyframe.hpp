// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRControllersRecorderData
#include "GlobalNamespace/VRControllersRecorderData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: VRControllersRecorderData/Keyframe
  class VRControllersRecorderData::Keyframe : public ::Il2CppObject {
    public:
    // public readonly VRControllersRecorderData/PositionAndRotation[] positionsAndRotations
    // Size: 0x8
    // Offset: 0x10
    ::Array<GlobalNamespace::VRControllersRecorderData::PositionAndRotation>* positionsAndRotations;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::VRControllersRecorderData::PositionAndRotation>*) == 0x8);
    // public readonly System.Single time
    // Size: 0x4
    // Offset: 0x18
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Keyframe
    Keyframe(::Array<GlobalNamespace::VRControllersRecorderData::PositionAndRotation>* positionsAndRotations_ = {}, float time_ = {}) noexcept : positionsAndRotations{positionsAndRotations_}, time{time_} {}
    // public System.Void .ctor(VRControllersRecorderData/PositionAndRotation[] positionAndRotations, System.Single time)
    // Offset: 0x1DACBB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllersRecorderData::Keyframe* New_ctor(::Array<GlobalNamespace::VRControllersRecorderData::PositionAndRotation>* positionAndRotations, float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRControllersRecorderData::Keyframe::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllersRecorderData::Keyframe*, creationType>(positionAndRotations, time)));
    }
  }; // VRControllersRecorderData/Keyframe
  #pragma pack(pop)
  static check_size<sizeof(VRControllersRecorderData::Keyframe), 24 + sizeof(float)> __GlobalNamespace_VRControllersRecorderData_KeyframeSizeCheck;
  static_assert(sizeof(VRControllersRecorderData::Keyframe) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorderData::Keyframe*, "", "VRControllersRecorderData/Keyframe");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderData::Keyframe::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
