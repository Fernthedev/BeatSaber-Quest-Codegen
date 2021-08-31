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
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.DigestHeaderParser
  // [TokenAttribute] Offset: FFFFFFFF
  class DigestHeaderParser : public ::Il2CppObject {
    public:
    // private System.String header
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* header;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 length
    // Size: 0x4
    // Offset: 0x18
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 pos
    // Size: 0x4
    // Offset: 0x1C
    int pos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String[] values
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppString*>* values;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: DigestHeaderParser
    DigestHeaderParser(::Il2CppString* header_ = {}, int length_ = {}, int pos_ = {}, ::Array<::Il2CppString*>* values_ = {}) noexcept : header{header_}, length{length_}, pos{pos_}, values{values_} {}
    // Get static field: static private System.String[] keywords
    static ::Array<::Il2CppString*>* _get_keywords();
    // Set static field: static private System.String[] keywords
    static void _set_keywords(::Array<::Il2CppString*>* value);
    // Get instance field: private System.String header
    ::Il2CppString* _get_header();
    // Set instance field: private System.String header
    void _set_header(::Il2CppString* value);
    // Get instance field: private System.Int32 length
    int _get_length();
    // Set instance field: private System.Int32 length
    void _set_length(int value);
    // Get instance field: private System.Int32 pos
    int _get_pos();
    // Set instance field: private System.Int32 pos
    void _set_pos(int value);
    // Get instance field: private System.String[] values
    ::Array<::Il2CppString*>* _get_values();
    // Set instance field: private System.String[] values
    void _set_values(::Array<::Il2CppString*>* value);
    // public System.String get_Realm()
    // Offset: 0x16D9888
    ::Il2CppString* get_Realm();
    // public System.String get_Opaque()
    // Offset: 0x16D98BC
    ::Il2CppString* get_Opaque();
    // public System.String get_Nonce()
    // Offset: 0x16D98F4
    ::Il2CppString* get_Nonce();
    // public System.String get_Algorithm()
    // Offset: 0x16D992C
    ::Il2CppString* get_Algorithm();
    // public System.String get_QOP()
    // Offset: 0x16D9964
    ::Il2CppString* get_QOP();
    // public System.Void .ctor(System.String header)
    // Offset: 0x16D97D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DigestHeaderParser* New_ctor(::Il2CppString* header) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::DigestHeaderParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DigestHeaderParser*, creationType>(header)));
    }
    // static private System.Void .cctor()
    // Offset: 0x16D9E40
    static void _cctor();
    // public System.Boolean Parse()
    // Offset: 0x16D999C
    bool Parse();
    // private System.Void SkipWhitespace()
    // Offset: 0x16D9D20
    void SkipWhitespace();
    // private System.String GetKey()
    // Offset: 0x16D9DAC
    ::Il2CppString* GetKey();
    // private System.Boolean GetKeywordAndValue(out System.String key, out System.String value)
    // Offset: 0x16D9B84
    bool GetKeywordAndValue(ByRef<::Il2CppString*> key, ByRef<::Il2CppString*> value);
  }; // System.Net.DigestHeaderParser
  #pragma pack(pop)
  static check_size<sizeof(DigestHeaderParser), 32 + sizeof(::Array<::Il2CppString*>*)> __System_Net_DigestHeaderParserSizeCheck;
  static_assert(sizeof(DigestHeaderParser) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::DigestHeaderParser*, "System.Net", "DigestHeaderParser");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::get_Realm
// Il2CppName: get_Realm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestHeaderParser::*)()>(&System::Net::DigestHeaderParser::get_Realm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), "get_Realm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::get_Opaque
// Il2CppName: get_Opaque
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestHeaderParser::*)()>(&System::Net::DigestHeaderParser::get_Opaque)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), "get_Opaque", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::get_Nonce
// Il2CppName: get_Nonce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestHeaderParser::*)()>(&System::Net::DigestHeaderParser::get_Nonce)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), "get_Nonce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::get_Algorithm
// Il2CppName: get_Algorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestHeaderParser::*)()>(&System::Net::DigestHeaderParser::get_Algorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), "get_Algorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::get_QOP
// Il2CppName: get_QOP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestHeaderParser::*)()>(&System::Net::DigestHeaderParser::get_QOP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), "get_QOP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::DigestHeaderParser::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::DigestHeaderParser::*)()>(&System::Net::DigestHeaderParser::Parse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::SkipWhitespace
// Il2CppName: SkipWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::DigestHeaderParser::*)()>(&System::Net::DigestHeaderParser::SkipWhitespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), "SkipWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::GetKey
// Il2CppName: GetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestHeaderParser::*)()>(&System::Net::DigestHeaderParser::GetKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), "GetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::GetKeywordAndValue
// Il2CppName: GetKeywordAndValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::DigestHeaderParser::*)(ByRef<::Il2CppString*>, ByRef<::Il2CppString*>)>(&System::Net::DigestHeaderParser::GetKeywordAndValue)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), "GetKeywordAndValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
