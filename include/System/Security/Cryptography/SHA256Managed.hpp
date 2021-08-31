// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.SHA256
#include "System/Security/Cryptography/SHA256.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.SHA256Managed
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9CD1C
  class SHA256Managed : public System::Security::Cryptography::SHA256 {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    // private System.Byte[] _buffer
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int64 _count
    // Size: 0x8
    // Offset: 0x30
    int64_t count;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.UInt32[] _stateSHA256
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint>* stateSHA256;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32[] _W
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint>* W;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // Creating value type constructor for type: SHA256Managed
    SHA256Managed(::Array<uint8_t>* buffer_ = {}, int64_t count_ = {}, ::Array<uint>* stateSHA256_ = {}, ::Array<uint>* W_ = {}) noexcept : buffer{buffer_}, count{count_}, stateSHA256{stateSHA256_}, W{W_} {}
    // Get static field: static private readonly System.UInt32[] _K
    static ::Array<uint>* _get__K();
    // Set static field: static private readonly System.UInt32[] _K
    static void _set__K(::Array<uint>* value);
    // Get instance field reference: private System.Byte[] _buffer
    ::Array<uint8_t>*& dyn__buffer();
    // Get instance field reference: private System.Int64 _count
    int64_t& dyn__count();
    // Get instance field reference: private System.UInt32[] _stateSHA256
    ::Array<uint>*& dyn__stateSHA256();
    // Get instance field reference: private System.UInt32[] _W
    ::Array<uint>*& dyn__W();
    // static private System.Void .cctor()
    // Offset: 0x1B439DC
    static void _cctor();
    // private System.Void InitializeState()
    // Offset: 0x1B42C1C
    void InitializeState();
    // private System.Void _HashData(System.Byte[] partIn, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x1B42D90
    void _HashData(::Array<uint8_t>* partIn, int ibStart, int cbSize);
    // private System.Byte[] _EndHash()
    // Offset: 0x1B42FAC
    ::Array<uint8_t>* _EndHash();
    // static private System.Void SHATransform(System.UInt32* expandedBuffer, System.UInt32* state, System.Byte* block)
    // Offset: 0x1B43168
    static void SHATransform(uint* expandedBuffer, uint* state, uint8_t* block);
    // static private System.UInt32 RotateRight(System.UInt32 x, System.Int32 n)
    // Offset: 0x1B438FC
    static uint RotateRight(uint x, int n);
    // static private System.UInt32 Ch(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x1B4386C
    static uint Ch(uint x, uint y, uint z);
    // static private System.UInt32 Maj(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x1B438E8
    static uint Maj(uint x, uint y, uint z);
    // static private System.UInt32 sigma_0(System.UInt32 x)
    // Offset: 0x1B43904
    static uint sigma_0(uint x);
    // static private System.UInt32 sigma_1(System.UInt32 x)
    // Offset: 0x1B43970
    static uint sigma_1(uint x);
    // static private System.UInt32 Sigma_0(System.UInt32 x)
    // Offset: 0x1B4387C
    static uint Sigma_0(uint x);
    // static private System.UInt32 Sigma_1(System.UInt32 x)
    // Offset: 0x1B43800
    static uint Sigma_1(uint x);
    // static private System.Void SHA256Expand(System.UInt32* x)
    // Offset: 0x1B43748
    static void SHA256Expand(uint* x);
    // public System.Void .ctor()
    // Offset: 0x1B42B28
    // Implemented from: System.Security.Cryptography.SHA256
    // Base method: System.Void SHA256::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SHA256Managed* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::SHA256Managed::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SHA256Managed*, creationType>()));
    }
    // public override System.Void Initialize()
    // Offset: 0x1B42D3C
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
    // protected override System.Void HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x1B42D8C
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::Array<uint8_t>* rgb, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x1B42FA8
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::Array<uint8_t>* HashFinal();
  }; // System.Security.Cryptography.SHA256Managed
  #pragma pack(pop)
  static check_size<sizeof(SHA256Managed), 64 + sizeof(::Array<uint>*)> __System_Security_Cryptography_SHA256ManagedSizeCheck;
  static_assert(sizeof(SHA256Managed) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SHA256Managed*, "System.Security.Cryptography", "SHA256Managed");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::SHA256Managed::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::SHA256Managed::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA256Managed*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA256Managed::InitializeState
// Il2CppName: InitializeState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA256Managed::*)()>(&System::Security::Cryptography::SHA256Managed::InitializeState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA256Managed*), "InitializeState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA256Managed::_HashData
// Il2CppName: _HashData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA256Managed::*)(::Array<uint8_t>*, int, int)>(&System::Security::Cryptography::SHA256Managed::_HashData)> {
  static const MethodInfo* get() {
    static auto* partIn = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ibStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cbSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA256Managed*), "_HashData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{partIn, ibStart, cbSize});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA256Managed::_EndHash
// Il2CppName: _EndHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::SHA256Managed::*)()>(&System::Security::Cryptography::SHA256Managed::_EndHash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA256Managed*), "_EndHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA256Managed::SHATransform
// Il2CppName: SHATransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint*, uint*, uint8_t*)>(&System::Security::Cryptography::SHA256Managed::SHATransform)> {
  static const MethodInfo* get() {
    static auto* expandedBuffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt32"))->byval_arg;
    static auto* state = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt32"))->byval_arg;
    static auto* block = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA256Managed*), "SHATransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expandedBuffer, state, block});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA256Managed::RotateRight
// Il2CppName: RotateRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, int)>(&System::Security::Cryptography::SHA256Managed::RotateRight)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA256Managed*), "RotateRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, n});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA256Managed::Ch
// Il2CppName: Ch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, uint)>(&System::Security::Cryptography::SHA256Managed::Ch)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA256Managed*), "Ch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA256Managed::Maj
// Il2CppName: Maj
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, uint)>(&System::Security::Cryptography::SHA256Managed::Maj)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA256Managed*), "Maj", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA256Managed::sigma_0
// Il2CppName: sigma_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&System::Security::Cryptography::SHA256Managed::sigma_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA256Managed*), "sigma_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA256Managed::sigma_1
// Il2CppName: sigma_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&System::Security::Cryptography::SHA256Managed::sigma_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA256Managed*), "sigma_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA256Managed::Sigma_0
// Il2CppName: Sigma_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&System::Security::Cryptography::SHA256Managed::Sigma_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA256Managed*), "Sigma_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA256Managed::Sigma_1
// Il2CppName: Sigma_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&System::Security::Cryptography::SHA256Managed::Sigma_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA256Managed*), "Sigma_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA256Managed::SHA256Expand
// Il2CppName: SHA256Expand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint*)>(&System::Security::Cryptography::SHA256Managed::SHA256Expand)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt32"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA256Managed*), "SHA256Expand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA256Managed::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::SHA256Managed::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA256Managed::*)()>(&System::Security::Cryptography::SHA256Managed::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA256Managed*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA256Managed::HashCore
// Il2CppName: HashCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA256Managed::*)(::Array<uint8_t>*, int, int)>(&System::Security::Cryptography::SHA256Managed::HashCore)> {
  static const MethodInfo* get() {
    static auto* rgb = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ibStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cbSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA256Managed*), "HashCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgb, ibStart, cbSize});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA256Managed::HashFinal
// Il2CppName: HashFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::SHA256Managed::*)()>(&System::Security::Cryptography::SHA256Managed::HashFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA256Managed*), "HashFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
