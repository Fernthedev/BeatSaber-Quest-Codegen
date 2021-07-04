// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.EncoderFallbackBuffer
#include "System/Text/EncoderFallbackBuffer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: CharEntityEncoderFallback
  class CharEntityEncoderFallback;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.CharEntityEncoderFallbackBuffer
  class CharEntityEncoderFallbackBuffer : public System::Text::EncoderFallbackBuffer {
    public:
    // private System.Xml.CharEntityEncoderFallback parent
    // Size: 0x8
    // Offset: 0x30
    System::Xml::CharEntityEncoderFallback* parent;
    // Field size check
    static_assert(sizeof(System::Xml::CharEntityEncoderFallback*) == 0x8);
    // private System.String charEntity
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* charEntity;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 charEntityIndex
    // Size: 0x4
    // Offset: 0x40
    int charEntityIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CharEntityEncoderFallbackBuffer
    CharEntityEncoderFallbackBuffer(System::Xml::CharEntityEncoderFallback* parent_ = {}, ::Il2CppString* charEntity_ = {}, int charEntityIndex_ = {}) noexcept : parent{parent_}, charEntity{charEntity_}, charEntityIndex{charEntityIndex_} {}
    // System.Void .ctor(System.Xml.CharEntityEncoderFallback parent)
    // Offset: 0x192A530
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CharEntityEncoderFallbackBuffer* New_ctor(System::Xml::CharEntityEncoderFallback* parent) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::CharEntityEncoderFallbackBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CharEntityEncoderFallbackBuffer*, creationType>(parent)));
    }
    // private System.Int32 SurrogateCharToUtf32(System.Char highSurrogate, System.Char lowSurrogate)
    // Offset: 0x192AAFC
    int SurrogateCharToUtf32(::Il2CppChar highSurrogate, ::Il2CppChar lowSurrogate);
    // public override System.Boolean Fallback(System.Char charUnknown, System.Int32 index)
    // Offset: 0x192A634
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Boolean EncoderFallbackBuffer::Fallback(System.Char charUnknown, System.Int32 index)
    bool Fallback(::Il2CppChar charUnknown, int index);
    // public override System.Boolean Fallback(System.Char charUnknownHigh, System.Char charUnknownLow, System.Int32 index)
    // Offset: 0x192A814
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Boolean EncoderFallbackBuffer::Fallback(System.Char charUnknownHigh, System.Char charUnknownLow, System.Int32 index)
    bool Fallback(::Il2CppChar charUnknownHigh, ::Il2CppChar charUnknownLow, int index);
    // public override System.Char GetNextChar()
    // Offset: 0x192AB18
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Char EncoderFallbackBuffer::GetNextChar()
    ::Il2CppChar GetNextChar();
    // public override System.Boolean MovePrevious()
    // Offset: 0x192AB6C
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Boolean EncoderFallbackBuffer::MovePrevious()
    bool MovePrevious();
    // public override System.Int32 get_Remaining()
    // Offset: 0x192AB8C
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Int32 EncoderFallbackBuffer::get_Remaining()
    int get_Remaining();
    // public override System.Void Reset()
    // Offset: 0x192ABC0
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Void EncoderFallbackBuffer::Reset()
    void Reset();
  }; // System.Xml.CharEntityEncoderFallbackBuffer
  #pragma pack(pop)
  static check_size<sizeof(CharEntityEncoderFallbackBuffer), 64 + sizeof(int)> __System_Xml_CharEntityEncoderFallbackBufferSizeCheck;
  static_assert(sizeof(CharEntityEncoderFallbackBuffer) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::CharEntityEncoderFallbackBuffer*, "System.Xml", "CharEntityEncoderFallbackBuffer");
// Writing includes for template specializations
#include "System/Xml/CharEntityEncoderFallback.hpp"
// Writing MetadataGetter for method: System::Xml::CharEntityEncoderFallbackBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::CharEntityEncoderFallbackBuffer::SurrogateCharToUtf32
// Il2CppName: SurrogateCharToUtf32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::CharEntityEncoderFallbackBuffer::*)(::Il2CppChar, ::Il2CppChar)>(&System::Xml::CharEntityEncoderFallbackBuffer::SurrogateCharToUtf32)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::CharEntityEncoderFallbackBuffer*), "SurrogateCharToUtf32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppChar>()});
  }
};
// Writing MetadataGetter for method: System::Xml::CharEntityEncoderFallbackBuffer::Fallback
// Il2CppName: Fallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::CharEntityEncoderFallbackBuffer::*)(::Il2CppChar, int)>(&System::Xml::CharEntityEncoderFallbackBuffer::Fallback)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::CharEntityEncoderFallbackBuffer*), "Fallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Xml::CharEntityEncoderFallbackBuffer::Fallback
// Il2CppName: Fallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::CharEntityEncoderFallbackBuffer::*)(::Il2CppChar, ::Il2CppChar, int)>(&System::Xml::CharEntityEncoderFallbackBuffer::Fallback)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::CharEntityEncoderFallbackBuffer*), "Fallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppChar>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Xml::CharEntityEncoderFallbackBuffer::GetNextChar
// Il2CppName: GetNextChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Xml::CharEntityEncoderFallbackBuffer::*)()>(&System::Xml::CharEntityEncoderFallbackBuffer::GetNextChar)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::CharEntityEncoderFallbackBuffer*), "GetNextChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::CharEntityEncoderFallbackBuffer::MovePrevious
// Il2CppName: MovePrevious
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::CharEntityEncoderFallbackBuffer::*)()>(&System::Xml::CharEntityEncoderFallbackBuffer::MovePrevious)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::CharEntityEncoderFallbackBuffer*), "MovePrevious", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::CharEntityEncoderFallbackBuffer::get_Remaining
// Il2CppName: get_Remaining
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::CharEntityEncoderFallbackBuffer::*)()>(&System::Xml::CharEntityEncoderFallbackBuffer::get_Remaining)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::CharEntityEncoderFallbackBuffer*), "get_Remaining", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::CharEntityEncoderFallbackBuffer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::CharEntityEncoderFallbackBuffer::*)()>(&System::Xml::CharEntityEncoderFallbackBuffer::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::CharEntityEncoderFallbackBuffer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
