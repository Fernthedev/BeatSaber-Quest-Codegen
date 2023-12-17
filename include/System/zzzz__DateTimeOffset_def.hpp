#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeOffset)
namespace System {
class IFormattable;
}
namespace System {
class ISpanFormattable;
}
namespace System::Globalization {
class Calendar;
}
namespace System {
class IFormatProvider;
}
namespace System::Globalization {
struct DateTimeStyles;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct DateTime;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class IComparable;
}
namespace System {
struct TimeSpan;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T>
class IComparable_1;
}
// Forward declare root types
namespace System {
struct DateTimeOffset;
}
// Write type traits
MARK_VAL_T(::System::DateTimeOffset);
// Type: System::DateTimeOffset
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2370))
// CS Name: ::System::DateTimeOffset
struct CORDL_TYPE DateTimeOffset : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _dateTime offset 0x0
 __declspec(property(get=__get__dateTime, put=__set__dateTime)) ::System::DateTime  _dateTime;

/// @brief Field _offsetMinutes offset 0x8
 __declspec(property(get=__get__offsetMinutes, put=__set__offsetMinutes)) int16_t  _offsetMinutes;

 __declspec(property(get=get_DateTime)) ::System::DateTime  DateTime;

 __declspec(property(get=get_UtcDateTime)) ::System::DateTime  UtcDateTime;

 __declspec(property(get=get_LocalDateTime)) ::System::DateTime  LocalDateTime;

 __declspec(property(get=get_ClockDateTime)) ::System::DateTime  ClockDateTime;

 __declspec(property(get=get_Day)) int32_t  Day;

 __declspec(property(get=get_Hour)) int32_t  Hour;

 __declspec(property(get=get_Millisecond)) int32_t  Millisecond;

 __declspec(property(get=get_Minute)) int32_t  Minute;

 __declspec(property(get=get_Month)) int32_t  Month;

 __declspec(property(get=get_Offset)) ::System::TimeSpan  Offset;

 __declspec(property(get=get_Second)) int32_t  Second;

 __declspec(property(get=get_Ticks)) int64_t  Ticks;

 __declspec(property(get=get_TimeOfDay)) ::System::TimeSpan  TimeOfDay;

 __declspec(property(get=get_Year)) int32_t  Year;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Convert operator to "::System::IComparable_1<::System::DateTimeOffset>"
constexpr operator  ::System::IComparable_1<::System::DateTimeOffset>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::System::DateTimeOffset>"
constexpr operator  ::System::IEquatable_1<::System::DateTimeOffset>*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() ;

/// @brief Convert operator to "::System::ISpanFormattable"
constexpr operator  ::System::ISpanFormattable*() ;

static inline void setStaticF_MinValue(::System::DateTimeOffset  value) ;

static inline ::System::DateTimeOffset getStaticF_MinValue() ;

static inline void setStaticF_MaxValue(::System::DateTimeOffset  value) ;

static inline ::System::DateTimeOffset getStaticF_MaxValue() ;

static inline void setStaticF_UnixEpoch(::System::DateTimeOffset  value) ;

static inline ::System::DateTimeOffset getStaticF_UnixEpoch() ;

constexpr void __set__dateTime(::System::DateTime  value) ;

constexpr ::System::DateTime& __get__dateTime() ;

constexpr ::System::DateTime const& __get__dateTime() const;

constexpr void __set__offsetMinutes(int16_t  value) ;

constexpr int16_t& __get__offsetMinutes() ;

constexpr int16_t const& __get__offsetMinutes() const;

/// @brief Method .ctor addr 0x2592880 size 0x94 virtual false final false
inline void _ctor(int64_t  ticks, ::System::TimeSpan  offset) ;

/// @brief Method .ctor addr 0x2592ad0 size 0xc4 virtual false final false
inline void _ctor(::System::DateTime  dateTime) ;

/// @brief Method .ctor addr 0x2592b94 size 0x1b4 virtual false final false
inline void _ctor(::System::DateTime  dateTime, ::System::TimeSpan  offset) ;

/// @brief Method .ctor addr 0x2592d48 size 0xcc virtual false final false
inline void _ctor(int32_t  year, int32_t  month, int32_t  day, int32_t  hour, int32_t  minute, int32_t  second, ::System::TimeSpan  offset) ;

/// @brief Method .ctor addr 0x2592e14 size 0xdc virtual false final false
inline void _ctor(int32_t  year, int32_t  month, int32_t  day, int32_t  hour, int32_t  minute, int32_t  second, int32_t  millisecond, ::System::TimeSpan  offset) ;

/// @brief Method .ctor addr 0x2592ef0 size 0xe4 virtual false final false
inline void _ctor(int32_t  year, int32_t  month, int32_t  day, int32_t  hour, int32_t  minute, int32_t  second, int32_t  millisecond, ::System::Globalization::Calendar*  calendar, ::System::TimeSpan  offset) ;

/// @brief Method get_DateTime addr 0x2592fd4 size 0x4 virtual false final false
inline ::System::DateTime get_DateTime() ;

/// @brief Method get_UtcDateTime addr 0x2593078 size 0x74 virtual false final false
inline ::System::DateTime get_UtcDateTime() ;

/// @brief Method get_LocalDateTime addr 0x25930ec size 0x20 virtual false final false
inline ::System::DateTime get_LocalDateTime() ;

/// @brief Method get_ClockDateTime addr 0x2592fd8 size 0xa0 virtual false final false
inline ::System::DateTime get_ClockDateTime() ;

/// @brief Method get_Day addr 0x2593138 size 0x20 virtual false final false
inline int32_t get_Day() ;

/// @brief Method get_Hour addr 0x2593158 size 0x44 virtual false final false
inline int32_t get_Hour() ;

/// @brief Method get_Millisecond addr 0x259319c size 0x50 virtual false final false
inline int32_t get_Millisecond() ;

/// @brief Method get_Minute addr 0x25931ec size 0x44 virtual false final false
inline int32_t get_Minute() ;

/// @brief Method get_Month addr 0x2593230 size 0x20 virtual false final false
inline int32_t get_Month() ;

/// @brief Method get_Offset addr 0x259310c size 0x2c virtual false final false
inline ::System::TimeSpan get_Offset() ;

/// @brief Method get_Second addr 0x2593250 size 0x44 virtual false final false
inline int32_t get_Second() ;

/// @brief Method get_Ticks addr 0x2593294 size 0x14 virtual false final false
inline int64_t get_Ticks() ;

/// @brief Method get_TimeOfDay addr 0x25932a8 size 0x3c virtual false final false
inline ::System::TimeSpan get_TimeOfDay() ;

/// @brief Method get_Year addr 0x25932e4 size 0x20 virtual false final false
inline int32_t get_Year() ;

/// @brief Method AddTicks addr 0x2593304 size 0x70 virtual false final false
inline ::System::DateTimeOffset AddTicks(int64_t  ticks) ;

/// @brief Method System.IComparable.CompareTo addr 0x2593374 size 0x130 virtual true final true
inline int32_t System_IComparable_CompareTo(::System::Object*  obj) ;

/// @brief Method CompareTo addr 0x25934a4 size 0xa8 virtual true final true
inline int32_t CompareTo(::System::DateTimeOffset  other) ;

/// @brief Method Equals addr 0x259354c size 0xbc virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2593608 size 0x34 virtual true final true
inline bool Equals(::System::DateTimeOffset  other) ;

/// @brief Method FromFileTime addr 0x259363c size 0x74 virtual false final false
static inline ::System::DateTimeOffset FromFileTime(int64_t  fileTime) ;

/// @brief Method FromUnixTimeSeconds addr 0x25936b0 size 0x174 virtual false final false
static inline ::System::DateTimeOffset FromUnixTimeSeconds(int64_t  seconds) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x2593824 size 0x180 virtual true final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x25939a4 size 0xcc virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x2593a70 size 0x1c0 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetHashCode addr 0x2593c30 size 0x18 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Parse addr 0x2593c48 size 0x70 virtual false final false
static inline ::System::DateTimeOffset Parse(::StringW  input, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method Parse addr 0x2593cb8 size 0x16c virtual false final false
static inline ::System::DateTimeOffset Parse(::StringW  input, ::System::IFormatProvider*  formatProvider, ::System::Globalization::DateTimeStyles  styles) ;

/// @brief Method ParseExact addr 0x2594004 size 0x1d8 virtual false final false
static inline ::System::DateTimeOffset ParseExact(::StringW  input, ::StringW  format, ::System::IFormatProvider*  formatProvider, ::System::Globalization::DateTimeStyles  styles) ;

/// @brief Method ToLocalTime addr 0x2594330 size 0x8 virtual false final false
inline ::System::DateTimeOffset ToLocalTime() ;

/// @brief Method ToLocalTime addr 0x2594338 size 0x40 virtual false final false
inline ::System::DateTimeOffset ToLocalTime(bool  throwOnOverflow) ;

/// @brief Method ToString addr 0x2594378 size 0x98 virtual true final false
inline ::StringW ToString() ;

/// @brief Method ToString addr 0x25946e0 size 0x9c virtual false final false
inline ::StringW ToString(::System::IFormatProvider*  formatProvider) ;

/// @brief Method ToString addr 0x259477c size 0xa8 virtual true final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method TryFormat addr 0x2594824 size 0xdc virtual true final true
inline bool TryFormat(::System::Span_1<char16_t>  destination, ByRef<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method ToUniversalTime addr 0x2594b10 size 0x2c virtual false final false
inline ::System::DateTimeOffset ToUniversalTime() ;

/// @brief Method TryParse addr 0x2594b3c size 0x188 virtual false final false
static inline bool TryParse(::StringW  input, ::System::IFormatProvider*  formatProvider, ::System::Globalization::DateTimeStyles  styles, ByRef<::System::DateTimeOffset>  result) ;

/// @brief Method TryParseExact addr 0x2594e30 size 0x1c8 virtual false final false
static inline bool TryParseExact(::StringW  input, ::StringW  format, ::System::IFormatProvider*  formatProvider, ::System::Globalization::DateTimeStyles  styles, ByRef<::System::DateTimeOffset>  result) ;

/// @brief Method TryParseExact addr 0x259517c size 0x188 virtual false final false
static inline bool TryParseExact(::StringW  input, ::ArrayW<::StringW,::Array<::StringW>*>  formats, ::System::IFormatProvider*  formatProvider, ::System::Globalization::DateTimeStyles  styles, ByRef<::System::DateTimeOffset>  result) ;

/// @brief Method ValidateOffset addr 0x2592914 size 0x114 virtual false final false
static inline int16_t ValidateOffset(::System::TimeSpan  offset) ;

/// @brief Method ValidateDate addr 0x2592a28 size 0xa8 virtual false final false
static inline ::System::DateTime ValidateDate(::System::DateTime  dateTime, ::System::TimeSpan  offset) ;

/// @brief Method ValidateStyles addr 0x2593e24 size 0xd8 virtual false final false
static inline ::System::Globalization::DateTimeStyles ValidateStyles(::System::Globalization::DateTimeStyles  style, ::StringW  parameterName) ;

/// @brief Method op_Implicit addr 0x2595478 size 0x28 virtual false final false
static inline ::System::DateTimeOffset op_Implicit___System__DateTimeOffset(::System::DateTime  dateTime) ;

/// @brief Method op_Equality addr 0x25954a0 size 0x84 virtual false final false
static inline bool op_Equality(::System::DateTimeOffset  left, ::System::DateTimeOffset  right) ;

// Ctor Parameters [CppParam { name: "_dateTime", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "_offsetMinutes", ty: "int16_t", modifiers: "", def_value: None }]
constexpr DateTimeOffset(::System::DateTime  _dateTime, int16_t  _offsetMinutes) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DateTimeOffset(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DateTimeOffset()  = default;


// Fields

// Static field MinValue

// Static field MaxValue

// Static field UnixEpoch


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DateTimeOffset, 0x10>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeOffset, "System", "DateTimeOffset");
