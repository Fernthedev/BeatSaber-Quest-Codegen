// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: DateTimeFormatInfo
  class DateTimeFormatInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.TimeSpanFormat
  // [TokenAttribute] Offset: FFFFFFFF
  class TimeSpanFormat : public ::Il2CppObject {
    public:
    // Nested type: System::Globalization::TimeSpanFormat::Pattern
    struct Pattern;
    // Nested type: System::Globalization::TimeSpanFormat::FormatLiterals
    struct FormatLiterals;
    // Size: 0x28
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals
    // [TokenAttribute] Offset: FFFFFFFF
    struct FormatLiterals/*, public System::ValueType*/ {
      public:
      // System.String AppCompatLiteral
      // Size: 0x8
      // Offset: 0x0
      ::Il2CppString* AppCompatLiteral;
      // Field size check
      static_assert(sizeof(::Il2CppString*) == 0x8);
      // System.Int32 dd
      // Size: 0x4
      // Offset: 0x8
      int dd;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Int32 hh
      // Size: 0x4
      // Offset: 0xC
      int hh;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Int32 mm
      // Size: 0x4
      // Offset: 0x10
      int mm;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Int32 ss
      // Size: 0x4
      // Offset: 0x14
      int ss;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Int32 ff
      // Size: 0x4
      // Offset: 0x18
      int ff;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Padding between fields: ff and: literals
      char __padding5[0x4] = {};
      // private System.String[] literals
      // Size: 0x8
      // Offset: 0x20
      ::Array<::Il2CppString*>* literals;
      // Field size check
      static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
      // Creating value type constructor for type: FormatLiterals
      constexpr FormatLiterals(::Il2CppString* AppCompatLiteral_ = {}, int dd_ = {}, int hh_ = {}, int mm_ = {}, int ss_ = {}, int ff_ = {}, ::Array<::Il2CppString*>* literals_ = {}) noexcept : AppCompatLiteral{AppCompatLiteral_}, dd{dd_}, hh{hh_}, mm{mm_}, ss{ss_}, ff{ff_}, literals{literals_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field: System.String AppCompatLiteral
      ::Il2CppString* _get_AppCompatLiteral();
      // Set instance field: System.String AppCompatLiteral
      void _set_AppCompatLiteral(::Il2CppString* value);
      // Get instance field: System.Int32 dd
      int _get_dd();
      // Set instance field: System.Int32 dd
      void _set_dd(int value);
      // Get instance field: System.Int32 hh
      int _get_hh();
      // Set instance field: System.Int32 hh
      void _set_hh(int value);
      // Get instance field: System.Int32 mm
      int _get_mm();
      // Set instance field: System.Int32 mm
      void _set_mm(int value);
      // Get instance field: System.Int32 ss
      int _get_ss();
      // Set instance field: System.Int32 ss
      void _set_ss(int value);
      // Get instance field: System.Int32 ff
      int _get_ff();
      // Set instance field: System.Int32 ff
      void _set_ff(int value);
      // Get instance field: private System.String[] literals
      ::Array<::Il2CppString*>* _get_literals();
      // Set instance field: private System.String[] literals
      void _set_literals(::Array<::Il2CppString*>* value);
      // System.String get_Start()
      // Offset: 0x1A1FDE4
      ::Il2CppString* get_Start();
      // System.String get_DayHourSep()
      // Offset: 0x1A1FE18
      ::Il2CppString* get_DayHourSep();
      // System.String get_HourMinuteSep()
      // Offset: 0x1A1FE50
      ::Il2CppString* get_HourMinuteSep();
      // System.String get_MinuteSecondSep()
      // Offset: 0x1A1FE88
      ::Il2CppString* get_MinuteSecondSep();
      // System.String get_SecondFractionSep()
      // Offset: 0x1A1FEC0
      ::Il2CppString* get_SecondFractionSep();
      // System.String get_End()
      // Offset: 0x1A1FEF8
      ::Il2CppString* get_End();
      // static System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals InitInvariant(System.Boolean isNegative)
      // Offset: 0x1A1FFCC
      static System::Globalization::TimeSpanFormat::FormatLiterals InitInvariant(bool isNegative);
      // System.Void Init(System.String format, System.Boolean useInvariantFieldLengths)
      // Offset: 0x1A1F9B4
      void Init(::Il2CppString* format, bool useInvariantFieldLengths);
    }; // System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals
    #pragma pack(pop)
    static check_size<sizeof(TimeSpanFormat::FormatLiterals), 32 + sizeof(::Array<::Il2CppString*>*)> __System_Globalization_TimeSpanFormat_FormatLiteralsSizeCheck;
    static_assert(sizeof(TimeSpanFormat::FormatLiterals) == 0x28);
    // Creating value type constructor for type: TimeSpanFormat
    TimeSpanFormat() noexcept {}
    // Get static field: static readonly System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals PositiveInvariantFormatLiterals
    static System::Globalization::TimeSpanFormat::FormatLiterals _get_PositiveInvariantFormatLiterals();
    // Set static field: static readonly System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals PositiveInvariantFormatLiterals
    static void _set_PositiveInvariantFormatLiterals(System::Globalization::TimeSpanFormat::FormatLiterals value);
    // Get static field: static readonly System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals NegativeInvariantFormatLiterals
    static System::Globalization::TimeSpanFormat::FormatLiterals _get_NegativeInvariantFormatLiterals();
    // Set static field: static readonly System.Globalization.TimeSpanFormat/System.Globalization.FormatLiterals NegativeInvariantFormatLiterals
    static void _set_NegativeInvariantFormatLiterals(System::Globalization::TimeSpanFormat::FormatLiterals value);
    // static private System.Void .cctor()
    // Offset: 0x1A1FF30
    static void _cctor();
    // static private System.String IntToString(System.Int32 n, System.Int32 digits)
    // Offset: 0x1A1EAA0
    static ::Il2CppString* IntToString(int n, int digits);
    // static System.String Format(System.TimeSpan value, System.String format, System.IFormatProvider formatProvider)
    // Offset: 0x1A1EAB8
    static ::Il2CppString* Format(System::TimeSpan value, ::Il2CppString* format, System::IFormatProvider* formatProvider);
    // static private System.String FormatStandard(System.TimeSpan value, System.Boolean isInvariant, System.String format, System.Globalization.TimeSpanFormat/System.Globalization.Pattern pattern)
    // Offset: 0x1A1ECFC
    static ::Il2CppString* FormatStandard(System::TimeSpan value, bool isInvariant, ::Il2CppString* format, System::Globalization::TimeSpanFormat::Pattern pattern);
    // static System.String FormatCustomized(System.TimeSpan value, System.String format, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x1A1F214
    static ::Il2CppString* FormatCustomized(System::TimeSpan value, ::Il2CppString* format, System::Globalization::DateTimeFormatInfo* dtfi);
  }; // System.Globalization.TimeSpanFormat
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::TimeSpanFormat*, "System.Globalization", "TimeSpanFormat");
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::TimeSpanFormat::FormatLiterals, "System.Globalization", "TimeSpanFormat/FormatLiterals");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::TimeSpanFormat::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Globalization::TimeSpanFormat::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanFormat*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanFormat::IntToString
// Il2CppName: IntToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(int, int)>(&System::Globalization::TimeSpanFormat::IntToString)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* digits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanFormat*), "IntToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, digits});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanFormat::Format
// Il2CppName: Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::TimeSpan, ::Il2CppString*, System::IFormatProvider*)>(&System::Globalization::TimeSpanFormat::Format)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanFormat*), "Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, format, formatProvider});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanFormat::FormatStandard
// Il2CppName: FormatStandard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::TimeSpan, bool, ::Il2CppString*, System::Globalization::TimeSpanFormat::Pattern)>(&System::Globalization::TimeSpanFormat::FormatStandard)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* isInvariant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System.Globalization", "TimeSpanFormat/Pattern")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanFormat*), "FormatStandard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, isInvariant, format, pattern});
  }
};
// Writing MetadataGetter for method: System::Globalization::TimeSpanFormat::FormatCustomized
// Il2CppName: FormatCustomized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::TimeSpan, ::Il2CppString*, System::Globalization::DateTimeFormatInfo*)>(&System::Globalization::TimeSpanFormat::FormatCustomized)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dtfi = &::il2cpp_utils::GetClassFromName("System.Globalization", "DateTimeFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::TimeSpanFormat*), "FormatCustomized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, format, dtfi});
  }
};
