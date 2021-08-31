// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Cryptography.MD4
#include "Mono/Security/Cryptography/MD4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.MD4Managed
  // [TokenAttribute] Offset: FFFFFFFF
  class MD4Managed : public Mono::Security::Cryptography::MD4 {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    // private System.UInt32[] state
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint>* state;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.UInt32[] count
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint>* count;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32[] x
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint>* x;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.Byte[] digest
    // Size: 0x8
    // Offset: 0x48
    ::Array<uint8_t>* digest;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: MD4Managed
    MD4Managed(::Array<uint>* state_ = {}, ::Array<uint8_t>* buffer_ = {}, ::Array<uint>* count_ = {}, ::Array<uint>* x_ = {}, ::Array<uint8_t>* digest_ = {}) noexcept : state{state_}, buffer{buffer_}, count{count_}, x{x_}, digest{digest_} {}
    // Get instance field: private System.UInt32[] state
    ::Array<uint>* _get_state();
    // Set instance field: private System.UInt32[] state
    void _set_state(::Array<uint>* value);
    // Get instance field: private System.Byte[] buffer
    ::Array<uint8_t>* _get_buffer();
    // Set instance field: private System.Byte[] buffer
    void _set_buffer(::Array<uint8_t>* value);
    // Get instance field: private System.UInt32[] count
    ::Array<uint>* _get_count();
    // Set instance field: private System.UInt32[] count
    void _set_count(::Array<uint>* value);
    // Get instance field: private System.UInt32[] x
    ::Array<uint>* _get_x();
    // Set instance field: private System.UInt32[] x
    void _set_x(::Array<uint>* value);
    // Get instance field: private System.Byte[] digest
    ::Array<uint8_t>* _get_digest();
    // Set instance field: private System.Byte[] digest
    void _set_digest(::Array<uint8_t>* value);
    // private System.Byte[] Padding(System.Int32 nLength)
    // Offset: 0x1E017B0
    ::Array<uint8_t>* Padding(int nLength);
    // private System.UInt32 F(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x1E01838
    uint F(uint x, uint y, uint z);
    // private System.UInt32 G(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x1E01848
    uint G(uint x, uint y, uint z);
    // private System.UInt32 H(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x1E0185C
    uint H(uint x, uint y, uint z);
    // private System.UInt32 ROL(System.UInt32 x, System.Byte n)
    // Offset: 0x1E01868
    uint ROL(uint x, uint8_t n);
    // private System.Void FF(ref System.UInt32 a, System.UInt32 b, System.UInt32 c, System.UInt32 d, System.UInt32 x, System.Byte s)
    // Offset: 0x1E01874
    void FF(ByRef<uint> a, uint b, uint c, uint d, uint x, uint8_t s);
    // private System.Void GG(ref System.UInt32 a, System.UInt32 b, System.UInt32 c, System.UInt32 d, System.UInt32 x, System.Byte s)
    // Offset: 0x1E0189C
    void GG(ByRef<uint> a, uint b, uint c, uint d, uint x, uint8_t s);
    // private System.Void HH(ref System.UInt32 a, System.UInt32 b, System.UInt32 c, System.UInt32 d, System.UInt32 x, System.Byte s)
    // Offset: 0x1E018D4
    void HH(ByRef<uint> a, uint b, uint c, uint d, uint x, uint8_t s);
    // private System.Void Encode(System.Byte[] output, System.UInt32[] input)
    // Offset: 0x1E016AC
    void Encode(::Array<uint8_t>* output, ::Array<uint>* input);
    // private System.Void Decode(System.UInt32[] output, System.Byte[] input, System.Int32 index)
    // Offset: 0x1E01904
    void Decode(::Array<uint>* output, ::Array<uint8_t>* input, int index);
    // private System.Void MD4Transform(System.UInt32[] state, System.Byte[] block, System.Int32 index)
    // Offset: 0x1E00F14
    void MD4Transform(::Array<uint>* state, ::Array<uint8_t>* block, int index);
    // public System.Void .ctor()
    // Offset: 0x1E00C0C
    // Implemented from: Mono.Security.Cryptography.MD4
    // Base method: System.Void MD4::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MD4Managed* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Cryptography::MD4Managed::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MD4Managed*, creationType>()));
    }
    // public override System.Void Initialize()
    // Offset: 0x1E00CD8
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
    // protected override System.Void HashCore(System.Byte[] array, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x1E00DD0
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] array, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::Array<uint8_t>* array, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x1E01598
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::Array<uint8_t>* HashFinal();
  }; // Mono.Security.Cryptography.MD4Managed
  #pragma pack(pop)
  static check_size<sizeof(MD4Managed), 72 + sizeof(::Array<uint8_t>*)> __Mono_Security_Cryptography_MD4ManagedSizeCheck;
  static_assert(sizeof(MD4Managed) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::MD4Managed*, "Mono.Security.Cryptography", "MD4Managed");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::Padding
// Il2CppName: Padding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Mono::Security::Cryptography::MD4Managed::*)(int)>(&Mono::Security::Cryptography::MD4Managed::Padding)> {
  static const MethodInfo* get() {
    static auto* nLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed*), "Padding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nLength});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::F
// Il2CppName: F
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Mono::Security::Cryptography::MD4Managed::*)(uint, uint, uint)>(&Mono::Security::Cryptography::MD4Managed::F)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed*), "F", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::G
// Il2CppName: G
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Mono::Security::Cryptography::MD4Managed::*)(uint, uint, uint)>(&Mono::Security::Cryptography::MD4Managed::G)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed*), "G", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::H
// Il2CppName: H
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Mono::Security::Cryptography::MD4Managed::*)(uint, uint, uint)>(&Mono::Security::Cryptography::MD4Managed::H)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed*), "H", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::ROL
// Il2CppName: ROL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Mono::Security::Cryptography::MD4Managed::*)(uint, uint8_t)>(&Mono::Security::Cryptography::MD4Managed::ROL)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed*), "ROL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, n});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::FF
// Il2CppName: FF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD4Managed::*)(ByRef<uint>, uint, uint, uint, uint, uint8_t)>(&Mono::Security::Cryptography::MD4Managed::FF)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed*), "FF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d, x, s});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::GG
// Il2CppName: GG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD4Managed::*)(ByRef<uint>, uint, uint, uint, uint, uint8_t)>(&Mono::Security::Cryptography::MD4Managed::GG)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed*), "GG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d, x, s});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::HH
// Il2CppName: HH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD4Managed::*)(ByRef<uint>, uint, uint, uint, uint, uint8_t)>(&Mono::Security::Cryptography::MD4Managed::HH)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed*), "HH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c, d, x, s});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD4Managed::*)(::Array<uint8_t>*, ::Array<uint>*)>(&Mono::Security::Cryptography::MD4Managed::Encode)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, input});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD4Managed::*)(::Array<uint>*, ::Array<uint8_t>*, int)>(&Mono::Security::Cryptography::MD4Managed::Decode)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, input, index});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::MD4Transform
// Il2CppName: MD4Transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD4Managed::*)(::Array<uint>*, ::Array<uint8_t>*, int)>(&Mono::Security::Cryptography::MD4Managed::MD4Transform)> {
  static const MethodInfo* get() {
    static auto* state = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed*), "MD4Transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, block, index});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD4Managed::*)()>(&Mono::Security::Cryptography::MD4Managed::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::HashCore
// Il2CppName: HashCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD4Managed::*)(::Array<uint8_t>*, int, int)>(&Mono::Security::Cryptography::MD4Managed::HashCore)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ibStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cbSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed*), "HashCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, ibStart, cbSize});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD4Managed::HashFinal
// Il2CppName: HashFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Mono::Security::Cryptography::MD4Managed::*)()>(&Mono::Security::Cryptography::MD4Managed::HashFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD4Managed*), "HashFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
