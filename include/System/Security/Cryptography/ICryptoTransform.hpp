// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.ICryptoTransform
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA2B24
  class ICryptoTransform/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: ICryptoTransform
    ICryptoTransform() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Int32 get_InputBlockSize()
    // Offset: 0xFFFFFFFF
    int get_InputBlockSize();
    // public System.Int32 get_OutputBlockSize()
    // Offset: 0xFFFFFFFF
    int get_OutputBlockSize();
    // public System.Boolean get_CanTransformMultipleBlocks()
    // Offset: 0xFFFFFFFF
    bool get_CanTransformMultipleBlocks();
    // public System.Int32 TransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0xFFFFFFFF
    int TransformBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount, ::Array<uint8_t>* outputBuffer, int outputOffset);
    // public System.Byte[] TransformFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0xFFFFFFFF
    ::Array<uint8_t>* TransformFinalBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
  }; // System.Security.Cryptography.ICryptoTransform
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::ICryptoTransform*, "System.Security.Cryptography", "ICryptoTransform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::ICryptoTransform::get_InputBlockSize
// Il2CppName: get_InputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::ICryptoTransform::*)()>(&System::Security::Cryptography::ICryptoTransform::get_InputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::ICryptoTransform*), "get_InputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::ICryptoTransform::get_OutputBlockSize
// Il2CppName: get_OutputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::ICryptoTransform::*)()>(&System::Security::Cryptography::ICryptoTransform::get_OutputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::ICryptoTransform*), "get_OutputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::ICryptoTransform::get_CanTransformMultipleBlocks
// Il2CppName: get_CanTransformMultipleBlocks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::ICryptoTransform::*)()>(&System::Security::Cryptography::ICryptoTransform::get_CanTransformMultipleBlocks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::ICryptoTransform*), "get_CanTransformMultipleBlocks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::ICryptoTransform::TransformBlock
// Il2CppName: TransformBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::ICryptoTransform::*)(::Array<uint8_t>*, int, int, ::Array<uint8_t>*, int)>(&System::Security::Cryptography::ICryptoTransform::TransformBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::ICryptoTransform*), "TransformBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::ICryptoTransform::TransformFinalBlock
// Il2CppName: TransformFinalBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::ICryptoTransform::*)(::Array<uint8_t>*, int, int)>(&System::Security::Cryptography::ICryptoTransform::TransformFinalBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::ICryptoTransform*), "TransformFinalBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
