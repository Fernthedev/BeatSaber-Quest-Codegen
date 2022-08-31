// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: KeyParameter
  class KeyParameter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::KeyParameter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, "Org.BouncyCastle.Crypto.Parameters", "KeyParameter");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.KeyParameter
  // [TokenAttribute] Offset: FFFFFFFF
  class KeyParameter : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::ICipherParameters*/ {
    public:
    public:
    // private readonly System.Byte[] key
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> key;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::ICipherParameters
    operator ::Org::BouncyCastle::Crypto::ICipherParameters() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(this);
    }
    // Creating interface conversion operator: i_ICipherParameters
    inline ::Org::BouncyCastle::Crypto::ICipherParameters* i_ICipherParameters() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept {
      return key;
    }
    // Get instance field reference: private readonly System.Byte[] key
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_key();
    // public System.Void .ctor(System.Byte[] key)
    // Offset: 0x15F7BDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyParameter* New_ctor(::ArrayW<uint8_t> key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::KeyParameter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyParameter*, creationType>(key)));
    }
    // public System.Void .ctor(System.Byte[] key, System.Int32 keyOff, System.Int32 keyLen)
    // Offset: 0x15F7DF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyParameter* New_ctor(::ArrayW<uint8_t> key, int keyOff, int keyLen) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::KeyParameter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyParameter*, creationType>(key, keyOff, keyLen)));
    }
    // public System.Byte[] GetKey()
    // Offset: 0x15FBD5C
    ::ArrayW<uint8_t> GetKey();
  }; // Org.BouncyCastle.Crypto.Parameters.KeyParameter
  #pragma pack(pop)
  static check_size<sizeof(KeyParameter), 16 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Parameters_KeyParameterSizeCheck;
  static_assert(sizeof(KeyParameter) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::KeyParameter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::KeyParameter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::KeyParameter::GetKey
// Il2CppName: GetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Parameters::KeyParameter::*)()>(&Org::BouncyCastle::Crypto::Parameters::KeyParameter::GetKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::KeyParameter*), "GetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
