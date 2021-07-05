// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpStatusCode
  struct HttpStatusCode;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpStatusDescription
  class HttpStatusDescription : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: HttpStatusDescription
    HttpStatusDescription() noexcept {}
    // static System.String Get(System.Net.HttpStatusCode code)
    // Offset: 0x1651AE4
    static ::Il2CppString* Get(System::Net::HttpStatusCode code);
    // static System.String Get(System.Int32 code)
    // Offset: 0x164A2E0
    static ::Il2CppString* Get(int code);
  }; // System.Net.HttpStatusDescription
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpStatusDescription*, "System.Net", "HttpStatusDescription");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpStatusDescription::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Net::HttpStatusCode)>(&System::Net::HttpStatusDescription::Get)> {
  const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System.Net", "HttpStatusCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpStatusDescription*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code});
  }
};
// Writing MetadataGetter for method: System::Net::HttpStatusDescription::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(int)>(&System::Net::HttpStatusDescription::Get)> {
  const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpStatusDescription*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code});
  }
};
