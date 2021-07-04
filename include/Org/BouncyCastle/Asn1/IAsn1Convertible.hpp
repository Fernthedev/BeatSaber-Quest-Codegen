// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.IAsn1Convertible
  class IAsn1Convertible {
    public:
    // Creating value type constructor for type: IAsn1Convertible
    IAsn1Convertible() noexcept {}
    // public Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.IAsn1Convertible
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::IAsn1Convertible*, "Org.BouncyCastle.Asn1", "IAsn1Convertible");
// Writing includes for template specializations
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::IAsn1Convertible::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::IAsn1Convertible::*)()>(&Org::BouncyCastle::Asn1::IAsn1Convertible::ToAsn1Object)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::IAsn1Convertible*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
