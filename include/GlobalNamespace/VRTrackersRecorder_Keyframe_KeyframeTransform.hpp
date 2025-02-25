// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: VRTrackersRecorder/Keyframe
#include "GlobalNamespace/VRTrackersRecorder_Keyframe.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: VRTrackersRecorder/Keyframe/KeyframeTransform
  // [TokenAttribute] Offset: FFFFFFFF
  class VRTrackersRecorder::Keyframe::KeyframeTransform : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector3 _pos
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 pos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion _rot
    // Size: 0x10
    // Offset: 0x1C
    UnityEngine::Quaternion rot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public System.Boolean _valid
    // Size: 0x1
    // Offset: 0x2C
    bool valid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: KeyframeTransform
    KeyframeTransform(UnityEngine::Vector3 pos_ = {}, UnityEngine::Quaternion rot_ = {}, bool valid_ = {}) noexcept : pos{pos_}, rot{rot_}, valid{valid_} {}
    // Get instance field reference: public UnityEngine.Vector3 _pos
    UnityEngine::Vector3& dyn__pos();
    // Get instance field reference: public UnityEngine.Quaternion _rot
    UnityEngine::Quaternion& dyn__rot();
    // Get instance field reference: public System.Boolean _valid
    bool& dyn__valid();
    // public System.Void .ctor()
    // Offset: 0x12A1D00
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRTrackersRecorder::Keyframe::KeyframeTransform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRTrackersRecorder::Keyframe::KeyframeTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRTrackersRecorder::Keyframe::KeyframeTransform*, creationType>()));
    }
  }; // VRTrackersRecorder/Keyframe/KeyframeTransform
  #pragma pack(pop)
  static check_size<sizeof(VRTrackersRecorder::Keyframe::KeyframeTransform), 44 + sizeof(bool)> __GlobalNamespace_VRTrackersRecorder_Keyframe_KeyframeTransformSizeCheck;
  static_assert(sizeof(VRTrackersRecorder::Keyframe::KeyframeTransform) == 0x2D);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRTrackersRecorder::Keyframe::KeyframeTransform*, "", "VRTrackersRecorder/Keyframe/KeyframeTransform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRTrackersRecorder::Keyframe::KeyframeTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
