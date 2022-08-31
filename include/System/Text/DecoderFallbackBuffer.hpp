// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Text
namespace System::Text {
  // Forward declaring type: DecoderFallbackBuffer
  class DecoderFallbackBuffer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::DecoderFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::DecoderFallbackBuffer*, "System.Text", "DecoderFallbackBuffer");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.DecoderFallbackBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  class DecoderFallbackBuffer : public ::Il2CppObject {
    public:
    public:
    // System.Byte* byteStart
    // Size: 0x8
    // Offset: 0x10
    uint8_t* byteStart;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // System.Char* charEnd
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppChar* charEnd;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    public:
    // Get instance field reference: System.Byte* byteStart
    [[deprecated("Use field access instead!")]] uint8_t*& dyn_byteStart();
    // Get instance field reference: System.Char* charEnd
    [[deprecated("Use field access instead!")]] ::Il2CppChar*& dyn_charEnd();
    // public System.Int32 get_Remaining()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Remaining();
    // public System.Boolean Fallback(System.Byte[] bytesUnknown, System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Fallback(::ArrayW<uint8_t> bytesUnknown, int index);
    // public System.Char GetNextChar()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppChar GetNextChar();
    // public System.Void Reset()
    // Offset: 0x2161FEC
    void Reset();
    // System.Void InternalReset()
    // Offset: 0x2160CB0
    void InternalReset();
    // System.Void InternalInitialize(System.Byte* byteStart, System.Char* charEnd)
    // Offset: 0x21609F0
    void InternalInitialize(uint8_t* byteStart, ::Il2CppChar* charEnd);
    // System.Boolean InternalFallback(System.Byte[] bytes, System.Byte* pBytes, ref System.Char* chars)
    // Offset: 0x2162020
    bool InternalFallback(::ArrayW<uint8_t> bytes, uint8_t* pBytes, ByRef<::Il2CppChar*> chars);
    // System.Int32 InternalFallback(System.Byte[] bytes, System.Byte* pBytes)
    // Offset: 0x21621CC
    int InternalFallback(::ArrayW<uint8_t> bytes, uint8_t* pBytes);
    // System.Void ThrowLastBytesRecursive(System.Byte[] bytesUnknown)
    // Offset: 0x2162360
    void ThrowLastBytesRecursive(::ArrayW<uint8_t> bytesUnknown);
    // protected System.Void .ctor()
    // Offset: 0x2161E24
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecoderFallbackBuffer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::DecoderFallbackBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecoderFallbackBuffer*, creationType>()));
    }
  }; // System.Text.DecoderFallbackBuffer
  #pragma pack(pop)
  static check_size<sizeof(DecoderFallbackBuffer), 24 + sizeof(::Il2CppChar*)> __System_Text_DecoderFallbackBufferSizeCheck;
  static_assert(sizeof(DecoderFallbackBuffer) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::DecoderFallbackBuffer::get_Remaining
// Il2CppName: get_Remaining
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::DecoderFallbackBuffer::*)()>(&System::Text::DecoderFallbackBuffer::get_Remaining)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderFallbackBuffer*), "get_Remaining", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderFallbackBuffer::Fallback
// Il2CppName: Fallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::DecoderFallbackBuffer::*)(::ArrayW<uint8_t>, int)>(&System::Text::DecoderFallbackBuffer::Fallback)> {
  static const MethodInfo* get() {
    static auto* bytesUnknown = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderFallbackBuffer*), "Fallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytesUnknown, index});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderFallbackBuffer::GetNextChar
// Il2CppName: GetNextChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Text::DecoderFallbackBuffer::*)()>(&System::Text::DecoderFallbackBuffer::GetNextChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderFallbackBuffer*), "GetNextChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderFallbackBuffer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::DecoderFallbackBuffer::*)()>(&System::Text::DecoderFallbackBuffer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderFallbackBuffer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderFallbackBuffer::InternalReset
// Il2CppName: InternalReset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::DecoderFallbackBuffer::*)()>(&System::Text::DecoderFallbackBuffer::InternalReset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderFallbackBuffer*), "InternalReset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderFallbackBuffer::InternalInitialize
// Il2CppName: InternalInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::DecoderFallbackBuffer::*)(uint8_t*, ::Il2CppChar*)>(&System::Text::DecoderFallbackBuffer::InternalInitialize)> {
  static const MethodInfo* get() {
    static auto* byteStart = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* charEnd = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderFallbackBuffer*), "InternalInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{byteStart, charEnd});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderFallbackBuffer::InternalFallback
// Il2CppName: InternalFallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::DecoderFallbackBuffer::*)(::ArrayW<uint8_t>, uint8_t*, ByRef<::Il2CppChar*>)>(&System::Text::DecoderFallbackBuffer::InternalFallback)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* pBytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderFallbackBuffer*), "InternalFallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, pBytes, chars});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderFallbackBuffer::InternalFallback
// Il2CppName: InternalFallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::DecoderFallbackBuffer::*)(::ArrayW<uint8_t>, uint8_t*)>(&System::Text::DecoderFallbackBuffer::InternalFallback)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* pBytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderFallbackBuffer*), "InternalFallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, pBytes});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderFallbackBuffer::ThrowLastBytesRecursive
// Il2CppName: ThrowLastBytesRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::DecoderFallbackBuffer::*)(::ArrayW<uint8_t>)>(&System::Text::DecoderFallbackBuffer::ThrowLastBytesRecursive)> {
  static const MethodInfo* get() {
    static auto* bytesUnknown = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderFallbackBuffer*), "ThrowLastBytesRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytesUnknown});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderFallbackBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
