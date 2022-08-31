// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XsdDuration
  struct XsdDuration;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdDuration, "System.Xml.Schema", "XsdDuration");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Xml.Schema.XsdDuration
  // [TokenAttribute] Offset: FFFFFFFF
  struct XsdDuration/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::System::Xml::Schema::XsdDuration::Parts
    struct Parts;
    // Nested type: ::System::Xml::Schema::XsdDuration::DurationType
    struct DurationType;
    public:
    // private System.Int32 years
    // Size: 0x4
    // Offset: 0x0
    int years;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 months
    // Size: 0x4
    // Offset: 0x4
    int months;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 days
    // Size: 0x4
    // Offset: 0x8
    int days;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 hours
    // Size: 0x4
    // Offset: 0xC
    int hours;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 minutes
    // Size: 0x4
    // Offset: 0x10
    int minutes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 seconds
    // Size: 0x4
    // Offset: 0x14
    int seconds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt32 nanoseconds
    // Size: 0x4
    // Offset: 0x18
    uint nanoseconds;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: XsdDuration
    constexpr XsdDuration(int years_ = {}, int months_ = {}, int days_ = {}, int hours_ = {}, int minutes_ = {}, int seconds_ = {}, uint nanoseconds_ = {}) noexcept : years{years_}, months{months_}, days{days_}, hours{hours_}, minutes{minutes_}, seconds{seconds_}, nanoseconds{nanoseconds_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Int32 years
    [[deprecated("Use field access instead!")]] int& dyn_years();
    // Get instance field reference: private System.Int32 months
    [[deprecated("Use field access instead!")]] int& dyn_months();
    // Get instance field reference: private System.Int32 days
    [[deprecated("Use field access instead!")]] int& dyn_days();
    // Get instance field reference: private System.Int32 hours
    [[deprecated("Use field access instead!")]] int& dyn_hours();
    // Get instance field reference: private System.Int32 minutes
    [[deprecated("Use field access instead!")]] int& dyn_minutes();
    // Get instance field reference: private System.Int32 seconds
    [[deprecated("Use field access instead!")]] int& dyn_seconds();
    // Get instance field reference: private System.UInt32 nanoseconds
    [[deprecated("Use field access instead!")]] uint& dyn_nanoseconds();
    // public System.Boolean get_IsNegative()
    // Offset: 0x209D284
    bool get_IsNegative();
    // public System.Int32 get_Years()
    // Offset: 0x209D290
    int get_Years();
    // public System.Int32 get_Months()
    // Offset: 0x209D298
    int get_Months();
    // public System.Int32 get_Days()
    // Offset: 0x209D2A0
    int get_Days();
    // public System.Int32 get_Hours()
    // Offset: 0x209D2A8
    int get_Hours();
    // public System.Int32 get_Minutes()
    // Offset: 0x209D2B0
    int get_Minutes();
    // public System.Int32 get_Seconds()
    // Offset: 0x209D2B8
    int get_Seconds();
    // public System.Int32 get_Nanoseconds()
    // Offset: 0x209D278
    int get_Nanoseconds();
    // public System.Void .ctor(System.Boolean isNegative, System.Int32 years, System.Int32 months, System.Int32 days, System.Int32 hours, System.Int32 minutes, System.Int32 seconds, System.Int32 nanoseconds)
    // Offset: 0x209C730
    XsdDuration(bool isNegative, int years, int months, int days, int hours, int minutes, int seconds, int nanoseconds);
    // public System.Void .ctor(System.TimeSpan timeSpan)
    // Offset: 0x209C8D8
    XsdDuration(::System::TimeSpan timeSpan);
    // public System.Void .ctor(System.TimeSpan timeSpan, System.Xml.Schema.XsdDuration/System.Xml.Schema.DurationType durationType)
    // Offset: 0x209C99C
    XsdDuration(::System::TimeSpan timeSpan, ::System::Xml::Schema::XsdDuration::DurationType durationType);
    // public System.Void .ctor(System.String s, System.Xml.Schema.XsdDuration/System.Xml.Schema.DurationType durationType)
    // Offset: 0x209CB00
    XsdDuration(::StringW s, ::System::Xml::Schema::XsdDuration::DurationType durationType);
    // public System.TimeSpan ToTimeSpan(System.Xml.Schema.XsdDuration/System.Xml.Schema.DurationType durationType)
    // Offset: 0x209D2C0
    ::System::TimeSpan ToTimeSpan(::System::Xml::Schema::XsdDuration::DurationType durationType);
    // System.Exception TryToTimeSpan(out System.TimeSpan result)
    // Offset: 0x209D85C
    ::System::Exception* TryToTimeSpan(ByRef<::System::TimeSpan> result);
    // System.Exception TryToTimeSpan(System.Xml.Schema.XsdDuration/System.Xml.Schema.DurationType durationType, out System.TimeSpan result)
    // Offset: 0x209D338
    ::System::Exception* TryToTimeSpan(::System::Xml::Schema::XsdDuration::DurationType durationType, ByRef<::System::TimeSpan> result);
    // System.String ToString(System.Xml.Schema.XsdDuration/System.Xml.Schema.DurationType durationType)
    // Offset: 0x209D870
    ::StringW ToString(::System::Xml::Schema::XsdDuration::DurationType durationType);
    // static System.Exception TryParse(System.String s, out System.Xml.Schema.XsdDuration result)
    // Offset: 0x209DCB0
    static ::System::Exception* TryParse(::StringW s, ByRef<::System::Xml::Schema::XsdDuration> result);
    // static System.Exception TryParse(System.String s, System.Xml.Schema.XsdDuration/System.Xml.Schema.DurationType durationType, out System.Xml.Schema.XsdDuration result)
    // Offset: 0x209CBB8
    static ::System::Exception* TryParse(::StringW s, ::System::Xml::Schema::XsdDuration::DurationType durationType, ByRef<::System::Xml::Schema::XsdDuration> result);
    // static private System.String TryParseDigits(System.String s, ref System.Int32 offset, System.Boolean eatDigits, out System.Int32 result, out System.Int32 numDigits)
    // Offset: 0x209DCBC
    static ::StringW TryParseDigits(::StringW s, ByRef<int> offset, bool eatDigits, ByRef<int> result, ByRef<int> numDigits);
    // public override System.String ToString()
    // Offset: 0x209D868
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.Xml.Schema.XsdDuration
  #pragma pack(pop)
  static check_size<sizeof(XsdDuration), 24 + sizeof(uint)> __System_Xml_Schema_XsdDurationSizeCheck;
  static_assert(sizeof(XsdDuration) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::get_IsNegative
// Il2CppName: get_IsNegative
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XsdDuration::*)()>(&System::Xml::Schema::XsdDuration::get_IsNegative)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDuration), "get_IsNegative", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::get_Years
// Il2CppName: get_Years
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XsdDuration::*)()>(&System::Xml::Schema::XsdDuration::get_Years)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDuration), "get_Years", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::get_Months
// Il2CppName: get_Months
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XsdDuration::*)()>(&System::Xml::Schema::XsdDuration::get_Months)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDuration), "get_Months", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::get_Days
// Il2CppName: get_Days
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XsdDuration::*)()>(&System::Xml::Schema::XsdDuration::get_Days)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDuration), "get_Days", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::get_Hours
// Il2CppName: get_Hours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XsdDuration::*)()>(&System::Xml::Schema::XsdDuration::get_Hours)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDuration), "get_Hours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::get_Minutes
// Il2CppName: get_Minutes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XsdDuration::*)()>(&System::Xml::Schema::XsdDuration::get_Minutes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDuration), "get_Minutes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::get_Seconds
// Il2CppName: get_Seconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XsdDuration::*)()>(&System::Xml::Schema::XsdDuration::get_Seconds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDuration), "get_Seconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::get_Nanoseconds
// Il2CppName: get_Nanoseconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::XsdDuration::*)()>(&System::Xml::Schema::XsdDuration::get_Nanoseconds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDuration), "get_Nanoseconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::XsdDuration
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::XsdDuration
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::XsdDuration
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::XsdDuration
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::ToTimeSpan
// Il2CppName: ToTimeSpan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::Xml::Schema::XsdDuration::*)(::System::Xml::Schema::XsdDuration::DurationType)>(&System::Xml::Schema::XsdDuration::ToTimeSpan)> {
  static const MethodInfo* get() {
    static auto* durationType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XsdDuration/DurationType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDuration), "ToTimeSpan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{durationType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::TryToTimeSpan
// Il2CppName: TryToTimeSpan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::XsdDuration::*)(ByRef<::System::TimeSpan>)>(&System::Xml::Schema::XsdDuration::TryToTimeSpan)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDuration), "TryToTimeSpan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::TryToTimeSpan
// Il2CppName: TryToTimeSpan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::XsdDuration::*)(::System::Xml::Schema::XsdDuration::DurationType, ByRef<::System::TimeSpan>)>(&System::Xml::Schema::XsdDuration::TryToTimeSpan)> {
  static const MethodInfo* get() {
    static auto* durationType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XsdDuration/DurationType")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDuration), "TryToTimeSpan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{durationType, result});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XsdDuration::*)(::System::Xml::Schema::XsdDuration::DurationType)>(&System::Xml::Schema::XsdDuration::ToString)> {
  static const MethodInfo* get() {
    static auto* durationType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XsdDuration/DurationType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDuration), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{durationType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::StringW, ByRef<::System::Xml::Schema::XsdDuration>)>(&System::Xml::Schema::XsdDuration::TryParse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XsdDuration")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDuration), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, result});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::StringW, ::System::Xml::Schema::XsdDuration::DurationType, ByRef<::System::Xml::Schema::XsdDuration>)>(&System::Xml::Schema::XsdDuration::TryParse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* durationType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XsdDuration/DurationType")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XsdDuration")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDuration), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, durationType, result});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::TryParseDigits
// Il2CppName: TryParseDigits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ByRef<int>, bool, ByRef<int>, ByRef<int>)>(&System::Xml::Schema::XsdDuration::TryParseDigits)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* eatDigits = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* numDigits = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDuration), "TryParseDigits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset, eatDigits, result, numDigits});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XsdDuration::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XsdDuration::*)()>(&System::Xml::Schema::XsdDuration::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdDuration), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
