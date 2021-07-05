// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Claims.ClaimsPrincipal
#include "System/Security/Claims/ClaimsPrincipal.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: WindowsIdentity
  class WindowsIdentity;
}
// Completed forward declares
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Principal.WindowsPrincipal
  // [ComVisibleAttribute] Offset: D7D660
  class WindowsPrincipal : public System::Security::Claims::ClaimsPrincipal {
    public:
    // private System.Security.Principal.WindowsIdentity _identity
    // Size: 0x8
    // Offset: 0x28
    System::Security::Principal::WindowsIdentity* identity;
    // Field size check
    static_assert(sizeof(System::Security::Principal::WindowsIdentity*) == 0x8);
    // Creating value type constructor for type: WindowsPrincipal
    WindowsPrincipal(System::Security::Principal::WindowsIdentity* identity_ = {}) noexcept : identity{identity_} {}
    // Creating conversion operator: operator System::Security::Principal::WindowsIdentity*
    constexpr operator System::Security::Principal::WindowsIdentity*() const noexcept {
      return identity;
    }
    // public System.Void .ctor(System.Security.Principal.WindowsIdentity ntIdentity)
    // Offset: 0x1AF3C18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WindowsPrincipal* New_ctor(System::Security::Principal::WindowsIdentity* ntIdentity) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Principal::WindowsPrincipal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WindowsPrincipal*, creationType>(ntIdentity)));
    }
  }; // System.Security.Principal.WindowsPrincipal
  #pragma pack(pop)
  static check_size<sizeof(WindowsPrincipal), 40 + sizeof(System::Security::Principal::WindowsIdentity*)> __System_Security_Principal_WindowsPrincipalSizeCheck;
  static_assert(sizeof(WindowsPrincipal) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::WindowsPrincipal*, "System.Security.Principal", "WindowsPrincipal");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Principal::WindowsPrincipal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
