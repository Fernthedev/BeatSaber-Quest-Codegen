// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.VREvent_Data_t
#include "OVR/OpenVR/VREvent_Data_t.hpp"
// Including type: OVR.OpenVR.VREvent_t
#include "OVR/OpenVR/VREvent_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VREvent_t_Packed
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_t_Packed/*, public System::ValueType*/ {
    public:
    // public System.UInt32 eventType
    // Size: 0x4
    // Offset: 0x0
    uint eventType;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 trackedDeviceIndex
    // Size: 0x4
    // Offset: 0x4
    uint trackedDeviceIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Single eventAgeSeconds
    // Size: 0x4
    // Offset: 0x8
    float eventAgeSeconds;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public OVR.OpenVR.VREvent_Data_t data
    // Size: 0xFFFFFFFF
    // Offset: 0xC
    OVR::OpenVR::VREvent_Data_t data;
    // Creating value type constructor for type: VREvent_t_Packed
    constexpr VREvent_t_Packed(uint eventType_ = {}, uint trackedDeviceIndex_ = {}, float eventAgeSeconds_ = {}, OVR::OpenVR::VREvent_Data_t data_ = {}) noexcept : eventType{eventType_}, trackedDeviceIndex{trackedDeviceIndex_}, eventAgeSeconds{eventAgeSeconds_}, data{data_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 eventType
    uint& dyn_eventType();
    // Get instance field reference: public System.UInt32 trackedDeviceIndex
    uint& dyn_trackedDeviceIndex();
    // Get instance field reference: public System.Single eventAgeSeconds
    float& dyn_eventAgeSeconds();
    // Get instance field reference: public OVR.OpenVR.VREvent_Data_t data
    OVR::OpenVR::VREvent_Data_t& dyn_data();
    // public System.Void .ctor(OVR.OpenVR.VREvent_t unpacked)
    // Offset: 0x12AB860
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    VREvent_t_Packed(OVR::OpenVR::VREvent_t unpacked) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::VREvent_t_Packed::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(unpacked)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, unpacked);
    }
    // public System.Void Unpack(ref OVR.OpenVR.VREvent_t unpacked)
    // Offset: 0x12AB8A0
    void Unpack(ByRef<OVR::OpenVR::VREvent_t> unpacked);
  }; // OVR.OpenVR.VREvent_t_Packed
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_t_Packed, "OVR.OpenVR", "VREvent_t_Packed");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::VREvent_t_Packed::VREvent_t_Packed
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::VREvent_t_Packed::Unpack
// Il2CppName: Unpack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::VREvent_t_Packed::*)(ByRef<OVR::OpenVR::VREvent_t>)>(&OVR::OpenVR::VREvent_t_Packed::Unpack)> {
  static const MethodInfo* get() {
    static auto* unpacked = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VREvent_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::VREvent_t_Packed), "Unpack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unpacked});
  }
};
