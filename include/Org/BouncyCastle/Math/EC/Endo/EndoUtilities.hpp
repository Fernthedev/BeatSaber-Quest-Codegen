// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Forward declaring type: ScalarSplitParameters
  class ScalarSplitParameters;
  // Forward declaring type: ECEndomorphism
  class ECEndomorphism;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Endo.EndoUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class EndoUtilities : public ::Il2CppObject {
    public:
    // Nested type: Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPointCallback
    class MapPointCallback;
    // Creating value type constructor for type: EndoUtilities
    EndoUtilities() noexcept {}
    // Get static field: static public readonly System.String PRECOMP_NAME
    static ::Il2CppString* _get_PRECOMP_NAME();
    // Set static field: static public readonly System.String PRECOMP_NAME
    static void _set_PRECOMP_NAME(::Il2CppString* value);
    // static private System.Void .cctor()
    // Offset: 0x21439A4
    static void _cctor();
    // static public Org.BouncyCastle.Math.BigInteger[] DecomposeScalar(Org.BouncyCastle.Math.EC.Endo.ScalarSplitParameters p, Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0x2143614
    static ::Array<Org::BouncyCastle::Math::BigInteger*>* DecomposeScalar(Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* p, Org::BouncyCastle::Math::BigInteger* k);
    // static public Org.BouncyCastle.Math.EC.ECPoint MapPoint(Org.BouncyCastle.Math.EC.Endo.ECEndomorphism endomorphism, Org.BouncyCastle.Math.EC.ECPoint p)
    // Offset: 0x213FBF8
    static Org::BouncyCastle::Math::EC::ECPoint* MapPoint(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism, Org::BouncyCastle::Math::EC::ECPoint* p);
    // static private Org.BouncyCastle.Math.BigInteger CalculateB(Org.BouncyCastle.Math.BigInteger k, Org.BouncyCastle.Math.BigInteger g, System.Int32 t)
    // Offset: 0x214385C
    static Org::BouncyCastle::Math::BigInteger* CalculateB(Org::BouncyCastle::Math::BigInteger* k, Org::BouncyCastle::Math::BigInteger* g, int t);
  }; // Org.BouncyCastle.Math.EC.Endo.EndoUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Endo::EndoUtilities*, "Org.BouncyCastle.Math.EC.Endo", "EndoUtilities");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::EndoUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Math::EC::Endo::EndoUtilities::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::EndoUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::EndoUtilities::DecomposeScalar
// Il2CppName: DecomposeScalar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<Org::BouncyCastle::Math::BigInteger*>* (*)(Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Endo::EndoUtilities::DecomposeScalar)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Endo", "ScalarSplitParameters")->byval_arg;
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::EndoUtilities*), "DecomposeScalar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, k});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPoint
// Il2CppName: MapPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (*)(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*, Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::Endo::EndoUtilities::MapPoint)> {
  static const MethodInfo* get() {
    static auto* endomorphism = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Endo", "ECEndomorphism")->byval_arg;
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::EndoUtilities*), "MapPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endomorphism, p});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::EndoUtilities::CalculateB
// Il2CppName: CalculateB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (*)(Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::BigInteger*, int)>(&Org::BouncyCastle::Math::EC::Endo::EndoUtilities::CalculateB)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* g = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::EndoUtilities*), "CalculateB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k, g, t});
  }
};
