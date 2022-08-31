// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.FtpStatusCode
#include "System/Net/FtpStatusCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: FtpStatus
  class FtpStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::FtpStatus);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpStatus*, "System.Net", "FtpStatus");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FtpStatus
  // [TokenAttribute] Offset: FFFFFFFF
  class FtpStatus : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Net.FtpStatusCode statusCode
    // Size: 0x4
    // Offset: 0x10
    ::System::Net::FtpStatusCode statusCode;
    // Field size check
    static_assert(sizeof(::System::Net::FtpStatusCode) == 0x4);
    // Padding between fields: statusCode and: statusDescription
    char __padding0[0x4] = {};
    // private readonly System.String statusDescription
    // Size: 0x8
    // Offset: 0x18
    ::StringW statusDescription;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private readonly System.Net.FtpStatusCode statusCode
    [[deprecated("Use field access instead!")]] ::System::Net::FtpStatusCode& dyn_statusCode();
    // Get instance field reference: private readonly System.String statusDescription
    [[deprecated("Use field access instead!")]] ::StringW& dyn_statusDescription();
    // public System.Net.FtpStatusCode get_StatusCode()
    // Offset: 0x1A8F140
    ::System::Net::FtpStatusCode get_StatusCode();
    // public System.String get_StatusDescription()
    // Offset: 0x1A8F148
    ::StringW get_StatusDescription();
    // public System.Void .ctor(System.Net.FtpStatusCode statusCode, System.String statusDescription)
    // Offset: 0x1A8F104
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FtpStatus* New_ctor(::System::Net::FtpStatusCode statusCode, ::StringW statusDescription) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::FtpStatus::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FtpStatus*, creationType>(statusCode, statusDescription)));
    }
  }; // System.Net.FtpStatus
  #pragma pack(pop)
  static check_size<sizeof(FtpStatus), 24 + sizeof(::StringW)> __System_Net_FtpStatusSizeCheck;
  static_assert(sizeof(FtpStatus) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::FtpStatus::get_StatusCode
// Il2CppName: get_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::FtpStatusCode (System::Net::FtpStatus::*)()>(&System::Net::FtpStatus::get_StatusCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpStatus*), "get_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpStatus::get_StatusDescription
// Il2CppName: get_StatusDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::FtpStatus::*)()>(&System::Net::FtpStatus::get_StatusDescription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpStatus*), "get_StatusDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpStatus::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
