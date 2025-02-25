// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.WWWTranscoder
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  class WWWTranscoder : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: WWWTranscoder
    WWWTranscoder() noexcept {}
    // Get static field: static private System.Byte[] ucHexChars
    static ::Array<uint8_t>* _get_ucHexChars();
    // Set static field: static private System.Byte[] ucHexChars
    static void _set_ucHexChars(::Array<uint8_t>* value);
    // Get static field: static private System.Byte[] lcHexChars
    static ::Array<uint8_t>* _get_lcHexChars();
    // Set static field: static private System.Byte[] lcHexChars
    static void _set_lcHexChars(::Array<uint8_t>* value);
    // Get static field: static private System.Byte urlEscapeChar
    static uint8_t _get_urlEscapeChar();
    // Set static field: static private System.Byte urlEscapeChar
    static void _set_urlEscapeChar(uint8_t value);
    // Get static field: static private System.Byte[] urlSpace
    static ::Array<uint8_t>* _get_urlSpace();
    // Set static field: static private System.Byte[] urlSpace
    static void _set_urlSpace(::Array<uint8_t>* value);
    // Get static field: static private System.Byte[] dataSpace
    static ::Array<uint8_t>* _get_dataSpace();
    // Set static field: static private System.Byte[] dataSpace
    static void _set_dataSpace(::Array<uint8_t>* value);
    // Get static field: static private System.Byte[] urlForbidden
    static ::Array<uint8_t>* _get_urlForbidden();
    // Set static field: static private System.Byte[] urlForbidden
    static void _set_urlForbidden(::Array<uint8_t>* value);
    // Get static field: static private System.Byte qpEscapeChar
    static uint8_t _get_qpEscapeChar();
    // Set static field: static private System.Byte qpEscapeChar
    static void _set_qpEscapeChar(uint8_t value);
    // Get static field: static private System.Byte[] qpSpace
    static ::Array<uint8_t>* _get_qpSpace();
    // Set static field: static private System.Byte[] qpSpace
    static void _set_qpSpace(::Array<uint8_t>* value);
    // Get static field: static private System.Byte[] qpForbidden
    static ::Array<uint8_t>* _get_qpForbidden();
    // Set static field: static private System.Byte[] qpForbidden
    static void _set_qpForbidden(::Array<uint8_t>* value);
    // static private System.Void .cctor()
    // Offset: 0x23F3960
    static void _cctor();
    // static private System.Byte Hex2Byte(System.Byte[] b, System.Int32 offset)
    // Offset: 0x23F3098
    static uint8_t Hex2Byte(::Array<uint8_t>* b, int offset);
    // static private System.Byte[] Byte2Hex(System.Byte b, System.Byte[] hexChars)
    // Offset: 0x23F3158
    static ::Array<uint8_t>* Byte2Hex(uint8_t b, ::Array<uint8_t>* hexChars);
    // static public System.Byte[] URLEncode(System.Byte[] toEncode)
    // Offset: 0x23F2E2C
    static ::Array<uint8_t>* URLEncode(::Array<uint8_t>* toEncode);
    // static public System.Byte[] Encode(System.Byte[] input, System.Byte escapeChar, System.Byte[] space, System.Byte[] forbidden, System.Boolean uppercase)
    // Offset: 0x23F321C
    static ::Array<uint8_t>* Encode(::Array<uint8_t>* input, uint8_t escapeChar, ::Array<uint8_t>* space, ::Array<uint8_t>* forbidden, bool uppercase);
    // static private System.Boolean ByteArrayContains(System.Byte[] array, System.Byte b)
    // Offset: 0x23F3570
    static bool ByteArrayContains(::Array<uint8_t>* array, uint8_t b);
    // static public System.Byte[] URLDecode(System.Byte[] toEncode)
    // Offset: 0x23F35BC
    static ::Array<uint8_t>* URLDecode(::Array<uint8_t>* toEncode);
    // static private System.Boolean ByteSubArrayEquals(System.Byte[] array, System.Int32 index, System.Byte[] comperand)
    // Offset: 0x23F38D8
    static bool ByteSubArrayEquals(::Array<uint8_t>* array, int index, ::Array<uint8_t>* comperand);
    // static public System.Byte[] Decode(System.Byte[] input, System.Byte escapeChar, System.Byte[] space)
    // Offset: 0x23F3630
    static ::Array<uint8_t>* Decode(::Array<uint8_t>* input, uint8_t escapeChar, ::Array<uint8_t>* space);
  }; // UnityEngine.WWWTranscoder
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::WWWTranscoder*, "UnityEngine", "WWWTranscoder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::WWWTranscoder::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::Hex2Byte
// Il2CppName: Hex2Byte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::Array<uint8_t>*, int)>(&UnityEngine::WWWTranscoder::Hex2Byte)> {
  static const MethodInfo* get() {
    static auto* b = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), "Hex2Byte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::Byte2Hex
// Il2CppName: Byte2Hex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(uint8_t, ::Array<uint8_t>*)>(&UnityEngine::WWWTranscoder::Byte2Hex)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* hexChars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), "Byte2Hex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b, hexChars});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::URLEncode
// Il2CppName: URLEncode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Array<uint8_t>*)>(&UnityEngine::WWWTranscoder::URLEncode)> {
  static const MethodInfo* get() {
    static auto* toEncode = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), "URLEncode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toEncode});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Array<uint8_t>*, uint8_t, ::Array<uint8_t>*, ::Array<uint8_t>*, bool)>(&UnityEngine::WWWTranscoder::Encode)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* escapeChar = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* space = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* forbidden = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* uppercase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, escapeChar, space, forbidden, uppercase});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::ByteArrayContains
// Il2CppName: ByteArrayContains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint8_t>*, uint8_t)>(&UnityEngine::WWWTranscoder::ByteArrayContains)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), "ByteArrayContains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::URLDecode
// Il2CppName: URLDecode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Array<uint8_t>*)>(&UnityEngine::WWWTranscoder::URLDecode)> {
  static const MethodInfo* get() {
    static auto* toEncode = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), "URLDecode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toEncode});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::ByteSubArrayEquals
// Il2CppName: ByteSubArrayEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<uint8_t>*, int, ::Array<uint8_t>*)>(&UnityEngine::WWWTranscoder::ByteSubArrayEquals)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* comperand = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), "ByteSubArrayEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index, comperand});
  }
};
// Writing MetadataGetter for method: UnityEngine::WWWTranscoder::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Array<uint8_t>*, uint8_t, ::Array<uint8_t>*)>(&UnityEngine::WWWTranscoder::Decode)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* escapeChar = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* space = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WWWTranscoder*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, escapeChar, space});
  }
};
