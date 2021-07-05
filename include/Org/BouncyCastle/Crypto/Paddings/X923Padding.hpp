// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: Org.BouncyCastle.Crypto.Paddings.X923Padding
  class X923Padding : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*/ {
    public:
    // private Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    // Creating value type constructor for type: X923Padding
    X923Padding(Org::BouncyCastle::Security::SecureRandom* random_ = {}) noexcept : random{random_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding
    operator Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*>(this);
    }
    // Creating conversion operator: operator Org::BouncyCastle::Security::SecureRandom*
    constexpr operator Org::BouncyCastle::Security::SecureRandom*() const noexcept {
      return random;
    }
    // public System.Void Init(Org.BouncyCastle.Security.SecureRandom random)
    // Offset: 0x1256E68
    void Init(Org::BouncyCastle::Security::SecureRandom* random);
    // public System.Int32 AddPadding(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x1256E70
    int AddPadding(::Array<uint8_t>* input, int inOff);
    // public System.Int32 PadCount(System.Byte[] input)
    // Offset: 0x1256F58
    int PadCount(::Array<uint8_t>* input);
    // public System.Void .ctor()
    // Offset: 0x1257008
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X923Padding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Paddings::X923Padding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X923Padding*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Paddings.X923Padding
  #pragma pack(pop)
  static check_size<sizeof(X923Padding), 16 + sizeof(Org::BouncyCastle::Security::SecureRandom*)> __Org_BouncyCastle_Crypto_Paddings_X923PaddingSizeCheck;
  static_assert(sizeof(X923Padding) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Paddings::X923Padding*, "Org.BouncyCastle.Crypto.Paddings", "X923Padding");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::X923Padding::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Paddings::X923Padding::*)(Org::BouncyCastle::Security::SecureRandom*)>(&Org::BouncyCastle::Crypto::Paddings::X923Padding::Init)> {
  const MethodInfo* get() {
    static auto* random = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Paddings::X923Padding*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{random});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::X923Padding::AddPadding
// Il2CppName: AddPadding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Paddings::X923Padding::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Paddings::X923Padding::AddPadding)> {
  const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Paddings::X923Padding*), "AddPadding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::X923Padding::PadCount
// Il2CppName: PadCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Paddings::X923Padding::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Paddings::X923Padding::PadCount)> {
  const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Paddings::X923Padding*), "PadCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Paddings::X923Padding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
