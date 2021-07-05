// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.DigestUtilities
  class DigestUtilities : public ::Il2CppObject {
    public:
    // Nested type: Org::BouncyCastle::Security::DigestUtilities::DigestAlgorithm
    struct DigestAlgorithm;
    // Creating value type constructor for type: DigestUtilities
    DigestUtilities() noexcept {}
    // Get static field: static private readonly System.Collections.IDictionary algorithms
    static System::Collections::IDictionary* _get_algorithms();
    // Set static field: static private readonly System.Collections.IDictionary algorithms
    static void _set_algorithms(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary oids
    static System::Collections::IDictionary* _get_oids();
    // Set static field: static private readonly System.Collections.IDictionary oids
    static void _set_oids(System::Collections::IDictionary* value);
    // static private System.Void .cctor()
    // Offset: 0x135B128
    static void _cctor();
    // static public Org.BouncyCastle.Crypto.IDigest GetDigest(Org.BouncyCastle.Asn1.DerObjectIdentifier id)
    // Offset: 0x135EBBC
    static Org::BouncyCastle::Crypto::IDigest* GetDigest(Org::BouncyCastle::Asn1::DerObjectIdentifier* id);
    // static public Org.BouncyCastle.Crypto.IDigest GetDigest(System.String algorithm)
    // Offset: 0x135EC2C
    static Org::BouncyCastle::Crypto::IDigest* GetDigest(::Il2CppString* algorithm);
    // static public System.Byte[] DoFinal(Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x135F5B8
    static ::Array<uint8_t>* DoFinal(Org::BouncyCastle::Crypto::IDigest* digest);
  }; // Org.BouncyCastle.Security.DigestUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::DigestUtilities*, "Org.BouncyCastle.Security", "DigestUtilities");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Security::DigestUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Security::DigestUtilities::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::DigestUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::DigestUtilities::GetDigest
// Il2CppName: GetDigest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IDigest* (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&Org::BouncyCastle::Security::DigestUtilities::GetDigest)> {
  const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::DigestUtilities*), "GetDigest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::DigestUtilities::GetDigest
// Il2CppName: GetDigest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IDigest* (*)(::Il2CppString*)>(&Org::BouncyCastle::Security::DigestUtilities::GetDigest)> {
  const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::DigestUtilities*), "GetDigest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::DigestUtilities::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(Org::BouncyCastle::Crypto::IDigest*)>(&Org::BouncyCastle::Security::DigestUtilities::DoFinal)> {
  const MethodInfo* get() {
    static auto* digest = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "IDigest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::DigestUtilities*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{digest});
  }
};
