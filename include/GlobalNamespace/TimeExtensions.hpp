// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TimeExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TimeExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TimeExtensions
    TimeExtensions() noexcept {}
    // static public System.String MinSecDurationText(System.Single duration)
    // Offset: 0x238AFD8
    static ::Il2CppString* MinSecDurationText(float duration);
    // static public System.String MinSecMillisecDurationText(System.Single duration)
    // Offset: 0x238B180
    static ::Il2CppString* MinSecMillisecDurationText(float duration);
    // static public System.Int32 SecondsToDays(System.Int32 time)
    // Offset: 0x238B270
    static int SecondsToDays(int time);
    // static public System.Int32 SecondsToHours(System.Int32 time)
    // Offset: 0x238B290
    static int SecondsToHours(int time);
    // static public System.Int32 SecondsToMinutes(System.Int32 time)
    // Offset: 0x238B2B0
    static int SecondsToMinutes(int time);
    // static public System.Int32 DaysToSeconds(System.Int32 days)
    // Offset: 0x238B2D0
    static int DaysToSeconds(int days);
    // static public System.Int32 HoursToSeconds(System.Int32 hours)
    // Offset: 0x238B2E0
    static int HoursToSeconds(int hours);
    // static public System.Int32 MinutesToSeconds(System.Int32 minutes)
    // Offset: 0x238B2EC
    static int MinutesToSeconds(int minutes);
    // static public System.Int32 Hours(System.Single time)
    // Offset: 0x238B2F8
    static int Hours(float time);
    // static public System.Int32 Minutes(System.Single time)
    // Offset: 0x238B10C
    static int Minutes(float time);
    // static public System.Int32 Seconds(System.Single time)
    // Offset: 0x238B160
    static int Seconds(float time);
    // static public System.Int32 Milliseconds(System.Single time)
    // Offset: 0x238B248
    static int Milliseconds(float time);
    // static public System.Int32 TotalDays(System.Single time)
    // Offset: 0x238B350
    static int TotalDays(float time);
    // static public System.Int32 TotalHours(System.Single time)
    // Offset: 0x238B374
    static int TotalHours(float time);
    // static public System.Int32 TotalMinutes(System.Single time)
    // Offset: 0x238B398
    static int TotalMinutes(float time);
    // static public System.Int32 TotalSeconds(System.Single time)
    // Offset: 0x238B3BC
    static int TotalSeconds(float time);
    // static public System.Int64 ToUnixTime(System.DateTime dateTime)
    // Offset: 0x238B3C4
    static int64_t ToUnixTime(System::DateTime dateTime);
    // static public System.DateTime AsUnixTime(System.Int64 unixTime)
    // Offset: 0x238B490
    static System::DateTime AsUnixTime(int64_t unixTime);
  }; // TimeExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TimeExtensions*, "", "TimeExtensions");
// Writing includes for template specializations
#include "System/DateTime.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::MinSecDurationText
// Il2CppName: MinSecDurationText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(float)>(&GlobalNamespace::TimeExtensions::MinSecDurationText)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "MinSecDurationText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::MinSecMillisecDurationText
// Il2CppName: MinSecMillisecDurationText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(float)>(&GlobalNamespace::TimeExtensions::MinSecMillisecDurationText)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "MinSecMillisecDurationText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::SecondsToDays
// Il2CppName: SecondsToDays
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::TimeExtensions::SecondsToDays)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "SecondsToDays", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::SecondsToHours
// Il2CppName: SecondsToHours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::TimeExtensions::SecondsToHours)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "SecondsToHours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::SecondsToMinutes
// Il2CppName: SecondsToMinutes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::TimeExtensions::SecondsToMinutes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "SecondsToMinutes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::DaysToSeconds
// Il2CppName: DaysToSeconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::TimeExtensions::DaysToSeconds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "DaysToSeconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::HoursToSeconds
// Il2CppName: HoursToSeconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::TimeExtensions::HoursToSeconds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "HoursToSeconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::MinutesToSeconds
// Il2CppName: MinutesToSeconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::TimeExtensions::MinutesToSeconds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "MinutesToSeconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::Hours
// Il2CppName: Hours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::TimeExtensions::Hours)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "Hours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::Minutes
// Il2CppName: Minutes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::TimeExtensions::Minutes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "Minutes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::Seconds
// Il2CppName: Seconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::TimeExtensions::Seconds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "Seconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::Milliseconds
// Il2CppName: Milliseconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::TimeExtensions::Milliseconds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "Milliseconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::TotalDays
// Il2CppName: TotalDays
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::TimeExtensions::TotalDays)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "TotalDays", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::TotalHours
// Il2CppName: TotalHours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::TimeExtensions::TotalHours)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "TotalHours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::TotalMinutes
// Il2CppName: TotalMinutes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::TimeExtensions::TotalMinutes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "TotalMinutes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::TotalSeconds
// Il2CppName: TotalSeconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::TimeExtensions::TotalSeconds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "TotalSeconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::ToUnixTime
// Il2CppName: ToUnixTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(System::DateTime)>(&GlobalNamespace::TimeExtensions::ToUnixTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "ToUnixTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::DateTime>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeExtensions::AsUnixTime
// Il2CppName: AsUnixTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)(int64_t)>(&GlobalNamespace::TimeExtensions::AsUnixTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeExtensions*), "AsUnixTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
