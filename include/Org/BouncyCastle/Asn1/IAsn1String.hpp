// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.IAsn1String
  class IAsn1String {
    public:
    // Creating value type constructor for type: IAsn1String
    IAsn1String() noexcept {}
    // public System.String GetString()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* GetString();
  }; // Org.BouncyCastle.Asn1.IAsn1String
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::IAsn1String*, "Org.BouncyCastle.Asn1", "IAsn1String");
// Writing includes for template specializations
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::IAsn1String::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Asn1::IAsn1String::*)()>(&Org::BouncyCastle::Asn1::IAsn1String::GetString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::IAsn1String*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
