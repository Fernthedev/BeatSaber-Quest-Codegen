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
  // Forward declaring type: GeneralNames
  class GeneralNames;
  // Forward declaring type: IssuerSerial
  class IssuerSerial;
  // Forward declaring type: ObjectDigestInfo
  class ObjectDigestInfo;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1TaggedObject
  class Asn1TaggedObject;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.V2Form
  // [TokenAttribute] Offset: FFFFFFFF
  class V2Form : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // Org.BouncyCastle.Asn1.X509.GeneralNames issuerName
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::GeneralNames*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.IssuerSerial baseCertificateID
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::IssuerSerial*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.ObjectDigestInfo objectDigestInfo
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*) == 0x8);
    // Creating value type constructor for type: V2Form
    V2Form(Org::BouncyCastle::Asn1::X509::GeneralNames* issuerName_ = {}, Org::BouncyCastle::Asn1::X509::IssuerSerial* baseCertificateID_ = {}, Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* objectDigestInfo_ = {}) noexcept : issuerName{issuerName_}, baseCertificateID{baseCertificateID_}, objectDigestInfo{objectDigestInfo_} {}
    // Get instance field reference: Org.BouncyCastle.Asn1.X509.GeneralNames issuerName
    Org::BouncyCastle::Asn1::X509::GeneralNames*& dyn_issuerName();
    // Get instance field reference: Org.BouncyCastle.Asn1.X509.IssuerSerial baseCertificateID
    Org::BouncyCastle::Asn1::X509::IssuerSerial*& dyn_baseCertificateID();
    // Get instance field reference: Org.BouncyCastle.Asn1.X509.ObjectDigestInfo objectDigestInfo
    Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*& dyn_objectDigestInfo();
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1A02B74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static V2Form* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::V2Form::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<V2Form*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.X509.V2Form GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean explicitly)
    // Offset: 0x19FB068
    static Org::BouncyCastle::Asn1::X509::V2Form* GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);
    // static public Org.BouncyCastle.Asn1.X509.V2Form GetInstance(System.Object obj)
    // Offset: 0x19FAEF4
    static Org::BouncyCastle::Asn1::X509::V2Form* GetInstance(::Il2CppObject* obj);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1A02D94
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.V2Form
  #pragma pack(pop)
  static check_size<sizeof(V2Form), 32 + sizeof(Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*)> __Org_BouncyCastle_Asn1_X509_V2FormSizeCheck;
  static_assert(sizeof(V2Form) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::V2Form*, "Org.BouncyCastle.Asn1.X509", "V2Form");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::V2Form::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::V2Form::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::V2Form* (*)(Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(&Org::BouncyCastle::Asn1::X509::V2Form::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1TaggedObject")->byval_arg;
    static auto* explicitly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::V2Form*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, explicitly});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::V2Form::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::V2Form* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::V2Form::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::V2Form*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::V2Form::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::V2Form::*)()>(&Org::BouncyCastle::Asn1::X509::V2Form::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::V2Form*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
