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
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
  // Forward declaring type: X509Name
  class X509Name;
  // Forward declaring type: Time
  class Time;
  // Forward declaring type: X509Extensions
  class X509Extensions;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: DerInteger
  class DerInteger;
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
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.TbsCertificateList
  // [TokenAttribute] Offset: FFFFFFFF
  class TbsCertificateList : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // Nested type: Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration
    class RevokedCertificatesEnumeration;
    // Org.BouncyCastle.Asn1.Asn1Sequence seq
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1Sequence* seq;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Sequence*) == 0x8);
    // Org.BouncyCastle.Asn1.DerInteger version
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerInteger* version;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier signature
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.X509Name issuer
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Asn1::X509::X509Name* issuer;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::X509Name*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.Time thisUpdate
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Asn1::X509::Time* thisUpdate;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::Time*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.Time nextUpdate
    // Size: 0x8
    // Offset: 0x38
    Org::BouncyCastle::Asn1::X509::Time* nextUpdate;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::Time*) == 0x8);
    // Org.BouncyCastle.Asn1.Asn1Sequence revokedCertificates
    // Size: 0x8
    // Offset: 0x40
    Org::BouncyCastle::Asn1::Asn1Sequence* revokedCertificates;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Sequence*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.X509Extensions crlExtensions
    // Size: 0x8
    // Offset: 0x48
    Org::BouncyCastle::Asn1::X509::X509Extensions* crlExtensions;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::X509Extensions*) == 0x8);
    // Creating value type constructor for type: TbsCertificateList
    TbsCertificateList(Org::BouncyCastle::Asn1::Asn1Sequence* seq_ = {}, Org::BouncyCastle::Asn1::DerInteger* version_ = {}, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature_ = {}, Org::BouncyCastle::Asn1::X509::X509Name* issuer_ = {}, Org::BouncyCastle::Asn1::X509::Time* thisUpdate_ = {}, Org::BouncyCastle::Asn1::X509::Time* nextUpdate_ = {}, Org::BouncyCastle::Asn1::Asn1Sequence* revokedCertificates_ = {}, Org::BouncyCastle::Asn1::X509::X509Extensions* crlExtensions_ = {}) noexcept : seq{seq_}, version{version_}, signature{signature_}, issuer{issuer_}, thisUpdate{thisUpdate_}, nextUpdate{nextUpdate_}, revokedCertificates{revokedCertificates_}, crlExtensions{crlExtensions_} {}
    // Get instance field reference: Org.BouncyCastle.Asn1.Asn1Sequence seq
    Org::BouncyCastle::Asn1::Asn1Sequence*& dyn_seq();
    // Get instance field reference: Org.BouncyCastle.Asn1.DerInteger version
    Org::BouncyCastle::Asn1::DerInteger*& dyn_version();
    // Get instance field reference: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier signature
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& dyn_signature();
    // Get instance field reference: Org.BouncyCastle.Asn1.X509.X509Name issuer
    Org::BouncyCastle::Asn1::X509::X509Name*& dyn_issuer();
    // Get instance field reference: Org.BouncyCastle.Asn1.X509.Time thisUpdate
    Org::BouncyCastle::Asn1::X509::Time*& dyn_thisUpdate();
    // Get instance field reference: Org.BouncyCastle.Asn1.X509.Time nextUpdate
    Org::BouncyCastle::Asn1::X509::Time*& dyn_nextUpdate();
    // Get instance field reference: Org.BouncyCastle.Asn1.Asn1Sequence revokedCertificates
    Org::BouncyCastle::Asn1::Asn1Sequence*& dyn_revokedCertificates();
    // Get instance field reference: Org.BouncyCastle.Asn1.X509.X509Extensions crlExtensions
    Org::BouncyCastle::Asn1::X509::X509Extensions*& dyn_crlExtensions();
    // public System.Int32 get_Version()
    // Offset: 0x19F86BC
    int get_Version();
    // public Org.BouncyCastle.Asn1.X509.X509Name get_Issuer()
    // Offset: 0x19FD4A8
    Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();
    // public Org.BouncyCastle.Asn1.X509.Time get_ThisUpdate()
    // Offset: 0x19FD4B0
    Org::BouncyCastle::Asn1::X509::Time* get_ThisUpdate();
    // public Org.BouncyCastle.Asn1.X509.Time get_NextUpdate()
    // Offset: 0x19FD4B8
    Org::BouncyCastle::Asn1::X509::Time* get_NextUpdate();
    // public Org.BouncyCastle.Asn1.X509.X509Extensions get_Extensions()
    // Offset: 0x19FD4EC
    Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions();
    // System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x19FD008
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TbsCertificateList* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::TbsCertificateList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TbsCertificateList*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.X509.TbsCertificateList GetInstance(System.Object obj)
    // Offset: 0x19F8438
    static Org::BouncyCastle::Asn1::X509::TbsCertificateList* GetInstance(::Il2CppObject* obj);
    // public System.Collections.IEnumerable GetRevokedCertificateEnumeration()
    // Offset: 0x19F85D8
    System::Collections::IEnumerable* GetRevokedCertificateEnumeration();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x19FD4F4
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.TbsCertificateList
  #pragma pack(pop)
  static check_size<sizeof(TbsCertificateList), 72 + sizeof(Org::BouncyCastle::Asn1::X509::X509Extensions*)> __Org_BouncyCastle_Asn1_X509_TbsCertificateListSizeCheck;
  static_assert(sizeof(TbsCertificateList) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::TbsCertificateList*, "Org.BouncyCastle.Asn1.X509", "TbsCertificateList");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Asn1::X509::TbsCertificateList::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateList*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_Issuer
// Il2CppName: get_Issuer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Name* (Org::BouncyCastle::Asn1::X509::TbsCertificateList::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_Issuer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateList*), "get_Issuer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_ThisUpdate
// Il2CppName: get_ThisUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::Time* (Org::BouncyCastle::Asn1::X509::TbsCertificateList::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_ThisUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateList*), "get_ThisUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_NextUpdate
// Il2CppName: get_NextUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::Time* (Org::BouncyCastle::Asn1::X509::TbsCertificateList::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_NextUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateList*), "get_NextUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_Extensions
// Il2CppName: get_Extensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Extensions* (Org::BouncyCastle::Asn1::X509::TbsCertificateList::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateList::get_Extensions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateList*), "get_Extensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateList::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::TbsCertificateList* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::TbsCertificateList::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateList*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateList::GetRevokedCertificateEnumeration
// Il2CppName: GetRevokedCertificateEnumeration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable* (Org::BouncyCastle::Asn1::X509::TbsCertificateList::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateList::GetRevokedCertificateEnumeration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateList*), "GetRevokedCertificateEnumeration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateList::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::TbsCertificateList::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateList::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateList*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
