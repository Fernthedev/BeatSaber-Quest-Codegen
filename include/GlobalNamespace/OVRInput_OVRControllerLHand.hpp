// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: OVRInput/OVRControllerBase
#include "GlobalNamespace/OVRInput_OVRControllerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x101
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/OVRControllerLHand
  class OVRInput::OVRControllerLHand : public GlobalNamespace::OVRInput::OVRControllerBase {
    public:
    // Creating value type constructor for type: OVRControllerLHand
    OVRControllerLHand() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1515450
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRInput::OVRControllerLHand* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRInput::OVRControllerLHand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRInput::OVRControllerLHand*, creationType>()));
    }
    // public override System.Void ConfigureButtonMap()
    // Offset: 0x151BD8C
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureButtonMap()
    void ConfigureButtonMap();
    // public override System.Void ConfigureTouchMap()
    // Offset: 0x151BF34
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureTouchMap()
    void ConfigureTouchMap();
    // public override System.Void ConfigureNearTouchMap()
    // Offset: 0x151BFE4
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureNearTouchMap()
    void ConfigureNearTouchMap();
    // public override System.Void ConfigureAxis1DMap()
    // Offset: 0x151C034
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureAxis1DMap()
    void ConfigureAxis1DMap();
    // public override System.Void ConfigureAxis2DMap()
    // Offset: 0x151C084
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureAxis2DMap()
    void ConfigureAxis2DMap();
    // public override System.Byte GetBatteryPercentRemaining()
    // Offset: 0x151C0D4
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Byte OVRControllerBase::GetBatteryPercentRemaining()
    uint8_t GetBatteryPercentRemaining();
  }; // OVRInput/OVRControllerLHand
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OVRControllerLHand*, "", "OVRInput/OVRControllerLHand");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerLHand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureButtonMap
// Il2CppName: ConfigureButtonMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerLHand::*)()>(&GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureButtonMap)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerLHand*), "ConfigureButtonMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureTouchMap
// Il2CppName: ConfigureTouchMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerLHand::*)()>(&GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureTouchMap)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerLHand*), "ConfigureTouchMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureNearTouchMap
// Il2CppName: ConfigureNearTouchMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerLHand::*)()>(&GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureNearTouchMap)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerLHand*), "ConfigureNearTouchMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureAxis1DMap
// Il2CppName: ConfigureAxis1DMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerLHand::*)()>(&GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureAxis1DMap)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerLHand*), "ConfigureAxis1DMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureAxis2DMap
// Il2CppName: ConfigureAxis2DMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerLHand::*)()>(&GlobalNamespace::OVRInput::OVRControllerLHand::ConfigureAxis2DMap)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerLHand*), "ConfigureAxis2DMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerLHand::GetBatteryPercentRemaining
// Il2CppName: GetBatteryPercentRemaining
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::OVRInput::OVRControllerLHand::*)()>(&GlobalNamespace::OVRInput::OVRControllerLHand::GetBatteryPercentRemaining)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerLHand*), "GetBatteryPercentRemaining", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
