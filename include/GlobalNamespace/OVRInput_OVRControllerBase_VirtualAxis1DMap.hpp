// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRInput/OVRControllerBase
#include "GlobalNamespace/OVRInput_OVRControllerBase.hpp"
// Including type: OVRInput/RawAxis1D
#include "GlobalNamespace/OVRInput_RawAxis1D.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/OVRControllerBase/VirtualAxis1DMap
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRInput::OVRControllerBase::VirtualAxis1DMap : public ::Il2CppObject {
    public:
    // public OVRInput/RawAxis1D None
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::OVRInput::RawAxis1D None;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawAxis1D) == 0x4);
    // public OVRInput/RawAxis1D PrimaryIndexTrigger
    // Size: 0x4
    // Offset: 0x14
    GlobalNamespace::OVRInput::RawAxis1D PrimaryIndexTrigger;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawAxis1D) == 0x4);
    // public OVRInput/RawAxis1D PrimaryHandTrigger
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::OVRInput::RawAxis1D PrimaryHandTrigger;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawAxis1D) == 0x4);
    // public OVRInput/RawAxis1D SecondaryIndexTrigger
    // Size: 0x4
    // Offset: 0x1C
    GlobalNamespace::OVRInput::RawAxis1D SecondaryIndexTrigger;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawAxis1D) == 0x4);
    // public OVRInput/RawAxis1D SecondaryHandTrigger
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::OVRInput::RawAxis1D SecondaryHandTrigger;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawAxis1D) == 0x4);
    // Creating value type constructor for type: VirtualAxis1DMap
    VirtualAxis1DMap(GlobalNamespace::OVRInput::RawAxis1D None_ = {}, GlobalNamespace::OVRInput::RawAxis1D PrimaryIndexTrigger_ = {}, GlobalNamespace::OVRInput::RawAxis1D PrimaryHandTrigger_ = {}, GlobalNamespace::OVRInput::RawAxis1D SecondaryIndexTrigger_ = {}, GlobalNamespace::OVRInput::RawAxis1D SecondaryHandTrigger_ = {}) noexcept : None{None_}, PrimaryIndexTrigger{PrimaryIndexTrigger_}, PrimaryHandTrigger{PrimaryHandTrigger_}, SecondaryIndexTrigger{SecondaryIndexTrigger_}, SecondaryHandTrigger{SecondaryHandTrigger_} {}
    // Get instance field reference: public OVRInput/RawAxis1D None
    GlobalNamespace::OVRInput::RawAxis1D& dyn_None();
    // Get instance field reference: public OVRInput/RawAxis1D PrimaryIndexTrigger
    GlobalNamespace::OVRInput::RawAxis1D& dyn_PrimaryIndexTrigger();
    // Get instance field reference: public OVRInput/RawAxis1D PrimaryHandTrigger
    GlobalNamespace::OVRInput::RawAxis1D& dyn_PrimaryHandTrigger();
    // Get instance field reference: public OVRInput/RawAxis1D SecondaryIndexTrigger
    GlobalNamespace::OVRInput::RawAxis1D& dyn_SecondaryIndexTrigger();
    // Get instance field reference: public OVRInput/RawAxis1D SecondaryHandTrigger
    GlobalNamespace::OVRInput::RawAxis1D& dyn_SecondaryHandTrigger();
    // public OVRInput/RawAxis1D ToRawMask(OVRInput/Axis1D virtualMask)
    // Offset: 0x153BE9C
    GlobalNamespace::OVRInput::RawAxis1D ToRawMask(GlobalNamespace::OVRInput::Axis1D virtualMask);
    // public System.Void .ctor()
    // Offset: 0x153B0B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRInput::OVRControllerBase::VirtualAxis1DMap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis1DMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRInput::OVRControllerBase::VirtualAxis1DMap*, creationType>()));
    }
  }; // OVRInput/OVRControllerBase/VirtualAxis1DMap
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::OVRControllerBase::VirtualAxis1DMap), 32 + sizeof(GlobalNamespace::OVRInput::RawAxis1D)> __GlobalNamespace_OVRInput_OVRControllerBase_VirtualAxis1DMapSizeCheck;
  static_assert(sizeof(OVRInput::OVRControllerBase::VirtualAxis1DMap) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis1DMap*, "", "OVRInput/OVRControllerBase/VirtualAxis1DMap");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis1DMap::ToRawMask
// Il2CppName: ToRawMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRInput::RawAxis1D (GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis1DMap::*)(GlobalNamespace::OVRInput::Axis1D)>(&GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis1DMap::ToRawMask)> {
  static const MethodInfo* get() {
    static auto* virtualMask = &::il2cpp_utils::GetClassFromName("", "OVRInput/Axis1D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis1DMap*), "ToRawMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{virtualMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis1DMap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
