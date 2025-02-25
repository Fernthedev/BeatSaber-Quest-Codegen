// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: DecoderFallback
  class DecoderFallback;
  // Forward declaring type: DecoderFallbackBuffer
  class DecoderFallbackBuffer;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.Decoder
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA0680
  class Decoder : public ::Il2CppObject {
    public:
    // System.Text.DecoderFallback m_fallback
    // Size: 0x8
    // Offset: 0x10
    System::Text::DecoderFallback* m_fallback;
    // Field size check
    static_assert(sizeof(System::Text::DecoderFallback*) == 0x8);
    // System.Text.DecoderFallbackBuffer m_fallbackBuffer
    // Size: 0x8
    // Offset: 0x18
    System::Text::DecoderFallbackBuffer* m_fallbackBuffer;
    // Field size check
    static_assert(sizeof(System::Text::DecoderFallbackBuffer*) == 0x8);
    // Creating value type constructor for type: Decoder
    Decoder(System::Text::DecoderFallback* m_fallback_ = {}, System::Text::DecoderFallbackBuffer* m_fallbackBuffer_ = {}) noexcept : m_fallback{m_fallback_}, m_fallbackBuffer{m_fallbackBuffer_} {}
    // Get instance field reference: System.Text.DecoderFallback m_fallback
    System::Text::DecoderFallback*& dyn_m_fallback();
    // Get instance field reference: System.Text.DecoderFallbackBuffer m_fallbackBuffer
    System::Text::DecoderFallbackBuffer*& dyn_m_fallbackBuffer();
    // public System.Text.DecoderFallback get_Fallback()
    // Offset: 0x1C401CC
    System::Text::DecoderFallback* get_Fallback();
    // public System.Text.DecoderFallbackBuffer get_FallbackBuffer()
    // Offset: 0x1C3FB20
    System::Text::DecoderFallbackBuffer* get_FallbackBuffer();
    // System.Boolean get_InternalHasFallbackBuffer()
    // Offset: 0x1C401D4
    bool get_InternalHasFallbackBuffer();
    // System.Void SerializeDecoder(System.Runtime.Serialization.SerializationInfo info)
    // Offset: 0x1C40158
    void SerializeDecoder(System::Runtime::Serialization::SerializationInfo* info);
    // public System.Void Reset()
    // Offset: 0x1C401E4
    void Reset();
    // public System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int GetCharCount(::Array<uint8_t>* bytes, int index, int count);
    // public System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count, System.Boolean flush)
    // Offset: 0x1C402B8
    int GetCharCount(::Array<uint8_t>* bytes, int index, int count, bool flush);
    // public System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count, System.Boolean flush)
    // Offset: 0x1C402C4
    int GetCharCount(uint8_t* bytes, int count, bool flush);
    // public System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0xFFFFFFFF
    int GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex);
    // public System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex, System.Boolean flush)
    // Offset: 0x1C40434
    int GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex, bool flush);
    // public System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Boolean flush)
    // Offset: 0x1C40440
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, bool flush);
    // protected System.Void .ctor()
    // Offset: 0x1C401C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Decoder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::Decoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Decoder*, creationType>()));
    }
  }; // System.Text.Decoder
  #pragma pack(pop)
  static check_size<sizeof(Decoder), 24 + sizeof(System::Text::DecoderFallbackBuffer*)> __System_Text_DecoderSizeCheck;
  static_assert(sizeof(Decoder) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::Decoder*, "System.Text", "Decoder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::Decoder::get_Fallback
// Il2CppName: get_Fallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::DecoderFallback* (System::Text::Decoder::*)()>(&System::Text::Decoder::get_Fallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Decoder*), "get_Fallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::Decoder::get_FallbackBuffer
// Il2CppName: get_FallbackBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::DecoderFallbackBuffer* (System::Text::Decoder::*)()>(&System::Text::Decoder::get_FallbackBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Decoder*), "get_FallbackBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::Decoder::get_InternalHasFallbackBuffer
// Il2CppName: get_InternalHasFallbackBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::Decoder::*)()>(&System::Text::Decoder::get_InternalHasFallbackBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Decoder*), "get_InternalHasFallbackBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::Decoder::SerializeDecoder
// Il2CppName: SerializeDecoder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Decoder::*)(System::Runtime::Serialization::SerializationInfo*)>(&System::Text::Decoder::SerializeDecoder)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Decoder*), "SerializeDecoder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info});
  }
};
// Writing MetadataGetter for method: System::Text::Decoder::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Decoder::*)()>(&System::Text::Decoder::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Decoder*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::Decoder::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Decoder::*)(::Array<uint8_t>*, int, int)>(&System::Text::Decoder::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Decoder*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, index, count});
  }
};
// Writing MetadataGetter for method: System::Text::Decoder::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Decoder::*)(::Array<uint8_t>*, int, int, bool)>(&System::Text::Decoder::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Decoder*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, index, count, flush});
  }
};
// Writing MetadataGetter for method: System::Text::Decoder::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Decoder::*)(uint8_t*, int, bool)>(&System::Text::Decoder::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Decoder*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, count, flush});
  }
};
// Writing MetadataGetter for method: System::Text::Decoder::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Decoder::*)(::Array<uint8_t>*, int, int, ::Array<::Il2CppChar>*, int)>(&System::Text::Decoder::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Decoder*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteIndex, byteCount, chars, charIndex});
  }
};
// Writing MetadataGetter for method: System::Text::Decoder::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Decoder::*)(::Array<uint8_t>*, int, int, ::Array<::Il2CppChar>*, int, bool)>(&System::Text::Decoder::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Decoder*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteIndex, byteCount, chars, charIndex, flush});
  }
};
// Writing MetadataGetter for method: System::Text::Decoder::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Decoder::*)(uint8_t*, int, ::Il2CppChar*, int, bool)>(&System::Text::Decoder::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Decoder*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteCount, chars, charCount, flush});
  }
};
// Writing MetadataGetter for method: System::Text::Decoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
