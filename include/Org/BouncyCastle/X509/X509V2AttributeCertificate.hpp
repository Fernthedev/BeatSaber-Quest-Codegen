// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.X509.X509ExtensionBase
#include "Org/BouncyCastle/X509/X509ExtensionBase.hpp"
// Including type: Org.BouncyCastle.X509.IX509AttributeCertificate
#include "Org/BouncyCastle/X509/IX509AttributeCertificate.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AttributeCertificate
  class AttributeCertificate;
  // Forward declaring type: X509Extensions
  class X509Extensions;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.X509
namespace Org::BouncyCastle::X509 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.X509.X509V2AttributeCertificate
  // [TokenAttribute] Offset: FFFFFFFF
  class X509V2AttributeCertificate : public Org::BouncyCastle::X509::X509ExtensionBase/*, public Org::BouncyCastle::X509::IX509AttributeCertificate*/ {
    public:
    // private readonly Org.BouncyCastle.Asn1.X509.AttributeCertificate cert
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::X509::AttributeCertificate* cert;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AttributeCertificate*) == 0x8);
    // private readonly System.DateTime notBefore
    // Size: 0x8
    // Offset: 0x18
    System::DateTime notBefore;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // private readonly System.DateTime notAfter
    // Size: 0x8
    // Offset: 0x20
    System::DateTime notAfter;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // Creating value type constructor for type: X509V2AttributeCertificate
    X509V2AttributeCertificate(Org::BouncyCastle::Asn1::X509::AttributeCertificate* cert_ = {}, System::DateTime notBefore_ = {}, System::DateTime notAfter_ = {}) noexcept : cert{cert_}, notBefore{notBefore_}, notAfter{notAfter_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::X509::IX509AttributeCertificate
    operator Org::BouncyCastle::X509::IX509AttributeCertificate() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::X509::IX509AttributeCertificate*>(this);
    }
    // Get instance field: private readonly Org.BouncyCastle.Asn1.X509.AttributeCertificate cert
    Org::BouncyCastle::Asn1::X509::AttributeCertificate* _get_cert();
    // Set instance field: private readonly Org.BouncyCastle.Asn1.X509.AttributeCertificate cert
    void _set_cert(Org::BouncyCastle::Asn1::X509::AttributeCertificate* value);
    // Get instance field: private readonly System.DateTime notBefore
    System::DateTime _get_notBefore();
    // Set instance field: private readonly System.DateTime notBefore
    void _set_notBefore(System::DateTime value);
    // Get instance field: private readonly System.DateTime notAfter
    System::DateTime _get_notAfter();
    // Set instance field: private readonly System.DateTime notAfter
    void _set_notAfter(System::DateTime value);
    // public System.Void .ctor(System.IO.Stream encIn)
    // Offset: 0x1FF4594
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509V2AttributeCertificate* New_ctor(System::IO::Stream* encIn) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::X509::X509V2AttributeCertificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509V2AttributeCertificate*, creationType>(encIn)));
    }
    // public System.Void .ctor(System.Byte[] encoded)
    // Offset: 0x1FF4750
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509V2AttributeCertificate* New_ctor(::Array<uint8_t>* encoded) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::X509::X509V2AttributeCertificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509V2AttributeCertificate*, creationType>(encoded)));
    }
    // System.Void .ctor(Org.BouncyCastle.Asn1.X509.AttributeCertificate cert)
    // Offset: 0x1FF45C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509V2AttributeCertificate* New_ctor(Org::BouncyCastle::Asn1::X509::AttributeCertificate* cert) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::X509::X509V2AttributeCertificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509V2AttributeCertificate*, creationType>(cert)));
    }
    // static private Org.BouncyCastle.Asn1.X509.AttributeCertificate GetObject(System.IO.Stream input)
    // Offset: 0x1FF445C
    static Org::BouncyCastle::Asn1::X509::AttributeCertificate* GetObject(System::IO::Stream* input);
    // protected override Org.BouncyCastle.Asn1.X509.X509Extensions GetX509Extensions()
    // Offset: 0x1FF47D0
    // Implemented from: Org.BouncyCastle.X509.X509ExtensionBase
    // Base method: Org.BouncyCastle.Asn1.X509.X509Extensions X509ExtensionBase::GetX509Extensions()
    Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1FF47F8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1FF48BC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.X509.X509V2AttributeCertificate
  #pragma pack(pop)
  static check_size<sizeof(X509V2AttributeCertificate), 32 + sizeof(System::DateTime)> __Org_BouncyCastle_X509_X509V2AttributeCertificateSizeCheck;
  static_assert(sizeof(X509V2AttributeCertificate) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509V2AttributeCertificate*, "Org.BouncyCastle.X509", "X509V2AttributeCertificate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509V2AttributeCertificate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509V2AttributeCertificate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509V2AttributeCertificate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509V2AttributeCertificate::GetObject
// Il2CppName: GetObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AttributeCertificate* (*)(System::IO::Stream*)>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::GetObject)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509V2AttributeCertificate*), "GetObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509V2AttributeCertificate::GetX509Extensions
// Il2CppName: GetX509Extensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Extensions* (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::GetX509Extensions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509V2AttributeCertificate*), "GetX509Extensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509V2AttributeCertificate::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(::Il2CppObject*)>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509V2AttributeCertificate*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509V2AttributeCertificate::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509V2AttributeCertificate*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
