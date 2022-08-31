// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Forward declaring type: ScalarSplitParameters
  class ScalarSplitParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Forward declaring type: GlvTypeBParameters
  class GlvTypeBParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*, "Org.BouncyCastle.Math.EC.Endo", "GlvTypeBParameters");
// Type namespace: Org.BouncyCastle.Math.EC.Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class GlvTypeBParameters : public ::Il2CppObject {
    public:
    public:
    // protected readonly Org.BouncyCastle.Math.BigInteger m_beta
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Math::BigInteger* m_beta;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.BigInteger m_lambda
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Math::BigInteger* m_lambda;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.EC.Endo.ScalarSplitParameters m_splitParams
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* m_splitParams;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*) == 0x8);
    public:
    // Get instance field reference: protected readonly Org.BouncyCastle.Math.BigInteger m_beta
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_m_beta();
    // Get instance field reference: protected readonly Org.BouncyCastle.Math.BigInteger m_lambda
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_m_lambda();
    // Get instance field reference: protected readonly Org.BouncyCastle.Math.EC.Endo.ScalarSplitParameters m_splitParams
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*& dyn_m_splitParams();
    // public Org.BouncyCastle.Math.BigInteger get_Beta()
    // Offset: 0x27C9FAC
    ::Org::BouncyCastle::Math::BigInteger* get_Beta();
    // public Org.BouncyCastle.Math.EC.Endo.ScalarSplitParameters get_SplitParams()
    // Offset: 0x27C9FB4
    ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* get_SplitParams();
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger beta, Org.BouncyCastle.Math.BigInteger lambda, Org.BouncyCastle.Math.EC.Endo.ScalarSplitParameters splitParams)
    // Offset: 0x27C9F6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GlvTypeBParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* beta, ::Org::BouncyCastle::Math::BigInteger* lambda, ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* splitParams) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GlvTypeBParameters*, creationType>(beta, lambda, splitParams)));
    }
  }; // Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters
  #pragma pack(pop)
  static check_size<sizeof(GlvTypeBParameters), 32 + sizeof(::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*)> __Org_BouncyCastle_Math_EC_Endo_GlvTypeBParametersSizeCheck;
  static_assert(sizeof(GlvTypeBParameters) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_Beta
// Il2CppName: get_Beta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::*)()>(&Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_Beta)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*), "get_Beta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_SplitParams
// Il2CppName: get_SplitParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* (Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::*)()>(&Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_SplitParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*), "get_SplitParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
