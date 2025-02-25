// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.CspProviderFlags
#include "System/Security/Cryptography/CspProviderFlags.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.CspParameters
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA29B0
  class CspParameters : public ::Il2CppObject {
    public:
    // public System.Int32 ProviderType
    // Size: 0x4
    // Offset: 0x10
    int ProviderType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: ProviderType and: ProviderName
    char __padding0[0x4] = {};
    // public System.String ProviderName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* ProviderName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String KeyContainerName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* KeyContainerName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 KeyNumber
    // Size: 0x4
    // Offset: 0x28
    int KeyNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_flags
    // Size: 0x4
    // Offset: 0x2C
    int m_flags;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CspParameters
    CspParameters(int ProviderType_ = {}, ::Il2CppString* ProviderName_ = {}, ::Il2CppString* KeyContainerName_ = {}, int KeyNumber_ = {}, int m_flags_ = {}) noexcept : ProviderType{ProviderType_}, ProviderName{ProviderName_}, KeyContainerName{KeyContainerName_}, KeyNumber{KeyNumber_}, m_flags{m_flags_} {}
    // Get instance field reference: public System.Int32 ProviderType
    int& dyn_ProviderType();
    // Get instance field reference: public System.String ProviderName
    ::Il2CppString*& dyn_ProviderName();
    // Get instance field reference: public System.String KeyContainerName
    ::Il2CppString*& dyn_KeyContainerName();
    // Get instance field reference: public System.Int32 KeyNumber
    int& dyn_KeyNumber();
    // Get instance field reference: private System.Int32 m_flags
    int& dyn_m_flags();
    // public System.Security.Cryptography.CspProviderFlags get_Flags()
    // Offset: 0x199114C
    System::Security::Cryptography::CspProviderFlags get_Flags();
    // public System.Void set_Flags(System.Security.Cryptography.CspProviderFlags value)
    // Offset: 0x1991154
    void set_Flags(System::Security::Cryptography::CspProviderFlags value);
    // public System.Void .ctor(System.Int32 dwTypeIn)
    // Offset: 0x19912E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CspParameters* New_ctor(int dwTypeIn) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::CspParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CspParameters*, creationType>(dwTypeIn)));
    }
    // public System.Void .ctor(System.Int32 dwTypeIn, System.String strProviderNameIn, System.String strContainerNameIn)
    // Offset: 0x1991274
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CspParameters* New_ctor(int dwTypeIn, ::Il2CppString* strProviderNameIn, ::Il2CppString* strContainerNameIn) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::CspParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CspParameters*, creationType>(dwTypeIn, strProviderNameIn, strContainerNameIn)));
    }
    // System.Void .ctor(System.Int32 providerType, System.String providerName, System.String keyContainerName, System.Security.Cryptography.CspProviderFlags flags)
    // Offset: 0x19912F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CspParameters* New_ctor(int providerType, ::Il2CppString* providerName, ::Il2CppString* keyContainerName, System::Security::Cryptography::CspProviderFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::CspParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CspParameters*, creationType>(providerType, providerName, keyContainerName, flags)));
    }
    // public System.Void .ctor()
    // Offset: 0x1991264
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CspParameters* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::CspParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CspParameters*, creationType>()));
    }
  }; // System.Security.Cryptography.CspParameters
  #pragma pack(pop)
  static check_size<sizeof(CspParameters), 44 + sizeof(int)> __System_Security_Cryptography_CspParametersSizeCheck;
  static_assert(sizeof(CspParameters) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::CspParameters*, "System.Security.Cryptography", "CspParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::CspParameters::get_Flags
// Il2CppName: get_Flags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::CspProviderFlags (System::Security::Cryptography::CspParameters::*)()>(&System::Security::Cryptography::CspParameters::get_Flags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CspParameters*), "get_Flags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CspParameters::set_Flags
// Il2CppName: set_Flags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::CspParameters::*)(System::Security::Cryptography::CspProviderFlags)>(&System::Security::Cryptography::CspParameters::set_Flags)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "CspProviderFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CspParameters*), "set_Flags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CspParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::CspParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::CspParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::CspParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
