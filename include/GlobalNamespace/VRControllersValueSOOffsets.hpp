// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VRControllerTransformOffset
#include "GlobalNamespace/VRControllerTransformOffset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Vector3SO
  class Vector3SO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VRControllersValueSOOffsets
  class VRControllersValueSOOffsets;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VRControllersValueSOOffsets);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllersValueSOOffsets*, "", "VRControllersValueSOOffsets");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: VRControllersValueSOOffsets
  // [TokenAttribute] Offset: FFFFFFFF
  class VRControllersValueSOOffsets : public ::GlobalNamespace::VRControllerTransformOffset {
    public:
    public:
    // private Vector3SO _positionOffset
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::Vector3SO* positionOffset;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3SO*) == 0x8);
    // private Vector3SO _rotationOffset
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::Vector3SO* rotationOffset;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3SO*) == 0x8);
    // private System.Boolean _mirror
    // Size: 0x1
    // Offset: 0x28
    bool mirror;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Vector3SO _positionOffset
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3SO*& dyn__positionOffset();
    // Get instance field reference: private Vector3SO _rotationOffset
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3SO*& dyn__rotationOffset();
    // Get instance field reference: private System.Boolean _mirror
    [[deprecated("Use field access instead!")]] bool& dyn__mirror();
    // public System.Void .ctor()
    // Offset: 0x2558F3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllersValueSOOffsets* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VRControllersValueSOOffsets::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllersValueSOOffsets*, creationType>()));
    }
    // public override UnityEngine.Vector3 get_positionOffset()
    // Offset: 0x2558E6C
    // Implemented from: VRControllerTransformOffset
    // Base method: UnityEngine.Vector3 VRControllerTransformOffset::get_positionOffset()
    ::UnityEngine::Vector3 get_positionOffset();
    // public override UnityEngine.Vector3 get_rotationOffset()
    // Offset: 0x2558ED0
    // Implemented from: VRControllerTransformOffset
    // Base method: UnityEngine.Vector3 VRControllerTransformOffset::get_rotationOffset()
    ::UnityEngine::Vector3 get_rotationOffset();
  }; // VRControllersValueSOOffsets
  #pragma pack(pop)
  static check_size<sizeof(VRControllersValueSOOffsets), 40 + sizeof(bool)> __GlobalNamespace_VRControllersValueSOOffsetsSizeCheck;
  static_assert(sizeof(VRControllersValueSOOffsets) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRControllersValueSOOffsets::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VRControllersValueSOOffsets::get_positionOffset
// Il2CppName: get_positionOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::VRControllersValueSOOffsets::*)()>(&GlobalNamespace::VRControllersValueSOOffsets::get_positionOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersValueSOOffsets*), "get_positionOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersValueSOOffsets::get_rotationOffset
// Il2CppName: get_rotationOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::VRControllersValueSOOffsets::*)()>(&GlobalNamespace::VRControllersValueSOOffsets::get_rotationOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersValueSOOffsets*), "get_rotationOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
