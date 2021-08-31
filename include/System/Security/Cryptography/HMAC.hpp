// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.KeyedHashAlgorithm
#include "System/Security/Cryptography/KeyedHashAlgorithm.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Skipping declaration: HashAlgorithm because it is already included!
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.HMAC
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9CB28
  class HMAC : public System::Security::Cryptography::KeyedHashAlgorithm {
    public:
    // private System.Int32 blockSizeValue
    // Size: 0x4
    // Offset: 0x30
    int blockSizeValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: blockSizeValue and: m_hashName
    char __padding0[0x4] = {};
    // System.String m_hashName
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* m_hashName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Security.Cryptography.HashAlgorithm m_hash1
    // Size: 0x8
    // Offset: 0x40
    System::Security::Cryptography::HashAlgorithm* m_hash1;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::HashAlgorithm*) == 0x8);
    // System.Security.Cryptography.HashAlgorithm m_hash2
    // Size: 0x8
    // Offset: 0x48
    System::Security::Cryptography::HashAlgorithm* m_hash2;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::HashAlgorithm*) == 0x8);
    // private System.Byte[] m_inner
    // Size: 0x8
    // Offset: 0x50
    ::Array<uint8_t>* m_inner;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] m_outer
    // Size: 0x8
    // Offset: 0x58
    ::Array<uint8_t>* m_outer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Boolean m_hashing
    // Size: 0x1
    // Offset: 0x60
    bool m_hashing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HMAC
    HMAC(int blockSizeValue_ = {}, ::Il2CppString* m_hashName_ = {}, System::Security::Cryptography::HashAlgorithm* m_hash1_ = {}, System::Security::Cryptography::HashAlgorithm* m_hash2_ = {}, ::Array<uint8_t>* m_inner_ = {}, ::Array<uint8_t>* m_outer_ = {}, bool m_hashing_ = {}) noexcept : blockSizeValue{blockSizeValue_}, m_hashName{m_hashName_}, m_hash1{m_hash1_}, m_hash2{m_hash2_}, m_inner{m_inner_}, m_outer{m_outer_}, m_hashing{m_hashing_} {}
    // Deleting conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept = delete;
    // Get instance field reference: private System.Int32 blockSizeValue
    int& dyn_blockSizeValue();
    // Get instance field reference: System.String m_hashName
    ::Il2CppString*& dyn_m_hashName();
    // Get instance field reference: System.Security.Cryptography.HashAlgorithm m_hash1
    System::Security::Cryptography::HashAlgorithm*& dyn_m_hash1();
    // Get instance field reference: System.Security.Cryptography.HashAlgorithm m_hash2
    System::Security::Cryptography::HashAlgorithm*& dyn_m_hash2();
    // Get instance field reference: private System.Byte[] m_inner
    ::Array<uint8_t>*& dyn_m_inner();
    // Get instance field reference: private System.Byte[] m_outer
    ::Array<uint8_t>*& dyn_m_outer();
    // Get instance field reference: private System.Boolean m_hashing
    bool& dyn_m_hashing();
    // protected System.Int32 get_BlockSizeValue()
    // Offset: 0x198ED5C
    int get_BlockSizeValue();
    // protected System.Void set_BlockSizeValue(System.Int32 value)
    // Offset: 0x198ED64
    void set_BlockSizeValue(int value);
    // private System.Void UpdateIOPadBuffers()
    // Offset: 0x198ED6C
    void UpdateIOPadBuffers();
    // System.Void InitializeKey(System.Byte[] key)
    // Offset: 0x198EEE8
    void InitializeKey(::Array<uint8_t>* key);
    // static public System.Security.Cryptography.HMAC Create()
    // Offset: 0x198F214
    static System::Security::Cryptography::HMAC* Create();
    // public override System.Byte[] get_Key()
    // Offset: 0x198F0EC
    // Implemented from: System.Security.Cryptography.KeyedHashAlgorithm
    // Base method: System.Byte[] KeyedHashAlgorithm::get_Key()
    ::Array<uint8_t>* get_Key();
    // public override System.Void set_Key(System.Byte[] value)
    // Offset: 0x198F16C
    // Implemented from: System.Security.Cryptography.KeyedHashAlgorithm
    // Base method: System.Void KeyedHashAlgorithm::set_Key(System.Byte[] value)
    void set_Key(::Array<uint8_t>* value);
    // protected System.Void .ctor()
    // Offset: 0x198FA98
    // Implemented from: System.Security.Cryptography.KeyedHashAlgorithm
    // Base method: System.Void KeyedHashAlgorithm::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMAC* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::HMAC::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMAC*, creationType>()));
    }
    // public override System.Void Initialize()
    // Offset: 0x198F284
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
    // protected override System.Void HashCore(System.Byte[] rgb, System.Int32 ib, System.Int32 cb)
    // Offset: 0x198F2D8
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] rgb, System.Int32 ib, System.Int32 cb)
    void HashCore(::Array<uint8_t>* rgb, int ib, int cb);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x198F554
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::Array<uint8_t>* HashFinal();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x198F8D0
    // Implemented from: System.Security.Cryptography.KeyedHashAlgorithm
    // Base method: System.Void KeyedHashAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Security.Cryptography.HMAC
  #pragma pack(pop)
  static check_size<sizeof(HMAC), 96 + sizeof(bool)> __System_Security_Cryptography_HMACSizeCheck;
  static_assert(sizeof(HMAC) == 0x61);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::HMAC*, "System.Security.Cryptography", "HMAC");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::HMAC::get_BlockSizeValue
// Il2CppName: get_BlockSizeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::HMAC::*)()>(&System::Security::Cryptography::HMAC::get_BlockSizeValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HMAC*), "get_BlockSizeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HMAC::set_BlockSizeValue
// Il2CppName: set_BlockSizeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HMAC::*)(int)>(&System::Security::Cryptography::HMAC::set_BlockSizeValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HMAC*), "set_BlockSizeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HMAC::UpdateIOPadBuffers
// Il2CppName: UpdateIOPadBuffers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HMAC::*)()>(&System::Security::Cryptography::HMAC::UpdateIOPadBuffers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HMAC*), "UpdateIOPadBuffers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HMAC::InitializeKey
// Il2CppName: InitializeKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HMAC::*)(::Array<uint8_t>*)>(&System::Security::Cryptography::HMAC::InitializeKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HMAC*), "InitializeKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HMAC::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::HMAC* (*)()>(&System::Security::Cryptography::HMAC::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HMAC*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HMAC::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::HMAC::*)()>(&System::Security::Cryptography::HMAC::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HMAC*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HMAC::set_Key
// Il2CppName: set_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HMAC::*)(::Array<uint8_t>*)>(&System::Security::Cryptography::HMAC::set_Key)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HMAC*), "set_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HMAC::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::HMAC::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HMAC::*)()>(&System::Security::Cryptography::HMAC::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HMAC*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HMAC::HashCore
// Il2CppName: HashCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HMAC::*)(::Array<uint8_t>*, int, int)>(&System::Security::Cryptography::HMAC::HashCore)> {
  static const MethodInfo* get() {
    static auto* rgb = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ib = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cb = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HMAC*), "HashCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgb, ib, cb});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HMAC::HashFinal
// Il2CppName: HashFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::HMAC::*)()>(&System::Security::Cryptography::HMAC::HashFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HMAC*), "HashFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HMAC::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HMAC::*)(bool)>(&System::Security::Cryptography::HMAC::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HMAC*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
