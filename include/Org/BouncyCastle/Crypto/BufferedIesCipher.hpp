// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.BufferedCipherBase
#include "Org/BouncyCastle/Crypto/BufferedCipherBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Forward declaring type: IesEngine
  class IesEngine;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.BufferedIesCipher
  // [TokenAttribute] Offset: FFFFFFFF
  class BufferedIesCipher : public Org::BouncyCastle::Crypto::BufferedCipherBase {
    public:
    // private readonly Org.BouncyCastle.Crypto.Engines.IesEngine engine
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Engines::IesEngine* engine;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Engines::IesEngine*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x18
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forEncryption and: buffer
    char __padding1[0x7] = {};
    // private System.IO.MemoryStream buffer
    // Size: 0x8
    // Offset: 0x20
    System::IO::MemoryStream* buffer;
    // Field size check
    static_assert(sizeof(System::IO::MemoryStream*) == 0x8);
    // Creating value type constructor for type: BufferedIesCipher
    BufferedIesCipher(Org::BouncyCastle::Crypto::Engines::IesEngine* engine_ = {}, bool forEncryption_ = {}, System::IO::MemoryStream* buffer_ = {}) noexcept : engine{engine_}, forEncryption{forEncryption_}, buffer{buffer_} {}
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.Engines.IesEngine engine
    Org::BouncyCastle::Crypto::Engines::IesEngine*& dyn_engine();
    // Get instance field reference: private System.Boolean forEncryption
    bool& dyn_forEncryption();
    // Get instance field reference: private System.IO.MemoryStream buffer
    System::IO::MemoryStream*& dyn_buffer();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Engines.IesEngine engine)
    // Offset: 0x1D590CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BufferedIesCipher* New_ctor(Org::BouncyCastle::Crypto::Engines::IesEngine* engine) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::BufferedIesCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BufferedIesCipher*, creationType>(engine)));
    }
    // public override System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1D591A8
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Void BufferedCipherBase::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public override System.Int32 GetBlockSize()
    // Offset: 0x1D59230
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::GetBlockSize()
    int GetBlockSize();
    // public override System.Int32 GetOutputSize(System.Int32 inputLen)
    // Offset: 0x1D59238
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::GetOutputSize(System.Int32 inputLen)
    int GetOutputSize(int inputLen);
    // public override System.Int32 GetUpdateOutputSize(System.Int32 inputLen)
    // Offset: 0x1D592F8
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::GetUpdateOutputSize(System.Int32 inputLen)
    int GetUpdateOutputSize(int inputLen);
    // public override System.Byte[] ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1D59300
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Byte[] BufferedCipherBase::ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    ::Array<uint8_t>* ProcessBytes(::Array<uint8_t>* input, int inOff, int length);
    // public override System.Byte[] DoFinal()
    // Offset: 0x1D59444
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Byte[] BufferedCipherBase::DoFinal()
    ::Array<uint8_t>* DoFinal();
    // public override System.Byte[] DoFinal(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1D594B4
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Byte[] BufferedCipherBase::DoFinal(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    ::Array<uint8_t>* DoFinal(::Array<uint8_t>* input, int inOff, int length);
    // public override System.Void Reset()
    // Offset: 0x1D594E8
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Void BufferedCipherBase::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.BufferedIesCipher
  #pragma pack(pop)
  static check_size<sizeof(BufferedIesCipher), 32 + sizeof(System::IO::MemoryStream*)> __Org_BouncyCastle_Crypto_BufferedIesCipherSizeCheck;
  static_assert(sizeof(BufferedIesCipher) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::BufferedIesCipher*, "Org.BouncyCastle.Crypto", "BufferedIesCipher");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedIesCipher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedIesCipher::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::BufferedIesCipher::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::BufferedIesCipher::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedIesCipher*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedIesCipher::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedIesCipher::*)()>(&Org::BouncyCastle::Crypto::BufferedIesCipher::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedIesCipher*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedIesCipher::GetOutputSize
// Il2CppName: GetOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedIesCipher::*)(int)>(&Org::BouncyCastle::Crypto::BufferedIesCipher::GetOutputSize)> {
  static const MethodInfo* get() {
    static auto* inputLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedIesCipher*), "GetOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputLen});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedIesCipher::GetUpdateOutputSize
// Il2CppName: GetUpdateOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::BufferedIesCipher::*)(int)>(&Org::BouncyCastle::Crypto::BufferedIesCipher::GetUpdateOutputSize)> {
  static const MethodInfo* get() {
    static auto* inputLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedIesCipher*), "GetUpdateOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputLen});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedIesCipher::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::BufferedIesCipher::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::BufferedIesCipher::ProcessBytes)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedIesCipher*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedIesCipher::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::BufferedIesCipher::*)()>(&Org::BouncyCastle::Crypto::BufferedIesCipher::DoFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedIesCipher*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedIesCipher::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::BufferedIesCipher::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::BufferedIesCipher::DoFinal)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedIesCipher*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::BufferedIesCipher::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::BufferedIesCipher::*)()>(&Org::BouncyCastle::Crypto::BufferedIesCipher::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::BufferedIesCipher*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
