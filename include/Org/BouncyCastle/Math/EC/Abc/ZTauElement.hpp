// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Abc
namespace Org::BouncyCastle::Math::EC::Abc {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Abc.ZTauElement
  // [TokenAttribute] Offset: FFFFFFFF
  class ZTauElement : public ::Il2CppObject {
    public:
    // public readonly Org.BouncyCastle.Math.BigInteger u
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::BigInteger* u;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // public readonly Org.BouncyCastle.Math.BigInteger v
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Math::BigInteger* v;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // Creating value type constructor for type: ZTauElement
    ZTauElement(Org::BouncyCastle::Math::BigInteger* u_ = {}, Org::BouncyCastle::Math::BigInteger* v_ = {}) noexcept : u{u_}, v{v_} {}
    // Get instance field: public readonly Org.BouncyCastle.Math.BigInteger u
    Org::BouncyCastle::Math::BigInteger* _get_u();
    // Set instance field: public readonly Org.BouncyCastle.Math.BigInteger u
    void _set_u(Org::BouncyCastle::Math::BigInteger* value);
    // Get instance field: public readonly Org.BouncyCastle.Math.BigInteger v
    Org::BouncyCastle::Math::BigInteger* _get_v();
    // Set instance field: public readonly Org.BouncyCastle.Math.BigInteger v
    void _set_v(Org::BouncyCastle::Math::BigInteger* value);
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger u, Org.BouncyCastle.Math.BigInteger v)
    // Offset: 0x1DB1018
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZTauElement* New_ctor(Org::BouncyCastle::Math::BigInteger* u, Org::BouncyCastle::Math::BigInteger* v) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Abc::ZTauElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZTauElement*, creationType>(u, v)));
    }
  }; // Org.BouncyCastle.Math.EC.Abc.ZTauElement
  #pragma pack(pop)
  static check_size<sizeof(ZTauElement), 24 + sizeof(Org::BouncyCastle::Math::BigInteger*)> __Org_BouncyCastle_Math_EC_Abc_ZTauElementSizeCheck;
  static_assert(sizeof(ZTauElement) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Abc::ZTauElement*, "Org.BouncyCastle.Math.EC.Abc", "ZTauElement");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Abc::ZTauElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
