// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Cryptography.RC4
#include "Mono/Security/Cryptography/RC4.hpp"
// Including type: System.Security.Cryptography.ICryptoTransform
#include "System/Security/Cryptography/ICryptoTransform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x5B
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.ARC4Managed
  class ARC4Managed : public Mono::Security::Cryptography::RC4/*, public System::Security::Cryptography::ICryptoTransform*/ {
    public:
    // Writing base type padding for base size: 0x44 to desired offset: 0x48
    char ___base_padding[0x4] = {};
    // private System.Byte[] key
    // Size: 0x8
    // Offset: 0x48
    ::Array<uint8_t>* key;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] state
    // Size: 0x8
    // Offset: 0x50
    ::Array<uint8_t>* state;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte x
    // Size: 0x1
    // Offset: 0x58
    uint8_t x;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte y
    // Size: 0x1
    // Offset: 0x59
    uint8_t y;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Boolean m_disposed
    // Size: 0x1
    // Offset: 0x5A
    bool m_disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ARC4Managed
    ARC4Managed(::Array<uint8_t>* key_ = {}, ::Array<uint8_t>* state_ = {}, uint8_t x_ = {}, uint8_t y_ = {}, bool m_disposed_ = {}) noexcept : key{key_}, state{state_}, x{x_}, y{y_}, m_disposed{m_disposed_} {}
    // Creating interface conversion operator: operator System::Security::Cryptography::ICryptoTransform
    operator System::Security::Cryptography::ICryptoTransform() noexcept {
      return *reinterpret_cast<System::Security::Cryptography::ICryptoTransform*>(this);
    }
    // public System.Boolean get_CanTransformMultipleBlocks()
    // Offset: 0x1D7301C
    bool get_CanTransformMultipleBlocks();
    // public System.Int32 get_InputBlockSize()
    // Offset: 0x1D73024
    int get_InputBlockSize();
    // public System.Int32 get_OutputBlockSize()
    // Offset: 0x1D7302C
    int get_OutputBlockSize();
    // private System.Void KeySetup(System.Byte[] key)
    // Offset: 0x1D72DBC
    void KeySetup(::Array<uint8_t>* key);
    // private System.Void CheckInput(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1D73034
    void CheckInput(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // public System.Int32 TransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0x1D7317C
    int TransformBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount, ::Array<uint8_t>* outputBuffer, int outputOffset);
    // private System.Int32 InternalTransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0x1D732E8
    int InternalTransformBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount, ::Array<uint8_t>* outputBuffer, int outputOffset);
    // public System.Byte[] TransformFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1D73440
    ::Array<uint8_t>* TransformFinalBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // public System.Void .ctor()
    // Offset: 0x1D729FC
    // Implemented from: Mono.Security.Cryptography.RC4
    // Base method: System.Void RC4::.ctor()
    // Base method: System.Void SymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ARC4Managed* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Cryptography::ARC4Managed::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ARC4Managed*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x1D72B18
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1D72B8C
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Byte[] get_Key()
    // Offset: 0x1D72C48
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Byte[] SymmetricAlgorithm::get_Key()
    ::Array<uint8_t>* get_Key();
    // public override System.Void set_Key(System.Byte[] value)
    // Offset: 0x1D72CE4
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_Key(System.Byte[] value)
    void set_Key(::Array<uint8_t>* value);
    // public override System.Security.Cryptography.ICryptoTransform CreateEncryptor(System.Byte[] rgbKey, System.Byte[] rgvIV)
    // Offset: 0x1D72EB0
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateEncryptor(System.Byte[] rgbKey, System.Byte[] rgvIV)
    System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Array<uint8_t>* rgbKey, ::Array<uint8_t>* rgvIV);
    // public override System.Security.Cryptography.ICryptoTransform CreateDecryptor(System.Byte[] rgbKey, System.Byte[] rgvIV)
    // Offset: 0x1D72EDC
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateDecryptor(System.Byte[] rgbKey, System.Byte[] rgvIV)
    System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Array<uint8_t>* rgbKey, ::Array<uint8_t>* rgvIV);
    // public override System.Void GenerateIV()
    // Offset: 0x1D72F14
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateIV()
    void GenerateIV();
    // public override System.Void GenerateKey()
    // Offset: 0x1D72F78
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateKey()
    void GenerateKey();
  }; // Mono.Security.Cryptography.ARC4Managed
  #pragma pack(pop)
  static check_size<sizeof(ARC4Managed), 90 + sizeof(bool)> __Mono_Security_Cryptography_ARC4ManagedSizeCheck;
  static_assert(sizeof(ARC4Managed) == 0x5B);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::ARC4Managed*, "Mono.Security.Cryptography", "ARC4Managed");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed::get_CanTransformMultipleBlocks
// Il2CppName: get_CanTransformMultipleBlocks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::ARC4Managed::*)()>(&Mono::Security::Cryptography::ARC4Managed::get_CanTransformMultipleBlocks)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed*), "get_CanTransformMultipleBlocks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed::get_InputBlockSize
// Il2CppName: get_InputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Cryptography::ARC4Managed::*)()>(&Mono::Security::Cryptography::ARC4Managed::get_InputBlockSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed*), "get_InputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed::get_OutputBlockSize
// Il2CppName: get_OutputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Cryptography::ARC4Managed::*)()>(&Mono::Security::Cryptography::ARC4Managed::get_OutputBlockSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed*), "get_OutputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed::KeySetup
// Il2CppName: KeySetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::ARC4Managed::*)(::Array<uint8_t>*)>(&Mono::Security::Cryptography::ARC4Managed::KeySetup)> {
  const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed*), "KeySetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed::CheckInput
// Il2CppName: CheckInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::ARC4Managed::*)(::Array<uint8_t>*, int, int)>(&Mono::Security::Cryptography::ARC4Managed::CheckInput)> {
  const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed*), "CheckInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed::TransformBlock
// Il2CppName: TransformBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Cryptography::ARC4Managed::*)(::Array<uint8_t>*, int, int, ::Array<uint8_t>*, int)>(&Mono::Security::Cryptography::ARC4Managed::TransformBlock)> {
  const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed*), "TransformBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed::InternalTransformBlock
// Il2CppName: InternalTransformBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Cryptography::ARC4Managed::*)(::Array<uint8_t>*, int, int, ::Array<uint8_t>*, int)>(&Mono::Security::Cryptography::ARC4Managed::InternalTransformBlock)> {
  const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed*), "InternalTransformBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed::TransformFinalBlock
// Il2CppName: TransformFinalBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Mono::Security::Cryptography::ARC4Managed::*)(::Array<uint8_t>*, int, int)>(&Mono::Security::Cryptography::ARC4Managed::TransformFinalBlock)> {
  const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed*), "TransformFinalBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::ARC4Managed::*)()>(&Mono::Security::Cryptography::ARC4Managed::Finalize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::ARC4Managed::*)(bool)>(&Mono::Security::Cryptography::ARC4Managed::Dispose)> {
  const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Mono::Security::Cryptography::ARC4Managed::*)()>(&Mono::Security::Cryptography::ARC4Managed::get_Key)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed::set_Key
// Il2CppName: set_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::ARC4Managed::*)(::Array<uint8_t>*)>(&Mono::Security::Cryptography::ARC4Managed::set_Key)> {
  const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed*), "set_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed::CreateEncryptor
// Il2CppName: CreateEncryptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::ICryptoTransform* (Mono::Security::Cryptography::ARC4Managed::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&Mono::Security::Cryptography::ARC4Managed::CreateEncryptor)> {
  const MethodInfo* get() {
    static auto* rgbKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* rgvIV = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed*), "CreateEncryptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbKey, rgvIV});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed::CreateDecryptor
// Il2CppName: CreateDecryptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::ICryptoTransform* (Mono::Security::Cryptography::ARC4Managed::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&Mono::Security::Cryptography::ARC4Managed::CreateDecryptor)> {
  const MethodInfo* get() {
    static auto* rgbKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* rgvIV = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed*), "CreateDecryptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbKey, rgvIV});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed::GenerateIV
// Il2CppName: GenerateIV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::ARC4Managed::*)()>(&Mono::Security::Cryptography::ARC4Managed::GenerateIV)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed*), "GenerateIV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::ARC4Managed::GenerateKey
// Il2CppName: GenerateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::ARC4Managed::*)()>(&Mono::Security::Cryptography::ARC4Managed::GenerateKey)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::ARC4Managed*), "GenerateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
