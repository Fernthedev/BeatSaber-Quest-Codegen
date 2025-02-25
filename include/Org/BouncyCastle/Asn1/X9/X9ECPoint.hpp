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
  // Forward declaring type: Asn1OctetString
  class Asn1OctetString;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X9.X9ECPoint
  // [TokenAttribute] Offset: FFFFFFFF
  class X9ECPoint : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.Asn1OctetString encoding
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1OctetString* encoding;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1OctetString*) == 0x8);
    // private Org.BouncyCastle.Math.EC.ECCurve c
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Math::EC::ECCurve* c;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECCurve*) == 0x8);
    // private Org.BouncyCastle.Math.EC.ECPoint p
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Math::EC::ECPoint* p;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECPoint*) == 0x8);
    // Creating value type constructor for type: X9ECPoint
    X9ECPoint(Org::BouncyCastle::Asn1::Asn1OctetString* encoding_ = {}, Org::BouncyCastle::Math::EC::ECCurve* c_ = {}, Org::BouncyCastle::Math::EC::ECPoint* p_ = {}) noexcept : encoding{encoding_}, c{c_}, p{p_} {}
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.Asn1OctetString encoding
    Org::BouncyCastle::Asn1::Asn1OctetString*& dyn_encoding();
    // Get instance field reference: private Org.BouncyCastle.Math.EC.ECCurve c
    Org::BouncyCastle::Math::EC::ECCurve*& dyn_c();
    // Get instance field reference: private Org.BouncyCastle.Math.EC.ECPoint p
    Org::BouncyCastle::Math::EC::ECPoint*& dyn_p();
    // public Org.BouncyCastle.Math.EC.ECPoint get_Point()
    // Offset: 0x1A089FC
    Org::BouncyCastle::Math::EC::ECPoint* get_Point();
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECPoint p, System.Boolean compressed)
    // Offset: 0x1A0E250
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X9ECPoint* New_ctor(Org::BouncyCastle::Math::EC::ECPoint* p, bool compressed) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X9::X9ECPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X9ECPoint*, creationType>(p, compressed)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve c, System.Byte[] encoding)
    // Offset: 0x1A08944
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X9ECPoint* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* c, ::Array<uint8_t>* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X9::X9ECPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X9ECPoint*, creationType>(c, encoding)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve c, Org.BouncyCastle.Asn1.Asn1OctetString s)
    // Offset: 0x1A0DAB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X9ECPoint* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* c, Org::BouncyCastle::Asn1::Asn1OctetString* s) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X9::X9ECPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X9ECPoint*, creationType>(c, s)));
    }
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1A0E310
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X9.X9ECPoint
  #pragma pack(pop)
  static check_size<sizeof(X9ECPoint), 32 + sizeof(Org::BouncyCastle::Math::EC::ECPoint*)> __Org_BouncyCastle_Asn1_X9_X9ECPointSizeCheck;
  static_assert(sizeof(X9ECPoint) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::X9ECPoint*, "Org.BouncyCastle.Asn1.X9", "X9ECPoint");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9ECPoint::get_Point
// Il2CppName: get_Point
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Asn1::X9::X9ECPoint::*)()>(&Org::BouncyCastle::Asn1::X9::X9ECPoint::get_Point)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X9ECPoint*), "get_Point", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9ECPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9ECPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9ECPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9ECPoint::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X9::X9ECPoint::*)()>(&Org::BouncyCastle::Asn1::X9::X9ECPoint::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X9ECPoint*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
