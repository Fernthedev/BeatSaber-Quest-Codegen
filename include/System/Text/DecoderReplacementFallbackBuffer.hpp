// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.DecoderFallbackBuffer
#include "System/Text/DecoderFallbackBuffer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: DecoderReplacementFallback
  class DecoderReplacementFallback;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.DecoderReplacementFallbackBuffer
  class DecoderReplacementFallbackBuffer : public System::Text::DecoderFallbackBuffer {
    public:
    // private System.String strDefault
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* strDefault;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 fallbackCount
    // Size: 0x4
    // Offset: 0x28
    int fallbackCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 fallbackIndex
    // Size: 0x4
    // Offset: 0x2C
    int fallbackIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DecoderReplacementFallbackBuffer
    DecoderReplacementFallbackBuffer(::Il2CppString* strDefault_ = {}, int fallbackCount_ = {}, int fallbackIndex_ = {}) noexcept : strDefault{strDefault_}, fallbackCount{fallbackCount_}, fallbackIndex{fallbackIndex_} {}
    // public System.Void .ctor(System.Text.DecoderReplacementFallback fallback)
    // Offset: 0x1B63418
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecoderReplacementFallbackBuffer* New_ctor(System::Text::DecoderReplacementFallback* fallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::DecoderReplacementFallbackBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecoderReplacementFallbackBuffer*, creationType>(fallback)));
    }
    // public override System.Boolean Fallback(System.Byte[] bytesUnknown, System.Int32 index)
    // Offset: 0x1B63524
    // Implemented from: System.Text.DecoderFallbackBuffer
    // Base method: System.Boolean DecoderFallbackBuffer::Fallback(System.Byte[] bytesUnknown, System.Int32 index)
    bool Fallback(::Array<uint8_t>* bytesUnknown, int index);
    // public override System.Char GetNextChar()
    // Offset: 0x1B6356C
    // Implemented from: System.Text.DecoderFallbackBuffer
    // Base method: System.Char DecoderFallbackBuffer::GetNextChar()
    ::Il2CppChar GetNextChar();
    // public override System.Void Reset()
    // Offset: 0x1B635B4
    // Implemented from: System.Text.DecoderFallbackBuffer
    // Base method: System.Void DecoderFallbackBuffer::Reset()
    void Reset();
    // override System.Int32 InternalFallback(System.Byte[] bytes, System.Byte* pBytes)
    // Offset: 0x1B635C4
    // Implemented from: System.Text.DecoderFallbackBuffer
    // Base method: System.Int32 DecoderFallbackBuffer::InternalFallback(System.Byte[] bytes, System.Byte* pBytes)
    int InternalFallback(::Array<uint8_t>* bytes, uint8_t* pBytes);
  }; // System.Text.DecoderReplacementFallbackBuffer
  #pragma pack(pop)
  static check_size<sizeof(DecoderReplacementFallbackBuffer), 44 + sizeof(int)> __System_Text_DecoderReplacementFallbackBufferSizeCheck;
  static_assert(sizeof(DecoderReplacementFallbackBuffer) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::DecoderReplacementFallbackBuffer*, "System.Text", "DecoderReplacementFallbackBuffer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::DecoderReplacementFallbackBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::DecoderReplacementFallbackBuffer::Fallback
// Il2CppName: Fallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::DecoderReplacementFallbackBuffer::*)(::Array<uint8_t>*, int)>(&System::Text::DecoderReplacementFallbackBuffer::Fallback)> {
  const MethodInfo* get() {
    static auto* bytesUnknown = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderReplacementFallbackBuffer*), "Fallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytesUnknown, index});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderReplacementFallbackBuffer::GetNextChar
// Il2CppName: GetNextChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Text::DecoderReplacementFallbackBuffer::*)()>(&System::Text::DecoderReplacementFallbackBuffer::GetNextChar)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderReplacementFallbackBuffer*), "GetNextChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderReplacementFallbackBuffer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::DecoderReplacementFallbackBuffer::*)()>(&System::Text::DecoderReplacementFallbackBuffer::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderReplacementFallbackBuffer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderReplacementFallbackBuffer::InternalFallback
// Il2CppName: InternalFallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::DecoderReplacementFallbackBuffer::*)(::Array<uint8_t>*, uint8_t*)>(&System::Text::DecoderReplacementFallbackBuffer::InternalFallback)> {
  const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* pBytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderReplacementFallbackBuffer*), "InternalFallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, pBytes});
  }
};
