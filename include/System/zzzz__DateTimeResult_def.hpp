#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeResult)
namespace System::Globalization {
class Calendar;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct ParseFailureKind;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
struct DateTime;
}
namespace System {
struct ParseFlags;
}
// Forward declare root types
namespace System {
struct DateTimeResult;
}
// Write type traits
MARK_VAL_T(::System::DateTimeResult);
// Type: System::DateTimeResult
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2399))
// CS Name: ::System::DateTimeResult
struct CORDL_TYPE DateTimeResult : public ::bs_hook::ValueTypeWrapper<0x80> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field Year offset 0x0
 __declspec(property(get=__get_Year, put=__set_Year)) int32_t  Year;

/// @brief Field Month offset 0x4
 __declspec(property(get=__get_Month, put=__set_Month)) int32_t  Month;

/// @brief Field Day offset 0x8
 __declspec(property(get=__get_Day, put=__set_Day)) int32_t  Day;

/// @brief Field Hour offset 0xc
 __declspec(property(get=__get_Hour, put=__set_Hour)) int32_t  Hour;

/// @brief Field Minute offset 0x10
 __declspec(property(get=__get_Minute, put=__set_Minute)) int32_t  Minute;

/// @brief Field Second offset 0x14
 __declspec(property(get=__get_Second, put=__set_Second)) int32_t  Second;

/// @brief Field fraction offset 0x18
 __declspec(property(get=__get_fraction, put=__set_fraction)) double_t  fraction;

/// @brief Field era offset 0x20
 __declspec(property(get=__get_era, put=__set_era)) int32_t  era;

/// @brief Field flags offset 0x24
 __declspec(property(get=__get_flags, put=__set_flags)) ::System::ParseFlags  flags;

/// @brief Field timeZoneOffset offset 0x28
 __declspec(property(get=__get_timeZoneOffset, put=__set_timeZoneOffset)) ::System::TimeSpan  timeZoneOffset;

/// @brief Field calendar offset 0x30
 __declspec(property(get=__get_calendar, put=__set_calendar)) ::System::Globalization::Calendar*  calendar;

/// @brief Field parsedDate offset 0x38
 __declspec(property(get=__get_parsedDate, put=__set_parsedDate)) ::System::DateTime  parsedDate;

/// @brief Field failure offset 0x40
 __declspec(property(get=__get_failure, put=__set_failure)) ::System::ParseFailureKind  failure;

/// @brief Field failureMessageID offset 0x48
 __declspec(property(get=__get_failureMessageID, put=__set_failureMessageID)) ::StringW  failureMessageID;

/// @brief Field failureMessageFormatArgument offset 0x50
 __declspec(property(get=__get_failureMessageFormatArgument, put=__set_failureMessageFormatArgument)) ::System::Object*  failureMessageFormatArgument;

/// @brief Field failureArgumentName offset 0x58
 __declspec(property(get=__get_failureArgumentName, put=__set_failureArgumentName)) ::StringW  failureArgumentName;

/// @brief Field originalDateTimeString offset 0x60
 __declspec(property(get=__get_originalDateTimeString, put=__set_originalDateTimeString)) ::System::ReadOnlySpan_1<char16_t>  originalDateTimeString;

/// @brief Field failedFormatSpecifier offset 0x70
 __declspec(property(get=__get_failedFormatSpecifier, put=__set_failedFormatSpecifier)) ::System::ReadOnlySpan_1<char16_t>  failedFormatSpecifier;

constexpr void __set_Year(int32_t  value) ;

constexpr int32_t& __get_Year() ;

constexpr int32_t const& __get_Year() const;

constexpr void __set_Month(int32_t  value) ;

constexpr int32_t& __get_Month() ;

constexpr int32_t const& __get_Month() const;

constexpr void __set_Day(int32_t  value) ;

constexpr int32_t& __get_Day() ;

constexpr int32_t const& __get_Day() const;

constexpr void __set_Hour(int32_t  value) ;

constexpr int32_t& __get_Hour() ;

constexpr int32_t const& __get_Hour() const;

constexpr void __set_Minute(int32_t  value) ;

constexpr int32_t& __get_Minute() ;

constexpr int32_t const& __get_Minute() const;

constexpr void __set_Second(int32_t  value) ;

constexpr int32_t& __get_Second() ;

constexpr int32_t const& __get_Second() const;

constexpr void __set_fraction(double_t  value) ;

constexpr double_t& __get_fraction() ;

constexpr double_t const& __get_fraction() const;

constexpr void __set_era(int32_t  value) ;

constexpr int32_t& __get_era() ;

constexpr int32_t const& __get_era() const;

constexpr void __set_flags(::System::ParseFlags  value) ;

constexpr ::System::ParseFlags& __get_flags() ;

constexpr ::System::ParseFlags const& __get_flags() const;

constexpr void __set_timeZoneOffset(::System::TimeSpan  value) ;

constexpr ::System::TimeSpan& __get_timeZoneOffset() ;

constexpr ::System::TimeSpan const& __get_timeZoneOffset() const;

constexpr void __set_calendar(::System::Globalization::Calendar*  value) ;

constexpr ::System::Globalization::Calendar* __get_calendar() ;

constexpr ::cordl_internals::to_const_pointer<::System::Globalization::Calendar*> __get_calendar() const;

constexpr void __set_parsedDate(::System::DateTime  value) ;

constexpr ::System::DateTime& __get_parsedDate() ;

constexpr ::System::DateTime const& __get_parsedDate() const;

constexpr void __set_failure(::System::ParseFailureKind  value) ;

constexpr ::System::ParseFailureKind& __get_failure() ;

constexpr ::System::ParseFailureKind const& __get_failure() const;

constexpr void __set_failureMessageID(::StringW  value) ;

constexpr ::StringW& __get_failureMessageID() ;

constexpr ::StringW const& __get_failureMessageID() const;

constexpr void __set_failureMessageFormatArgument(::System::Object*  value) ;

constexpr ::System::Object* __get_failureMessageFormatArgument() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_failureMessageFormatArgument() const;

constexpr void __set_failureArgumentName(::StringW  value) ;

constexpr ::StringW& __get_failureArgumentName() ;

constexpr ::StringW const& __get_failureArgumentName() const;

constexpr void __set_originalDateTimeString(::System::ReadOnlySpan_1<char16_t>  value) ;

constexpr ::System::ReadOnlySpan_1<char16_t>& __get_originalDateTimeString() ;

constexpr ::System::ReadOnlySpan_1<char16_t> const& __get_originalDateTimeString() const;

constexpr void __set_failedFormatSpecifier(::System::ReadOnlySpan_1<char16_t>  value) ;

constexpr ::System::ReadOnlySpan_1<char16_t>& __get_failedFormatSpecifier() ;

constexpr ::System::ReadOnlySpan_1<char16_t> const& __get_failedFormatSpecifier() const;

/// @brief Method Init addr 0x25a58b4 size 0x24 virtual false final false
inline void Init(::System::ReadOnlySpan_1<char16_t>  originalDateTimeString) ;

/// @brief Method SetDate addr 0x25a58d8 size 0xc virtual false final false
inline void SetDate(int32_t  year, int32_t  month, int32_t  day) ;

/// @brief Method SetBadFormatSpecifierFailure addr 0x25a58e4 size 0x94 virtual false final false
inline void SetBadFormatSpecifierFailure() ;

/// @brief Method SetBadFormatSpecifierFailure addr 0x25a5978 size 0x64 virtual false final false
inline void SetBadFormatSpecifierFailure(::System::ReadOnlySpan_1<char16_t>  failedFormatSpecifier) ;

/// @brief Method SetBadDateTimeFailure addr 0x25a59dc size 0x50 virtual false final false
inline void SetBadDateTimeFailure() ;

/// @brief Method SetFailure addr 0x25a5a2c size 0xc virtual false final false
inline void SetFailure(::System::ParseFailureKind  failure, ::StringW  failureMessageID) ;

/// @brief Method SetFailure addr 0x25a5a38 size 0xc virtual false final false
inline void SetFailure(::System::ParseFailureKind  failure, ::StringW  failureMessageID, ::System::Object*  failureMessageFormatArgument) ;

/// @brief Method SetFailure addr 0x25a5a44 size 0x10 virtual false final false
inline void SetFailure(::System::ParseFailureKind  failure, ::StringW  failureMessageID, ::System::Object*  failureMessageFormatArgument, ::StringW  failureArgumentName) ;

// Ctor Parameters [CppParam { name: "Year", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Month", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Day", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Hour", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Minute", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Second", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fraction", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "era", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::System::ParseFlags", modifiers: "", def_value: None }, CppParam { name: "timeZoneOffset", ty: "::System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "calendar", ty: "::System::Globalization::Calendar*", modifiers: "", def_value: None }, CppParam { name: "parsedDate", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "failure", ty: "::System::ParseFailureKind", modifiers: "", def_value: None }, CppParam { name: "failureMessageID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "failureMessageFormatArgument", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "failureArgumentName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "originalDateTimeString", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "failedFormatSpecifier", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }]
constexpr DateTimeResult(int32_t  Year, int32_t  Month, int32_t  Day, int32_t  Hour, int32_t  Minute, int32_t  Second, double_t  fraction, int32_t  era, ::System::ParseFlags  flags, ::System::TimeSpan  timeZoneOffset, ::System::Globalization::Calendar*  calendar, ::System::DateTime  parsedDate, ::System::ParseFailureKind  failure, ::StringW  failureMessageID, ::System::Object*  failureMessageFormatArgument, ::StringW  failureArgumentName, ::System::ReadOnlySpan_1<char16_t>  originalDateTimeString, ::System::ReadOnlySpan_1<char16_t>  failedFormatSpecifier) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DateTimeResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x80>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DateTimeResult()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DateTimeResult, 0x80>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeResult, "System", "DateTimeResult");
