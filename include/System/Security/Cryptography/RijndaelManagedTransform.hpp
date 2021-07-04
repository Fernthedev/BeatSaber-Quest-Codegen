// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.ICryptoTransform
#include "System/Security/Cryptography/ICryptoTransform.hpp"
// Including type: System.Security.Cryptography.CipherMode
#include "System/Security/Cryptography/CipherMode.hpp"
// Including type: System.Security.Cryptography.PaddingMode
#include "System/Security/Cryptography/PaddingMode.hpp"
// Including type: System.Security.Cryptography.RijndaelManagedTransformMode
#include "System/Security/Cryptography/RijndaelManagedTransformMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RijndaelManagedTransform
  // [ComVisibleAttribute] Offset: D7D9E8
  class RijndaelManagedTransform : public ::Il2CppObject/*, public System::Security::Cryptography::ICryptoTransform*/ {
    public:
    // private System.Security.Cryptography.CipherMode m_cipherMode
    // Size: 0x4
    // Offset: 0x10
    System::Security::Cryptography::CipherMode m_cipherMode;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::CipherMode) == 0x4);
    // private System.Security.Cryptography.PaddingMode m_paddingValue
    // Size: 0x4
    // Offset: 0x14
    System::Security::Cryptography::PaddingMode m_paddingValue;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::PaddingMode) == 0x4);
    // private System.Security.Cryptography.RijndaelManagedTransformMode m_transformMode
    // Size: 0x4
    // Offset: 0x18
    System::Security::Cryptography::RijndaelManagedTransformMode m_transformMode;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::RijndaelManagedTransformMode) == 0x4);
    // private System.Int32 m_blockSizeBits
    // Size: 0x4
    // Offset: 0x1C
    int m_blockSizeBits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_blockSizeBytes
    // Size: 0x4
    // Offset: 0x20
    int m_blockSizeBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_inputBlockSize
    // Size: 0x4
    // Offset: 0x24
    int m_inputBlockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_outputBlockSize
    // Size: 0x4
    // Offset: 0x28
    int m_outputBlockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_outputBlockSize and: m_encryptKeyExpansion
    char __padding6[0x4] = {};
    // private System.Int32[] m_encryptKeyExpansion
    // Size: 0x8
    // Offset: 0x30
    ::Array<int>* m_encryptKeyExpansion;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] m_decryptKeyExpansion
    // Size: 0x8
    // Offset: 0x38
    ::Array<int>* m_decryptKeyExpansion;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32 m_Nr
    // Size: 0x4
    // Offset: 0x40
    int m_Nr;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Nb
    // Size: 0x4
    // Offset: 0x44
    int m_Nb;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Nk
    // Size: 0x4
    // Offset: 0x48
    int m_Nk;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_Nk and: m_encryptindex
    char __padding11[0x4] = {};
    // private System.Int32[] m_encryptindex
    // Size: 0x8
    // Offset: 0x50
    ::Array<int>* m_encryptindex;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] m_decryptindex
    // Size: 0x8
    // Offset: 0x58
    ::Array<int>* m_decryptindex;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] m_IV
    // Size: 0x8
    // Offset: 0x60
    ::Array<int>* m_IV;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] m_lastBlockBuffer
    // Size: 0x8
    // Offset: 0x68
    ::Array<int>* m_lastBlockBuffer;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Byte[] m_depadBuffer
    // Size: 0x8
    // Offset: 0x70
    ::Array<uint8_t>* m_depadBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] m_shiftRegister
    // Size: 0x8
    // Offset: 0x78
    ::Array<uint8_t>* m_shiftRegister;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: RijndaelManagedTransform
    RijndaelManagedTransform(System::Security::Cryptography::CipherMode m_cipherMode_ = {}, System::Security::Cryptography::PaddingMode m_paddingValue_ = {}, System::Security::Cryptography::RijndaelManagedTransformMode m_transformMode_ = {}, int m_blockSizeBits_ = {}, int m_blockSizeBytes_ = {}, int m_inputBlockSize_ = {}, int m_outputBlockSize_ = {}, ::Array<int>* m_encryptKeyExpansion_ = {}, ::Array<int>* m_decryptKeyExpansion_ = {}, int m_Nr_ = {}, int m_Nb_ = {}, int m_Nk_ = {}, ::Array<int>* m_encryptindex_ = {}, ::Array<int>* m_decryptindex_ = {}, ::Array<int>* m_IV_ = {}, ::Array<int>* m_lastBlockBuffer_ = {}, ::Array<uint8_t>* m_depadBuffer_ = {}, ::Array<uint8_t>* m_shiftRegister_ = {}) noexcept : m_cipherMode{m_cipherMode_}, m_paddingValue{m_paddingValue_}, m_transformMode{m_transformMode_}, m_blockSizeBits{m_blockSizeBits_}, m_blockSizeBytes{m_blockSizeBytes_}, m_inputBlockSize{m_inputBlockSize_}, m_outputBlockSize{m_outputBlockSize_}, m_encryptKeyExpansion{m_encryptKeyExpansion_}, m_decryptKeyExpansion{m_decryptKeyExpansion_}, m_Nr{m_Nr_}, m_Nb{m_Nb_}, m_Nk{m_Nk_}, m_encryptindex{m_encryptindex_}, m_decryptindex{m_decryptindex_}, m_IV{m_IV_}, m_lastBlockBuffer{m_lastBlockBuffer_}, m_depadBuffer{m_depadBuffer_}, m_shiftRegister{m_shiftRegister_} {}
    // Creating interface conversion operator: operator System::Security::Cryptography::ICryptoTransform
    operator System::Security::Cryptography::ICryptoTransform() noexcept {
      return *reinterpret_cast<System::Security::Cryptography::ICryptoTransform*>(this);
    }
    // Get static field: static private readonly System.Byte[] s_Sbox
    static ::Array<uint8_t>* _get_s_Sbox();
    // Set static field: static private readonly System.Byte[] s_Sbox
    static void _set_s_Sbox(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Int32[] s_Rcon
    static ::Array<int>* _get_s_Rcon();
    // Set static field: static private readonly System.Int32[] s_Rcon
    static void _set_s_Rcon(::Array<int>* value);
    // Get static field: static private readonly System.Int32[] s_T
    static ::Array<int>* _get_s_T();
    // Set static field: static private readonly System.Int32[] s_T
    static void _set_s_T(::Array<int>* value);
    // Get static field: static private readonly System.Int32[] s_TF
    static ::Array<int>* _get_s_TF();
    // Set static field: static private readonly System.Int32[] s_TF
    static void _set_s_TF(::Array<int>* value);
    // Get static field: static private readonly System.Int32[] s_iT
    static ::Array<int>* _get_s_iT();
    // Set static field: static private readonly System.Int32[] s_iT
    static void _set_s_iT(::Array<int>* value);
    // Get static field: static private readonly System.Int32[] s_iTF
    static ::Array<int>* _get_s_iTF();
    // Set static field: static private readonly System.Int32[] s_iTF
    static void _set_s_iTF(::Array<int>* value);
    // System.Void .ctor(System.Byte[] rgbKey, System.Security.Cryptography.CipherMode mode, System.Byte[] rgbIV, System.Int32 blockSize, System.Int32 feedbackSize, System.Security.Cryptography.PaddingMode PaddingValue, System.Security.Cryptography.RijndaelManagedTransformMode transformMode)
    // Offset: 0x1AE5EDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RijndaelManagedTransform* New_ctor(::Array<uint8_t>* rgbKey, System::Security::Cryptography::CipherMode mode, ::Array<uint8_t>* rgbIV, int blockSize, int feedbackSize, System::Security::Cryptography::PaddingMode PaddingValue, System::Security::Cryptography::RijndaelManagedTransformMode transformMode) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::RijndaelManagedTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RijndaelManagedTransform*, creationType>(rgbKey, mode, rgbIV, blockSize, feedbackSize, PaddingValue, transformMode)));
    }
    // public System.Void Dispose()
    // Offset: 0x1AE6AAC
    void Dispose();
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1AE6AB4
    void Dispose(bool disposing);
    // public System.Int32 get_InputBlockSize()
    // Offset: 0x1AE6B7C
    int get_InputBlockSize();
    // public System.Int32 get_OutputBlockSize()
    // Offset: 0x1AE6B84
    int get_OutputBlockSize();
    // public System.Boolean get_CanTransformMultipleBlocks()
    // Offset: 0x1AE6B8C
    bool get_CanTransformMultipleBlocks();
    // public System.Int32 TransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0x1AE6B94
    int TransformBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount, ::Array<uint8_t>* outputBuffer, int outputOffset);
    // public System.Byte[] TransformFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1AE83CC
    ::Array<uint8_t>* TransformFinalBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // public System.Void Reset()
    // Offset: 0x1AE8698
    void Reset();
    // private System.Int32 EncryptData(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, ref System.Byte[] outputBuffer, System.Int32 outputOffset, System.Security.Cryptography.PaddingMode paddingMode, System.Boolean fLast)
    // Offset: 0x1AE6E50
    int EncryptData(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount, ::Array<uint8_t>*& outputBuffer, int outputOffset, System::Security::Cryptography::PaddingMode paddingMode, bool fLast);
    // private System.Int32 DecryptData(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, ref System.Byte[] outputBuffer, System.Int32 outputOffset, System.Security.Cryptography.PaddingMode paddingMode, System.Boolean fLast)
    // Offset: 0x1AE7970
    int DecryptData(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount, ::Array<uint8_t>*& outputBuffer, int outputOffset, System::Security::Cryptography::PaddingMode paddingMode, bool fLast);
    // private System.Void Enc(System.Int32* encryptindex, System.Int32* encryptKeyExpansion, System.Int32* T, System.Int32* TF, System.Int32* work, System.Int32* temp)
    // Offset: 0x1AE87A4
    void Enc(int* encryptindex, int* encryptKeyExpansion, int* T, int* TF, int* work, int* temp);
    // private System.Void Dec(System.Int32* decryptindex, System.Int32* decryptKeyExpansion, System.Int32* iT, System.Int32* iTF, System.Int32* work, System.Int32* temp)
    // Offset: 0x1AE8960
    void Dec(int* decryptindex, int* decryptKeyExpansion, int* iT, int* iTF, int* work, int* temp);
    // private System.Void GenerateKeyExpansion(System.Byte[] rgbKey)
    // Offset: 0x1AE64F8
    void GenerateKeyExpansion(::Array<uint8_t>* rgbKey);
    // static private System.Int32 rot1(System.Int32 val)
    // Offset: 0x1AE8C40
    static int rot1(int val);
    // static private System.Int32 rot2(System.Int32 val)
    // Offset: 0x1AE8C38
    static int rot2(int val);
    // static private System.Int32 rot3(System.Int32 val)
    // Offset: 0x1AE8B30
    static int rot3(int val);
    // static private System.Int32 SubWord(System.Int32 a)
    // Offset: 0x1AE8B38
    static int SubWord(int a);
    // static private System.Int32 MulX(System.Int32 x)
    // Offset: 0x1AE8C14
    static int MulX(int x);
    // static private System.Void .cctor()
    // Offset: 0x1AE8C48
    static void _cctor();
  }; // System.Security.Cryptography.RijndaelManagedTransform
  #pragma pack(pop)
  static check_size<sizeof(RijndaelManagedTransform), 120 + sizeof(::Array<uint8_t>*)> __System_Security_Cryptography_RijndaelManagedTransformSizeCheck;
  static_assert(sizeof(RijndaelManagedTransform) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RijndaelManagedTransform*, "System.Security.Cryptography", "RijndaelManagedTransform");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RijndaelManagedTransform::*)()>(&System::Security::Cryptography::RijndaelManagedTransform::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RijndaelManagedTransform::*)(bool)>(&System::Security::Cryptography::RijndaelManagedTransform::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::get_InputBlockSize
// Il2CppName: get_InputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::RijndaelManagedTransform::*)()>(&System::Security::Cryptography::RijndaelManagedTransform::get_InputBlockSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "get_InputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::get_OutputBlockSize
// Il2CppName: get_OutputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::RijndaelManagedTransform::*)()>(&System::Security::Cryptography::RijndaelManagedTransform::get_OutputBlockSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "get_OutputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::get_CanTransformMultipleBlocks
// Il2CppName: get_CanTransformMultipleBlocks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::RijndaelManagedTransform::*)()>(&System::Security::Cryptography::RijndaelManagedTransform::get_CanTransformMultipleBlocks)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "get_CanTransformMultipleBlocks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::TransformBlock
// Il2CppName: TransformBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::RijndaelManagedTransform::*)(::Array<uint8_t>*, int, int, ::Array<uint8_t>*, int)>(&System::Security::Cryptography::RijndaelManagedTransform::TransformBlock)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "TransformBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::TransformFinalBlock
// Il2CppName: TransformFinalBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::RijndaelManagedTransform::*)(::Array<uint8_t>*, int, int)>(&System::Security::Cryptography::RijndaelManagedTransform::TransformFinalBlock)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "TransformFinalBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RijndaelManagedTransform::*)()>(&System::Security::Cryptography::RijndaelManagedTransform::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::EncryptData
// Il2CppName: EncryptData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::RijndaelManagedTransform::*)(::Array<uint8_t>*, int, int, ::Array<uint8_t>*&, int, System::Security::Cryptography::PaddingMode, bool)>(&System::Security::Cryptography::RijndaelManagedTransform::EncryptData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "EncryptData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*&>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::PaddingMode>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::DecryptData
// Il2CppName: DecryptData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::RijndaelManagedTransform::*)(::Array<uint8_t>*, int, int, ::Array<uint8_t>*&, int, System::Security::Cryptography::PaddingMode, bool)>(&System::Security::Cryptography::RijndaelManagedTransform::DecryptData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "DecryptData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*&>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::PaddingMode>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::Enc
// Il2CppName: Enc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RijndaelManagedTransform::*)(int*, int*, int*, int*, int*, int*)>(&System::Security::Cryptography::RijndaelManagedTransform::Enc)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "Enc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int*>(), ::il2cpp_utils::ExtractIndependentType<int*>(), ::il2cpp_utils::ExtractIndependentType<int*>(), ::il2cpp_utils::ExtractIndependentType<int*>(), ::il2cpp_utils::ExtractIndependentType<int*>(), ::il2cpp_utils::ExtractIndependentType<int*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::Dec
// Il2CppName: Dec
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RijndaelManagedTransform::*)(int*, int*, int*, int*, int*, int*)>(&System::Security::Cryptography::RijndaelManagedTransform::Dec)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "Dec", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int*>(), ::il2cpp_utils::ExtractIndependentType<int*>(), ::il2cpp_utils::ExtractIndependentType<int*>(), ::il2cpp_utils::ExtractIndependentType<int*>(), ::il2cpp_utils::ExtractIndependentType<int*>(), ::il2cpp_utils::ExtractIndependentType<int*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::GenerateKeyExpansion
// Il2CppName: GenerateKeyExpansion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RijndaelManagedTransform::*)(::Array<uint8_t>*)>(&System::Security::Cryptography::RijndaelManagedTransform::GenerateKeyExpansion)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "GenerateKeyExpansion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::rot1
// Il2CppName: rot1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Security::Cryptography::RijndaelManagedTransform::rot1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "rot1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::rot2
// Il2CppName: rot2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Security::Cryptography::RijndaelManagedTransform::rot2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "rot2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::rot3
// Il2CppName: rot3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Security::Cryptography::RijndaelManagedTransform::rot3)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "rot3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::SubWord
// Il2CppName: SubWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Security::Cryptography::RijndaelManagedTransform::SubWord)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "SubWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::MulX
// Il2CppName: MulX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Security::Cryptography::RijndaelManagedTransform::MulX)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "MulX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::RijndaelManagedTransform::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
