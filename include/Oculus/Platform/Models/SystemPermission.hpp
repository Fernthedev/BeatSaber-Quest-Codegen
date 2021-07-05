// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.PermissionGrantStatus
#include "Oculus/Platform/PermissionGrantStatus.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.SystemPermission
  class SystemPermission : public ::Il2CppObject {
    public:
    // public readonly System.Boolean HasPermission
    // Size: 0x1
    // Offset: 0x10
    bool HasPermission;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: HasPermission and: PermissionGrantStatus
    char __padding0[0x3] = {};
    // public readonly Oculus.Platform.PermissionGrantStatus PermissionGrantStatus
    // Size: 0x4
    // Offset: 0x14
    Oculus::Platform::PermissionGrantStatus PermissionGrantStatus;
    // Field size check
    static_assert(sizeof(Oculus::Platform::PermissionGrantStatus) == 0x4);
    // Creating value type constructor for type: SystemPermission
    SystemPermission(bool HasPermission_ = {}, Oculus::Platform::PermissionGrantStatus PermissionGrantStatus_ = {}) noexcept : HasPermission{HasPermission_}, PermissionGrantStatus{PermissionGrantStatus_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x14D5138
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SystemPermission* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::SystemPermission::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SystemPermission*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.SystemPermission
  #pragma pack(pop)
  static check_size<sizeof(SystemPermission), 20 + sizeof(Oculus::Platform::PermissionGrantStatus)> __Oculus_Platform_Models_SystemPermissionSizeCheck;
  static_assert(sizeof(SystemPermission) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::SystemPermission*, "Oculus.Platform.Models", "SystemPermission");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::SystemPermission::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
