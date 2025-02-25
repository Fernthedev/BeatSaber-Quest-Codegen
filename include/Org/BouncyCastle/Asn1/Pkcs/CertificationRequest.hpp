// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Forward declaring type: CertificationRequestInfo
  class CertificationRequestInfo;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.CertificationRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class CertificationRequest : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // protected Org.BouncyCastle.Asn1.Pkcs.CertificationRequestInfo reqInfo
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo* reqInfo;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo*) == 0x8);
    // protected Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier sigAlgId
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // protected Org.BouncyCastle.Asn1.DerBitString sigBits
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerBitString* sigBits;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerBitString*) == 0x8);
    // Creating value type constructor for type: CertificationRequest
    CertificationRequest(Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo* reqInfo_ = {}, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId_ = {}, Org::BouncyCastle::Asn1::DerBitString* sigBits_ = {}) noexcept : reqInfo{reqInfo_}, sigAlgId{sigAlgId_}, sigBits{sigBits_} {}
    // Get instance field reference: protected Org.BouncyCastle.Asn1.Pkcs.CertificationRequestInfo reqInfo
    Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo*& dyn_reqInfo();
    // Get instance field reference: protected Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier sigAlgId
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& dyn_sigAlgId();
    // Get instance field reference: protected Org.BouncyCastle.Asn1.DerBitString sigBits
    Org::BouncyCastle::Asn1::DerBitString*& dyn_sigBits();
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x17B6644
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CertificationRequest* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Pkcs::CertificationRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CertificationRequest*, creationType>(seq)));
    }
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x17B6830
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.CertificationRequest
  #pragma pack(pop)
  static check_size<sizeof(CertificationRequest), 32 + sizeof(Org::BouncyCastle::Asn1::DerBitString*)> __Org_BouncyCastle_Asn1_Pkcs_CertificationRequestSizeCheck;
  static_assert(sizeof(CertificationRequest) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::CertificationRequest*, "Org.BouncyCastle.Asn1.Pkcs", "CertificationRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::CertificationRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::CertificationRequest::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Pkcs::CertificationRequest::*)()>(&Org::BouncyCastle::Asn1::Pkcs::CertificationRequest::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::CertificationRequest*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
