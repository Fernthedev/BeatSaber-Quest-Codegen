// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
#include "System/Security/Cryptography/X509Certificates/X509ChainStatusFlags.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ChainStatus
  struct X509ChainStatus/*, public System::ValueType*/ {
    public:
    // private System.Security.Cryptography.X509Certificates.X509ChainStatusFlags status
    // Size: 0x4
    // Offset: 0x0
    System::Security::Cryptography::X509Certificates::X509ChainStatusFlags status;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags) == 0x4);
    // Padding between fields: status and: info
    char __padding0[0x4] = {};
    // private System.String info
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* info;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: X509ChainStatus
    constexpr X509ChainStatus(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags status_ = {}, ::Il2CppString* info_ = {}) noexcept : status{status_}, info{info_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // System.Void .ctor(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags flag)
    // Offset: 0xEFED2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    X509ChainStatus(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509ChainStatus::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(flag)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, flag);
    }
    // public System.Security.Cryptography.X509Certificates.X509ChainStatusFlags get_Status()
    // Offset: 0xEFED58
    System::Security::Cryptography::X509Certificates::X509ChainStatusFlags get_Status();
    // public System.Void set_Status(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags value)
    // Offset: 0xEFED60
    void set_Status(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // public System.Void set_StatusInformation(System.String value)
    // Offset: 0xEFED68
    void set_StatusInformation(::Il2CppString* value);
    // static System.String GetInformation(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags flags)
    // Offset: 0x184CD38
    static ::Il2CppString* GetInformation(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags);
  }; // System.Security.Cryptography.X509Certificates.X509ChainStatus
  #pragma pack(pop)
  static check_size<sizeof(X509ChainStatus), 8 + sizeof(::Il2CppString*)> __System_Security_Cryptography_X509Certificates_X509ChainStatusSizeCheck;
  static_assert(sizeof(X509ChainStatus) == 0x10);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ChainStatus, "System.Security.Cryptography.X509Certificates", "X509ChainStatus");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainStatus::X509ChainStatus
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainStatus::get_Status
// Il2CppName: get_Status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags (System::Security::Cryptography::X509Certificates::X509ChainStatus::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainStatus::get_Status)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainStatus), "get_Status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainStatus::set_Status
// Il2CppName: set_Status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainStatus::*)(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&System::Security::Cryptography::X509Certificates::X509ChainStatus::set_Status)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainStatus), "set_Status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainStatus::set_StatusInformation
// Il2CppName: set_StatusInformation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainStatus::*)(::Il2CppString*)>(&System::Security::Cryptography::X509Certificates::X509ChainStatus::set_StatusInformation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainStatus), "set_StatusInformation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509ChainStatus::GetInformation
// Il2CppName: GetInformation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&System::Security::Cryptography::X509Certificates::X509ChainStatus::GetInformation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509ChainStatus), "GetInformation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>()});
  }
};
