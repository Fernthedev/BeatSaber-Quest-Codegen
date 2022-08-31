// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Net.Cache
namespace System::Net::Cache {
  // Forward declaring type: RequestCacheValidator
  class RequestCacheValidator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Cache::RequestCacheValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCacheValidator*, "System.Net.Cache", "RequestCacheValidator");
// Type namespace: System.Net.Cache
namespace System::Net::Cache {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Cache.RequestCacheValidator
  // [TokenAttribute] Offset: FFFFFFFF
  class RequestCacheValidator : public ::Il2CppObject {
    public:
    // public System.Object CreateValidator()
    // Offset: 0x1CEEE14
    ::Il2CppObject* CreateValidator();
  }; // System.Net.Cache.RequestCacheValidator
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Cache::RequestCacheValidator::CreateValidator
// Il2CppName: CreateValidator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Cache::RequestCacheValidator::*)()>(&System::Net::Cache::RequestCacheValidator::CreateValidator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cache::RequestCacheValidator*), "CreateValidator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
