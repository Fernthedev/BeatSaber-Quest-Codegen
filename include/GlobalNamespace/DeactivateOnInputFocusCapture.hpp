// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DeactivateOnInputFocusCapture
  // [TokenAttribute] Offset: FFFFFFFF
  class DeactivateOnInputFocusCapture : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xE07D30
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // Creating value type constructor for type: DeactivateOnInputFocusCapture
    DeactivateOnInputFocusCapture(GlobalNamespace::IVRPlatformHelper* vrPlatformHelper_ = {}) noexcept : vrPlatformHelper{vrPlatformHelper_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly IVRPlatformHelper _vrPlatformHelper
    GlobalNamespace::IVRPlatformHelper*& dyn__vrPlatformHelper();
    // protected System.Void OnEnable()
    // Offset: 0x125F4CC
    void OnEnable();
    // protected System.Void OnDestroy()
    // Offset: 0x125F6EC
    void OnDestroy();
    // private System.Void HandleInputFocusCaptured()
    // Offset: 0x125F888
    void HandleInputFocusCaptured();
    // private System.Void HandleInputFocusReleased()
    // Offset: 0x125FA88
    void HandleInputFocusReleased();
    // public System.Void .ctor()
    // Offset: 0x125FBE8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeactivateOnInputFocusCapture* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DeactivateOnInputFocusCapture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeactivateOnInputFocusCapture*, creationType>()));
    }
  }; // DeactivateOnInputFocusCapture
  #pragma pack(pop)
  static check_size<sizeof(DeactivateOnInputFocusCapture), 24 + sizeof(GlobalNamespace::IVRPlatformHelper*)> __GlobalNamespace_DeactivateOnInputFocusCaptureSizeCheck;
  static_assert(sizeof(DeactivateOnInputFocusCapture) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DeactivateOnInputFocusCapture*, "", "DeactivateOnInputFocusCapture");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DeactivateOnInputFocusCapture::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeactivateOnInputFocusCapture::*)()>(&GlobalNamespace::DeactivateOnInputFocusCapture::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeactivateOnInputFocusCapture*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DeactivateOnInputFocusCapture::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeactivateOnInputFocusCapture::*)()>(&GlobalNamespace::DeactivateOnInputFocusCapture::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeactivateOnInputFocusCapture*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DeactivateOnInputFocusCapture::HandleInputFocusCaptured
// Il2CppName: HandleInputFocusCaptured
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeactivateOnInputFocusCapture::*)()>(&GlobalNamespace::DeactivateOnInputFocusCapture::HandleInputFocusCaptured)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeactivateOnInputFocusCapture*), "HandleInputFocusCaptured", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DeactivateOnInputFocusCapture::HandleInputFocusReleased
// Il2CppName: HandleInputFocusReleased
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeactivateOnInputFocusCapture::*)()>(&GlobalNamespace::DeactivateOnInputFocusCapture::HandleInputFocusReleased)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeactivateOnInputFocusCapture*), "HandleInputFocusReleased", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DeactivateOnInputFocusCapture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
