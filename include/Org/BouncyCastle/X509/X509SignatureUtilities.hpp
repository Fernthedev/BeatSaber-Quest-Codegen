// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Null
  class Asn1Null;
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.X509
namespace Org::BouncyCastle::X509 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.X509.X509SignatureUtilities
  class X509SignatureUtilities : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: X509SignatureUtilities
    X509SignatureUtilities() noexcept {}
    // Get static field: static private readonly Org.BouncyCastle.Asn1.Asn1Null derNull
    static Org::BouncyCastle::Asn1::Asn1Null* _get_derNull();
    // Set static field: static private readonly Org.BouncyCastle.Asn1.Asn1Null derNull
    static void _set_derNull(Org::BouncyCastle::Asn1::Asn1Null* value);
    // static System.String GetSignatureName(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier sigAlgId)
    // Offset: 0x1F8DBF8
    static ::Il2CppString* GetSignatureName(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId);
    // static private System.String GetDigestAlgName(Org.BouncyCastle.Asn1.DerObjectIdentifier digestAlgOID)
    // Offset: 0x1F923F4
    static ::Il2CppString* GetDigestAlgName(Org::BouncyCastle::Asn1::DerObjectIdentifier* digestAlgOID);
    // static private System.Void .cctor()
    // Offset: 0x1F92714
    static void _cctor();
  }; // Org.BouncyCastle.X509.X509SignatureUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509SignatureUtilities*, "Org.BouncyCastle.X509", "X509SignatureUtilities");
// Writing includes for template specializations
#include "Org/BouncyCastle/Asn1/X509/AlgorithmIdentifier.hpp"
#include "Org/BouncyCastle/Asn1/DerObjectIdentifier.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509SignatureUtilities::GetSignatureName
// Il2CppName: GetSignatureName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(&Org::BouncyCastle::X509::X509SignatureUtilities::GetSignatureName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509SignatureUtilities*), "GetSignatureName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509SignatureUtilities::GetDigestAlgName
// Il2CppName: GetDigestAlgName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&Org::BouncyCastle::X509::X509SignatureUtilities::GetDigestAlgName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509SignatureUtilities*), "GetDigestAlgName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Asn1::DerObjectIdentifier*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509SignatureUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::X509::X509SignatureUtilities::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509SignatureUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
