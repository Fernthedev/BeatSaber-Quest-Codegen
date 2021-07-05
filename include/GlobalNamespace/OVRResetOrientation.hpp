// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: OVRResetOrientation
  class OVRResetOrientation : public UnityEngine::MonoBehaviour {
    public:
    // public OVRInput/RawButton resetButton
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::OVRInput::RawButton resetButton;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawButton) == 0x4);
    // Creating value type constructor for type: OVRResetOrientation
    OVRResetOrientation(GlobalNamespace::OVRInput::RawButton resetButton_ = {}) noexcept : resetButton{resetButton_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Update()
    // Offset: 0x162838C
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1628484
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRResetOrientation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRResetOrientation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRResetOrientation*, creationType>()));
    }
  }; // OVRResetOrientation
  #pragma pack(pop)
  static check_size<sizeof(OVRResetOrientation), 24 + sizeof(GlobalNamespace::OVRInput::RawButton)> __GlobalNamespace_OVRResetOrientationSizeCheck;
  static_assert(sizeof(OVRResetOrientation) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRResetOrientation*, "", "OVRResetOrientation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRResetOrientation::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRResetOrientation::*)()>(&GlobalNamespace::OVRResetOrientation::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRResetOrientation*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRResetOrientation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
