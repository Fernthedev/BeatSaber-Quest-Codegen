// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.MD5
#include "System/Security/Cryptography/MD5.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.MD5CryptoServiceProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA2D68
  class MD5CryptoServiceProvider : public System::Security::Cryptography::MD5 {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    // private System.UInt32[] _H
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint>* H;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32[] buff
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint>* buff;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt64 count
    // Size: 0x8
    // Offset: 0x38
    uint64_t count;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.Byte[] _ProcessingBuffer
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint8_t>* ProcessingBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 _ProcessingBufferCount
    // Size: 0x4
    // Offset: 0x48
    int ProcessingBufferCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MD5CryptoServiceProvider
    MD5CryptoServiceProvider(::Array<uint>* H_ = {}, ::Array<uint>* buff_ = {}, uint64_t count_ = {}, ::Array<uint8_t>* ProcessingBuffer_ = {}, int ProcessingBufferCount_ = {}) noexcept : H{H_}, buff{buff_}, count{count_}, ProcessingBuffer{ProcessingBuffer_}, ProcessingBufferCount{ProcessingBufferCount_} {}
    // Get static field: static private readonly System.UInt32[] K
    static ::Array<uint>* _get_K();
    // Set static field: static private readonly System.UInt32[] K
    static void _set_K(::Array<uint>* value);
    // Get instance field reference: private System.UInt32[] _H
    ::Array<uint>*& dyn__H();
    // Get instance field reference: private System.UInt32[] buff
    ::Array<uint>*& dyn_buff();
    // Get instance field reference: private System.UInt64 count
    uint64_t& dyn_count();
    // Get instance field reference: private System.Byte[] _ProcessingBuffer
    ::Array<uint8_t>*& dyn__ProcessingBuffer();
    // Get instance field reference: private System.Int32 _ProcessingBufferCount
    int& dyn__ProcessingBufferCount();
    // static private System.Void .cctor()
    // Offset: 0x19977F4
    static void _cctor();
    // private System.Void ProcessBlock(System.Byte[] inputBuffer, System.Int32 inputOffset)
    // Offset: 0x19966F8
    void ProcessBlock(::Array<uint8_t>* inputBuffer, int inputOffset);
    // private System.Void ProcessFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x19974A0
    void ProcessFinalBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // System.Void AddLength(System.UInt64 length, System.Byte[] buffer, System.Int32 position)
    // Offset: 0x19976F8
    void AddLength(uint64_t length, ::Array<uint8_t>* buffer, int position);
    // public System.Void .ctor()
    // Offset: 0x198D5B4
    // Implemented from: System.Security.Cryptography.MD5
    // Base method: System.Void MD5::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MD5CryptoServiceProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::MD5CryptoServiceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MD5CryptoServiceProvider*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x19964EC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1996564
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // protected override System.Void HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x19965F4
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::Array<uint8_t>* rgb, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x19973B0
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::Array<uint8_t>* HashFinal();
    // public override System.Void Initialize()
    // Offset: 0x1997654
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
  }; // System.Security.Cryptography.MD5CryptoServiceProvider
  #pragma pack(pop)
  static check_size<sizeof(MD5CryptoServiceProvider), 72 + sizeof(int)> __System_Security_Cryptography_MD5CryptoServiceProviderSizeCheck;
  static_assert(sizeof(MD5CryptoServiceProvider) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::MD5CryptoServiceProvider*, "System.Security.Cryptography", "MD5CryptoServiceProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::MD5CryptoServiceProvider::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::MD5CryptoServiceProvider::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::MD5CryptoServiceProvider*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::MD5CryptoServiceProvider::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::MD5CryptoServiceProvider::*)(::Array<uint8_t>*, int)>(&System::Security::Cryptography::MD5CryptoServiceProvider::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::MD5CryptoServiceProvider*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::MD5CryptoServiceProvider::ProcessFinalBlock
// Il2CppName: ProcessFinalBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::MD5CryptoServiceProvider::*)(::Array<uint8_t>*, int, int)>(&System::Security::Cryptography::MD5CryptoServiceProvider::ProcessFinalBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::MD5CryptoServiceProvider*), "ProcessFinalBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::MD5CryptoServiceProvider::AddLength
// Il2CppName: AddLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::MD5CryptoServiceProvider::*)(uint64_t, ::Array<uint8_t>*, int)>(&System::Security::Cryptography::MD5CryptoServiceProvider::AddLength)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::MD5CryptoServiceProvider*), "AddLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length, buffer, position});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::MD5CryptoServiceProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::MD5CryptoServiceProvider::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::MD5CryptoServiceProvider::*)()>(&System::Security::Cryptography::MD5CryptoServiceProvider::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::MD5CryptoServiceProvider*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::MD5CryptoServiceProvider::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::MD5CryptoServiceProvider::*)(bool)>(&System::Security::Cryptography::MD5CryptoServiceProvider::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::MD5CryptoServiceProvider*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::MD5CryptoServiceProvider::HashCore
// Il2CppName: HashCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::MD5CryptoServiceProvider::*)(::Array<uint8_t>*, int, int)>(&System::Security::Cryptography::MD5CryptoServiceProvider::HashCore)> {
  static const MethodInfo* get() {
    static auto* rgb = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ibStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cbSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::MD5CryptoServiceProvider*), "HashCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgb, ibStart, cbSize});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::MD5CryptoServiceProvider::HashFinal
// Il2CppName: HashFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::MD5CryptoServiceProvider::*)()>(&System::Security::Cryptography::MD5CryptoServiceProvider::HashFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::MD5CryptoServiceProvider*), "HashFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::MD5CryptoServiceProvider::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::MD5CryptoServiceProvider::*)()>(&System::Security::Cryptography::MD5CryptoServiceProvider::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::MD5CryptoServiceProvider*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
