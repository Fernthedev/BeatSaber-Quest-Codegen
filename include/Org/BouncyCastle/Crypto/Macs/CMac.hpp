// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IMac
#include "Org/BouncyCastle/Crypto/IMac.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Forward declaring type: CMac
  class CMac;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::CMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::CMac*, "Org.BouncyCastle.Crypto.Macs", "CMac");
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Macs.CMac
  // [TokenAttribute] Offset: FFFFFFFF
  class CMac : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IMac*/ {
    public:
    public:
    // private System.Byte[] ZEROES
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> ZEROES;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] mac
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> mac;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] buf
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> buf;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 bufOff
    // Size: 0x4
    // Offset: 0x28
    int bufOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bufOff and: cipher
    char __padding3[0x4] = {};
    // private Org.BouncyCastle.Crypto.IBlockCipher cipher
    // Size: 0x8
    // Offset: 0x30
    ::Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::IBlockCipher*) == 0x8);
    // private System.Int32 macSize
    // Size: 0x4
    // Offset: 0x38
    int macSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: macSize and: L
    char __padding5[0x4] = {};
    // private System.Byte[] L
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> L;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] Lu
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> Lu;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] Lu2
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<uint8_t> Lu2;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IMac
    operator ::Org::BouncyCastle::Crypto::IMac() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IMac*>(this);
    }
    // Creating interface conversion operator: i_IMac
    inline ::Org::BouncyCastle::Crypto::IMac* i_IMac() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::IMac*>(this);
    }
    // Get instance field reference: private System.Byte[] ZEROES
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_ZEROES();
    // Get instance field reference: private System.Byte[] mac
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_mac();
    // Get instance field reference: private System.Byte[] buf
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_buf();
    // Get instance field reference: private System.Int32 bufOff
    [[deprecated("Use field access instead!")]] int& dyn_bufOff();
    // Get instance field reference: private Org.BouncyCastle.Crypto.IBlockCipher cipher
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::IBlockCipher*& dyn_cipher();
    // Get instance field reference: private System.Int32 macSize
    [[deprecated("Use field access instead!")]] int& dyn_macSize();
    // Get instance field reference: private System.Byte[] L
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_L();
    // Get instance field reference: private System.Byte[] Lu
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_Lu();
    // Get instance field reference: private System.Byte[] Lu2
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_Lu2();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher)
    // Offset: 0x1E264F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CMac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Macs::CMac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CMac*, creationType>(cipher)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher, System.Int32 macSizeInBits)
    // Offset: 0x1E265BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CMac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int macSizeInBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Macs::CMac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CMac*, creationType>(cipher, macSizeInBits)));
    }
    // static private System.Int32 ShiftLeft(System.Byte[] block, System.Byte[] output)
    // Offset: 0x1E26B04
    static int ShiftLeft(::ArrayW<uint8_t> block, ::ArrayW<uint8_t> output);
    // static private System.Byte[] DoubleLu(System.Byte[] input)
    // Offset: 0x1E26B98
    static ::ArrayW<uint8_t> DoubleLu(::ArrayW<uint8_t> input);
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1E26C60
    void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetMacSize()
    // Offset: 0x1E26F40
    int GetMacSize();
    // public System.Void Update(System.Byte input)
    // Offset: 0x1E26F48
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] inBytes, System.Int32 inOff, System.Int32 len)
    // Offset: 0x1E27080
    void BlockUpdate(::ArrayW<uint8_t> inBytes, int inOff, int len);
    // public System.Int32 DoFinal(System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1E27324
    int DoFinal(::ArrayW<uint8_t> outBytes, int outOff);
    // public System.Void Reset()
    // Offset: 0x1E26E70
    void Reset();
  }; // Org.BouncyCastle.Crypto.Macs.CMac
  #pragma pack(pop)
  static check_size<sizeof(CMac), 80 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Macs_CMacSizeCheck;
  static_assert(sizeof(CMac) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CMac::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CMac::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CMac::ShiftLeft
// Il2CppName: ShiftLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Macs::CMac::ShiftLeft)> {
  static const MethodInfo* get() {
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CMac*), "ShiftLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, output});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CMac::DoubleLu
// Il2CppName: DoubleLu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Macs::CMac::DoubleLu)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CMac*), "DoubleLu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CMac::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::CMac::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Macs::CMac::Init)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CMac*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CMac::GetMacSize
// Il2CppName: GetMacSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::CMac::*)()>(&Org::BouncyCastle::Crypto::Macs::CMac::GetMacSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CMac*), "GetMacSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CMac::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::CMac::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Macs::CMac::Update)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CMac*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CMac::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::CMac::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Macs::CMac::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* inBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CMac*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBytes, inOff, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CMac::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::CMac::*)(::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Macs::CMac::DoFinal)> {
  static const MethodInfo* get() {
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CMac*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CMac::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::CMac::*)()>(&Org::BouncyCastle::Crypto::Macs::CMac::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CMac*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
