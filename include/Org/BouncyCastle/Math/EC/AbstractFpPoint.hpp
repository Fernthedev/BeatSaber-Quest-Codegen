// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECPointBase
#include "Org/BouncyCastle/Math/EC/ECPointBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Skipping declaration: ECPoint because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: AbstractFpPoint
  class AbstractFpPoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::AbstractFpPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::AbstractFpPoint*, "Org.BouncyCastle.Math.EC", "AbstractFpPoint");
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.AbstractFpPoint
  // [TokenAttribute] Offset: FFFFFFFF
  class AbstractFpPoint : public ::Org::BouncyCastle::Math::EC::ECPointBase {
    public:
    // protected internal override System.Boolean get_CompressionYTilde()
    // Offset: 0x22E2644
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: System.Boolean ECPoint::get_CompressionYTilde()
    bool get_CompressionYTilde();
    // protected System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0x22E262C
    // Implemented from: Org.BouncyCastle.Math.EC.ECPointBase
    // Base method: System.Void ECPointBase::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbstractFpPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::AbstractFpPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbstractFpPoint*, creationType>(curve, x, y, withCompression)));
    }
    // protected System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0x22E2638
    // Implemented from: Org.BouncyCastle.Math.EC.ECPointBase
    // Base method: System.Void ECPointBase::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Base method: System.Void ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbstractFpPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*> zs, bool withCompression) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::AbstractFpPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbstractFpPoint*, creationType>(curve, x, y, zs, withCompression)));
    }
    // protected override System.Boolean SatisfiesCurveEquation()
    // Offset: 0x22E2674
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: System.Boolean ECPoint::SatisfiesCurveEquation()
    bool SatisfiesCurveEquation();
    // public override Org.BouncyCastle.Math.EC.ECPoint Subtract(Org.BouncyCastle.Math.EC.ECPoint b)
    // Offset: 0x22E2964
    // Implemented from: Org.BouncyCastle.Math.EC.ECPoint
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECPoint::Subtract(Org.BouncyCastle.Math.EC.ECPoint b)
    ::Org::BouncyCastle::Math::EC::ECPoint* Subtract(::Org::BouncyCastle::Math::EC::ECPoint* b);
  }; // Org.BouncyCastle.Math.EC.AbstractFpPoint
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractFpPoint::get_CompressionYTilde
// Il2CppName: get_CompressionYTilde
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::AbstractFpPoint::*)()>(&Org::BouncyCastle::Math::EC::AbstractFpPoint::get_CompressionYTilde)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::AbstractFpPoint*), "get_CompressionYTilde", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractFpPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractFpPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractFpPoint::SatisfiesCurveEquation
// Il2CppName: SatisfiesCurveEquation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::AbstractFpPoint::*)()>(&Org::BouncyCastle::Math::EC::AbstractFpPoint::SatisfiesCurveEquation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::AbstractFpPoint*), "SatisfiesCurveEquation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractFpPoint::Subtract
// Il2CppName: Subtract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::AbstractFpPoint::*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::AbstractFpPoint::Subtract)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::AbstractFpPoint*), "Subtract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
