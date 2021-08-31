// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.X509.TbsCertificateList/Org.BouncyCastle.Asn1.X509.RevokedCertificatesEnumeration
#include "Org/BouncyCastle/Asn1/X509/TbsCertificateList_RevokedCertificatesEnumeration.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.TbsCertificateList/Org.BouncyCastle.Asn1.X509.RevokedCertificatesEnumeration/Org.BouncyCastle.Asn1.X509.RevokedCertificatesEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    // private readonly System.Collections.IEnumerator e
    // Size: 0x8
    // Offset: 0x10
    System::Collections::IEnumerator* e;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // Creating value type constructor for type: RevokedCertificatesEnumerator
    RevokedCertificatesEnumerator(System::Collections::IEnumerator* e_ = {}) noexcept : e{e_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Creating conversion operator: operator System::Collections::IEnumerator*
    constexpr operator System::Collections::IEnumerator*() const noexcept {
      return e;
    }
    // Get instance field reference: private readonly System.Collections.IEnumerator e
    System::Collections::IEnumerator*& dyn_e();
    // public System.Object get_Current()
    // Offset: 0x19FD76C
    ::Il2CppObject* get_Current();
    // System.Void .ctor(System.Collections.IEnumerator e)
    // Offset: 0x19FD5DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator* New_ctor(System::Collections::IEnumerator* e) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator*, creationType>(e)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x19FD608
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x19FD6B8
    void Reset();
  }; // Org.BouncyCastle.Asn1.X509.TbsCertificateList/Org.BouncyCastle.Asn1.X509.RevokedCertificatesEnumeration/Org.BouncyCastle.Asn1.X509.RevokedCertificatesEnumerator
  #pragma pack(pop)
  static check_size<sizeof(TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator), 16 + sizeof(System::Collections::IEnumerator*)> __Org_BouncyCastle_Asn1_X509_TbsCertificateList_RevokedCertificatesEnumeration_RevokedCertificatesEnumeratorSizeCheck;
  static_assert(sizeof(TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator*, "Org.BouncyCastle.Asn1.X509", "TbsCertificateList/RevokedCertificatesEnumeration/RevokedCertificatesEnumerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator::*)()>(&Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
