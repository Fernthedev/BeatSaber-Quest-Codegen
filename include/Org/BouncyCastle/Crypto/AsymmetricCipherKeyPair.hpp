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
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: AsymmetricKeyParameter
  class AsymmetricKeyParameter;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair
  // [TokenAttribute] Offset: FFFFFFFF
  class AsymmetricCipherKeyPair : public ::Il2CppObject {
    public:
    // private readonly Org.BouncyCastle.Crypto.AsymmetricKeyParameter publicParameter
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicParameter;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::AsymmetricKeyParameter*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.AsymmetricKeyParameter privateParameter
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateParameter;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::AsymmetricKeyParameter*) == 0x8);
    // Creating value type constructor for type: AsymmetricCipherKeyPair
    AsymmetricCipherKeyPair(Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicParameter_ = {}, Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateParameter_ = {}) noexcept : publicParameter{publicParameter_}, privateParameter{privateParameter_} {}
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.AsymmetricKeyParameter publicParameter
    Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& dyn_publicParameter();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.AsymmetricKeyParameter privateParameter
    Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& dyn_privateParameter();
    // public Org.BouncyCastle.Crypto.AsymmetricKeyParameter get_Public()
    // Offset: 0x1A1007C
    Org::BouncyCastle::Crypto::AsymmetricKeyParameter* get_Public();
    // public Org.BouncyCastle.Crypto.AsymmetricKeyParameter get_Private()
    // Offset: 0x1A10084
    Org::BouncyCastle::Crypto::AsymmetricKeyParameter* get_Private();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.AsymmetricKeyParameter publicParameter, Org.BouncyCastle.Crypto.AsymmetricKeyParameter privateParameter)
    // Offset: 0x1A0FF94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsymmetricCipherKeyPair* New_ctor(Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicParameter, Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateParameter) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsymmetricCipherKeyPair*, creationType>(publicParameter, privateParameter)));
    }
  }; // Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair
  #pragma pack(pop)
  static check_size<sizeof(AsymmetricCipherKeyPair), 24 + sizeof(Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)> __Org_BouncyCastle_Crypto_AsymmetricCipherKeyPairSizeCheck;
  static_assert(sizeof(AsymmetricCipherKeyPair) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*, "Org.BouncyCastle.Crypto", "AsymmetricCipherKeyPair");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::get_Public
// Il2CppName: get_Public
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::*)()>(&Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::get_Public)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*), "get_Public", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::get_Private
// Il2CppName: get_Private
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::*)()>(&Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::get_Private)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*), "get_Private", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
