// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRMeshRenderer
#include "GlobalNamespace/OVRMeshRenderer.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRMeshRenderer/MeshRendererData
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRMeshRenderer::MeshRendererData/*, public System::ValueType*/ {
    public:
    // private System.Boolean <IsDataValid>k__BackingField
    // Size: 0x1
    // Offset: 0x0
    bool IsDataValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Size: 0x1
    // Offset: 0x1
    bool IsDataHighConfidence;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <ShouldUseSystemGestureMaterial>k__BackingField
    // Size: 0x1
    // Offset: 0x2
    bool ShouldUseSystemGestureMaterial;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MeshRendererData
    constexpr MeshRendererData(bool IsDataValid_ = {}, bool IsDataHighConfidence_ = {}, bool ShouldUseSystemGestureMaterial_ = {}) noexcept : IsDataValid{IsDataValid_}, IsDataHighConfidence{IsDataHighConfidence_}, ShouldUseSystemGestureMaterial{ShouldUseSystemGestureMaterial_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private System.Boolean <IsDataValid>k__BackingField
    bool& dyn_$IsDataValid$k__BackingField();
    // Get instance field reference: private System.Boolean <IsDataHighConfidence>k__BackingField
    bool& dyn_$IsDataHighConfidence$k__BackingField();
    // Get instance field reference: private System.Boolean <ShouldUseSystemGestureMaterial>k__BackingField
    bool& dyn_$ShouldUseSystemGestureMaterial$k__BackingField();
    // public System.Boolean get_IsDataValid()
    // Offset: 0x134B370
    bool get_IsDataValid();
    // public System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0x134B378
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0x134B384
    bool get_IsDataHighConfidence();
    // public System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0x134B38C
    void set_IsDataHighConfidence(bool value);
    // public System.Boolean get_ShouldUseSystemGestureMaterial()
    // Offset: 0x134B398
    bool get_ShouldUseSystemGestureMaterial();
    // public System.Void set_ShouldUseSystemGestureMaterial(System.Boolean value)
    // Offset: 0x134B3A0
    void set_ShouldUseSystemGestureMaterial(bool value);
  }; // OVRMeshRenderer/MeshRendererData
  #pragma pack(pop)
  static check_size<sizeof(OVRMeshRenderer::MeshRendererData), 2 + sizeof(bool)> __GlobalNamespace_OVRMeshRenderer_MeshRendererDataSizeCheck;
  static_assert(sizeof(OVRMeshRenderer::MeshRendererData) == 0x3);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMeshRenderer::MeshRendererData, "", "OVRMeshRenderer/MeshRendererData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::MeshRendererData::get_IsDataValid
// Il2CppName: get_IsDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRMeshRenderer::MeshRendererData::*)()>(&GlobalNamespace::OVRMeshRenderer::MeshRendererData::get_IsDataValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer::MeshRendererData), "get_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::MeshRendererData::set_IsDataValid
// Il2CppName: set_IsDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMeshRenderer::MeshRendererData::*)(bool)>(&GlobalNamespace::OVRMeshRenderer::MeshRendererData::set_IsDataValid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer::MeshRendererData), "set_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::MeshRendererData::get_IsDataHighConfidence
// Il2CppName: get_IsDataHighConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRMeshRenderer::MeshRendererData::*)()>(&GlobalNamespace::OVRMeshRenderer::MeshRendererData::get_IsDataHighConfidence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer::MeshRendererData), "get_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::MeshRendererData::set_IsDataHighConfidence
// Il2CppName: set_IsDataHighConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMeshRenderer::MeshRendererData::*)(bool)>(&GlobalNamespace::OVRMeshRenderer::MeshRendererData::set_IsDataHighConfidence)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer::MeshRendererData), "set_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::MeshRendererData::get_ShouldUseSystemGestureMaterial
// Il2CppName: get_ShouldUseSystemGestureMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRMeshRenderer::MeshRendererData::*)()>(&GlobalNamespace::OVRMeshRenderer::MeshRendererData::get_ShouldUseSystemGestureMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer::MeshRendererData), "get_ShouldUseSystemGestureMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMeshRenderer::MeshRendererData::set_ShouldUseSystemGestureMaterial
// Il2CppName: set_ShouldUseSystemGestureMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMeshRenderer::MeshRendererData::*)(bool)>(&GlobalNamespace::OVRMeshRenderer::MeshRendererData::set_ShouldUseSystemGestureMaterial)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMeshRenderer::MeshRendererData), "set_ShouldUseSystemGestureMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
