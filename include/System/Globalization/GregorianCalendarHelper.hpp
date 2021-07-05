// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: Calendar
  class Calendar;
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
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.GregorianCalendarHelper
  class GregorianCalendarHelper : public ::Il2CppObject {
    public:
    // [OptionalFieldAttribute] Offset: 0xD81A54
    // System.Int32 m_maxYear
    // Size: 0x4
    // Offset: 0x10
    int m_maxYear;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [OptionalFieldAttribute] Offset: 0xD81A8C
    // System.Int32 m_minYear
    // Size: 0x4
    // Offset: 0x14
    int m_minYear;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Globalization.Calendar m_Cal
    // Size: 0x8
    // Offset: 0x18
    System::Globalization::Calendar* m_Cal;
    // Field size check
    static_assert(sizeof(System::Globalization::Calendar*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xD81AC4
    // System.Globalization.EraInfo[] m_EraInfo
    // Size: 0x8
    // Offset: 0x20
    ::Array<System::Globalization::EraInfo*>* m_EraInfo;
    // Field size check
    static_assert(sizeof(::Array<System::Globalization::EraInfo*>*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xD81AFC
    // System.Int32[] m_eras
    // Size: 0x8
    // Offset: 0x28
    ::Array<int>* m_eras;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xD81B34
    // System.DateTime m_minDate
    // Size: 0x8
    // Offset: 0x30
    System::DateTime m_minDate;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // Creating value type constructor for type: GregorianCalendarHelper
    GregorianCalendarHelper(int m_maxYear_ = {}, int m_minYear_ = {}, System::Globalization::Calendar* m_Cal_ = {}, ::Array<System::Globalization::EraInfo*>* m_EraInfo_ = {}, ::Array<int>* m_eras_ = {}, System::DateTime m_minDate_ = {}) noexcept : m_maxYear{m_maxYear_}, m_minYear{m_minYear_}, m_Cal{m_Cal_}, m_EraInfo{m_EraInfo_}, m_eras{m_eras_}, m_minDate{m_minDate_} {}
    // Get static field: static readonly System.Int32[] DaysToMonth365
    static ::Array<int>* _get_DaysToMonth365();
    // Set static field: static readonly System.Int32[] DaysToMonth365
    static void _set_DaysToMonth365(::Array<int>* value);
    // Get static field: static readonly System.Int32[] DaysToMonth366
    static ::Array<int>* _get_DaysToMonth366();
    // Set static field: static readonly System.Int32[] DaysToMonth366
    static void _set_DaysToMonth366(::Array<int>* value);
    // System.Int32 get_MaxYear()
    // Offset: 0x19F2F68
    int get_MaxYear();
    // System.Void .ctor(System.Globalization.Calendar cal, System.Globalization.EraInfo[] eraInfo)
    // Offset: 0x19F2F70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GregorianCalendarHelper* New_ctor(System::Globalization::Calendar* cal, ::Array<System::Globalization::EraInfo*>* eraInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::GregorianCalendarHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GregorianCalendarHelper*, creationType>(cal, eraInfo)));
    }
    // System.Int32 GetGregorianYear(System.Int32 year, System.Int32 era)
    // Offset: 0x19F3010
    int GetGregorianYear(int year, int era);
    // System.Boolean IsValidYear(System.Int32 year, System.Int32 era)
    // Offset: 0x19F3278
    bool IsValidYear(int year, int era);
    // System.Int32 GetDatePart(System.Int64 ticks, System.Int32 part)
    // Offset: 0x19F3330
    int GetDatePart(int64_t ticks, int part);
    // static System.Int64 GetAbsoluteDate(System.Int32 year, System.Int32 month, System.Int32 day)
    // Offset: 0x19F374C
    static int64_t GetAbsoluteDate(int year, int month, int day);
    // static System.Int64 DateToTicks(System.Int32 year, System.Int32 month, System.Int32 day)
    // Offset: 0x19F3944
    static int64_t DateToTicks(int year, int month, int day);
    // static System.Int64 TimeToTicks(System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond)
    // Offset: 0x19F39D4
    static int64_t TimeToTicks(int hour, int minute, int second, int millisecond);
    // System.Void CheckTicksRange(System.Int64 ticks)
    // Offset: 0x19F357C
    void CheckTicksRange(int64_t ticks);
    // public System.Int32 GetDayOfMonth(System.DateTime time)
    // Offset: 0x19F3B9C
    int GetDayOfMonth(System::DateTime time);
    // public System.DayOfWeek GetDayOfWeek(System.DateTime time)
    // Offset: 0x19F3BE0
    System::DayOfWeek GetDayOfWeek(System::DateTime time);
    // public System.Int32 GetDaysInMonth(System.Int32 year, System.Int32 month, System.Int32 era)
    // Offset: 0x19F3C70
    int GetDaysInMonth(int year, int month, int era);
    // public System.Int32 GetEra(System.DateTime time)
    // Offset: 0x19F3E18
    int GetEra(System::DateTime time);
    // public System.Int32[] get_Eras()
    // Offset: 0x19F3F18
    ::Array<int>* get_Eras();
    // public System.Int32 GetMonth(System.DateTime time)
    // Offset: 0x19F4020
    int GetMonth(System::DateTime time);
    // public System.Int32 GetMonthsInYear(System.Int32 year, System.Int32 era)
    // Offset: 0x19F4064
    int GetMonthsInYear(int year, int era);
    // public System.Int32 GetYear(System.DateTime time)
    // Offset: 0x19F407C
    int GetYear(System::DateTime time);
    // public System.Boolean IsLeapYear(System.Int32 year, System.Int32 era)
    // Offset: 0x19F419C
    bool IsLeapYear(int year, int era);
    // public System.DateTime ToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era)
    // Offset: 0x19F4204
    System::DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era);
    // static private System.Void .cctor()
    // Offset: 0x19F4314
    static void _cctor();
  }; // System.Globalization.GregorianCalendarHelper
  #pragma pack(pop)
  static check_size<sizeof(GregorianCalendarHelper), 48 + sizeof(System::DateTime)> __System_Globalization_GregorianCalendarHelperSizeCheck;
  static_assert(sizeof(GregorianCalendarHelper) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::GregorianCalendarHelper*, "System.Globalization", "GregorianCalendarHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::get_MaxYear
// Il2CppName: get_MaxYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendarHelper::*)()>(&System::Globalization::GregorianCalendarHelper::get_MaxYear)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "get_MaxYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetGregorianYear
// Il2CppName: GetGregorianYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendarHelper::*)(int, int)>(&System::Globalization::GregorianCalendarHelper::GetGregorianYear)> {
  const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetGregorianYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::IsValidYear
// Il2CppName: IsValidYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::GregorianCalendarHelper::*)(int, int)>(&System::Globalization::GregorianCalendarHelper::IsValidYear)> {
  const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "IsValidYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetDatePart
// Il2CppName: GetDatePart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendarHelper::*)(int64_t, int)>(&System::Globalization::GregorianCalendarHelper::GetDatePart)> {
  const MethodInfo* get() {
    static auto* ticks = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* part = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetDatePart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ticks, part});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetAbsoluteDate
// Il2CppName: GetAbsoluteDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int, int, int)>(&System::Globalization::GregorianCalendarHelper::GetAbsoluteDate)> {
  const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetAbsoluteDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, day});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::DateToTicks
// Il2CppName: DateToTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int, int, int)>(&System::Globalization::GregorianCalendarHelper::DateToTicks)> {
  const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "DateToTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, day});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::TimeToTicks
// Il2CppName: TimeToTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int, int, int, int)>(&System::Globalization::GregorianCalendarHelper::TimeToTicks)> {
  const MethodInfo* get() {
    static auto* hour = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minute = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* millisecond = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "TimeToTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hour, minute, second, millisecond});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::CheckTicksRange
// Il2CppName: CheckTicksRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::GregorianCalendarHelper::*)(int64_t)>(&System::Globalization::GregorianCalendarHelper::CheckTicksRange)> {
  const MethodInfo* get() {
    static auto* ticks = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "CheckTicksRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ticks});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetDayOfMonth
// Il2CppName: GetDayOfMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendarHelper::*)(System::DateTime)>(&System::Globalization::GregorianCalendarHelper::GetDayOfMonth)> {
  const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetDayOfMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetDayOfWeek
// Il2CppName: GetDayOfWeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DayOfWeek (System::Globalization::GregorianCalendarHelper::*)(System::DateTime)>(&System::Globalization::GregorianCalendarHelper::GetDayOfWeek)> {
  const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetDayOfWeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetDaysInMonth
// Il2CppName: GetDaysInMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendarHelper::*)(int, int, int)>(&System::Globalization::GregorianCalendarHelper::GetDaysInMonth)> {
  const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetDaysInMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetEra
// Il2CppName: GetEra
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendarHelper::*)(System::DateTime)>(&System::Globalization::GregorianCalendarHelper::GetEra)> {
  const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetEra", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::get_Eras
// Il2CppName: get_Eras
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (System::Globalization::GregorianCalendarHelper::*)()>(&System::Globalization::GregorianCalendarHelper::get_Eras)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "get_Eras", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetMonth
// Il2CppName: GetMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendarHelper::*)(System::DateTime)>(&System::Globalization::GregorianCalendarHelper::GetMonth)> {
  const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetMonthsInYear
// Il2CppName: GetMonthsInYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendarHelper::*)(int, int)>(&System::Globalization::GregorianCalendarHelper::GetMonthsInYear)> {
  const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetMonthsInYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::GetYear
// Il2CppName: GetYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::GregorianCalendarHelper::*)(System::DateTime)>(&System::Globalization::GregorianCalendarHelper::GetYear)> {
  const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "GetYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::IsLeapYear
// Il2CppName: IsLeapYear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::GregorianCalendarHelper::*)(int, int)>(&System::Globalization::GregorianCalendarHelper::IsLeapYear)> {
  const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "IsLeapYear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::ToDateTime
// Il2CppName: ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Globalization::GregorianCalendarHelper::*)(int, int, int, int, int, int, int, int)>(&System::Globalization::GregorianCalendarHelper::ToDateTime)> {
  const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hour = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minute = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* millisecond = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* era = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), "ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, day, hour, minute, second, millisecond, era});
  }
};
// Writing MetadataGetter for method: System::Globalization::GregorianCalendarHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Globalization::GregorianCalendarHelper::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::GregorianCalendarHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
