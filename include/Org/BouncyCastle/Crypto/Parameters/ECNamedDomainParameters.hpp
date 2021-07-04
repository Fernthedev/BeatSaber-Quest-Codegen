// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.ECDomainParameters
#include "Org/BouncyCastle/Crypto/Parameters/ECDomainParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9ECParameters
  class X9ECParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ECNamedDomainParameters
  class ECNamedDomainParameters : public Org::BouncyCastle::Crypto::Parameters::ECDomainParameters {
    public:
    // private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier name
    // Size: 0x8
    // Offset: 0x40
    Org::BouncyCastle::Asn1::DerObjectIdentifier* name;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    // Creating value type constructor for type: ECNamedDomainParameters
    ECNamedDomainParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier* name_ = {}) noexcept : name{name_} {}
    // Creating conversion operator: operator Org::BouncyCastle::Asn1::DerObjectIdentifier*
    constexpr operator Org::BouncyCastle::Asn1::DerObjectIdentifier*() const noexcept {
      return name;
    }
    // public Org.BouncyCastle.Asn1.DerObjectIdentifier get_Name()
    // Offset: 0x125B168
    Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Name();
    // public System.Void .ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier name, Org.BouncyCastle.Asn1.X9.X9ECParameters x9)
    // Offset: 0x125B170
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECNamedDomainParameters* New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier* name, Org::BouncyCastle::Asn1::X9::X9ECParameters* x9) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECNamedDomainParameters*, creationType>(name, x9)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier name, Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECPoint g, Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Math.BigInteger h, System.Byte[] seed)
    // Offset: 0x125A97C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECNamedDomainParameters* New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier* name, Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECPoint* g, Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Math::BigInteger* h, ::Array<uint8_t>* seed) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECNamedDomainParameters*, creationType>(name, curve, g, n, h, seed)));
    }
  }; // Org.BouncyCastle.Crypto.Parameters.ECNamedDomainParameters
  #pragma pack(pop)
  static check_size<sizeof(ECNamedDomainParameters), 64 + sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*)> __Org_BouncyCastle_Crypto_Parameters_ECNamedDomainParametersSizeCheck;
  static_assert(sizeof(ECNamedDomainParameters) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters*, "Org.BouncyCastle.Crypto.Parameters", "ECNamedDomainParameters");
// Writing includes for template specializations
#include "Org/BouncyCastle/Asn1/DerObjectIdentifier.hpp"
#include "Org/BouncyCastle/Asn1/X9/X9ECParameters.hpp"
#include "Org/BouncyCastle/Math/EC/ECCurve.hpp"
#include "Org/BouncyCastle/Math/EC/ECPoint.hpp"
#include "Org/BouncyCastle/Math/BigInteger.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerObjectIdentifier* (Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters::get_Name)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
