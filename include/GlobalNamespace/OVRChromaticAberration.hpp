// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRInput/RawButton
#include "GlobalNamespace/OVRInput_RawButton.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: OVRChromaticAberration
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRChromaticAberration : public UnityEngine::MonoBehaviour {
    public:
    // public OVRInput/RawButton toggleButton
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::OVRInput::RawButton toggleButton;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawButton) == 0x4);
    // private System.Boolean chromatic
    // Size: 0x1
    // Offset: 0x1C
    bool chromatic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: OVRChromaticAberration
    OVRChromaticAberration(GlobalNamespace::OVRInput::RawButton toggleButton_ = {}, bool chromatic_ = {}) noexcept : toggleButton{toggleButton_}, chromatic{chromatic_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public OVRInput/RawButton toggleButton
    GlobalNamespace::OVRInput::RawButton& dyn_toggleButton();
    // Get instance field reference: private System.Boolean chromatic
    bool& dyn_chromatic();
    // private System.Void Start()
    // Offset: 0x12AEA10
    void Start();
    // private System.Void Update()
    // Offset: 0x12AEAD0
    void Update();
    // public System.Void .ctor()
    // Offset: 0x12AEBE4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRChromaticAberration* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRChromaticAberration::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRChromaticAberration*, creationType>()));
    }
  }; // OVRChromaticAberration
  #pragma pack(pop)
  static check_size<sizeof(OVRChromaticAberration), 28 + sizeof(bool)> __GlobalNamespace_OVRChromaticAberrationSizeCheck;
  static_assert(sizeof(OVRChromaticAberration) == 0x1D);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRChromaticAberration*, "", "OVRChromaticAberration");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRChromaticAberration::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRChromaticAberration::*)()>(&GlobalNamespace::OVRChromaticAberration::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRChromaticAberration*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRChromaticAberration::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRChromaticAberration::*)()>(&GlobalNamespace::OVRChromaticAberration::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRChromaticAberration*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRChromaticAberration::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
