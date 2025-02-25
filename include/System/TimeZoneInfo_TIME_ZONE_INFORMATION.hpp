// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.TimeZoneInfo
#include "System/TimeZoneInfo.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.TimeZoneInfo/System.SYSTEMTIME
#include "System/TimeZoneInfo_SYSTEMTIME.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x44
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.TimeZoneInfo/System.TIME_ZONE_INFORMATION
  // [TokenAttribute] Offset: FFFFFFFF
  struct TimeZoneInfo::TIME_ZONE_INFORMATION/*, public System::ValueType*/ {
    public:
    // System.Int32 Bias
    // Size: 0x4
    // Offset: 0x0
    int Bias;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Bias and: StandardName
    char __padding0[0x4] = {};
    // System.String StandardName
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* StandardName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.TimeZoneInfo/System.SYSTEMTIME StandardDate
    // Size: 0x10
    // Offset: 0x10
    System::TimeZoneInfo::SYSTEMTIME StandardDate;
    // Field size check
    static_assert(sizeof(System::TimeZoneInfo::SYSTEMTIME) == 0x10);
    // System.Int32 StandardBias
    // Size: 0x4
    // Offset: 0x20
    int StandardBias;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: StandardBias and: DaylightName
    char __padding3[0x4] = {};
    // System.String DaylightName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* DaylightName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.TimeZoneInfo/System.SYSTEMTIME DaylightDate
    // Size: 0x10
    // Offset: 0x30
    System::TimeZoneInfo::SYSTEMTIME DaylightDate;
    // Field size check
    static_assert(sizeof(System::TimeZoneInfo::SYSTEMTIME) == 0x10);
    // System.Int32 DaylightBias
    // Size: 0x4
    // Offset: 0x40
    int DaylightBias;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TIME_ZONE_INFORMATION
    constexpr TIME_ZONE_INFORMATION(int Bias_ = {}, ::Il2CppString* StandardName_ = {}, System::TimeZoneInfo::SYSTEMTIME StandardDate_ = {}, int StandardBias_ = {}, ::Il2CppString* DaylightName_ = {}, System::TimeZoneInfo::SYSTEMTIME DaylightDate_ = {}, int DaylightBias_ = {}) noexcept : Bias{Bias_}, StandardName{StandardName_}, StandardDate{StandardDate_}, StandardBias{StandardBias_}, DaylightName{DaylightName_}, DaylightDate{DaylightDate_}, DaylightBias{DaylightBias_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: System.Int32 Bias
    int& dyn_Bias();
    // Get instance field reference: System.String StandardName
    ::Il2CppString*& dyn_StandardName();
    // Get instance field reference: System.TimeZoneInfo/System.SYSTEMTIME StandardDate
    System::TimeZoneInfo::SYSTEMTIME& dyn_StandardDate();
    // Get instance field reference: System.Int32 StandardBias
    int& dyn_StandardBias();
    // Get instance field reference: System.String DaylightName
    ::Il2CppString*& dyn_DaylightName();
    // Get instance field reference: System.TimeZoneInfo/System.SYSTEMTIME DaylightDate
    System::TimeZoneInfo::SYSTEMTIME& dyn_DaylightDate();
    // Get instance field reference: System.Int32 DaylightBias
    int& dyn_DaylightBias();
  }; // System.TimeZoneInfo/System.TIME_ZONE_INFORMATION
  #pragma pack(pop)
  static check_size<sizeof(TimeZoneInfo::TIME_ZONE_INFORMATION), 64 + sizeof(int)> __System_TimeZoneInfo_TIME_ZONE_INFORMATIONSizeCheck;
  static_assert(sizeof(TimeZoneInfo::TIME_ZONE_INFORMATION) == 0x44);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::TimeZoneInfo::TIME_ZONE_INFORMATION, "System", "TimeZoneInfo/TIME_ZONE_INFORMATION");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
