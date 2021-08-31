// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IDerivationParameters
#include "Org/BouncyCastle/Crypto/IDerivationParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.KdfParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class KdfParameters : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDerivationParameters*/ {
    public:
    // private System.Byte[] iv
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* iv;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] shared
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* shared;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: KdfParameters
    KdfParameters(::Array<uint8_t>* iv_ = {}, ::Array<uint8_t>* shared_ = {}) noexcept : iv{iv_}, shared{shared_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDerivationParameters
    operator Org::BouncyCastle::Crypto::IDerivationParameters() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDerivationParameters*>(this);
    }
    // Get instance field reference: private System.Byte[] iv
    ::Array<uint8_t>*& dyn_iv();
    // Get instance field reference: private System.Byte[] shared
    ::Array<uint8_t>*& dyn_shared();
    // public System.Void .ctor(System.Byte[] shared, System.Byte[] iv)
    // Offset: 0x1275F14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KdfParameters* New_ctor(::Array<uint8_t>* shared, ::Array<uint8_t>* iv) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::KdfParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KdfParameters*, creationType>(shared, iv)));
    }
    // public System.Byte[] GetSharedSecret()
    // Offset: 0x1275F4C
    ::Array<uint8_t>* GetSharedSecret();
    // public System.Byte[] GetIV()
    // Offset: 0x1275F54
    ::Array<uint8_t>* GetIV();
  }; // Org.BouncyCastle.Crypto.Parameters.KdfParameters
  #pragma pack(pop)
  static check_size<sizeof(KdfParameters), 24 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Parameters_KdfParametersSizeCheck;
  static_assert(sizeof(KdfParameters) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::KdfParameters*, "Org.BouncyCastle.Crypto.Parameters", "KdfParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::KdfParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::KdfParameters::GetSharedSecret
// Il2CppName: GetSharedSecret
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Parameters::KdfParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::KdfParameters::GetSharedSecret)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::KdfParameters*), "GetSharedSecret", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::KdfParameters::GetIV
// Il2CppName: GetIV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Parameters::KdfParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::KdfParameters::GetIV)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::KdfParameters*), "GetIV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
