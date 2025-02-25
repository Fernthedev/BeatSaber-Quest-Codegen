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
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: Time
  class Time;
  // Forward declaring type: X509Extensions
  class X509Extensions;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.CrlEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class CrlEntry : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // Org.BouncyCastle.Asn1.Asn1Sequence seq
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1Sequence* seq;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Sequence*) == 0x8);
    // Org.BouncyCastle.Asn1.DerInteger userCertificate
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerInteger* userCertificate;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.Time revocationDate
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::X509::Time* revocationDate;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::Time*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.X509Extensions crlEntryExtensions
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Asn1::X509::X509Extensions* crlEntryExtensions;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::X509Extensions*) == 0x8);
    // Creating value type constructor for type: CrlEntry
    CrlEntry(Org::BouncyCastle::Asn1::Asn1Sequence* seq_ = {}, Org::BouncyCastle::Asn1::DerInteger* userCertificate_ = {}, Org::BouncyCastle::Asn1::X509::Time* revocationDate_ = {}, Org::BouncyCastle::Asn1::X509::X509Extensions* crlEntryExtensions_ = {}) noexcept : seq{seq_}, userCertificate{userCertificate_}, revocationDate{revocationDate_}, crlEntryExtensions{crlEntryExtensions_} {}
    // Get instance field reference: Org.BouncyCastle.Asn1.Asn1Sequence seq
    Org::BouncyCastle::Asn1::Asn1Sequence*& dyn_seq();
    // Get instance field reference: Org.BouncyCastle.Asn1.DerInteger userCertificate
    Org::BouncyCastle::Asn1::DerInteger*& dyn_userCertificate();
    // Get instance field reference: Org.BouncyCastle.Asn1.X509.Time revocationDate
    Org::BouncyCastle::Asn1::X509::Time*& dyn_revocationDate();
    // Get instance field reference: Org.BouncyCastle.Asn1.X509.X509Extensions crlEntryExtensions
    Org::BouncyCastle::Asn1::X509::X509Extensions*& dyn_crlEntryExtensions();
    // public Org.BouncyCastle.Asn1.DerInteger get_UserCertificate()
    // Offset: 0x19FD850
    Org::BouncyCastle::Asn1::DerInteger* get_UserCertificate();
    // public Org.BouncyCastle.Asn1.X509.Time get_RevocationDate()
    // Offset: 0x19FD858
    Org::BouncyCastle::Asn1::X509::Time* get_RevocationDate();
    // public Org.BouncyCastle.Asn1.X509.X509Extensions get_Extensions()
    // Offset: 0x19FD860
    Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions();
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x19FD548
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CrlEntry* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::CrlEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CrlEntry*, creationType>(seq)));
    }
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x19FD91C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.CrlEntry
  #pragma pack(pop)
  static check_size<sizeof(CrlEntry), 40 + sizeof(Org::BouncyCastle::Asn1::X509::X509Extensions*)> __Org_BouncyCastle_Asn1_X509_CrlEntrySizeCheck;
  static_assert(sizeof(CrlEntry) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::CrlEntry*, "Org.BouncyCastle.Asn1.X509", "CrlEntry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CrlEntry::get_UserCertificate
// Il2CppName: get_UserCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerInteger* (Org::BouncyCastle::Asn1::X509::CrlEntry::*)()>(&Org::BouncyCastle::Asn1::X509::CrlEntry::get_UserCertificate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::CrlEntry*), "get_UserCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CrlEntry::get_RevocationDate
// Il2CppName: get_RevocationDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::Time* (Org::BouncyCastle::Asn1::X509::CrlEntry::*)()>(&Org::BouncyCastle::Asn1::X509::CrlEntry::get_RevocationDate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::CrlEntry*), "get_RevocationDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CrlEntry::get_Extensions
// Il2CppName: get_Extensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Extensions* (Org::BouncyCastle::Asn1::X509::CrlEntry::*)()>(&Org::BouncyCastle::Asn1::X509::CrlEntry::get_Extensions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::CrlEntry*), "get_Extensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CrlEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::CrlEntry::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::CrlEntry::*)()>(&Org::BouncyCastle::Asn1::X509::CrlEntry::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::CrlEntry*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
