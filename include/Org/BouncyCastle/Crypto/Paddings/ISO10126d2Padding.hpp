// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
#include "Org/BouncyCastle/Crypto/Paddings/IBlockCipherPadding.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Paddings
namespace Org::BouncyCastle::Crypto::Paddings {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Paddings.ISO10126d2Padding
  // [TokenAttribute] Offset: FFFFFFFF
  class ISO10126d2Padding : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*/ {
    public:
    // private Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    // Creating value type constructor for type: ISO10126d2Padding
    ISO10126d2Padding(Org::BouncyCastle::Security::SecureRandom* random_ = {}) noexcept : random{random_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding
    operator Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*>(this);
    }
    // Creating conversion operator: operator Org::BouncyCastle::Security::SecureRandom*
    constexpr operator Org::BouncyCastle::Security::SecureRandom*() const noexcept {
      return random;
    }
    // Get instance field: private Org.BouncyCastle.Security.SecureRandom random
    Org::BouncyCastle::Security::SecureRandom* _get_random();
    // Set instance field: private Org.BouncyCastle.Security.SecureRandom random
    void _set_random(Org::BouncyCastle::Security::SecureRandom* value);
    // public System.Void Init(Org.BouncyCastle.Security.SecureRandom random)
    // Offset: 0x126E92C
    void Init(Org::BouncyCastle::Security::SecureRandom* random);
    // public System.Int32 AddPadding(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x126E9AC
    int AddPadding(::Array<uint8_t>* input, int inOff);
    // public System.Int32 PadCount(System.Byte[] input)
    // Offset: 0x126EA7C
    int PadCount(::Array<uint8_t>* input);
    // public System.Void .ctor()
    // Offset: 0x126EB2C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ISO10126d2Padding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ISO10126d2Padding*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Paddings.ISO10126d2Padding
  #pragma pack(pop)
  static check_size<sizeof(ISO10126d2Padding), 16 + sizeof(Org::BouncyCastle::Security::SecureRandom*)> __Org_BouncyCastle_Crypto_Paddings_ISO10126d2PaddingSizeCheck;
  static_assert(sizeof(ISO10126d2Padding) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding*, "Org.BouncyCastle.Crypto.Paddings", "ISO10126d2Padding");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding::*)(Org::BouncyCastle::Security::SecureRandom*)>(&Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding::Init)> {
  static const MethodInfo* get() {
    static auto* random = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{random});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding::AddPadding
// Il2CppName: AddPadding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding::AddPadding)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding*), "AddPadding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding::PadCount
// Il2CppName: PadCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding::PadCount)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding*), "PadCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
