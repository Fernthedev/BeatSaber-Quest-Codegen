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
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.CredentialCache
  class CredentialCache : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CredentialCache
    CredentialCache() noexcept {}
    // static public System.Net.ICredentials get_DefaultCredentials()
    // Offset: 0x16B4614
    static System::Net::ICredentials* get_DefaultCredentials();
  }; // System.Net.CredentialCache
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::CredentialCache*, "System.Net", "CredentialCache");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Net::CredentialCache::get_DefaultCredentials
// Il2CppName: get_DefaultCredentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ICredentials* (*)()>(&System::Net::CredentialCache::get_DefaultCredentials)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialCache*), "get_DefaultCredentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
