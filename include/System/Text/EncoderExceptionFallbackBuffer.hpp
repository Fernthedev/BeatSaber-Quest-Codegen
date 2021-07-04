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
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.EncoderExceptionFallbackBuffer
  class EncoderExceptionFallbackBuffer : public System::Text::EncoderFallbackBuffer {
    public:
    // Creating value type constructor for type: EncoderExceptionFallbackBuffer
    EncoderExceptionFallbackBuffer() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1B64104
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Void EncoderFallbackBuffer::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncoderExceptionFallbackBuffer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::EncoderExceptionFallbackBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncoderExceptionFallbackBuffer*, creationType>()));
    }
    // public override System.Boolean Fallback(System.Char charUnknown, System.Int32 index)
    // Offset: 0x1B64188
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Boolean EncoderFallbackBuffer::Fallback(System.Char charUnknown, System.Int32 index)
    bool Fallback(::Il2CppChar charUnknown, int index);
    // public override System.Boolean Fallback(System.Char charUnknownHigh, System.Char charUnknownLow, System.Int32 index)
    // Offset: 0x1B642B8
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Boolean EncoderFallbackBuffer::Fallback(System.Char charUnknownHigh, System.Char charUnknownLow, System.Int32 index)
    bool Fallback(::Il2CppChar charUnknownHigh, ::Il2CppChar charUnknownLow, int index);
    // public override System.Char GetNextChar()
    // Offset: 0x1B64644
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Char EncoderFallbackBuffer::GetNextChar()
    ::Il2CppChar GetNextChar();
    // public override System.Boolean MovePrevious()
    // Offset: 0x1B6464C
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Boolean EncoderFallbackBuffer::MovePrevious()
    bool MovePrevious();
    // public override System.Int32 get_Remaining()
    // Offset: 0x1B64654
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Int32 EncoderFallbackBuffer::get_Remaining()
    int get_Remaining();
  }; // System.Text.EncoderExceptionFallbackBuffer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncoderExceptionFallbackBuffer*, "System.Text", "EncoderExceptionFallbackBuffer");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Text::EncoderExceptionFallbackBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::EncoderExceptionFallbackBuffer::Fallback
// Il2CppName: Fallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::EncoderExceptionFallbackBuffer::*)(::Il2CppChar, int)>(&System::Text::EncoderExceptionFallbackBuffer::Fallback)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderExceptionFallbackBuffer*), "Fallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderExceptionFallbackBuffer::Fallback
// Il2CppName: Fallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::EncoderExceptionFallbackBuffer::*)(::Il2CppChar, ::Il2CppChar, int)>(&System::Text::EncoderExceptionFallbackBuffer::Fallback)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderExceptionFallbackBuffer*), "Fallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppChar>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderExceptionFallbackBuffer::GetNextChar
// Il2CppName: GetNextChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Text::EncoderExceptionFallbackBuffer::*)()>(&System::Text::EncoderExceptionFallbackBuffer::GetNextChar)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderExceptionFallbackBuffer*), "GetNextChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderExceptionFallbackBuffer::MovePrevious
// Il2CppName: MovePrevious
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::EncoderExceptionFallbackBuffer::*)()>(&System::Text::EncoderExceptionFallbackBuffer::MovePrevious)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderExceptionFallbackBuffer*), "MovePrevious", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderExceptionFallbackBuffer::get_Remaining
// Il2CppName: get_Remaining
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncoderExceptionFallbackBuffer::*)()>(&System::Text::EncoderExceptionFallbackBuffer::get_Remaining)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderExceptionFallbackBuffer*), "get_Remaining", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
