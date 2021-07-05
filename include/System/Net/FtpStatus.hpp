// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.FtpStatusCode
#include "System/Net/FtpStatusCode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FtpStatus
  class FtpStatus : public ::Il2CppObject {
    public:
    // private readonly System.Net.FtpStatusCode statusCode
    // Size: 0x4
    // Offset: 0x10
    System::Net::FtpStatusCode statusCode;
    // Field size check
    static_assert(sizeof(System::Net::FtpStatusCode) == 0x4);
    // Padding between fields: statusCode and: statusDescription
    char __padding0[0x4] = {};
    // private readonly System.String statusDescription
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* statusDescription;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: FtpStatus
    FtpStatus(System::Net::FtpStatusCode statusCode_ = {}, ::Il2CppString* statusDescription_ = {}) noexcept : statusCode{statusCode_}, statusDescription{statusDescription_} {}
    // public System.Void .ctor(System.Net.FtpStatusCode statusCode, System.String statusDescription)
    // Offset: 0x16BFA4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FtpStatus* New_ctor(System::Net::FtpStatusCode statusCode, ::Il2CppString* statusDescription) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::FtpStatus::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FtpStatus*, creationType>(statusCode, statusDescription)));
    }
    // public System.Net.FtpStatusCode get_StatusCode()
    // Offset: 0x16BFA88
    System::Net::FtpStatusCode get_StatusCode();
    // public System.String get_StatusDescription()
    // Offset: 0x16BFA90
    ::Il2CppString* get_StatusDescription();
  }; // System.Net.FtpStatus
  #pragma pack(pop)
  static check_size<sizeof(FtpStatus), 24 + sizeof(::Il2CppString*)> __System_Net_FtpStatusSizeCheck;
  static_assert(sizeof(FtpStatus) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::FtpStatus*, "System.Net", "FtpStatus");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::FtpStatus::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::FtpStatus::get_StatusCode
// Il2CppName: get_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::FtpStatusCode (System::Net::FtpStatus::*)()>(&System::Net::FtpStatus::get_StatusCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpStatus*), "get_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpStatus::get_StatusDescription
// Il2CppName: get_StatusDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::FtpStatus::*)()>(&System::Net::FtpStatus::get_StatusDescription)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpStatus*), "get_StatusDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
