// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.KeyParameter
  class KeyParameter : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ICipherParameters*/ {
    public:
    // private readonly System.Byte[] key
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* key;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: KeyParameter
    KeyParameter(::Array<uint8_t>* key_ = {}) noexcept : key{key_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ICipherParameters
    operator Org::BouncyCastle::Crypto::ICipherParameters() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ICipherParameters*>(this);
    }
    // Creating conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept {
      return key;
    }
    // public System.Void .ctor(System.Byte[] key)
    // Offset: 0x1259240
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyParameter* New_ctor(::Array<uint8_t>* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::KeyParameter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyParameter*, creationType>(key)));
    }
    // public System.Void .ctor(System.Byte[] key, System.Int32 keyOff, System.Int32 keyLen)
    // Offset: 0x1259458
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyParameter* New_ctor(::Array<uint8_t>* key, int keyOff, int keyLen) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::KeyParameter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyParameter*, creationType>(key, keyOff, keyLen)));
    }
    // public System.Byte[] GetKey()
    // Offset: 0x125D3C0
    ::Array<uint8_t>* GetKey();
  }; // Org.BouncyCastle.Crypto.Parameters.KeyParameter
  #pragma pack(pop)
  static check_size<sizeof(KeyParameter), 16 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Parameters_KeyParameterSizeCheck;
  static_assert(sizeof(KeyParameter) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::KeyParameter*, "Org.BouncyCastle.Crypto.Parameters", "KeyParameter");
// Writing includes for template specializations
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Parameters::KeyParameter::*)()>(&Org::BouncyCastle::Crypto::Parameters::KeyParameter::GetKey)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::KeyParameter*), "GetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
