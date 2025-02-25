// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.PlatformInitializeResult
#include "Oculus/Platform/PlatformInitializeResult.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.PlatformInitialize
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformInitialize : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.PlatformInitializeResult Result
    // Size: 0x4
    // Offset: 0x10
    Oculus::Platform::PlatformInitializeResult Result;
    // Field size check
    static_assert(sizeof(Oculus::Platform::PlatformInitializeResult) == 0x4);
    // Creating value type constructor for type: PlatformInitialize
    PlatformInitialize(Oculus::Platform::PlatformInitializeResult Result_ = {}) noexcept : Result{Result_} {}
    // Creating conversion operator: operator Oculus::Platform::PlatformInitializeResult
    constexpr operator Oculus::Platform::PlatformInitializeResult() const noexcept {
      return Result;
    }
    // Get instance field reference: public readonly Oculus.Platform.PlatformInitializeResult Result
    Oculus::Platform::PlatformInitializeResult& dyn_Result();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1533A78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformInitialize* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::PlatformInitialize::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformInitialize*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.PlatformInitialize
  #pragma pack(pop)
  static check_size<sizeof(PlatformInitialize), 16 + sizeof(Oculus::Platform::PlatformInitializeResult)> __Oculus_Platform_Models_PlatformInitializeSizeCheck;
  static_assert(sizeof(PlatformInitialize) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::PlatformInitialize*, "Oculus.Platform.Models", "PlatformInitialize");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::PlatformInitialize::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
