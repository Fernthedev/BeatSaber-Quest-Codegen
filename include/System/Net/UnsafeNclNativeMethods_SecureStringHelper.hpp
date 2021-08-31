// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.UnsafeNclNativeMethods
#include "System/Net/UnsafeNclNativeMethods.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: SecureString
  class SecureString;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.UnsafeNclNativeMethods/System.Net.SecureStringHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class UnsafeNclNativeMethods::SecureStringHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SecureStringHelper
    SecureStringHelper() noexcept {}
    // static System.String CreateString(System.Security.SecureString secureString)
    // Offset: 0x15CAD50
    static ::Il2CppString* CreateString(System::Security::SecureString* secureString);
    // static System.Security.SecureString CreateSecureString(System.String plainString)
    // Offset: 0x15CAE7C
    static System::Security::SecureString* CreateSecureString(::Il2CppString* plainString);
  }; // System.Net.UnsafeNclNativeMethods/System.Net.SecureStringHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::UnsafeNclNativeMethods::SecureStringHelper*, "System.Net", "UnsafeNclNativeMethods/SecureStringHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::UnsafeNclNativeMethods::SecureStringHelper::CreateString
// Il2CppName: CreateString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Security::SecureString*)>(&System::Net::UnsafeNclNativeMethods::SecureStringHelper::CreateString)> {
  static const MethodInfo* get() {
    static auto* secureString = &::il2cpp_utils::GetClassFromName("System.Security", "SecureString")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::UnsafeNclNativeMethods::SecureStringHelper*), "CreateString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{secureString});
  }
};
// Writing MetadataGetter for method: System::Net::UnsafeNclNativeMethods::SecureStringHelper::CreateSecureString
// Il2CppName: CreateSecureString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::SecureString* (*)(::Il2CppString*)>(&System::Net::UnsafeNclNativeMethods::SecureStringHelper::CreateSecureString)> {
  static const MethodInfo* get() {
    static auto* plainString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::UnsafeNclNativeMethods::SecureStringHelper*), "CreateSecureString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{plainString});
  }
};
