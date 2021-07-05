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
  // Forward declaring type: IIdentity
  class IIdentity;
}
// Completed forward declares
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Principal.GenericPrincipal
  // [ComVisibleAttribute] Offset: D7D5C0
  class GenericPrincipal : public System::Security::Claims::ClaimsPrincipal {
    public:
    // private System.Security.Principal.IIdentity m_identity
    // Size: 0x8
    // Offset: 0x28
    System::Security::Principal::IIdentity* m_identity;
    // Field size check
    static_assert(sizeof(System::Security::Principal::IIdentity*) == 0x8);
    // private System.String[] m_roles
    // Size: 0x8
    // Offset: 0x30
    ::Array<::Il2CppString*>* m_roles;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: GenericPrincipal
    GenericPrincipal(System::Security::Principal::IIdentity* m_identity_ = {}, ::Array<::Il2CppString*>* m_roles_ = {}) noexcept : m_identity{m_identity_}, m_roles{m_roles_} {}
    // public System.Void .ctor(System.Security.Principal.IIdentity identity, System.String[] roles)
    // Offset: 0x1AF30BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericPrincipal* New_ctor(System::Security::Principal::IIdentity* identity, ::Array<::Il2CppString*>* roles) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Principal::GenericPrincipal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericPrincipal*, creationType>(identity, roles)));
    }
  }; // System.Security.Principal.GenericPrincipal
  #pragma pack(pop)
  static check_size<sizeof(GenericPrincipal), 48 + sizeof(::Array<::Il2CppString*>*)> __System_Security_Principal_GenericPrincipalSizeCheck;
  static_assert(sizeof(GenericPrincipal) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::GenericPrincipal*, "System.Security.Principal", "GenericPrincipal");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Principal::GenericPrincipal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
