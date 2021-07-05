// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: DecoderNLS
  class DecoderNLS;
  // Forward declaring type: DecoderFallbackBuffer
  class DecoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.Encoding/EncodingCharBuffer
  class Encoding::EncodingCharBuffer : public ::Il2CppObject {
    public:
    // private System.Char* chars
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppChar* chars;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    // private System.Char* charStart
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppChar* charStart;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    // private System.Char* charEnd
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppChar* charEnd;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    // private System.Int32 charCountResult
    // Size: 0x4
    // Offset: 0x28
    int charCountResult;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: charCountResult and: enc
    char __padding3[0x4] = {};
    // private System.Text.Encoding enc
    // Size: 0x8
    // Offset: 0x30
    System::Text::Encoding* enc;
    // Field size check
    static_assert(sizeof(System::Text::Encoding*) == 0x8);
    // private System.Text.DecoderNLS decoder
    // Size: 0x8
    // Offset: 0x38
    System::Text::DecoderNLS* decoder;
    // Field size check
    static_assert(sizeof(System::Text::DecoderNLS*) == 0x8);
    // private System.Byte* byteStart
    // Size: 0x8
    // Offset: 0x40
    uint8_t* byteStart;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private System.Byte* byteEnd
    // Size: 0x8
    // Offset: 0x48
    uint8_t* byteEnd;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private System.Byte* bytes
    // Size: 0x8
    // Offset: 0x50
    uint8_t* bytes;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private System.Text.DecoderFallbackBuffer fallbackBuffer
    // Size: 0x8
    // Offset: 0x58
    System::Text::DecoderFallbackBuffer* fallbackBuffer;
    // Field size check
    static_assert(sizeof(System::Text::DecoderFallbackBuffer*) == 0x8);
    // Creating value type constructor for type: EncodingCharBuffer
    EncodingCharBuffer(::Il2CppChar* chars_ = {}, ::Il2CppChar* charStart_ = {}, ::Il2CppChar* charEnd_ = {}, int charCountResult_ = {}, System::Text::Encoding* enc_ = {}, System::Text::DecoderNLS* decoder_ = {}, uint8_t* byteStart_ = {}, uint8_t* byteEnd_ = {}, uint8_t* bytes_ = {}, System::Text::DecoderFallbackBuffer* fallbackBuffer_ = {}) noexcept : chars{chars_}, charStart{charStart_}, charEnd{charEnd_}, charCountResult{charCountResult_}, enc{enc_}, decoder{decoder_}, byteStart{byteStart_}, byteEnd{byteEnd_}, bytes{bytes_}, fallbackBuffer{fallbackBuffer_} {}
    // System.Void .ctor(System.Text.Encoding enc, System.Text.DecoderNLS decoder, System.Char* charStart, System.Int32 charCount, System.Byte* byteStart, System.Int32 byteCount)
    // Offset: 0x1CFA370
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Encoding::EncodingCharBuffer* New_ctor(System::Text::Encoding* enc, System::Text::DecoderNLS* decoder, ::Il2CppChar* charStart, int charCount, uint8_t* byteStart, int byteCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::Encoding::EncodingCharBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Encoding::EncodingCharBuffer*, creationType>(enc, decoder, charStart, charCount, byteStart, byteCount)));
    }
    // System.Boolean AddChar(System.Char ch, System.Int32 numBytes)
    // Offset: 0x1CFA424
    bool AddChar(::Il2CppChar ch, int numBytes);
    // System.Boolean AddChar(System.Char ch)
    // Offset: 0x1CFA498
    bool AddChar(::Il2CppChar ch);
    // System.Void AdjustBytes(System.Int32 count)
    // Offset: 0x1CFA4A0
    void AdjustBytes(int count);
    // System.Boolean get_MoreData()
    // Offset: 0x1CFA4B0
    bool get_MoreData();
    // System.Byte GetNextByte()
    // Offset: 0x1CFA4C0
    uint8_t GetNextByte();
    // System.Int32 get_BytesUsed()
    // Offset: 0x1CFA4E4
    int get_BytesUsed();
    // System.Boolean Fallback(System.Byte fallbackByte)
    // Offset: 0x1CFA4F4
    bool Fallback(uint8_t fallbackByte);
    // System.Boolean Fallback(System.Byte[] byteBuffer)
    // Offset: 0x1CFA57C
    bool Fallback(::Array<uint8_t>* byteBuffer);
    // System.Int32 get_Count()
    // Offset: 0x1CFA664
    int get_Count();
  }; // System.Text.Encoding/EncodingCharBuffer
  #pragma pack(pop)
  static check_size<sizeof(Encoding::EncodingCharBuffer), 88 + sizeof(System::Text::DecoderFallbackBuffer*)> __System_Text_Encoding_EncodingCharBufferSizeCheck;
  static_assert(sizeof(Encoding::EncodingCharBuffer) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::Encoding::EncodingCharBuffer*, "System.Text", "Encoding/EncodingCharBuffer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::AddChar
// Il2CppName: AddChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::Encoding::EncodingCharBuffer::*)(::Il2CppChar, int)>(&System::Text::Encoding::EncodingCharBuffer::AddChar)> {
  const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* numBytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingCharBuffer*), "AddChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch, numBytes});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::AddChar
// Il2CppName: AddChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::Encoding::EncodingCharBuffer::*)(::Il2CppChar)>(&System::Text::Encoding::EncodingCharBuffer::AddChar)> {
  const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingCharBuffer*), "AddChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::AdjustBytes
// Il2CppName: AdjustBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::EncodingCharBuffer::*)(int)>(&System::Text::Encoding::EncodingCharBuffer::AdjustBytes)> {
  const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingCharBuffer*), "AdjustBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::get_MoreData
// Il2CppName: get_MoreData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::Encoding::EncodingCharBuffer::*)()>(&System::Text::Encoding::EncodingCharBuffer::get_MoreData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingCharBuffer*), "get_MoreData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::GetNextByte
// Il2CppName: GetNextByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Text::Encoding::EncodingCharBuffer::*)()>(&System::Text::Encoding::EncodingCharBuffer::GetNextByte)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingCharBuffer*), "GetNextByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::get_BytesUsed
// Il2CppName: get_BytesUsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Encoding::EncodingCharBuffer::*)()>(&System::Text::Encoding::EncodingCharBuffer::get_BytesUsed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingCharBuffer*), "get_BytesUsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::Fallback
// Il2CppName: Fallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::Encoding::EncodingCharBuffer::*)(uint8_t)>(&System::Text::Encoding::EncodingCharBuffer::Fallback)> {
  const MethodInfo* get() {
    static auto* fallbackByte = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingCharBuffer*), "Fallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fallbackByte});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::Fallback
// Il2CppName: Fallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::Encoding::EncodingCharBuffer::*)(::Array<uint8_t>*)>(&System::Text::Encoding::EncodingCharBuffer::Fallback)> {
  const MethodInfo* get() {
    static auto* byteBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingCharBuffer*), "Fallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{byteBuffer});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Encoding::EncodingCharBuffer::*)()>(&System::Text::Encoding::EncodingCharBuffer::get_Count)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingCharBuffer*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
