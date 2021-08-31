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
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: CookieTokenizer
  class CookieTokenizer;
  // Forward declaring type: Cookie
  class Cookie;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.CookieParser
  // [TokenAttribute] Offset: FFFFFFFF
  class CookieParser : public ::Il2CppObject {
    public:
    // private System.Net.CookieTokenizer m_tokenizer
    // Size: 0x8
    // Offset: 0x10
    System::Net::CookieTokenizer* m_tokenizer;
    // Field size check
    static_assert(sizeof(System::Net::CookieTokenizer*) == 0x8);
    // Creating value type constructor for type: CookieParser
    CookieParser(System::Net::CookieTokenizer* m_tokenizer_ = {}) noexcept : m_tokenizer{m_tokenizer_} {}
    // Creating conversion operator: operator System::Net::CookieTokenizer*
    constexpr operator System::Net::CookieTokenizer*() const noexcept {
      return m_tokenizer;
    }
    // Get instance field reference: private System.Net.CookieTokenizer m_tokenizer
    System::Net::CookieTokenizer*& dyn_m_tokenizer();
    // System.Void .ctor(System.String cookieString)
    // Offset: 0x16D6294
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CookieParser* New_ctor(::Il2CppString* cookieString) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::CookieParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CookieParser*, creationType>(cookieString)));
    }
    // System.Net.Cookie Get()
    // Offset: 0x16D630C
    System::Net::Cookie* Get();
    // static System.String CheckQuoted(System.String value)
    // Offset: 0x16D1CC4
    static ::Il2CppString* CheckQuoted(::Il2CppString* value);
  }; // System.Net.CookieParser
  #pragma pack(pop)
  static check_size<sizeof(CookieParser), 16 + sizeof(System::Net::CookieTokenizer*)> __System_Net_CookieParserSizeCheck;
  static_assert(sizeof(CookieParser) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::CookieParser*, "System.Net", "CookieParser");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::CookieParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::CookieParser::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Cookie* (System::Net::CookieParser::*)()>(&System::Net::CookieParser::Get)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieParser*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieParser::CheckQuoted
// Il2CppName: CheckQuoted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::Net::CookieParser::CheckQuoted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieParser*), "CheckQuoted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
