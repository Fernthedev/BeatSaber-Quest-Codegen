// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: Token
  struct Token;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
  // Forward declaring type: DateTimeOffset
  struct DateTimeOffset;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.Lexer
  class Lexer : public ::Il2CppObject {
    public:
    // private readonly System.String s
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* s;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 pos
    // Size: 0x4
    // Offset: 0x18
    int pos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Lexer
    Lexer(::Il2CppString* s_ = {}, int pos_ = {}) noexcept : s{s_}, pos{pos_} {}
    // Get static field: static private readonly System.Boolean[] token_chars
    static ::Array<bool>* _get_token_chars();
    // Set static field: static private readonly System.Boolean[] token_chars
    static void _set_token_chars(::Array<bool>* value);
    // Get static field: static private readonly System.Int32 last_token_char
    static int _get_last_token_char();
    // Set static field: static private readonly System.Int32 last_token_char
    static void _set_last_token_char(int value);
    // Get static field: static private readonly System.String[] dt_formats
    static ::Array<::Il2CppString*>* _get_dt_formats();
    // Set static field: static private readonly System.String[] dt_formats
    static void _set_dt_formats(::Array<::Il2CppString*>* value);
    // public System.Void .ctor(System.String stream)
    // Offset: 0x158E218
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lexer* New_ctor(::Il2CppString* stream) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::Lexer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lexer*, creationType>(stream)));
    }
    // public System.Int32 get_Position()
    // Offset: 0x1595E3C
    int get_Position();
    // public System.Void set_Position(System.Int32 value)
    // Offset: 0x1595E44
    void set_Position(int value);
    // public System.String GetStringValue(System.Net.Http.Headers.Token token)
    // Offset: 0x158E748
    ::Il2CppString* GetStringValue(System::Net::Http::Headers::Token token);
    // public System.String GetStringValue(System.Net.Http.Headers.Token start, System.Net.Http.Headers.Token end)
    // Offset: 0x1595E4C
    ::Il2CppString* GetStringValue(System::Net::Http::Headers::Token start, System::Net::Http::Headers::Token end);
    // public System.String GetQuotedStringValue(System.Net.Http.Headers.Token start)
    // Offset: 0x158FD30
    ::Il2CppString* GetQuotedStringValue(System::Net::Http::Headers::Token start);
    // public System.String GetRemainingStringValue(System.Int32 position)
    // Offset: 0x158E76C
    ::Il2CppString* GetRemainingStringValue(int position);
    // public System.Boolean IsStarStringValue(System.Net.Http.Headers.Token token)
    // Offset: 0x15915C4
    bool IsStarStringValue(System::Net::Http::Headers::Token token);
    // public System.Boolean TryGetNumericValue(System.Net.Http.Headers.Token token, out System.Int32 value)
    // Offset: 0x1595E70
    bool TryGetNumericValue(System::Net::Http::Headers::Token token, int& value);
    // public System.Boolean TryGetNumericValue(System.Net.Http.Headers.Token token, out System.Int64 value)
    // Offset: 0x159160C
    bool TryGetNumericValue(System::Net::Http::Headers::Token token, int64_t& value);
    // public System.Nullable`1<System.TimeSpan> TryGetTimeSpanValue(System.Net.Http.Headers.Token token)
    // Offset: 0x158FC64
    System::Nullable_1<System::TimeSpan> TryGetTimeSpanValue(System::Net::Http::Headers::Token token);
    // public System.Boolean TryGetDateValue(System.Net.Http.Headers.Token token, out System.DateTimeOffset value)
    // Offset: 0x1595F20
    bool TryGetDateValue(System::Net::Http::Headers::Token token, System::DateTimeOffset& value);
    // static public System.Boolean TryGetDateValue(System.String text, out System.DateTimeOffset value)
    // Offset: 0x1596008
    static bool TryGetDateValue(::Il2CppString* text, System::DateTimeOffset& value);
    // public System.Boolean TryGetDoubleValue(System.Net.Http.Headers.Token token, out System.Double value)
    // Offset: 0x15960EC
    bool TryGetDoubleValue(System::Net::Http::Headers::Token token, double& value);
    // static public System.Boolean IsValidToken(System.String input)
    // Offset: 0x15961C4
    static bool IsValidToken(::Il2CppString* input);
    // static public System.Boolean IsValidCharacter(System.Char input)
    // Offset: 0x1596288
    static bool IsValidCharacter(::Il2CppChar input);
    // public System.Void EatChar()
    // Offset: 0x1591D50
    void EatChar();
    // public System.Int32 PeekChar()
    // Offset: 0x1591D0C
    int PeekChar();
    // public System.Boolean ScanCommentOptional(out System.String value, out System.Net.Http.Headers.Token readToken)
    // Offset: 0x1596358
    bool ScanCommentOptional(::Il2CppString*& value, System::Net::Http::Headers::Token& readToken);
    // public System.Net.Http.Headers.Token Scan(System.Boolean recognizeDash)
    // Offset: 0x158E42C
    System::Net::Http::Headers::Token Scan(bool recognizeDash);
    // static private System.Void .cctor()
    // Offset: 0x15964B8
    static void _cctor();
  }; // System.Net.Http.Headers.Lexer
  #pragma pack(pop)
  static check_size<sizeof(Lexer), 24 + sizeof(int)> __System_Net_Http_Headers_LexerSizeCheck;
  static_assert(sizeof(Lexer) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::Lexer*, "System.Net.Http.Headers", "Lexer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::Lexer::*)()>(&System::Net::Http::Headers::Lexer::get_Position)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::Lexer::*)(int)>(&System::Net::Http::Headers::Lexer::set_Position)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::GetStringValue
// Il2CppName: GetStringValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::Lexer::*)(System::Net::Http::Headers::Token)>(&System::Net::Http::Headers::Lexer::GetStringValue)> {
  const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), "GetStringValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::GetStringValue
// Il2CppName: GetStringValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::Lexer::*)(System::Net::Http::Headers::Token, System::Net::Http::Headers::Token)>(&System::Net::Http::Headers::Lexer::GetStringValue)> {
  const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), "GetStringValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::GetQuotedStringValue
// Il2CppName: GetQuotedStringValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::Lexer::*)(System::Net::Http::Headers::Token)>(&System::Net::Http::Headers::Lexer::GetQuotedStringValue)> {
  const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), "GetQuotedStringValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::GetRemainingStringValue
// Il2CppName: GetRemainingStringValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::Lexer::*)(int)>(&System::Net::Http::Headers::Lexer::GetRemainingStringValue)> {
  const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), "GetRemainingStringValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::IsStarStringValue
// Il2CppName: IsStarStringValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::Lexer::*)(System::Net::Http::Headers::Token)>(&System::Net::Http::Headers::Lexer::IsStarStringValue)> {
  const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), "IsStarStringValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::TryGetNumericValue
// Il2CppName: TryGetNumericValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::Lexer::*)(System::Net::Http::Headers::Token, int&)>(&System::Net::Http::Headers::Lexer::TryGetNumericValue)> {
  const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), "TryGetNumericValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token, value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::TryGetNumericValue
// Il2CppName: TryGetNumericValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::Lexer::*)(System::Net::Http::Headers::Token, int64_t&)>(&System::Net::Http::Headers::Lexer::TryGetNumericValue)> {
  const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), "TryGetNumericValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token, value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::TryGetTimeSpanValue
// Il2CppName: TryGetTimeSpanValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::TimeSpan> (System::Net::Http::Headers::Lexer::*)(System::Net::Http::Headers::Token)>(&System::Net::Http::Headers::Lexer::TryGetTimeSpanValue)> {
  const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), "TryGetTimeSpanValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::TryGetDateValue
// Il2CppName: TryGetDateValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::Lexer::*)(System::Net::Http::Headers::Token, System::DateTimeOffset&)>(&System::Net::Http::Headers::Lexer::TryGetDateValue)> {
  const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTimeOffset")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), "TryGetDateValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token, value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::TryGetDateValue
// Il2CppName: TryGetDateValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, System::DateTimeOffset&)>(&System::Net::Http::Headers::Lexer::TryGetDateValue)> {
  const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTimeOffset")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), "TryGetDateValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::TryGetDoubleValue
// Il2CppName: TryGetDoubleValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::Lexer::*)(System::Net::Http::Headers::Token, double&)>(&System::Net::Http::Headers::Lexer::TryGetDoubleValue)> {
  const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), "TryGetDoubleValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token, value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::IsValidToken
// Il2CppName: IsValidToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&System::Net::Http::Headers::Lexer::IsValidToken)> {
  const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), "IsValidToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::IsValidCharacter
// Il2CppName: IsValidCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar)>(&System::Net::Http::Headers::Lexer::IsValidCharacter)> {
  const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), "IsValidCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::EatChar
// Il2CppName: EatChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::Lexer::*)()>(&System::Net::Http::Headers::Lexer::EatChar)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), "EatChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::PeekChar
// Il2CppName: PeekChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::Lexer::*)()>(&System::Net::Http::Headers::Lexer::PeekChar)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), "PeekChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::ScanCommentOptional
// Il2CppName: ScanCommentOptional
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::Lexer::*)(::Il2CppString*&, System::Net::Http::Headers::Token&)>(&System::Net::Http::Headers::Lexer::ScanCommentOptional)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* readToken = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), "ScanCommentOptional", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, readToken});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::Scan
// Il2CppName: Scan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Http::Headers::Token (System::Net::Http::Headers::Lexer::*)(bool)>(&System::Net::Http::Headers::Lexer::Scan)> {
  const MethodInfo* get() {
    static auto* recognizeDash = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), "Scan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recognizeDash});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Lexer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Http::Headers::Lexer::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Lexer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
