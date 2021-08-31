// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: VRPlatformSDK
#include "GlobalNamespace/VRPlatformSDK.hpp"
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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ActivateOnPlatform
  // [TokenAttribute] Offset: FFFFFFFF
  class ActivateOnPlatform : public UnityEngine::MonoBehaviour {
    public:
    // private VRPlatformSDK _vrPlatformSdk
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::VRPlatformSDK vrPlatformSdk;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRPlatformSDK) == 0x4);
    // Padding between fields: vrPlatformSdk and: vrPlatformHelper
    char __padding0[0x4] = {};
    // [InjectAttribute] Offset: 0xE02D90
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // Creating value type constructor for type: ActivateOnPlatform
    ActivateOnPlatform(GlobalNamespace::VRPlatformSDK vrPlatformSdk_ = {}, GlobalNamespace::IVRPlatformHelper* vrPlatformHelper_ = {}) noexcept : vrPlatformSdk{vrPlatformSdk_}, vrPlatformHelper{vrPlatformHelper_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private VRPlatformSDK _vrPlatformSdk
    GlobalNamespace::VRPlatformSDK _get__vrPlatformSdk();
    // Set instance field: private VRPlatformSDK _vrPlatformSdk
    void _set__vrPlatformSdk(GlobalNamespace::VRPlatformSDK value);
    // Get instance field: private readonly IVRPlatformHelper _vrPlatformHelper
    GlobalNamespace::IVRPlatformHelper* _get__vrPlatformHelper();
    // Set instance field: private readonly IVRPlatformHelper _vrPlatformHelper
    void _set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper* value);
    // private System.Void Awake()
    // Offset: 0x1257228
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x1257310
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActivateOnPlatform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ActivateOnPlatform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActivateOnPlatform*, creationType>()));
    }
  }; // ActivateOnPlatform
  #pragma pack(pop)
  static check_size<sizeof(ActivateOnPlatform), 32 + sizeof(GlobalNamespace::IVRPlatformHelper*)> __GlobalNamespace_ActivateOnPlatformSizeCheck;
  static_assert(sizeof(ActivateOnPlatform) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ActivateOnPlatform*, "", "ActivateOnPlatform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ActivateOnPlatform::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ActivateOnPlatform::*)()>(&GlobalNamespace::ActivateOnPlatform::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ActivateOnPlatform*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ActivateOnPlatform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
