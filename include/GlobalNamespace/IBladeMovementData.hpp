// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BladeMovementDataElement
  struct BladeMovementDataElement;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IBladeMovementData
  class IBladeMovementData {
    public:
    // Creating value type constructor for type: IBladeMovementData
    IBladeMovementData() noexcept {}
    // public System.Single get_bladeSpeed()
    // Offset: 0xFFFFFFFF
    float get_bladeSpeed();
    // public BladeMovementDataElement get_lastAddedData()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BladeMovementDataElement get_lastAddedData();
    // public BladeMovementDataElement get_prevAddedData()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BladeMovementDataElement get_prevAddedData();
  }; // IBladeMovementData
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBladeMovementData*, "", "IBladeMovementData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IBladeMovementData::get_bladeSpeed
// Il2CppName: get_bladeSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::IBladeMovementData::*)()>(&GlobalNamespace::IBladeMovementData::get_bladeSpeed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBladeMovementData*), "get_bladeSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBladeMovementData::get_lastAddedData
// Il2CppName: get_lastAddedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BladeMovementDataElement (GlobalNamespace::IBladeMovementData::*)()>(&GlobalNamespace::IBladeMovementData::get_lastAddedData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBladeMovementData*), "get_lastAddedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBladeMovementData::get_prevAddedData
// Il2CppName: get_prevAddedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BladeMovementDataElement (GlobalNamespace::IBladeMovementData::*)()>(&GlobalNamespace::IBladeMovementData::get_prevAddedData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBladeMovementData*), "get_prevAddedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
