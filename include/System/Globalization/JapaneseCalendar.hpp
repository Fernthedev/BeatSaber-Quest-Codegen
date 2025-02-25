// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.Calendar
#include "System/Globalization/Calendar.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: GregorianCalendarHelper
  class GregorianCalendarHelper;
  // Forward declaring type: EraInfo
  class EraInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DayOfWeek
  struct DayOfWeek;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.JapaneseCalendar
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA1DF8
  class JapaneseCalendar : public System::Globalization::Calendar {
    public:
    // Writing base type padding for base size: 0x1C to desired offset: 0x20
    char ___base_padding[0x4] = {};
    // System.Globalization.GregorianCalendarHelper helper
    // Size: 0x8
    // Offset: 0x20
    System::Globalization::GregorianCalendarHelper* helper;
    // Field size check
    static_assert(sizeof(System::Globalization::GregorianCalendarHelper*) == 0x8);
    // Creating value type constructor for type: JapaneseCalendar
    JapaneseCalendar(System::Globalization::GregorianCalendarHelper* helper_ = {}) noexcept : helper{helper_} {}
    // Creating conversion operator: operator System::Globalization::GregorianCalendarHelper*
    constexpr operator System::Globalization::GregorianCalendarHelper*() const noexcept {
      return helper;
    }
    // Get static field: static readonly System.DateTime calendarMinValue
    static System::DateTime _get_calendarMinValue();
    // Set static field: static readonly System.DateTime calendarMinValue
    static void _set_calendarMinValue(System::DateTime value);
    // Get static field: static System.Globalization.EraInfo[] japaneseEraInfo
    static ::Array<System::Globalization::EraInfo*>* _get_japaneseEraInfo();
    // Set static field: static System.Globalization.EraInfo[] japaneseEraInfo
    static void _set_japaneseEraInfo(::Array<System::Globalization::EraInfo*>* value);
    // Get static field: static System.Globalization.Calendar s_defaultInstance
    static System::Globalization::Calendar* _get_s_defaultInstance();
    // Set static field: static System.Globalization.Calendar s_defaultInstance
    static void _set_s_defaultInstance(System::Globalization::Calendar* value);
    // Get instance field reference: System.Globalization.GregorianCalendarHelper helper
    System::Globalization::GregorianCalendarHelper*& dyn_helper();
    // static private System.Void .cctor()
    // Offset: 0x1A1E00C
    static void _cctor();
    // static System.Globalization.EraInfo[] GetEraInfo()
    // Offset: 0x1A1D340
    static ::Array<System::Globalization::EraInfo*>* GetEraInfo();
    // static private System.Globalization.EraInfo[] GetErasFromRegistry()
    // Offset: 0x1A1D68C
    static ::Array<System::Globalization::EraInfo*>* GetErasFromRegistry();
    // static System.Globalization.Calendar GetDefaultInstance()
    // Offset: 0x1A1D694
    static System::Globalization::Calendar* GetDefaultInstance();
    // static System.String[] EraNames()
    // Offset: 0x1A1DC4C
    static ::Array<::Il2CppString*>* EraNames();
    // static System.String[] AbbrevEraNames()
    // Offset: 0x1A1DD6C
    static ::Array<::Il2CppString*>* AbbrevEraNames();
    // static System.String[] EnglishEraNames()
    // Offset: 0x1A1DE8C
    static ::Array<::Il2CppString*>* EnglishEraNames();
    // public override System.DateTime get_MinSupportedDateTime()
    // Offset: 0x1A1D270
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::get_MinSupportedDateTime()
    System::DateTime get_MinSupportedDateTime();
    // public override System.DateTime get_MaxSupportedDateTime()
    // Offset: 0x1A1D2D8
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::get_MaxSupportedDateTime()
    System::DateTime get_MaxSupportedDateTime();
    // override System.Int32 get_ID()
    // Offset: 0x1A1D900
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::get_ID()
    int get_ID();
    // public override System.Int32[] get_Eras()
    // Offset: 0x1A1DC34
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32[] Calendar::get_Eras()
    ::Array<int>* get_Eras();
    // public override System.Int32 get_TwoDigitYearMax()
    // Offset: 0x1A1DFC4
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::get_TwoDigitYearMax()
    int get_TwoDigitYearMax();
    // public System.Void .ctor()
    // Offset: 0x1A1D764
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Void Calendar::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JapaneseCalendar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::JapaneseCalendar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JapaneseCalendar*, creationType>()));
    }
    // public override System.Int32 GetDaysInMonth(System.Int32 year, System.Int32 month, System.Int32 era)
    // Offset: 0x1A1D908
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetDaysInMonth(System.Int32 year, System.Int32 month, System.Int32 era)
    int GetDaysInMonth(int year, int month, int era);
    // public override System.Int32 GetDayOfMonth(System.DateTime time)
    // Offset: 0x1A1D920
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetDayOfMonth(System.DateTime time)
    int GetDayOfMonth(System::DateTime time);
    // public override System.DayOfWeek GetDayOfWeek(System.DateTime time)
    // Offset: 0x1A1D96C
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DayOfWeek Calendar::GetDayOfWeek(System.DateTime time)
    System::DayOfWeek GetDayOfWeek(System::DateTime time);
    // public override System.Int32 GetMonthsInYear(System.Int32 year, System.Int32 era)
    // Offset: 0x1A1D984
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetMonthsInYear(System.Int32 year, System.Int32 era)
    int GetMonthsInYear(int year, int era);
    // public override System.Int32 GetEra(System.DateTime time)
    // Offset: 0x1A1D9A8
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetEra(System.DateTime time)
    int GetEra(System::DateTime time);
    // public override System.Int32 GetMonth(System.DateTime time)
    // Offset: 0x1A1D9C0
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetMonth(System.DateTime time)
    int GetMonth(System::DateTime time);
    // public override System.Int32 GetYear(System.DateTime time)
    // Offset: 0x1A1DA0C
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetYear(System.DateTime time)
    int GetYear(System::DateTime time);
    // public override System.Boolean IsLeapYear(System.Int32 year, System.Int32 era)
    // Offset: 0x1A1DA24
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Boolean Calendar::IsLeapYear(System.Int32 year, System.Int32 era)
    bool IsLeapYear(int year, int era);
    // public override System.DateTime ToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era)
    // Offset: 0x1A1DA98
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::ToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era)
    System::DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era);
    // public override System.Int32 ToFourDigitYear(System.Int32 year)
    // Offset: 0x1A1DABC
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::ToFourDigitYear(System.Int32 year)
    int ToFourDigitYear(int year);
    // override System.Boolean IsValidYear(System.Int32 year, System.Int32 era)
    // Offset: 0x1A1DFAC
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Boolean Calendar::IsValidYear(System.Int32 year, System.Int32 era)
    bool IsValidYear(int year, int era);
  }; // System.Globalization.JapaneseCalendar
  #pragma pack(pop)
  static check_size<sizeof(JapaneseCalendar), 32 + sizeof(System::Globalization::GregorianCalendarHelper*)> __System_Globalization_JapaneseCalendarSizeCheck;
  static_assert(sizeof(JapaneseCalendar) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::JapaneseCalendar*, "System.Globalization", "JapaneseCalendar");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Globalization::JapaneseCalendar::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetEraInfo
// Il2CppName: GetEraInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Globalization::EraInfo*>* (*)()>(&System::Globalization::JapaneseCalendar::GetEraInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetEraInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetErasFromRegistry
// Il2CppName: GetErasFromRegistry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Globalization::EraInfo*>* (*)()>(&System::Globalization::JapaneseCalendar::GetErasFromRegistry)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetErasFromRegistry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetDefaultInstance
// Il2CppName: GetDefaultInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::Calendar* (*)()>(&System::Globalization::JapaneseCalendar::GetDefaultInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetDefaultInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::EraNames
// Il2CppName: EraNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)()>(&System::Globalization::JapaneseCalendar::EraNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "EraNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::AbbrevEraNames
// Il2CppName: AbbrevEraNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)()>(&System::Globalization::JapaneseCalendar::AbbrevEraNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "AbbrevEraNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::EnglishEraNames
// Il2CppName: EnglishEraNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)()>(&System::Globalization::JapaneseCalendar::EnglishEraNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "EnglishEraNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::get_MinSupportedDateTime
// Il2CppName: get_MinSupportedDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Globalization::JapaneseCalendar::*)()>(&System::Globalization::JapaneseCalendar::get_MinSupportedDateTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "get_MinSupportedDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::get_MaxSupportedDateTime
// Il2CppName: get_MaxSupportedDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Globalization::JapaneseCalendar::*)()>(&System::Globalization::JapaneseCalendar::get_MaxSupportedDateTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "get_MaxSupportedDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::get_ID
// Il2CppName: get_ID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::JapaneseCalendar::*)()>(&System::Globalization::JapaneseCalendar::get_ID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "get_ID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::get_Eras
// Il2CppName: get_Eras
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (System::Globalization::JapaneseCalendar::*)()>(&System::Globalization::JapaneseCalendar::get_Eras)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "get_Eras", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::get_TwoDigitYearMax
// Il2CppName: get_TwoDigitYearMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::JapaneseCalendar::*)()>(&System::Globalization::JapaneseCalendar::get_TwoDigitYearMax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "get_TwoDigitYearMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetDaysInMonth
// Il2CppName: GetDaysInMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::JapaneseCalendar::*)(int, int, int)>(&System::Globalization::JapaneseCalendar::GetDaysInMonth)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetDaysInMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetDayOfMonth
// Il2CppName: GetDayOfMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::JapaneseCalendar::*)(System::DateTime)>(&System::Globalization::JapaneseCalendar::GetDayOfMonth)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetDayOfMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetDayOfWeek
// Il2CppName: GetDayOfWeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DayOfWeek (System::Globalization::JapaneseCalendar::*)(System::DateTime)>(&System::Globalization::JapaneseCalendar::GetDayOfWeek)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetDayOfWeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetMonthsInYear
// Il2CppName: GetMonthsInYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::JapaneseCalendar::*)(int, int)>(&System::Globalization::JapaneseCalendar::GetMonthsInYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetMonthsInYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetEra
// Il2CppName: GetEra
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::JapaneseCalendar::*)(System::DateTime)>(&System::Globalization::JapaneseCalendar::GetEra)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetEra", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetMonth
// Il2CppName: GetMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::JapaneseCalendar::*)(System::DateTime)>(&System::Globalization::JapaneseCalendar::GetMonth)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetYear
// Il2CppName: GetYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::JapaneseCalendar::*)(System::DateTime)>(&System::Globalization::JapaneseCalendar::GetYear)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::IsLeapYear
// Il2CppName: IsLeapYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::JapaneseCalendar::*)(int, int)>(&System::Globalization::JapaneseCalendar::IsLeapYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "IsLeapYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::ToDateTime
// Il2CppName: ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Globalization::JapaneseCalendar::*)(int, int, int, int, int, int, int, int)>(&System::Globalization::JapaneseCalendar::ToDateTime)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hour = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minute = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* millisecond = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, day, hour, minute, second, millisecond, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::ToFourDigitYear
// Il2CppName: ToFourDigitYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::JapaneseCalendar::*)(int)>(&System::Globalization::JapaneseCalendar::ToFourDigitYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "ToFourDigitYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::IsValidYear
// Il2CppName: IsValidYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::JapaneseCalendar::*)(int, int)>(&System::Globalization::JapaneseCalendar::IsValidYear)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "IsValidYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, era});
  }
};
