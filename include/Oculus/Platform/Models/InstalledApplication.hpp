// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: InstalledApplication
  class InstalledApplication;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::InstalledApplication);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::InstalledApplication*, "Oculus.Platform.Models", "InstalledApplication");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.InstalledApplication
  // [TokenAttribute] Offset: FFFFFFFF
  class InstalledApplication : public ::Il2CppObject {
    public:
    public:
    // public readonly System.String ApplicationId
    // Size: 0x8
    // Offset: 0x10
    ::StringW ApplicationId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String PackageName
    // Size: 0x8
    // Offset: 0x18
    ::StringW PackageName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String Status
    // Size: 0x8
    // Offset: 0x20
    ::StringW Status;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.Int32 VersionCode
    // Size: 0x4
    // Offset: 0x28
    int VersionCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: VersionCode and: VersionName
    char __padding3[0x4] = {};
    // public readonly System.String VersionName
    // Size: 0x8
    // Offset: 0x30
    ::StringW VersionName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.String ApplicationId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ApplicationId();
    // Get instance field reference: public readonly System.String PackageName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PackageName();
    // Get instance field reference: public readonly System.String Status
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Status();
    // Get instance field reference: public readonly System.Int32 VersionCode
    [[deprecated("Use field access instead!")]] int& dyn_VersionCode();
    // Get instance field reference: public readonly System.String VersionName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_VersionName();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x19F74D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstalledApplication* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::InstalledApplication::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstalledApplication*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.InstalledApplication
  #pragma pack(pop)
  static check_size<sizeof(InstalledApplication), 48 + sizeof(::StringW)> __Oculus_Platform_Models_InstalledApplicationSizeCheck;
  static_assert(sizeof(InstalledApplication) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::InstalledApplication::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
