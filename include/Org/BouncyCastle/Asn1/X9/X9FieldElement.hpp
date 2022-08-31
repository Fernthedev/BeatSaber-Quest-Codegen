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
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9FieldElement
  class X9FieldElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X9FieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X9FieldElement*, "Org.BouncyCastle.Asn1.X9", "X9FieldElement");
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X9.X9FieldElement
  // [TokenAttribute] Offset: FFFFFFFF
  class X9FieldElement : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    public:
    // private Org.BouncyCastle.Math.EC.ECFieldElement f
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Math::EC::ECFieldElement* f;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::EC::ECFieldElement*) == 0x8);
    public:
    // Creating conversion operator: operator ::Org::BouncyCastle::Math::EC::ECFieldElement*
    constexpr operator ::Org::BouncyCastle::Math::EC::ECFieldElement*() const noexcept {
      return f;
    }
    // Get instance field reference: private Org.BouncyCastle.Math.EC.ECFieldElement f
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::EC::ECFieldElement*& dyn_f();
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECFieldElement f)
    // Offset: 0x1F5588C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X9FieldElement* New_ctor(::Org::BouncyCastle::Math::EC::ECFieldElement* f) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X9::X9FieldElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X9FieldElement*, creationType>(f)));
    }
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1F565EC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X9.X9FieldElement
  #pragma pack(pop)
  static check_size<sizeof(X9FieldElement), 16 + sizeof(::Org::BouncyCastle::Math::EC::ECFieldElement*)> __Org_BouncyCastle_Asn1_X9_X9FieldElementSizeCheck;
  static_assert(sizeof(X9FieldElement) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9FieldElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9FieldElement::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X9::X9FieldElement::*)()>(&Org::BouncyCastle::Asn1::X9::X9FieldElement::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X9FieldElement*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
