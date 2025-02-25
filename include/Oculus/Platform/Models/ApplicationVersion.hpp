// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.ApplicationVersion
  // [TokenAttribute] Offset: FFFFFFFF
  class ApplicationVersion : public ::Il2CppObject {
    public:
    // public readonly System.Int32 CurrentCode
    // Size: 0x4
    // Offset: 0x10
    int CurrentCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: CurrentCode and: CurrentName
    char __padding0[0x4] = {};
    // public readonly System.String CurrentName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* CurrentName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Int32 LatestCode
    // Size: 0x4
    // Offset: 0x20
    int LatestCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: LatestCode and: LatestName
    char __padding2[0x4] = {};
    // public readonly System.String LatestName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* LatestName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: ApplicationVersion
    ApplicationVersion(int CurrentCode_ = {}, ::Il2CppString* CurrentName_ = {}, int LatestCode_ = {}, ::Il2CppString* LatestName_ = {}) noexcept : CurrentCode{CurrentCode_}, CurrentName{CurrentName_}, LatestCode{LatestCode_}, LatestName{LatestName_} {}
    // Get instance field reference: public readonly System.Int32 CurrentCode
    int& dyn_CurrentCode();
    // Get instance field reference: public readonly System.String CurrentName
    ::Il2CppString*& dyn_CurrentName();
    // Get instance field reference: public readonly System.Int32 LatestCode
    int& dyn_LatestCode();
    // Get instance field reference: public readonly System.String LatestName
    ::Il2CppString*& dyn_LatestName();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x152C428
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ApplicationVersion* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::ApplicationVersion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ApplicationVersion*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.ApplicationVersion
  #pragma pack(pop)
  static check_size<sizeof(ApplicationVersion), 40 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_ApplicationVersionSizeCheck;
  static_assert(sizeof(ApplicationVersion) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::ApplicationVersion*, "Oculus.Platform.Models", "ApplicationVersion");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::ApplicationVersion::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
