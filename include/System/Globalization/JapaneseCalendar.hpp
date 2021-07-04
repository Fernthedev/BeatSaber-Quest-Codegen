// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // [ComVisibleAttribute] Offset: D7CC08
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
    // static System.Globalization.EraInfo[] GetEraInfo()
    // Offset: 0x19F697C
    static ::Array<System::Globalization::EraInfo*>* GetEraInfo();
    // static private System.Globalization.EraInfo[] GetErasFromRegistry()
    // Offset: 0x19F6CC8
    static ::Array<System::Globalization::EraInfo*>* GetErasFromRegistry();
    // static System.Globalization.Calendar GetDefaultInstance()
    // Offset: 0x19F6CD0
    static System::Globalization::Calendar* GetDefaultInstance();
    // static System.String[] EraNames()
    // Offset: 0x19F7288
    static ::Array<::Il2CppString*>* EraNames();
    // static System.String[] AbbrevEraNames()
    // Offset: 0x19F73A8
    static ::Array<::Il2CppString*>* AbbrevEraNames();
    // static System.String[] EnglishEraNames()
    // Offset: 0x19F74C8
    static ::Array<::Il2CppString*>* EnglishEraNames();
    // static private System.Void .cctor()
    // Offset: 0x19F7648
    static void _cctor();
    // public override System.DateTime get_MinSupportedDateTime()
    // Offset: 0x19F68AC
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::get_MinSupportedDateTime()
    System::DateTime get_MinSupportedDateTime();
    // public override System.DateTime get_MaxSupportedDateTime()
    // Offset: 0x19F6914
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::get_MaxSupportedDateTime()
    System::DateTime get_MaxSupportedDateTime();
    // public System.Void .ctor()
    // Offset: 0x19F6DA0
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Void Calendar::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JapaneseCalendar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::JapaneseCalendar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JapaneseCalendar*, creationType>()));
    }
    // override System.Int32 get_ID()
    // Offset: 0x19F6F3C
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::get_ID()
    int get_ID();
    // public override System.Int32 GetDaysInMonth(System.Int32 year, System.Int32 month, System.Int32 era)
    // Offset: 0x19F6F44
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetDaysInMonth(System.Int32 year, System.Int32 month, System.Int32 era)
    int GetDaysInMonth(int year, int month, int era);
    // public override System.Int32 GetDayOfMonth(System.DateTime time)
    // Offset: 0x19F6F5C
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetDayOfMonth(System.DateTime time)
    int GetDayOfMonth(System::DateTime time);
    // public override System.DayOfWeek GetDayOfWeek(System.DateTime time)
    // Offset: 0x19F6FA8
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DayOfWeek Calendar::GetDayOfWeek(System.DateTime time)
    System::DayOfWeek GetDayOfWeek(System::DateTime time);
    // public override System.Int32 GetMonthsInYear(System.Int32 year, System.Int32 era)
    // Offset: 0x19F6FC0
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetMonthsInYear(System.Int32 year, System.Int32 era)
    int GetMonthsInYear(int year, int era);
    // public override System.Int32 GetEra(System.DateTime time)
    // Offset: 0x19F6FE4
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetEra(System.DateTime time)
    int GetEra(System::DateTime time);
    // public override System.Int32 GetMonth(System.DateTime time)
    // Offset: 0x19F6FFC
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetMonth(System.DateTime time)
    int GetMonth(System::DateTime time);
    // public override System.Int32 GetYear(System.DateTime time)
    // Offset: 0x19F7048
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetYear(System.DateTime time)
    int GetYear(System::DateTime time);
    // public override System.Boolean IsLeapYear(System.Int32 year, System.Int32 era)
    // Offset: 0x19F7060
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Boolean Calendar::IsLeapYear(System.Int32 year, System.Int32 era)
    bool IsLeapYear(int year, int era);
    // public override System.DateTime ToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era)
    // Offset: 0x19F70D4
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::ToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era)
    System::DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era);
    // public override System.Int32 ToFourDigitYear(System.Int32 year)
    // Offset: 0x19F70F8
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::ToFourDigitYear(System.Int32 year)
    int ToFourDigitYear(int year);
    // public override System.Int32[] get_Eras()
    // Offset: 0x19F7270
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32[] Calendar::get_Eras()
    ::Array<int>* get_Eras();
    // override System.Boolean IsValidYear(System.Int32 year, System.Int32 era)
    // Offset: 0x19F75E8
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Boolean Calendar::IsValidYear(System.Int32 year, System.Int32 era)
    bool IsValidYear(int year, int era);
    // public override System.Int32 get_TwoDigitYearMax()
    // Offset: 0x19F7600
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::get_TwoDigitYearMax()
    int get_TwoDigitYearMax();
  }; // System.Globalization.JapaneseCalendar
  #pragma pack(pop)
  static check_size<sizeof(JapaneseCalendar), 32 + sizeof(System::Globalization::GregorianCalendarHelper*)> __System_Globalization_JapaneseCalendarSizeCheck;
  static_assert(sizeof(JapaneseCalendar) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::JapaneseCalendar*, "System.Globalization", "JapaneseCalendar");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetEraInfo
// Il2CppName: GetEraInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Globalization::EraInfo*>* (*)()>(&System::Globalization::JapaneseCalendar::GetEraInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetEraInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetErasFromRegistry
// Il2CppName: GetErasFromRegistry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Globalization::EraInfo*>* (*)()>(&System::Globalization::JapaneseCalendar::GetErasFromRegistry)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetErasFromRegistry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetDefaultInstance
// Il2CppName: GetDefaultInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::Calendar* (*)()>(&System::Globalization::JapaneseCalendar::GetDefaultInstance)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetDefaultInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::EraNames
// Il2CppName: EraNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)()>(&System::Globalization::JapaneseCalendar::EraNames)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "EraNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::AbbrevEraNames
// Il2CppName: AbbrevEraNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)()>(&System::Globalization::JapaneseCalendar::AbbrevEraNames)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "AbbrevEraNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::EnglishEraNames
// Il2CppName: EnglishEraNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (*)()>(&System::Globalization::JapaneseCalendar::EnglishEraNames)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "EnglishEraNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Globalization::JapaneseCalendar::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::get_MinSupportedDateTime
// Il2CppName: get_MinSupportedDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Globalization::JapaneseCalendar::*)()>(&System::Globalization::JapaneseCalendar::get_MinSupportedDateTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "get_MinSupportedDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::get_MaxSupportedDateTime
// Il2CppName: get_MaxSupportedDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Globalization::JapaneseCalendar::*)()>(&System::Globalization::JapaneseCalendar::get_MaxSupportedDateTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "get_MaxSupportedDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::get_ID
// Il2CppName: get_ID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::JapaneseCalendar::*)()>(&System::Globalization::JapaneseCalendar::get_ID)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "get_ID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetDaysInMonth
// Il2CppName: GetDaysInMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::JapaneseCalendar::*)(int, int, int)>(&System::Globalization::JapaneseCalendar::GetDaysInMonth)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetDaysInMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetDayOfMonth
// Il2CppName: GetDayOfMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::JapaneseCalendar::*)(System::DateTime)>(&System::Globalization::JapaneseCalendar::GetDayOfMonth)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetDayOfMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::DateTime>()});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetDayOfWeek
// Il2CppName: GetDayOfWeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DayOfWeek (System::Globalization::JapaneseCalendar::*)(System::DateTime)>(&System::Globalization::JapaneseCalendar::GetDayOfWeek)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetDayOfWeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::DateTime>()});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetMonthsInYear
// Il2CppName: GetMonthsInYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::JapaneseCalendar::*)(int, int)>(&System::Globalization::JapaneseCalendar::GetMonthsInYear)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetMonthsInYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetEra
// Il2CppName: GetEra
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::JapaneseCalendar::*)(System::DateTime)>(&System::Globalization::JapaneseCalendar::GetEra)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetEra", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::DateTime>()});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetMonth
// Il2CppName: GetMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::JapaneseCalendar::*)(System::DateTime)>(&System::Globalization::JapaneseCalendar::GetMonth)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::DateTime>()});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::GetYear
// Il2CppName: GetYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::JapaneseCalendar::*)(System::DateTime)>(&System::Globalization::JapaneseCalendar::GetYear)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "GetYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::DateTime>()});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::IsLeapYear
// Il2CppName: IsLeapYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::JapaneseCalendar::*)(int, int)>(&System::Globalization::JapaneseCalendar::IsLeapYear)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "IsLeapYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::ToDateTime
// Il2CppName: ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Globalization::JapaneseCalendar::*)(int, int, int, int, int, int, int, int)>(&System::Globalization::JapaneseCalendar::ToDateTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::ToFourDigitYear
// Il2CppName: ToFourDigitYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::JapaneseCalendar::*)(int)>(&System::Globalization::JapaneseCalendar::ToFourDigitYear)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "ToFourDigitYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::get_Eras
// Il2CppName: get_Eras
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (System::Globalization::JapaneseCalendar::*)()>(&System::Globalization::JapaneseCalendar::get_Eras)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "get_Eras", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::IsValidYear
// Il2CppName: IsValidYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::JapaneseCalendar::*)(int, int)>(&System::Globalization::JapaneseCalendar::IsValidYear)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "IsValidYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: System::Globalization::JapaneseCalendar::get_TwoDigitYearMax
// Il2CppName: get_TwoDigitYearMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::JapaneseCalendar::*)()>(&System::Globalization::JapaneseCalendar::get_TwoDigitYearMax)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::JapaneseCalendar*), "get_TwoDigitYearMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
