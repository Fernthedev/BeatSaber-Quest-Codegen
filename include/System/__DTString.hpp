// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CompareInfo
  class CompareInfo;
  // Forward declaring type: DateTimeFormatInfo
  class DateTimeFormatInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TokenType
  struct TokenType;
  // Forward declaring type: DTSubString
  struct DTSubString;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x21
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.__DTString
  // [TokenAttribute] Offset: FFFFFFFF
  struct __DTString/*, public System::ValueType*/ {
    public:
    // System.String Value
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* Value;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Int32 Index
    // Size: 0x4
    // Offset: 0x8
    int Index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 len
    // Size: 0x4
    // Offset: 0xC
    int len;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Char m_current
    // Size: 0x2
    // Offset: 0x10
    ::Il2CppChar m_current;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Padding between fields: m_current and: m_info
    char __padding3[0x6] = {};
    // private System.Globalization.CompareInfo m_info
    // Size: 0x8
    // Offset: 0x18
    System::Globalization::CompareInfo* m_info;
    // Field size check
    static_assert(sizeof(System::Globalization::CompareInfo*) == 0x8);
    // private System.Boolean m_checkDigitToken
    // Size: 0x1
    // Offset: 0x20
    bool m_checkDigitToken;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: __DTString
    constexpr __DTString(::Il2CppString* Value_ = {}, int Index_ = {}, int len_ = {}, ::Il2CppChar m_current_ = {}, System::Globalization::CompareInfo* m_info_ = {}, bool m_checkDigitToken_ = {}) noexcept : Value{Value_}, Index{Index_}, len{len_}, m_current{m_current_}, m_info{m_info_}, m_checkDigitToken{m_checkDigitToken_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get static field: static private System.Char[] WhiteSpaceChecks
    static ::Array<::Il2CppChar>* _get_WhiteSpaceChecks();
    // Set static field: static private System.Char[] WhiteSpaceChecks
    static void _set_WhiteSpaceChecks(::Array<::Il2CppChar>* value);
    // Get instance field reference: System.String Value
    ::Il2CppString*& dyn_Value();
    // Get instance field reference: System.Int32 Index
    int& dyn_Index();
    // Get instance field reference: System.Int32 len
    int& dyn_len();
    // Get instance field reference: System.Char m_current
    ::Il2CppChar& dyn_m_current();
    // Get instance field reference: private System.Globalization.CompareInfo m_info
    System::Globalization::CompareInfo*& dyn_m_info();
    // Get instance field reference: private System.Boolean m_checkDigitToken
    bool& dyn_m_checkDigitToken();
    // System.Globalization.CompareInfo get_CompareInfo()
    // Offset: 0x232F734
    System::Globalization::CompareInfo* get_CompareInfo();
    // System.Void .ctor(System.String str, System.Globalization.DateTimeFormatInfo dtfi, System.Boolean checkDigitToken)
    // Offset: 0x232F670
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    __DTString(::Il2CppString* str, System::Globalization::DateTimeFormatInfo* dtfi, bool checkDigitToken) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::__DTString::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(str), ::il2cpp_utils::ExtractType(dtfi), ::il2cpp_utils::ExtractType(checkDigitToken)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, str, dtfi, checkDigitToken);
    }
    // System.Void .ctor(System.String str, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x232F69C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    __DTString(::Il2CppString* str, System::Globalization::DateTimeFormatInfo* dtfi) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::__DTString::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(str), ::il2cpp_utils::ExtractType(dtfi)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, str, dtfi);
    }
    // static private System.Void .cctor()
    // Offset: 0x2330940
    static void _cctor();
    // System.Boolean GetNext()
    // Offset: 0x232F73C
    bool GetNext();
    // System.Boolean AtEnd()
    // Offset: 0x232F790
    bool AtEnd();
    // System.Boolean Advance(System.Int32 count)
    // Offset: 0x232F7A0
    bool Advance(int count);
    // System.Void GetRegularToken(out System.TokenType tokenType, out System.Int32 tokenValue, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x232F7F4
    void GetRegularToken(ByRef<System::TokenType> tokenType, ByRef<int> tokenValue, System::Globalization::DateTimeFormatInfo* dtfi);
    // System.TokenType GetSeparatorToken(System.Globalization.DateTimeFormatInfo dtfi, out System.Int32 indexBeforeSeparator, out System.Char charBeforeSeparator)
    // Offset: 0x232FA80
    System::TokenType GetSeparatorToken(System::Globalization::DateTimeFormatInfo* dtfi, ByRef<int> indexBeforeSeparator, ByRef<::Il2CppChar> charBeforeSeparator);
    // System.Boolean MatchSpecifiedWord(System.String target)
    // Offset: 0x232FC44
    bool MatchSpecifiedWord(::Il2CppString* target);
    // System.Boolean MatchSpecifiedWord(System.String target, System.Int32 endIndex)
    // Offset: 0x232FC64
    bool MatchSpecifiedWord(::Il2CppString* target, int endIndex);
    // System.Boolean MatchSpecifiedWords(System.String target, System.Boolean checkWordBoundary, ref System.Int32 matchLength)
    // Offset: 0x232FCE8
    bool MatchSpecifiedWords(::Il2CppString* target, bool checkWordBoundary, ByRef<int> matchLength);
    // System.Boolean Match(System.String str)
    // Offset: 0x2330048
    bool Match(::Il2CppString* str);
    // System.Boolean Match(System.Char ch)
    // Offset: 0x23300FC
    bool Match(::Il2CppChar ch);
    // System.Int32 MatchLongestWords(System.String[] words, ref System.Int32 maxMatchStrLen)
    // Offset: 0x2330174
    int MatchLongestWords(::Array<::Il2CppString*>* words, ByRef<int> maxMatchStrLen);
    // System.Int32 GetRepeatCount()
    // Offset: 0x2330238
    int GetRepeatCount();
    // System.Boolean GetNextDigit()
    // Offset: 0x23302C4
    bool GetNextDigit();
    // System.Char GetChar()
    // Offset: 0x233036C
    ::Il2CppChar GetChar();
    // System.Int32 GetDigit()
    // Offset: 0x2330390
    int GetDigit();
    // System.Void SkipWhiteSpaces()
    // Offset: 0x23303C4
    void SkipWhiteSpaces();
    // System.Boolean SkipWhiteSpaceCurrent()
    // Offset: 0x232FB70
    bool SkipWhiteSpaceCurrent();
    // System.Void TrimTail()
    // Offset: 0x2330480
    void TrimTail();
    // System.Void RemoveTrailingInQuoteSpaces()
    // Offset: 0x2330558
    void RemoveTrailingInQuoteSpaces();
    // System.Void RemoveLeadingInQuoteSpaces()
    // Offset: 0x23306B0
    void RemoveLeadingInQuoteSpaces();
    // System.DTSubString GetSubString()
    // Offset: 0x23307C8
    System::DTSubString GetSubString();
    // System.Void ConsumeSubString(System.DTSubString sub)
    // Offset: 0x23308F4
    void ConsumeSubString(System::DTSubString sub);
  }; // System.__DTString
  #pragma pack(pop)
  static check_size<sizeof(__DTString), 32 + sizeof(bool)> __System___DTStringSizeCheck;
  static_assert(sizeof(__DTString) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(System::__DTString, "System", "__DTString");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::__DTString::get_CompareInfo
// Il2CppName: get_CompareInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CompareInfo* (System::__DTString::*)()>(&System::__DTString::get_CompareInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "get_CompareInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::__DTString::__DTString
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::__DTString::__DTString
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::__DTString::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::__DTString::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::__DTString::GetNext
// Il2CppName: GetNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::__DTString::*)()>(&System::__DTString::GetNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "GetNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::__DTString::AtEnd
// Il2CppName: AtEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::__DTString::*)()>(&System::__DTString::AtEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "AtEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::__DTString::Advance
// Il2CppName: Advance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::__DTString::*)(int)>(&System::__DTString::Advance)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "Advance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: System::__DTString::GetRegularToken
// Il2CppName: GetRegularToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::__DTString::*)(ByRef<System::TokenType>, ByRef<int>, System::Globalization::DateTimeFormatInfo*)>(&System::__DTString::GetRegularToken)> {
  static const MethodInfo* get() {
    static auto* tokenType = &::il2cpp_utils::GetClassFromName("System", "TokenType")->this_arg;
    static auto* tokenValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* dtfi = &::il2cpp_utils::GetClassFromName("System.Globalization", "DateTimeFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "GetRegularToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tokenType, tokenValue, dtfi});
  }
};
// Writing MetadataGetter for method: System::__DTString::GetSeparatorToken
// Il2CppName: GetSeparatorToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TokenType (System::__DTString::*)(System::Globalization::DateTimeFormatInfo*, ByRef<int>, ByRef<::Il2CppChar>)>(&System::__DTString::GetSeparatorToken)> {
  static const MethodInfo* get() {
    static auto* dtfi = &::il2cpp_utils::GetClassFromName("System.Globalization", "DateTimeFormatInfo")->byval_arg;
    static auto* indexBeforeSeparator = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* charBeforeSeparator = &::il2cpp_utils::GetClassFromName("System", "Char")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "GetSeparatorToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dtfi, indexBeforeSeparator, charBeforeSeparator});
  }
};
// Writing MetadataGetter for method: System::__DTString::MatchSpecifiedWord
// Il2CppName: MatchSpecifiedWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::__DTString::*)(::Il2CppString*)>(&System::__DTString::MatchSpecifiedWord)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "MatchSpecifiedWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: System::__DTString::MatchSpecifiedWord
// Il2CppName: MatchSpecifiedWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::__DTString::*)(::Il2CppString*, int)>(&System::__DTString::MatchSpecifiedWord)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* endIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "MatchSpecifiedWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, endIndex});
  }
};
// Writing MetadataGetter for method: System::__DTString::MatchSpecifiedWords
// Il2CppName: MatchSpecifiedWords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::__DTString::*)(::Il2CppString*, bool, ByRef<int>)>(&System::__DTString::MatchSpecifiedWords)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* checkWordBoundary = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* matchLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "MatchSpecifiedWords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, checkWordBoundary, matchLength});
  }
};
// Writing MetadataGetter for method: System::__DTString::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::__DTString::*)(::Il2CppString*)>(&System::__DTString::Match)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::__DTString::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::__DTString::*)(::Il2CppChar)>(&System::__DTString::Match)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::__DTString::MatchLongestWords
// Il2CppName: MatchLongestWords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::__DTString::*)(::Array<::Il2CppString*>*, ByRef<int>)>(&System::__DTString::MatchLongestWords)> {
  static const MethodInfo* get() {
    static auto* words = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* maxMatchStrLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "MatchLongestWords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{words, maxMatchStrLen});
  }
};
// Writing MetadataGetter for method: System::__DTString::GetRepeatCount
// Il2CppName: GetRepeatCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::__DTString::*)()>(&System::__DTString::GetRepeatCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "GetRepeatCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::__DTString::GetNextDigit
// Il2CppName: GetNextDigit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::__DTString::*)()>(&System::__DTString::GetNextDigit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "GetNextDigit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::__DTString::GetChar
// Il2CppName: GetChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::__DTString::*)()>(&System::__DTString::GetChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "GetChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::__DTString::GetDigit
// Il2CppName: GetDigit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::__DTString::*)()>(&System::__DTString::GetDigit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "GetDigit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::__DTString::SkipWhiteSpaces
// Il2CppName: SkipWhiteSpaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::__DTString::*)()>(&System::__DTString::SkipWhiteSpaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "SkipWhiteSpaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::__DTString::SkipWhiteSpaceCurrent
// Il2CppName: SkipWhiteSpaceCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::__DTString::*)()>(&System::__DTString::SkipWhiteSpaceCurrent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "SkipWhiteSpaceCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::__DTString::TrimTail
// Il2CppName: TrimTail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::__DTString::*)()>(&System::__DTString::TrimTail)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "TrimTail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::__DTString::RemoveTrailingInQuoteSpaces
// Il2CppName: RemoveTrailingInQuoteSpaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::__DTString::*)()>(&System::__DTString::RemoveTrailingInQuoteSpaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "RemoveTrailingInQuoteSpaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::__DTString::RemoveLeadingInQuoteSpaces
// Il2CppName: RemoveLeadingInQuoteSpaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::__DTString::*)()>(&System::__DTString::RemoveLeadingInQuoteSpaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "RemoveLeadingInQuoteSpaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::__DTString::GetSubString
// Il2CppName: GetSubString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DTSubString (System::__DTString::*)()>(&System::__DTString::GetSubString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "GetSubString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::__DTString::ConsumeSubString
// Il2CppName: ConsumeSubString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::__DTString::*)(System::DTSubString)>(&System::__DTString::ConsumeSubString)> {
  static const MethodInfo* get() {
    static auto* sub = &::il2cpp_utils::GetClassFromName("System", "DTSubString")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::__DTString), "ConsumeSubString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sub});
  }
};
