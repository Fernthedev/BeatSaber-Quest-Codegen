// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: OVRInput/OVRControllerBase
#include "GlobalNamespace/OVRInput_OVRControllerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x102
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/OVRControllerGamepadMac
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRInput::OVRControllerGamepadMac : public GlobalNamespace::OVRInput::OVRControllerBase {
    public:
    // Nested type: GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC
    struct AxisGPC;
    // Nested type: GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC
    struct ButtonGPC;
    // private System.Boolean initialized
    // Size: 0x1
    // Offset: 0x101
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: OVRControllerGamepadMac
    OVRControllerGamepadMac(bool initialized_ = {}) noexcept : initialized{initialized_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return initialized;
    }
    // static field const value: static private System.String DllName
    static constexpr const char* DllName = "OVRGamepad";
    // Get static field: static private System.String DllName
    static ::Il2CppString* _get_DllName();
    // Set static field: static private System.String DllName
    static void _set_DllName(::Il2CppString* value);
    // Get instance field reference: private System.Boolean initialized
    bool& dyn_initialized();
    // static private System.Boolean OVR_GamepadController_Initialize()
    // Offset: 0x1545AD0
    static bool OVR_GamepadController_Initialize();
    // static private System.Boolean OVR_GamepadController_Destroy()
    // Offset: 0x1545BBC
    static bool OVR_GamepadController_Destroy();
    // static private System.Boolean OVR_GamepadController_Update()
    // Offset: 0x15461E4
    static bool OVR_GamepadController_Update();
    // static private System.Single OVR_GamepadController_GetAxis(System.Int32 axis)
    // Offset: 0x15462E8
    static float OVR_GamepadController_GetAxis(int axis);
    // static private System.Boolean OVR_GamepadController_GetButton(System.Int32 button)
    // Offset: 0x1546260
    static bool OVR_GamepadController_GetButton(int button);
    // static private System.Boolean OVR_GamepadController_SetVibration(System.Int32 node, System.Single strength, System.Single frequency)
    // Offset: 0x1546744
    static bool OVR_GamepadController_SetVibration(int node, float strength, float frequency);
    // public System.Void .ctor()
    // Offset: 0x1545A9C
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRInput::OVRControllerGamepadMac* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRInput::OVRControllerGamepadMac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRInput::OVRControllerGamepadMac*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x1545B4C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override OVRInput/Controller Update()
    // Offset: 0x1545C38
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: OVRInput/Controller OVRControllerBase::Update()
    GlobalNamespace::OVRInput::Controller Update();
    // public override System.Void ConfigureButtonMap()
    // Offset: 0x1546368
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureButtonMap()
    void ConfigureButtonMap();
    // public override System.Void ConfigureTouchMap()
    // Offset: 0x1546578
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureTouchMap()
    void ConfigureTouchMap();
    // public override System.Void ConfigureNearTouchMap()
    // Offset: 0x1546628
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureNearTouchMap()
    void ConfigureNearTouchMap();
    // public override System.Void ConfigureAxis1DMap()
    // Offset: 0x1546678
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureAxis1DMap()
    void ConfigureAxis1DMap();
    // public override System.Void ConfigureAxis2DMap()
    // Offset: 0x15466D0
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureAxis2DMap()
    void ConfigureAxis2DMap();
    // public override System.Void SetControllerVibration(System.Single frequency, System.Single amplitude)
    // Offset: 0x1546728
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::SetControllerVibration(System.Single frequency, System.Single amplitude)
    void SetControllerVibration(float frequency, float amplitude);
  }; // OVRInput/OVRControllerGamepadMac
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::OVRControllerGamepadMac), 257 + sizeof(bool)> __GlobalNamespace_OVRInput_OVRControllerGamepadMacSizeCheck;
  static_assert(sizeof(OVRInput::OVRControllerGamepadMac) == 0x102);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OVRControllerGamepadMac*, "", "OVRInput/OVRControllerGamepadMac");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_Initialize
// Il2CppName: OVR_GamepadController_Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerGamepadMac*), "OVR_GamepadController_Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_Destroy
// Il2CppName: OVR_GamepadController_Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerGamepadMac*), "OVR_GamepadController_Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_Update
// Il2CppName: OVR_GamepadController_Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerGamepadMac*), "OVR_GamepadController_Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_GetAxis
// Il2CppName: OVR_GamepadController_GetAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(int)>(&GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_GetAxis)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerGamepadMac*), "OVR_GamepadController_GetAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_GetButton
// Il2CppName: OVR_GamepadController_GetButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_GetButton)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerGamepadMac*), "OVR_GamepadController_GetButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_SetVibration
// Il2CppName: OVR_GamepadController_SetVibration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, float, float)>(&GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_SetVibration)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* strength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerGamepadMac*), "OVR_GamepadController_SetVibration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, strength, frequency});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerGamepadMac::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerGamepadMac::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerGamepadMac::*)()>(&GlobalNamespace::OVRInput::OVRControllerGamepadMac::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerGamepadMac*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerGamepadMac::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRInput::Controller (GlobalNamespace::OVRInput::OVRControllerGamepadMac::*)()>(&GlobalNamespace::OVRInput::OVRControllerGamepadMac::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerGamepadMac*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureButtonMap
// Il2CppName: ConfigureButtonMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerGamepadMac::*)()>(&GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureButtonMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerGamepadMac*), "ConfigureButtonMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureTouchMap
// Il2CppName: ConfigureTouchMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerGamepadMac::*)()>(&GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureTouchMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerGamepadMac*), "ConfigureTouchMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureNearTouchMap
// Il2CppName: ConfigureNearTouchMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerGamepadMac::*)()>(&GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureNearTouchMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerGamepadMac*), "ConfigureNearTouchMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureAxis1DMap
// Il2CppName: ConfigureAxis1DMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerGamepadMac::*)()>(&GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureAxis1DMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerGamepadMac*), "ConfigureAxis1DMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureAxis2DMap
// Il2CppName: ConfigureAxis2DMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerGamepadMac::*)()>(&GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureAxis2DMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerGamepadMac*), "ConfigureAxis2DMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerGamepadMac::SetControllerVibration
// Il2CppName: SetControllerVibration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRInput::OVRControllerGamepadMac::*)(float, float)>(&GlobalNamespace::OVRInput::OVRControllerGamepadMac::SetControllerVibration)> {
  static const MethodInfo* get() {
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* amplitude = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerGamepadMac*), "SetControllerVibration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frequency, amplitude});
  }
};
