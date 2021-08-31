// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: DateTimeFormatInfo
  class DateTimeFormatInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.DateTimeFormat
  // [TokenAttribute] Offset: FFFFFFFF
  class DateTimeFormat : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: DateTimeFormat
    DateTimeFormat() noexcept {}
    // Get static field: static readonly System.TimeSpan NullOffset
    static System::TimeSpan _get_NullOffset();
    // Set static field: static readonly System.TimeSpan NullOffset
    static void _set_NullOffset(System::TimeSpan value);
    // Get static field: static System.Char[] allStandardFormats
    static ::Array<::Il2CppChar>* _get_allStandardFormats();
    // Set static field: static System.Char[] allStandardFormats
    static void _set_allStandardFormats(::Array<::Il2CppChar>* value);
    // Get static field: static System.String[] fixedNumberFormats
    static ::Array<::Il2CppString*>* _get_fixedNumberFormats();
    // Set static field: static System.String[] fixedNumberFormats
    static void _set_fixedNumberFormats(::Array<::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x19CB6A0
    static void _cctor();
    // static System.Void FormatDigits(System.Text.StringBuilder outputBuffer, System.Int32 value, System.Int32 len)
    // Offset: 0x19C941C
    static void FormatDigits(System::Text::StringBuilder* outputBuffer, int value, int len);
    // static System.Void FormatDigits(System.Text.StringBuilder outputBuffer, System.Int32 value, System.Int32 len, System.Boolean overrideLengthLimit)
    // Offset: 0x19C949C
    static void FormatDigits(System::Text::StringBuilder* outputBuffer, int value, int len, bool overrideLengthLimit);
    // static private System.Void HebrewFormatDigits(System.Text.StringBuilder outputBuffer, System.Int32 digits)
    // Offset: 0x19C9578
    static void HebrewFormatDigits(System::Text::StringBuilder* outputBuffer, int digits);
    // static System.Int32 ParseRepeatPattern(System.String format, System.Int32 pos, System.Char patternChar)
    // Offset: 0x19C9604
    static int ParseRepeatPattern(::Il2CppString* format, int pos, ::Il2CppChar patternChar);
    // static private System.String FormatDayOfWeek(System.Int32 dayOfWeek, System.Int32 repeat, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x19C9678
    static ::Il2CppString* FormatDayOfWeek(int dayOfWeek, int repeat, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.String FormatMonth(System.Int32 month, System.Int32 repeatCount, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x19C96B0
    static ::Il2CppString* FormatMonth(int month, int repeatCount, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.String FormatHebrewMonthName(System.DateTime time, System.Int32 month, System.Int32 repeatCount, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x19C96E8
    static ::Il2CppString* FormatHebrewMonthName(System::DateTime time, int month, int repeatCount, System::Globalization::DateTimeFormatInfo* dtfi);
    // static System.Int32 ParseQuoteString(System.String format, System.Int32 pos, System.Text.StringBuilder result)
    // Offset: 0x19C97AC
    static int ParseQuoteString(::Il2CppString* format, int pos, System::Text::StringBuilder* result);
    // static System.Int32 ParseNextChar(System.String format, System.Int32 pos)
    // Offset: 0x19C9974
    static int ParseNextChar(::Il2CppString* format, int pos);
    // static private System.Boolean IsUseGenitiveForm(System.String format, System.Int32 index, System.Int32 tokenLen, System.Char patternToMatch)
    // Offset: 0x19C99B4
    static bool IsUseGenitiveForm(::Il2CppString* format, int index, int tokenLen, ::Il2CppChar patternToMatch);
    // static private System.String FormatCustomized(System.DateTime dateTime, System.String format, System.Globalization.DateTimeFormatInfo dtfi, System.TimeSpan offset)
    // Offset: 0x19C9AF4
    static ::Il2CppString* FormatCustomized(System::DateTime dateTime, ::Il2CppString* format, System::Globalization::DateTimeFormatInfo* dtfi, System::TimeSpan offset);
    // static private System.Void FormatCustomizedTimeZone(System.DateTime dateTime, System.TimeSpan offset, System.String format, System.Int32 tokenLen, System.Boolean timeOnly, System.Text.StringBuilder result)
    // Offset: 0x19CA8A4
    static void FormatCustomizedTimeZone(System::DateTime dateTime, System::TimeSpan offset, ::Il2CppString* format, int tokenLen, bool timeOnly, System::Text::StringBuilder* result);
    // static private System.Void FormatCustomizedRoundripTimeZone(System.DateTime dateTime, System.TimeSpan offset, System.Text.StringBuilder result)
    // Offset: 0x19CABE0
    static void FormatCustomizedRoundripTimeZone(System::DateTime dateTime, System::TimeSpan offset, System::Text::StringBuilder* result);
    // static System.String GetRealFormat(System.String format, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x19CAE10
    static ::Il2CppString* GetRealFormat(::Il2CppString* format, System::Globalization::DateTimeFormatInfo* dtfi);
    // static private System.String ExpandPredefinedFormat(System.String format, ref System.DateTime dateTime, ref System.Globalization.DateTimeFormatInfo dtfi, ref System.TimeSpan offset)
    // Offset: 0x19CB0BC
    static ::Il2CppString* ExpandPredefinedFormat(::Il2CppString* format, ByRef<System::DateTime> dateTime, ByRef<System::Globalization::DateTimeFormatInfo*> dtfi, ByRef<System::TimeSpan> offset);
    // static System.String Format(System.DateTime dateTime, System.String format, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x19C7E3C
    static ::Il2CppString* Format(System::DateTime dateTime, ::Il2CppString* format, System::Globalization::DateTimeFormatInfo* dtfi);
    // static System.String Format(System.DateTime dateTime, System.String format, System.Globalization.DateTimeFormatInfo dtfi, System.TimeSpan offset)
    // Offset: 0x19CB46C
    static ::Il2CppString* Format(System::DateTime dateTime, ::Il2CppString* format, System::Globalization::DateTimeFormatInfo* dtfi, System::TimeSpan offset);
    // static System.Void InvalidFormatForLocal(System.String format, System.DateTime dateTime)
    // Offset: 0x19CB468
    static void InvalidFormatForLocal(::Il2CppString* format, System::DateTime dateTime);
    // static System.Void InvalidFormatForUtc(System.String format, System.DateTime dateTime)
    // Offset: 0x19CAE0C
    static void InvalidFormatForUtc(::Il2CppString* format, System::DateTime dateTime);
  }; // System.DateTimeFormat
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeFormat*, "System", "DateTimeFormat");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::DateTimeFormat::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::DateTimeFormat::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::DateTimeFormat::FormatDigits
// Il2CppName: FormatDigits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::StringBuilder*, int, int)>(&System::DateTimeFormat::FormatDigits)> {
  static const MethodInfo* get() {
    static auto* outputBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), "FormatDigits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outputBuffer, value, len});
  }
};
// Writing MetadataGetter for method: System::DateTimeFormat::FormatDigits
// Il2CppName: FormatDigits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::StringBuilder*, int, int, bool)>(&System::DateTimeFormat::FormatDigits)> {
  static const MethodInfo* get() {
    static auto* outputBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* overrideLengthLimit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), "FormatDigits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outputBuffer, value, len, overrideLengthLimit});
  }
};
// Writing MetadataGetter for method: System::DateTimeFormat::HebrewFormatDigits
// Il2CppName: HebrewFormatDigits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::StringBuilder*, int)>(&System::DateTimeFormat::HebrewFormatDigits)> {
  static const MethodInfo* get() {
    static auto* outputBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* digits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), "HebrewFormatDigits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outputBuffer, digits});
  }
};
// Writing MetadataGetter for method: System::DateTimeFormat::ParseRepeatPattern
// Il2CppName: ParseRepeatPattern
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*, int, ::Il2CppChar)>(&System::DateTimeFormat::ParseRepeatPattern)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* patternChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), "ParseRepeatPattern", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, pos, patternChar});
  }
};
// Writing MetadataGetter for method: System::DateTimeFormat::FormatDayOfWeek
// Il2CppName: FormatDayOfWeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(int, int, System::Globalization::DateTimeFormatInfo*)>(&System::DateTimeFormat::FormatDayOfWeek)> {
  static const MethodInfo* get() {
    static auto* dayOfWeek = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* repeat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dtfi = &::il2cpp_utils::GetClassFromName("System.Globalization", "DateTimeFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), "FormatDayOfWeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dayOfWeek, repeat, dtfi});
  }
};
// Writing MetadataGetter for method: System::DateTimeFormat::FormatMonth
// Il2CppName: FormatMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(int, int, System::Globalization::DateTimeFormatInfo*)>(&System::DateTimeFormat::FormatMonth)> {
  static const MethodInfo* get() {
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* repeatCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dtfi = &::il2cpp_utils::GetClassFromName("System.Globalization", "DateTimeFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), "FormatMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{month, repeatCount, dtfi});
  }
};
// Writing MetadataGetter for method: System::DateTimeFormat::FormatHebrewMonthName
// Il2CppName: FormatHebrewMonthName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::DateTime, int, int, System::Globalization::DateTimeFormatInfo*)>(&System::DateTimeFormat::FormatHebrewMonthName)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* repeatCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dtfi = &::il2cpp_utils::GetClassFromName("System.Globalization", "DateTimeFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), "FormatHebrewMonthName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, month, repeatCount, dtfi});
  }
};
// Writing MetadataGetter for method: System::DateTimeFormat::ParseQuoteString
// Il2CppName: ParseQuoteString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*, int, System::Text::StringBuilder*)>(&System::DateTimeFormat::ParseQuoteString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), "ParseQuoteString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, pos, result});
  }
};
// Writing MetadataGetter for method: System::DateTimeFormat::ParseNextChar
// Il2CppName: ParseNextChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*, int)>(&System::DateTimeFormat::ParseNextChar)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), "ParseNextChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, pos});
  }
};
// Writing MetadataGetter for method: System::DateTimeFormat::IsUseGenitiveForm
// Il2CppName: IsUseGenitiveForm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, int, int, ::Il2CppChar)>(&System::DateTimeFormat::IsUseGenitiveForm)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tokenLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* patternToMatch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), "IsUseGenitiveForm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, index, tokenLen, patternToMatch});
  }
};
// Writing MetadataGetter for method: System::DateTimeFormat::FormatCustomized
// Il2CppName: FormatCustomized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::DateTime, ::Il2CppString*, System::Globalization::DateTimeFormatInfo*, System::TimeSpan)>(&System::DateTimeFormat::FormatCustomized)> {
  static const MethodInfo* get() {
    static auto* dateTime = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dtfi = &::il2cpp_utils::GetClassFromName("System.Globalization", "DateTimeFormatInfo")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), "FormatCustomized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dateTime, format, dtfi, offset});
  }
};
// Writing MetadataGetter for method: System::DateTimeFormat::FormatCustomizedTimeZone
// Il2CppName: FormatCustomizedTimeZone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::DateTime, System::TimeSpan, ::Il2CppString*, int, bool, System::Text::StringBuilder*)>(&System::DateTimeFormat::FormatCustomizedTimeZone)> {
  static const MethodInfo* get() {
    static auto* dateTime = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* tokenLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* timeOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), "FormatCustomizedTimeZone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dateTime, offset, format, tokenLen, timeOnly, result});
  }
};
// Writing MetadataGetter for method: System::DateTimeFormat::FormatCustomizedRoundripTimeZone
// Il2CppName: FormatCustomizedRoundripTimeZone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::DateTime, System::TimeSpan, System::Text::StringBuilder*)>(&System::DateTimeFormat::FormatCustomizedRoundripTimeZone)> {
  static const MethodInfo* get() {
    static auto* dateTime = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), "FormatCustomizedRoundripTimeZone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dateTime, offset, result});
  }
};
// Writing MetadataGetter for method: System::DateTimeFormat::GetRealFormat
// Il2CppName: GetRealFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, System::Globalization::DateTimeFormatInfo*)>(&System::DateTimeFormat::GetRealFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dtfi = &::il2cpp_utils::GetClassFromName("System.Globalization", "DateTimeFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), "GetRealFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, dtfi});
  }
};
// Writing MetadataGetter for method: System::DateTimeFormat::ExpandPredefinedFormat
// Il2CppName: ExpandPredefinedFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ByRef<System::DateTime>, ByRef<System::Globalization::DateTimeFormatInfo*>, ByRef<System::TimeSpan>)>(&System::DateTimeFormat::ExpandPredefinedFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dateTime = &::il2cpp_utils::GetClassFromName("System", "DateTime")->this_arg;
    static auto* dtfi = &::il2cpp_utils::GetClassFromName("System.Globalization", "DateTimeFormatInfo")->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), "ExpandPredefinedFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, dateTime, dtfi, offset});
  }
};
// Writing MetadataGetter for method: System::DateTimeFormat::Format
// Il2CppName: Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::DateTime, ::Il2CppString*, System::Globalization::DateTimeFormatInfo*)>(&System::DateTimeFormat::Format)> {
  static const MethodInfo* get() {
    static auto* dateTime = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dtfi = &::il2cpp_utils::GetClassFromName("System.Globalization", "DateTimeFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), "Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dateTime, format, dtfi});
  }
};
// Writing MetadataGetter for method: System::DateTimeFormat::Format
// Il2CppName: Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::DateTime, ::Il2CppString*, System::Globalization::DateTimeFormatInfo*, System::TimeSpan)>(&System::DateTimeFormat::Format)> {
  static const MethodInfo* get() {
    static auto* dateTime = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dtfi = &::il2cpp_utils::GetClassFromName("System.Globalization", "DateTimeFormatInfo")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), "Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dateTime, format, dtfi, offset});
  }
};
// Writing MetadataGetter for method: System::DateTimeFormat::InvalidFormatForLocal
// Il2CppName: InvalidFormatForLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, System::DateTime)>(&System::DateTimeFormat::InvalidFormatForLocal)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dateTime = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), "InvalidFormatForLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, dateTime});
  }
};
// Writing MetadataGetter for method: System::DateTimeFormat::InvalidFormatForUtc
// Il2CppName: InvalidFormatForUtc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, System::DateTime)>(&System::DateTimeFormat::InvalidFormatForUtc)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dateTime = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeFormat*), "InvalidFormatForUtc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, dateTime});
  }
};
