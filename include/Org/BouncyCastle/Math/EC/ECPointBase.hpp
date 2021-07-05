// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.ECPoint
#include "Org/BouncyCastle/Math/EC/ECPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.ECPointBase
  class ECPointBase : public Org::BouncyCastle::Math::EC::ECPoint {
    public:
    // Creating value type constructor for type: ECPointBase
    ECPointBase() noexcept {}
    // protected internal System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0x21513A8
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECPointBase* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::ECPointBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECPointBase*, creationType>(curve, x, y, withCompression)));
    }
    // protected internal System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0x215143C
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECPointBase* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::ECPointBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECPointBase*, creationType>(curve, x, y, zs, withCompression)));
    }
    // public override System.Byte[] GetEncoded(System.Boolean compressed)
    // Offset: 0x21514E8
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: System.Byte[] ECPoint::GetEncoded(System.Boolean compressed)
    ::Array<uint8_t>* GetEncoded(bool compressed);
    // public override Org.BouncyCastle.Math.EC.ECPoint Multiply(Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0x21516C0
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Multiply(Org.BouncyCastle.Math.BigInteger k)
    Org::BouncyCastle::Math::EC::ECPoint* Multiply(Org::BouncyCastle::Math::BigInteger* k);
  }; // Org.BouncyCastle.Math.EC.ECPointBase
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::ECPointBase*, "Org.BouncyCastle.Math.EC", "ECPointBase");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPointBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPointBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPointBase::GetEncoded
// Il2CppName: GetEncoded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Math::EC::ECPointBase::*)(bool)>(&Org::BouncyCastle::Math::EC::ECPointBase::GetEncoded)> {
  const MethodInfo* get() {
    static auto* compressed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPointBase*), "GetEncoded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{compressed});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::ECPointBase::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::ECPointBase::*)(Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::ECPointBase::Multiply)> {
  const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::ECPointBase*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k});
  }
};
