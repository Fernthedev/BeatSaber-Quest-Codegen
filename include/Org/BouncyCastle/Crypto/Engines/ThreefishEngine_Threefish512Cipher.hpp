// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.ThreefishEngine
#include "Org/BouncyCastle/Crypto/Engines/ThreefishEngine.hpp"
// Including type: Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher
#include "Org/BouncyCastle/Crypto/Engines/ThreefishEngine_ThreefishCipher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher
  class ThreefishEngine::Threefish512Cipher : public Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher {
    public:
    // Creating value type constructor for type: Threefish512Cipher
    Threefish512Cipher() noexcept {}
    // System.Void .ctor(System.UInt64[] kw, System.UInt64[] t)
    // Offset: 0x1E516E0
    // Implemented from: Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher
    // Base method: System.Void ThreefishCipher::.ctor(System.UInt64[] kw, System.UInt64[] t)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreefishEngine::Threefish512Cipher* New_ctor(::Array<uint64_t>* kw, ::Array<uint64_t>* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish512Cipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreefishEngine::Threefish512Cipher*, creationType>(kw, t)));
    }
    // override System.Void EncryptBlock(System.UInt64[] block, System.UInt64[] outWords)
    // Offset: 0x1E54318
    // Implemented from: Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher
    // Base method: System.Void ThreefishCipher::EncryptBlock(System.UInt64[] block, System.UInt64[] outWords)
    void EncryptBlock(::Array<uint64_t>* block, ::Array<uint64_t>* outWords);
    // override System.Void DecryptBlock(System.UInt64[] block, System.UInt64[] state)
    // Offset: 0x1E54880
    // Implemented from: Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher
    // Base method: System.Void ThreefishCipher::DecryptBlock(System.UInt64[] block, System.UInt64[] state)
    void DecryptBlock(::Array<uint64_t>* block, ::Array<uint64_t>* state);
  }; // Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish512Cipher*, "Org.BouncyCastle.Crypto.Engines", "ThreefishEngine/Threefish512Cipher");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish512Cipher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish512Cipher::EncryptBlock
// Il2CppName: EncryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish512Cipher::*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish512Cipher::EncryptBlock)> {
  const MethodInfo* get() {
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* outWords = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish512Cipher*), "EncryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, outWords});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish512Cipher::DecryptBlock
// Il2CppName: DecryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish512Cipher::*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish512Cipher::DecryptBlock)> {
  const MethodInfo* get() {
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* state = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine::Threefish512Cipher*), "DecryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, state});
  }
};
