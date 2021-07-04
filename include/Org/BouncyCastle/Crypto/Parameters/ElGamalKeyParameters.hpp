// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
#include "Org/BouncyCastle/Crypto/AsymmetricKeyParameter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ElGamalParameters
  class ElGamalParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters
  class ElGamalKeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    // private readonly Org.BouncyCastle.Crypto.Parameters.ElGamalParameters parameters
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*) == 0x8);
    // Creating value type constructor for type: ElGamalKeyParameters
    ElGamalKeyParameters(Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters_ = {}) noexcept : parameters{parameters_} {}
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // protected System.Void .ctor(System.Boolean isPrivate, Org.BouncyCastle.Crypto.Parameters.ElGamalParameters parameters)
    // Offset: 0x125C534
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ElGamalKeyParameters* New_ctor(bool isPrivate, Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ElGamalKeyParameters*, creationType>(isPrivate, parameters)));
    }
    // public Org.BouncyCastle.Crypto.Parameters.ElGamalParameters get_Parameters()
    // Offset: 0x125C564
    Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* get_Parameters();
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters other)
    // Offset: 0x125C61C
    bool Equals(Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x125C56C
    // Implemented from: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
    // Base method: System.Boolean AsymmetricKeyParameter::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x125C674
    // Implemented from: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
    // Base method: System.Int32 AsymmetricKeyParameter::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters
  #pragma pack(pop)
  static check_size<sizeof(ElGamalKeyParameters), 24 + sizeof(Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*)> __Org_BouncyCastle_Crypto_Parameters_ElGamalKeyParametersSizeCheck;
  static_assert(sizeof(ElGamalKeyParameters) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "ElGamalKeyParameters");
// Writing includes for template specializations
#include "Org/BouncyCastle/Crypto/Parameters/ElGamalParameters.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::get_Parameters
// Il2CppName: get_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* (Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::get_Parameters)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*), "get_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::*)(Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*)>(&Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::*)(::Il2CppObject*)>(&Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
