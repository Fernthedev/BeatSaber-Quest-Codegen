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
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.DecoderExceptionFallbackBuffer
  class DecoderExceptionFallbackBuffer : public System::Text::DecoderFallbackBuffer {
    public:
    // Creating value type constructor for type: DecoderExceptionFallbackBuffer
    DecoderExceptionFallbackBuffer() noexcept {}
    // private System.Void Throw(System.Byte[] bytesUnknown, System.Int32 index)
    // Offset: 0x1B61D88
    void Throw(::Array<uint8_t>* bytesUnknown, int index);
    // public override System.Boolean Fallback(System.Byte[] bytesUnknown, System.Int32 index)
    // Offset: 0x1B61D7C
    // Implemented from: System.Text.DecoderFallbackBuffer
    // Base method: System.Boolean DecoderFallbackBuffer::Fallback(System.Byte[] bytesUnknown, System.Int32 index)
    bool Fallback(::Array<uint8_t>* bytesUnknown, int index);
    // public override System.Char GetNextChar()
    // Offset: 0x1B61FBC
    // Implemented from: System.Text.DecoderFallbackBuffer
    // Base method: System.Char DecoderFallbackBuffer::GetNextChar()
    ::Il2CppChar GetNextChar();
    // public System.Void .ctor()
    // Offset: 0x1B61D00
    // Implemented from: System.Text.DecoderFallbackBuffer
    // Base method: System.Void DecoderFallbackBuffer::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecoderExceptionFallbackBuffer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::DecoderExceptionFallbackBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecoderExceptionFallbackBuffer*, creationType>()));
    }
  }; // System.Text.DecoderExceptionFallbackBuffer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::DecoderExceptionFallbackBuffer*, "System.Text", "DecoderExceptionFallbackBuffer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::DecoderExceptionFallbackBuffer::Throw
// Il2CppName: Throw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::DecoderExceptionFallbackBuffer::*)(::Array<uint8_t>*, int)>(&System::Text::DecoderExceptionFallbackBuffer::Throw)> {
  const MethodInfo* get() {
    static auto* bytesUnknown = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderExceptionFallbackBuffer*), "Throw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytesUnknown, index});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderExceptionFallbackBuffer::Fallback
// Il2CppName: Fallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::DecoderExceptionFallbackBuffer::*)(::Array<uint8_t>*, int)>(&System::Text::DecoderExceptionFallbackBuffer::Fallback)> {
  const MethodInfo* get() {
    static auto* bytesUnknown = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderExceptionFallbackBuffer*), "Fallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytesUnknown, index});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderExceptionFallbackBuffer::GetNextChar
// Il2CppName: GetNextChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Text::DecoderExceptionFallbackBuffer::*)()>(&System::Text::DecoderExceptionFallbackBuffer::GetNextChar)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::DecoderExceptionFallbackBuffer*), "GetNextChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::DecoderExceptionFallbackBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
