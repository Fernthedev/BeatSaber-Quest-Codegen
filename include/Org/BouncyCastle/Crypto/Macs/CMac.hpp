// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher)
    // Offset: 0x18C1D4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CMac* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::CMac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CMac*, creationType>(cipher)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher, System.Int32 macSizeInBits)
    // Offset: 0x18C1E18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CMac* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher, int macSizeInBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::CMac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CMac*, creationType>(cipher, macSizeInBits)));
    }
    // static private System.Int32 ShiftLeft(System.Byte[] block, System.Byte[] output)
    // Offset: 0x18C2360
    static int ShiftLeft(::Array<uint8_t>* block, ::Array<uint8_t>* output);
    // static private System.Byte[] DoubleLu(System.Byte[] input)
    // Offset: 0x18C23F4
    static ::Array<uint8_t>* DoubleLu(::Array<uint8_t>* input);
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x18C24BC
    void Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetMacSize()
    // Offset: 0x18C279C
    int GetMacSize();
    // public System.Void Update(System.Byte input)
    // Offset: 0x18C27A4
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] inBytes, System.Int32 inOff, System.Int32 len)
    // Offset: 0x18C28DC
    void BlockUpdate(::Array<uint8_t>* inBytes, int inOff, int len);
    // public System.Int32 DoFinal(System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x18C2B80
    int DoFinal(::Array<uint8_t>* outBytes, int outOff);
    // public System.Void Reset()
    // Offset: 0x18C26CC
    void Reset();
  }; // Org.BouncyCastle.Crypto.Macs.CMac
  #pragma pack(pop)
  static check_size<sizeof(CMac), 80 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Macs_CMacSizeCheck;
  static_assert(sizeof(CMac) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::CMac*, "Org.BouncyCastle.Crypto.Macs", "CMac");
// Writing includes for template specializations
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
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
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CMac*), "ShiftLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CMac::DoubleLu
// Il2CppName: DoubleLu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Macs::CMac::DoubleLu)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CMac*), "DoubleLu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CMac::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::CMac::*)(Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Macs::CMac::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CMac*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::ICipherParameters*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CMac::GetMacSize
// Il2CppName: GetMacSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::CMac::*)()>(&Org::BouncyCastle::Crypto::Macs::CMac::GetMacSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CMac*), "GetMacSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CMac::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::CMac::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Macs::CMac::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CMac*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint8_t>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CMac::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::CMac::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Macs::CMac::BlockUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CMac*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CMac::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::CMac::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Macs::CMac::DoFinal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CMac*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::CMac::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::CMac::*)()>(&Org::BouncyCastle::Crypto::Macs::CMac::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::CMac*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
