// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
#include "Org/BouncyCastle/Asn1/X509/AlgorithmIdentifier.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
  // Skipping declaration: Asn1Encodable because it is already included!
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Forward declaring type: EncryptionScheme
  class EncryptionScheme;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme*, "Org.BouncyCastle.Asn1.Pkcs", "EncryptionScheme");
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.EncryptionScheme
  // [TokenAttribute] Offset: FFFFFFFF
  class EncryptionScheme : public ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier {
    public:
    // static public Org.BouncyCastle.Asn1.Pkcs.EncryptionScheme GetInstance(System.Object obj)
    // Offset: 0x1CC2A08
    static ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* GetInstance(::Il2CppObject* obj);
    // public System.Void .ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier objectID, Org.BouncyCastle.Asn1.Asn1Encodable parameters)
    // Offset: 0x1CC2930
    // Implemented from: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
    // Base method: System.Void AlgorithmIdentifier::.ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier objectID, Org.BouncyCastle.Asn1.Asn1Encodable parameters)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncryptionScheme* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* objectID, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncryptionScheme*, creationType>(objectID, parameters)));
    }
    // System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1CC2938
    // Implemented from: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
    // Base method: System.Void AlgorithmIdentifier::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncryptionScheme* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncryptionScheme*, creationType>(seq)));
    }
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1CC2B88
    // Implemented from: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
    // Base method: Org.BouncyCastle.Asn1.Asn1Object AlgorithmIdentifier::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.EncryptionScheme
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme::*)()>(&Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
