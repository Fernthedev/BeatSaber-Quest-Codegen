// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Math
namespace Mono::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Mono::Math::Prime
namespace Mono::Math::Prime {
  // Forward declaring type: ConfidenceFactor
  struct ConfidenceFactor;
}
// Completed forward declares
// Type namespace: Mono.Math.Prime
namespace Mono::Math::Prime {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Math.Prime.PrimalityTests
  class PrimalityTests : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PrimalityTests
    PrimalityTests() noexcept {}
    // static private System.Int32 GetSPPRounds(Mono.Math.BigInteger bi, Mono.Math.Prime.ConfidenceFactor confidence)
    // Offset: 0x1D6F868
    static int GetSPPRounds(Mono::Math::BigInteger* bi, Mono::Math::Prime::ConfidenceFactor confidence);
    // static public System.Boolean RabinMillerTest(Mono.Math.BigInteger n, Mono.Math.Prime.ConfidenceFactor confidence)
    // Offset: 0x1D6FA1C
    static bool RabinMillerTest(Mono::Math::BigInteger* n, Mono::Math::Prime::ConfidenceFactor confidence);
  }; // Mono.Math.Prime.PrimalityTests
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Math::Prime::PrimalityTests*, "Mono.Math.Prime", "PrimalityTests");
// Writing includes for template specializations
#include "Mono/Math/BigInteger.hpp"
#include "Mono/Math/Prime/ConfidenceFactor.hpp"
// Writing MetadataGetter for method: Mono::Math::Prime::PrimalityTests::GetSPPRounds
// Il2CppName: GetSPPRounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(Mono::Math::BigInteger*, Mono::Math::Prime::ConfidenceFactor)>(&Mono::Math::Prime::PrimalityTests::GetSPPRounds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::Prime::PrimalityTests*), "GetSPPRounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Mono::Math::BigInteger*>(), ::il2cpp_utils::ExtractIndependentType<Mono::Math::Prime::ConfidenceFactor>()});
  }
};
// Writing MetadataGetter for method: Mono::Math::Prime::PrimalityTests::RabinMillerTest
// Il2CppName: RabinMillerTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Mono::Math::BigInteger*, Mono::Math::Prime::ConfidenceFactor)>(&Mono::Math::Prime::PrimalityTests::RabinMillerTest)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::Prime::PrimalityTests*), "RabinMillerTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Mono::Math::BigInteger*>(), ::il2cpp_utils::ExtractIndependentType<Mono::Math::Prime::ConfidenceFactor>()});
  }
};
