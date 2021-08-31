// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IMac
#include "Org/BouncyCastle/Crypto/IMac.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Macs.CMac
  // [TokenAttribute] Offset: FFFFFFFF
  class CMac : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IMac*/ {
    public:
    // private System.Byte[] ZEROES
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* ZEROES;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] mac
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* mac;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] buf
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* buf;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
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
    Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IBlockCipher*) == 0x8);
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
    ::Array<uint8_t>* L;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] Lu
    // Size: 0x8
    // Offset: 0x48
    ::Array<uint8_t>* Lu;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] Lu2
    // Size: 0x8
    // Offset: 0x50
    ::Array<uint8_t>* Lu2;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: CMac
    CMac(::Array<uint8_t>* ZEROES_ = {}, ::Array<uint8_t>* mac_ = {}, ::Array<uint8_t>* buf_ = {}, int bufOff_ = {}, Org::BouncyCastle::Crypto::IBlockCipher* cipher_ = {}, int macSize_ = {}, ::Array<uint8_t>* L_ = {}, ::Array<uint8_t>* Lu_ = {}, ::Array<uint8_t>* Lu2_ = {}) noexcept : ZEROES{ZEROES_}, mac{mac_}, buf{buf_}, bufOff{bufOff_}, cipher{cipher_}, macSize{macSize_}, L{L_}, Lu{Lu_}, Lu2{Lu2_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IMac
    operator Org::BouncyCastle::Crypto::IMac() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IMac*>(this);
    }
    // Get instance field: private System.Byte[] ZEROES
    ::Array<uint8_t>* _get_ZEROES();
    // Set instance field: private System.Byte[] ZEROES
    void _set_ZEROES(::Array<uint8_t>* value);
    // Get instance field: private System.Byte[] mac
    ::Array<uint8_t>* _get_mac();
    // Set instance field: private System.Byte[] mac
    void _set_mac(::Array<uint8_t>* value);
    // Get instance field: private System.Byte[] buf
    ::Array<uint8_t>* _get_buf();
    // Set instance field: private System.Byte[] buf
    void _set_buf(::Array<uint8_t>* value);
    // Get instance field: private System.Int32 bufOff
    int _get_bufOff();
    // Set instance field: private System.Int32 bufOff
    void _set_bufOff(int value);
    // Get instance field: private Org.BouncyCastle.Crypto.IBlockCipher cipher
    Org::BouncyCastle::Crypto::IBlockCipher* _get_cipher();
    // Set instance field: private Org.BouncyCastle.Crypto.IBlockCipher cipher
    void _set_cipher(Org::BouncyCastle::Crypto::IBlockCipher* value);
    // Get instance field: private System.Int32 macSize
    int _get_macSize();
    // Set instance field: private System.Int32 macSize
    void _set_macSize(int value);
    // Get instance field: private System.Byte[] L
    ::Array<uint8_t>* _get_L();
    // Set instance field: private System.Byte[] L
    void _set_L(::Array<uint8_t>* value);
    // Get instance field: private System.Byte[] Lu
    ::Array<uint8_t>* _get_Lu();
    // Set instance field: private System.Byte[] Lu
    void _set_Lu(::Array<uint8_t>* value);
    // Get instance field: private System.Byte[] Lu2
    ::Array<uint8_t>* _get_Lu2();
    // Set instance field: private System.Byte[] Lu2
    void _set_Lu2(::Array<uint8_t>* value);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher)
    // Offset: 0x190B240
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CMac* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::CMac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CMac*, creationType>(cipher)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher, System.Int32 macSizeInBits)
    // Offset: 0x190B30C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CMac* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher, int macSizeInBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::CMac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CMac*, creationType>(cipher, macSizeInBits)));
    }
    // static private System.Int32 ShiftLeft(System.Byte[] block, System.Byte[] output)
    // Offset: 0x190B854
    static int ShiftLeft(::Array<uint8_t>* block, ::Array<uint8_t>* output);
    // static private System.Byte[] DoubleLu(System.Byte[] input)
    // Offset: 0x190B8E8
    static ::Array<uint8_t>* DoubleLu(::Array<uint8_t>* input);
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x190B9B0
    void Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetMacSize()
    // Offset: 0x190BC90
    int GetMacSize();
    // public System.Void Update(System.Byte input)
    // Offset: 0x190BC98
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] inBytes, System.Int32 inOff, System.Int32 len)
    // Offset: 0x190BDD0
    void BlockUpdate(::Array<uint8_t>* inBytes, int inOff, int len);
    // public System.Int32 DoFinal(System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x190C074
    int DoFinal(::Array<uint8_t>* outBytes, int outOff);
    // public System.Void Reset()
    // Offset: 0x190BBC0
    void Reset();
  }; // Org.BouncyCastle.Crypto.Macs.CMac
  #pragma pack(pop)
  static check_size<sizeof(CMac), 80 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Macs_CMacSizeCheck;
  static_assert(sizeof(CMac) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::CMac*, "Org.BouncyCastle.Crypto.Macs", "CMac");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Macs::CMac::ShiftLeft)> {
  static const MethodInfo* get() {
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CMac*), "ShiftLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, output});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CMac::DoubleLu
// Il2CppName: DoubleLu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Macs::CMac::DoubleLu)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CMac*), "DoubleLu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CMac::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::CMac::*)(Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Macs::CMac::Init)> {
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::CMac::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Macs::CMac::BlockUpdate)> {
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::CMac::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Macs::CMac::DoFinal)> {
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
