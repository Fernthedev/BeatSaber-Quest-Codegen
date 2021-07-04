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
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexBoyerMoore
  class RegexBoyerMoore : public ::Il2CppObject {
    public:
    // System.Int32[] _positive
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* positive;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Int32[] _negativeASCII
    // Size: 0x8
    // Offset: 0x18
    ::Array<int>* negativeASCII;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Int32[][] _negativeUnicode
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Array<int>*>* negativeUnicode;
    // Field size check
    static_assert(sizeof(::Array<::Array<int>*>*) == 0x8);
    // System.String _pattern
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* pattern;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Int32 _lowASCII
    // Size: 0x4
    // Offset: 0x30
    int lowASCII;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _highASCII
    // Size: 0x4
    // Offset: 0x34
    int highASCII;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean _rightToLeft
    // Size: 0x1
    // Offset: 0x38
    bool rightToLeft;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean _caseInsensitive
    // Size: 0x1
    // Offset: 0x39
    bool caseInsensitive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: caseInsensitive and: culture
    char __padding7[0x6] = {};
    // System.Globalization.CultureInfo _culture
    // Size: 0x8
    // Offset: 0x40
    System::Globalization::CultureInfo* culture;
    // Field size check
    static_assert(sizeof(System::Globalization::CultureInfo*) == 0x8);
    // Creating value type constructor for type: RegexBoyerMoore
    RegexBoyerMoore(::Array<int>* positive_ = {}, ::Array<int>* negativeASCII_ = {}, ::Array<::Array<int>*>* negativeUnicode_ = {}, ::Il2CppString* pattern_ = {}, int lowASCII_ = {}, int highASCII_ = {}, bool rightToLeft_ = {}, bool caseInsensitive_ = {}, System::Globalization::CultureInfo* culture_ = {}) noexcept : positive{positive_}, negativeASCII{negativeASCII_}, negativeUnicode{negativeUnicode_}, pattern{pattern_}, lowASCII{lowASCII_}, highASCII{highASCII_}, rightToLeft{rightToLeft_}, caseInsensitive{caseInsensitive_}, culture{culture_} {}
    // System.Void .ctor(System.String pattern, System.Boolean caseInsensitive, System.Boolean rightToLeft, System.Globalization.CultureInfo culture)
    // Offset: 0x185741C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexBoyerMoore* New_ctor(::Il2CppString* pattern, bool caseInsensitive, bool rightToLeft, System::Globalization::CultureInfo* culture) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexBoyerMoore::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexBoyerMoore*, creationType>(pattern, caseInsensitive, rightToLeft, culture)));
    }
    // private System.Boolean MatchPattern(System.String text, System.Int32 index)
    // Offset: 0x18578F0
    bool MatchPattern(::Il2CppString* text, int index);
    // System.Boolean IsMatch(System.String text, System.Int32 index, System.Int32 beglimit, System.Int32 endlimit)
    // Offset: 0x1857A18
    bool IsMatch(::Il2CppString* text, int index, int beglimit, int endlimit);
    // System.Int32 Scan(System.String text, System.Int32 index, System.Int32 beglimit, System.Int32 endlimit)
    // Offset: 0x1857A88
    int Scan(::Il2CppString* text, int index, int beglimit, int endlimit);
    // public override System.String ToString()
    // Offset: 0x1857DCC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Text.RegularExpressions.RegexBoyerMoore
  #pragma pack(pop)
  static check_size<sizeof(RegexBoyerMoore), 64 + sizeof(System::Globalization::CultureInfo*)> __System_Text_RegularExpressions_RegexBoyerMooreSizeCheck;
  static_assert(sizeof(RegexBoyerMoore) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexBoyerMoore*, "System.Text.RegularExpressions", "RegexBoyerMoore");
// Writing includes for template specializations
#include "System/Globalization/CultureInfo.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexBoyerMoore::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexBoyerMoore::MatchPattern
// Il2CppName: MatchPattern
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::RegexBoyerMoore::*)(::Il2CppString*, int)>(&System::Text::RegularExpressions::RegexBoyerMoore::MatchPattern)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexBoyerMoore*), "MatchPattern", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexBoyerMoore::IsMatch
// Il2CppName: IsMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::RegexBoyerMoore::*)(::Il2CppString*, int, int, int)>(&System::Text::RegularExpressions::RegexBoyerMoore::IsMatch)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexBoyerMoore*), "IsMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexBoyerMoore::Scan
// Il2CppName: Scan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexBoyerMoore::*)(::Il2CppString*, int, int, int)>(&System::Text::RegularExpressions::RegexBoyerMoore::Scan)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexBoyerMoore*), "Scan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexBoyerMoore::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Text::RegularExpressions::RegexBoyerMoore::*)()>(&System::Text::RegularExpressions::RegexBoyerMoore::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexBoyerMoore*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
