// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.TimeZone
#include "System/TimeZone.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeZoneInfo
  class TimeZoneInfo;
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: CurrentSystemTimeZone
  class CurrentSystemTimeZone;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::CurrentSystemTimeZone);
DEFINE_IL2CPP_ARG_TYPE(::System::CurrentSystemTimeZone*, "System", "CurrentSystemTimeZone");
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.CurrentSystemTimeZone
  // [TokenAttribute] Offset: FFFFFFFF
  class CurrentSystemTimeZone : public ::System::TimeZone {
    public:
    public:
    // private readonly System.TimeZoneInfo LocalTimeZone
    // Size: 0x8
    // Offset: 0x10
    ::System::TimeZoneInfo* LocalTimeZone;
    // Field size check
    static_assert(sizeof(::System::TimeZoneInfo*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::TimeZoneInfo*
    constexpr operator ::System::TimeZoneInfo*() const noexcept {
      return LocalTimeZone;
    }
    // Get instance field reference: private readonly System.TimeZoneInfo LocalTimeZone
    [[deprecated("Use field access instead!")]] ::System::TimeZoneInfo*& dyn_LocalTimeZone();
    // static public System.Boolean GetTimeZoneData(System.Int32 year, out System.Int64[] data, out System.String[] names, out System.Boolean daylight_inverted)
    // Offset: 0x1D08D1C
    static bool GetTimeZoneData(int year, ByRef<::ArrayW<int64_t>> data, ByRef<::ArrayW<::StringW>> names, ByRef<bool> daylight_inverted);
    // System.Void .ctor()
    // Offset: 0x1D08BD4
    // Implemented from: System.TimeZone
    // Base method: System.Void TimeZone::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CurrentSystemTimeZone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::CurrentSystemTimeZone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CurrentSystemTimeZone*, creationType>()));
    }
    // public override System.TimeSpan GetUtcOffset(System.DateTime dateTime)
    // Offset: 0x1D08C4C
    // Implemented from: System.TimeZone
    // Base method: System.TimeSpan TimeZone::GetUtcOffset(System.DateTime dateTime)
    ::System::TimeSpan GetUtcOffset(::System::DateTime dateTime);
  }; // System.CurrentSystemTimeZone
  #pragma pack(pop)
  static check_size<sizeof(CurrentSystemTimeZone), 16 + sizeof(::System::TimeZoneInfo*)> __System_CurrentSystemTimeZoneSizeCheck;
  static_assert(sizeof(CurrentSystemTimeZone) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::CurrentSystemTimeZone::GetTimeZoneData
// Il2CppName: GetTimeZoneData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, ByRef<::ArrayW<int64_t>>, ByRef<::ArrayW<::StringW>>, ByRef<bool>)>(&System::CurrentSystemTimeZone::GetTimeZoneData)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int64"), 1)->this_arg;
    static auto* names = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->this_arg;
    static auto* daylight_inverted = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::CurrentSystemTimeZone*), "GetTimeZoneData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, data, names, daylight_inverted});
  }
};
// Writing MetadataGetter for method: System::CurrentSystemTimeZone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::CurrentSystemTimeZone::GetUtcOffset
// Il2CppName: GetUtcOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::CurrentSystemTimeZone::*)(::System::DateTime)>(&System::CurrentSystemTimeZone::GetUtcOffset)> {
  static const MethodInfo* get() {
    static auto* dateTime = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::CurrentSystemTimeZone*), "GetUtcOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dateTime});
  }
};
