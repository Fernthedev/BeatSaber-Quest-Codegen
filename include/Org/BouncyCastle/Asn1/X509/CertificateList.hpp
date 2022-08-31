// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: TbsCertificateList
  class TbsCertificateList;
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
  // Forward declaring type: X509Name
  class X509Name;
  // Forward declaring type: Time
  class Time;
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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: CertificateList
  class CertificateList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::CertificateList);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::CertificateList*, "Org.BouncyCastle.Asn1.X509", "CertificateList");
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.CertificateList
  // [TokenAttribute] Offset: FFFFFFFF
  class CertificateList : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    public:
    // private readonly Org.BouncyCastle.Asn1.X509.TbsCertificateList tbsCertList
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* tbsCertList;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::TbsCertificateList*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier sigAlgID
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgID;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerBitString sig
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Asn1::DerBitString* sig;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerBitString*) == 0x8);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.X509.TbsCertificateList tbsCertList
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::TbsCertificateList*& dyn_tbsCertList();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier sigAlgID
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& dyn_sigAlgID();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerBitString sig
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::DerBitString*& dyn_sig();
    // public Org.BouncyCastle.Asn1.X509.TbsCertificateList get_TbsCertList()
    // Offset: 0x1F450C0
    ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* get_TbsCertList();
    // public Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier get_SignatureAlgorithm()
    // Offset: 0x1F4517C
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SignatureAlgorithm();
    // public Org.BouncyCastle.Asn1.DerBitString get_Signature()
    // Offset: 0x1F45184
    ::Org::BouncyCastle::Asn1::DerBitString* get_Signature();
    // public System.Int32 get_Version()
    // Offset: 0x1F451AC
    int get_Version();
    // public Org.BouncyCastle.Asn1.X509.X509Name get_Issuer()
    // Offset: 0x1F451EC
    ::Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();
    // public Org.BouncyCastle.Asn1.X509.Time get_ThisUpdate()
    // Offset: 0x1F45208
    ::Org::BouncyCastle::Asn1::X509::Time* get_ThisUpdate();
    // public Org.BouncyCastle.Asn1.X509.Time get_NextUpdate()
    // Offset: 0x1F45224
    ::Org::BouncyCastle::Asn1::X509::Time* get_NextUpdate();
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1F44DFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CertificateList* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X509::CertificateList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CertificateList*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.X509.CertificateList GetInstance(System.Object obj)
    // Offset: 0x1F44D58
    static ::Org::BouncyCastle::Asn1::X509::CertificateList* GetInstance(::Il2CppObject* obj);
    // public System.Collections.IEnumerable GetRevokedCertificateEnumeration()
    // Offset: 0x1F450C8
    ::System::Collections::IEnumerable* GetRevokedCertificateEnumeration();
    // public System.Byte[] GetSignatureOctets()
    // Offset: 0x1F4518C
    ::ArrayW<uint8_t> GetSignatureOctets();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1F45240
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.CertificateList
  #pragma pack(pop)
  static check_size<sizeof(CertificateList), 32 + sizeof(::Org::BouncyCastle::Asn1::DerBitString*)> __Org_BouncyCastle_Asn1_X509_CertificateListSizeCheck;
  static_assert(sizeof(CertificateList) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CertificateList::get_TbsCertList
// Il2CppName: get_TbsCertList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::TbsCertificateList* (Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(&Org::BouncyCastle::Asn1::X509::CertificateList::get_TbsCertList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::CertificateList*), "get_TbsCertList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CertificateList::get_SignatureAlgorithm
// Il2CppName: get_SignatureAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(&Org::BouncyCastle::Asn1::X509::CertificateList::get_SignatureAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::CertificateList*), "get_SignatureAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CertificateList::get_Signature
// Il2CppName: get_Signature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(&Org::BouncyCastle::Asn1::X509::CertificateList::get_Signature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::CertificateList*), "get_Signature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CertificateList::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(&Org::BouncyCastle::Asn1::X509::CertificateList::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::CertificateList*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CertificateList::get_Issuer
// Il2CppName: get_Issuer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(&Org::BouncyCastle::Asn1::X509::CertificateList::get_Issuer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::CertificateList*), "get_Issuer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CertificateList::get_ThisUpdate
// Il2CppName: get_ThisUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::Time* (Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(&Org::BouncyCastle::Asn1::X509::CertificateList::get_ThisUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::CertificateList*), "get_ThisUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CertificateList::get_NextUpdate
// Il2CppName: get_NextUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::Time* (Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(&Org::BouncyCastle::Asn1::X509::CertificateList::get_NextUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::CertificateList*), "get_NextUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CertificateList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CertificateList::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::CertificateList* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::CertificateList::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::CertificateList*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CertificateList::GetRevokedCertificateEnumeration
// Il2CppName: GetRevokedCertificateEnumeration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(&Org::BouncyCastle::Asn1::X509::CertificateList::GetRevokedCertificateEnumeration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::CertificateList*), "GetRevokedCertificateEnumeration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CertificateList::GetSignatureOctets
// Il2CppName: GetSignatureOctets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(&Org::BouncyCastle::Asn1::X509::CertificateList::GetSignatureOctets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::CertificateList*), "GetSignatureOctets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CertificateList::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(&Org::BouncyCastle::Asn1::X509::CertificateList::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::CertificateList*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
