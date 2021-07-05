// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
  // Forward declaring type: EncoderFallback
  class EncoderFallback;
  // Forward declaring type: DecoderFallback
  class DecoderFallback;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.EncodingProvider
  // [ComVisibleAttribute] Offset: D7B4E0
  class EncodingProvider : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: EncodingProvider
    EncodingProvider() noexcept {}
    // Get static field: static private System.Object s_InternalSyncObject
    static ::Il2CppObject* _get_s_InternalSyncObject();
    // Set static field: static private System.Object s_InternalSyncObject
    static void _set_s_InternalSyncObject(::Il2CppObject* value);
    // Get static field: static private System.Text.EncodingProvider[] s_providers
    static ::Array<System::Text::EncodingProvider*>* _get_s_providers();
    // Set static field: static private System.Text.EncodingProvider[] s_providers
    static void _set_s_providers(::Array<System::Text::EncodingProvider*>* value);
    // public System.Text.Encoding GetEncoding(System.String name)
    // Offset: 0xFFFFFFFF
    System::Text::Encoding* GetEncoding(::Il2CppString* name);
    // public System.Text.Encoding GetEncoding(System.Int32 codepage)
    // Offset: 0xFFFFFFFF
    System::Text::Encoding* GetEncoding(int codepage);
    // public System.Text.Encoding GetEncoding(System.Int32 codepage, System.Text.EncoderFallback encoderFallback, System.Text.DecoderFallback decoderFallback)
    // Offset: 0x1CFBCBC
    System::Text::Encoding* GetEncoding(int codepage, System::Text::EncoderFallback* encoderFallback, System::Text::DecoderFallback* decoderFallback);
    // static System.Text.Encoding GetEncodingFromProvider(System.Int32 codepage)
    // Offset: 0x1CF6CB4
    static System::Text::Encoding* GetEncodingFromProvider(int codepage);
    // static System.Text.Encoding GetEncodingFromProvider(System.String encodingName)
    // Offset: 0x1CF7D90
    static System::Text::Encoding* GetEncodingFromProvider(::Il2CppString* encodingName);
    // static System.Text.Encoding GetEncodingFromProvider(System.Int32 codepage, System.Text.EncoderFallback enc, System.Text.DecoderFallback dec)
    // Offset: 0x1CF7A00
    static System::Text::Encoding* GetEncodingFromProvider(int codepage, System::Text::EncoderFallback* enc, System::Text::DecoderFallback* dec);
    // static private System.Void .cctor()
    // Offset: 0x1CFBDC0
    static void _cctor();
  }; // System.Text.EncodingProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncodingProvider*, "System.Text", "EncodingProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::EncodingProvider::GetEncoding
// Il2CppName: GetEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding* (System::Text::EncodingProvider::*)(::Il2CppString*)>(&System::Text::EncodingProvider::GetEncoding)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingProvider*), "GetEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingProvider::GetEncoding
// Il2CppName: GetEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding* (System::Text::EncodingProvider::*)(int)>(&System::Text::EncodingProvider::GetEncoding)> {
  const MethodInfo* get() {
    static auto* codepage = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingProvider*), "GetEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codepage});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingProvider::GetEncoding
// Il2CppName: GetEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding* (System::Text::EncodingProvider::*)(int, System::Text::EncoderFallback*, System::Text::DecoderFallback*)>(&System::Text::EncodingProvider::GetEncoding)> {
  const MethodInfo* get() {
    static auto* codepage = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* encoderFallback = &::il2cpp_utils::GetClassFromName("System.Text", "EncoderFallback")->byval_arg;
    static auto* decoderFallback = &::il2cpp_utils::GetClassFromName("System.Text", "DecoderFallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingProvider*), "GetEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codepage, encoderFallback, decoderFallback});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingProvider::GetEncodingFromProvider
// Il2CppName: GetEncodingFromProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding* (*)(int)>(&System::Text::EncodingProvider::GetEncodingFromProvider)> {
  const MethodInfo* get() {
    static auto* codepage = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingProvider*), "GetEncodingFromProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codepage});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingProvider::GetEncodingFromProvider
// Il2CppName: GetEncodingFromProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding* (*)(::Il2CppString*)>(&System::Text::EncodingProvider::GetEncodingFromProvider)> {
  const MethodInfo* get() {
    static auto* encodingName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingProvider*), "GetEncodingFromProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encodingName});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingProvider::GetEncodingFromProvider
// Il2CppName: GetEncodingFromProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding* (*)(int, System::Text::EncoderFallback*, System::Text::DecoderFallback*)>(&System::Text::EncodingProvider::GetEncodingFromProvider)> {
  const MethodInfo* get() {
    static auto* codepage = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* enc = &::il2cpp_utils::GetClassFromName("System.Text", "EncoderFallback")->byval_arg;
    static auto* dec = &::il2cpp_utils::GetClassFromName("System.Text", "DecoderFallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingProvider*), "GetEncodingFromProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codepage, enc, dec});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingProvider::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Text::EncodingProvider::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingProvider*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
