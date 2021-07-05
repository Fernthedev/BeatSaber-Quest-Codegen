// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
    // public System.Void .ctor(System.String header)
    // Offset: 0x16B5A8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DigestHeaderParser* New_ctor(::Il2CppString* header) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::DigestHeaderParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DigestHeaderParser*, creationType>(header)));
    }
    // public System.String get_Realm()
    // Offset: 0x16B5B44
    ::Il2CppString* get_Realm();
    // public System.String get_Opaque()
    // Offset: 0x16B5B78
    ::Il2CppString* get_Opaque();
    // public System.String get_Nonce()
    // Offset: 0x16B5BB0
    ::Il2CppString* get_Nonce();
    // public System.String get_Algorithm()
    // Offset: 0x16B5BE8
    ::Il2CppString* get_Algorithm();
    // public System.String get_QOP()
    // Offset: 0x16B5C20
    ::Il2CppString* get_QOP();
    // public System.Boolean Parse()
    // Offset: 0x16B5C58
    bool Parse();
    // private System.Void SkipWhitespace()
    // Offset: 0x16B5FDC
    void SkipWhitespace();
    // private System.String GetKey()
    // Offset: 0x16B6068
    ::Il2CppString* GetKey();
    // private System.Boolean GetKeywordAndValue(out System.String key, out System.String value)
    // Offset: 0x16B5E40
    bool GetKeywordAndValue(::Il2CppString*& key, ::Il2CppString*& value);
    // static private System.Void .cctor()
    // Offset: 0x16B60FC
    static void _cctor();
  }; // System.Net.DigestHeaderParser
  #pragma pack(pop)
  static check_size<sizeof(DigestHeaderParser), 32 + sizeof(::Array<::Il2CppString*>*)> __System_Net_DigestHeaderParserSizeCheck;
  static_assert(sizeof(DigestHeaderParser) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::DigestHeaderParser*, "System.Net", "DigestHeaderParser");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::get_Realm
// Il2CppName: get_Realm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestHeaderParser::*)()>(&System::Net::DigestHeaderParser::get_Realm)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), "get_Realm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::get_Opaque
// Il2CppName: get_Opaque
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestHeaderParser::*)()>(&System::Net::DigestHeaderParser::get_Opaque)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), "get_Opaque", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::get_Nonce
// Il2CppName: get_Nonce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestHeaderParser::*)()>(&System::Net::DigestHeaderParser::get_Nonce)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), "get_Nonce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::get_Algorithm
// Il2CppName: get_Algorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestHeaderParser::*)()>(&System::Net::DigestHeaderParser::get_Algorithm)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), "get_Algorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::get_QOP
// Il2CppName: get_QOP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestHeaderParser::*)()>(&System::Net::DigestHeaderParser::get_QOP)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), "get_QOP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::DigestHeaderParser::*)()>(&System::Net::DigestHeaderParser::Parse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::SkipWhitespace
// Il2CppName: SkipWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::DigestHeaderParser::*)()>(&System::Net::DigestHeaderParser::SkipWhitespace)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), "SkipWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::GetKey
// Il2CppName: GetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::DigestHeaderParser::*)()>(&System::Net::DigestHeaderParser::GetKey)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), "GetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::GetKeywordAndValue
// Il2CppName: GetKeywordAndValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::DigestHeaderParser::*)(::Il2CppString*&, ::Il2CppString*&)>(&System::Net::DigestHeaderParser::GetKeywordAndValue)> {
  const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), "GetKeywordAndValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Net::DigestHeaderParser::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::DigestHeaderParser::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestHeaderParser*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
