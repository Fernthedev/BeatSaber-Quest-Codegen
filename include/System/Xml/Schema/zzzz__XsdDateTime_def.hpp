#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XsdDateTime)
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
struct __XsdDateTime__DateTimeTypeCode;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Schema {
struct __XsdDateTime__Parser;
}
namespace System {
struct DateTime;
}
namespace System::Xml::Schema {
struct __XsdDateTime__XsdDateTimeKind;
}
namespace System {
struct DateTimeOffset;
}
namespace System::Xml::Schema {
struct XsdDateTimeFlags;
}
// Forward declare root types
namespace System::Xml::Schema {
struct __XsdDateTime__DateTimeTypeCode;
}
namespace System::Xml::Schema {
struct __XsdDateTime__XsdDateTimeKind;
}
namespace System::Xml::Schema {
struct XsdDateTime;
}
namespace System::Xml::Schema {
struct __XsdDateTime__Parser;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode);
MARK_VAL_T(::System::Xml::Schema::__XsdDateTime__XsdDateTimeKind);
MARK_VAL_T(::System::Xml::Schema::XsdDateTime);
MARK_VAL_T(::System::Xml::Schema::__XsdDateTime__Parser);
// Type: ::DateTimeTypeCode
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11760))
// CS Name: ::XsdDateTime::DateTimeTypeCode
struct CORDL_TYPE __XsdDateTime__DateTimeTypeCode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____XsdDateTime__DateTimeTypeCode_Unwrapped
enum struct ____XsdDateTime__DateTimeTypeCode_Unwrapped : int32_t {
__E_DateTime = static_cast<int32_t>(0x0),
__E_Time = static_cast<int32_t>(0x1),
__E_Date = static_cast<int32_t>(0x2),
__E_GYearMonth = static_cast<int32_t>(0x3),
__E_GYear = static_cast<int32_t>(0x4),
__E_GMonthDay = static_cast<int32_t>(0x5),
__E_GDay = static_cast<int32_t>(0x6),
__E_GMonth = static_cast<int32_t>(0x7),
__E_XdrDateTime = static_cast<int32_t>(0x8),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field DateTime value: static_cast<int32_t>(0x0)
static ::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode const DateTime;

/// @brief Field Time value: static_cast<int32_t>(0x1)
static ::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode const Time;

/// @brief Field Date value: static_cast<int32_t>(0x2)
static ::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode const Date;

/// @brief Field GYearMonth value: static_cast<int32_t>(0x3)
static ::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode const GYearMonth;

/// @brief Field GYear value: static_cast<int32_t>(0x4)
static ::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode const GYear;

/// @brief Field GMonthDay value: static_cast<int32_t>(0x5)
static ::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode const GMonthDay;

/// @brief Field GDay value: static_cast<int32_t>(0x6)
static ::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode const GDay;

/// @brief Field GMonth value: static_cast<int32_t>(0x7)
static ::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode const GMonth;

/// @brief Field XdrDateTime value: static_cast<int32_t>(0x8)
static ::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode const XdrDateTime;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____XsdDateTime__DateTimeTypeCode_Unwrapped () const noexcept {
return std::bit_cast<____XsdDateTime__DateTimeTypeCode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __XsdDateTime__DateTimeTypeCode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __XsdDateTime__DateTimeTypeCode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __XsdDateTime__DateTimeTypeCode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode, 0x4>, "Size mismatch!");

} // namespace end def System::Xml::Schema
// Type: ::XsdDateTimeKind
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11761))
// CS Name: ::XsdDateTime::XsdDateTimeKind
struct CORDL_TYPE __XsdDateTime__XsdDateTimeKind : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____XsdDateTime__XsdDateTimeKind_Unwrapped
enum struct ____XsdDateTime__XsdDateTimeKind_Unwrapped : int32_t {
__E_Unspecified = static_cast<int32_t>(0x0),
__E_Zulu = static_cast<int32_t>(0x1),
__E_LocalWestOfZulu = static_cast<int32_t>(0x2),
__E_LocalEastOfZulu = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unspecified value: static_cast<int32_t>(0x0)
static ::System::Xml::Schema::__XsdDateTime__XsdDateTimeKind const Unspecified;

/// @brief Field Zulu value: static_cast<int32_t>(0x1)
static ::System::Xml::Schema::__XsdDateTime__XsdDateTimeKind const Zulu;

/// @brief Field LocalWestOfZulu value: static_cast<int32_t>(0x2)
static ::System::Xml::Schema::__XsdDateTime__XsdDateTimeKind const LocalWestOfZulu;

/// @brief Field LocalEastOfZulu value: static_cast<int32_t>(0x3)
static ::System::Xml::Schema::__XsdDateTime__XsdDateTimeKind const LocalEastOfZulu;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____XsdDateTime__XsdDateTimeKind_Unwrapped () const noexcept {
return std::bit_cast<____XsdDateTime__XsdDateTimeKind_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __XsdDateTime__XsdDateTimeKind(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __XsdDateTime__XsdDateTimeKind(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __XsdDateTime__XsdDateTimeKind()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XsdDateTime__XsdDateTimeKind, 0x4>, "Size mismatch!");

} // namespace end def System::Xml::Schema
// Type: ::Parser
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11762))
// CS Name: ::XsdDateTime::Parser
struct CORDL_TYPE __XsdDateTime__Parser : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field typeCode offset 0x0
 __declspec(property(get=__get_typeCode, put=__set_typeCode)) ::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode  typeCode;

/// @brief Field year offset 0x4
 __declspec(property(get=__get_year, put=__set_year)) int32_t  year;

/// @brief Field month offset 0x8
 __declspec(property(get=__get_month, put=__set_month)) int32_t  month;

/// @brief Field day offset 0xc
 __declspec(property(get=__get_day, put=__set_day)) int32_t  day;

/// @brief Field hour offset 0x10
 __declspec(property(get=__get_hour, put=__set_hour)) int32_t  hour;

/// @brief Field minute offset 0x14
 __declspec(property(get=__get_minute, put=__set_minute)) int32_t  minute;

/// @brief Field second offset 0x18
 __declspec(property(get=__get_second, put=__set_second)) int32_t  second;

/// @brief Field fraction offset 0x1c
 __declspec(property(get=__get_fraction, put=__set_fraction)) int32_t  fraction;

/// @brief Field kind offset 0x20
 __declspec(property(get=__get_kind, put=__set_kind)) ::System::Xml::Schema::__XsdDateTime__XsdDateTimeKind  kind;

/// @brief Field zoneHour offset 0x24
 __declspec(property(get=__get_zoneHour, put=__set_zoneHour)) int32_t  zoneHour;

/// @brief Field zoneMinute offset 0x28
 __declspec(property(get=__get_zoneMinute, put=__set_zoneMinute)) int32_t  zoneMinute;

/// @brief Field text offset 0x30
 __declspec(property(get=__get_text, put=__set_text)) ::StringW  text;

/// @brief Field length offset 0x38
 __declspec(property(get=__get_length, put=__set_length)) int32_t  length;

constexpr void __set_typeCode(::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode  value) ;

constexpr ::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode& __get_typeCode() ;

constexpr ::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode const& __get_typeCode() const;

constexpr void __set_year(int32_t  value) ;

constexpr int32_t& __get_year() ;

constexpr int32_t const& __get_year() const;

constexpr void __set_month(int32_t  value) ;

constexpr int32_t& __get_month() ;

constexpr int32_t const& __get_month() const;

constexpr void __set_day(int32_t  value) ;

constexpr int32_t& __get_day() ;

constexpr int32_t const& __get_day() const;

constexpr void __set_hour(int32_t  value) ;

constexpr int32_t& __get_hour() ;

constexpr int32_t const& __get_hour() const;

constexpr void __set_minute(int32_t  value) ;

constexpr int32_t& __get_minute() ;

constexpr int32_t const& __get_minute() const;

constexpr void __set_second(int32_t  value) ;

constexpr int32_t& __get_second() ;

constexpr int32_t const& __get_second() const;

constexpr void __set_fraction(int32_t  value) ;

constexpr int32_t& __get_fraction() ;

constexpr int32_t const& __get_fraction() const;

constexpr void __set_kind(::System::Xml::Schema::__XsdDateTime__XsdDateTimeKind  value) ;

constexpr ::System::Xml::Schema::__XsdDateTime__XsdDateTimeKind& __get_kind() ;

constexpr ::System::Xml::Schema::__XsdDateTime__XsdDateTimeKind const& __get_kind() const;

constexpr void __set_zoneHour(int32_t  value) ;

constexpr int32_t& __get_zoneHour() ;

constexpr int32_t const& __get_zoneHour() const;

constexpr void __set_zoneMinute(int32_t  value) ;

constexpr int32_t& __get_zoneMinute() ;

constexpr int32_t const& __get_zoneMinute() const;

constexpr void __set_text(::StringW  value) ;

constexpr ::StringW& __get_text() ;

constexpr ::StringW const& __get_text() const;

constexpr void __set_length(int32_t  value) ;

constexpr int32_t& __get_length() ;

constexpr int32_t const& __get_length() const;

static inline void setStaticF_Power10(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_Power10() ;

/// @brief Method Parse addr 0x28e6998 size 0x8b0 virtual false final false
inline bool Parse(::StringW  text, ::System::Xml::Schema::XsdDateTimeFlags  kinds) ;

/// @brief Method ParseDate addr 0x28e8af0 size 0x1a0 virtual false final false
inline bool ParseDate(int32_t  start) ;

/// @brief Method ParseTimeAndZoneAndWhitespace addr 0x28e8cd4 size 0x44 virtual false final false
inline bool ParseTimeAndZoneAndWhitespace(int32_t  start) ;

/// @brief Method ParseTimeAndWhitespace addr 0x28e8f2c size 0x58 virtual false final false
inline bool ParseTimeAndWhitespace(int32_t  start) ;

/// @brief Method ParseTime addr 0x28e9128 size 0x2f0 virtual false final false
inline bool ParseTime(ByRef<int32_t>  start) ;

/// @brief Method ParseZoneAndWhitespace addr 0x28e8d18 size 0x214 virtual false final false
inline bool ParseZoneAndWhitespace(int32_t  start) ;

/// @brief Method Parse4Dig addr 0x28e8f84 size 0x10c virtual false final false
inline bool Parse4Dig(int32_t  start, ByRef<int32_t>  num) ;

/// @brief Method Parse2Dig addr 0x28e9090 size 0x98 virtual false final false
inline bool Parse2Dig(int32_t  start, ByRef<int32_t>  num) ;

/// @brief Method ParseChar addr 0x28e8c90 size 0x44 virtual false final false
inline bool ParseChar(int32_t  start, char16_t  ch) ;

/// @brief Method Test addr 0x28e8ae4 size 0xc virtual false final false
static inline bool Test(::System::Xml::Schema::XsdDateTimeFlags  left, ::System::Xml::Schema::XsdDateTimeFlags  right) ;

// Ctor Parameters [CppParam { name: "typeCode", ty: "::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode", modifiers: "", def_value: None }, CppParam { name: "year", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "month", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "day", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hour", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minute", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "second", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fraction", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "kind", ty: "::System::Xml::Schema::__XsdDateTime__XsdDateTimeKind", modifiers: "", def_value: None }, CppParam { name: "zoneHour", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "zoneMinute", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __XsdDateTime__Parser(::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode  typeCode, int32_t  year, int32_t  month, int32_t  day, int32_t  hour, int32_t  minute, int32_t  second, int32_t  fraction, ::System::Xml::Schema::__XsdDateTime__XsdDateTimeKind  kind, int32_t  zoneHour, int32_t  zoneMinute, ::StringW  text, int32_t  length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __XsdDateTime__Parser(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __XsdDateTime__Parser()  = default;


// Fields

// Static field Power10


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XsdDateTime__Parser, 0x40>, "Size mismatch!");

} // namespace end def System::Xml::Schema
// Type: System.Xml.Schema::XsdDateTime
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11763))
// CS Name: ::System.Xml.Schema::XsdDateTime
struct CORDL_TYPE XsdDateTime : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using Parser = ::System::Xml::Schema::__XsdDateTime__Parser;

using XsdDateTimeKind = ::System::Xml::Schema::__XsdDateTime__XsdDateTimeKind;

using DateTimeTypeCode = ::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field dt offset 0x0
 __declspec(property(get=__get_dt, put=__set_dt)) ::System::DateTime  dt;

/// @brief Field extra offset 0x8
 __declspec(property(get=__get_extra, put=__set_extra)) uint32_t  extra;

 __declspec(property(get=get_InternalTypeCode)) ::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode  InternalTypeCode;

 __declspec(property(get=get_InternalKind)) ::System::Xml::Schema::__XsdDateTime__XsdDateTimeKind  InternalKind;

 __declspec(property(get=get_Year)) int32_t  Year;

 __declspec(property(get=get_Month)) int32_t  Month;

 __declspec(property(get=get_Day)) int32_t  Day;

 __declspec(property(get=get_Hour)) int32_t  Hour;

 __declspec(property(get=get_Minute)) int32_t  Minute;

 __declspec(property(get=get_Second)) int32_t  Second;

 __declspec(property(get=get_Fraction)) int32_t  Fraction;

 __declspec(property(get=get_ZoneHour)) int32_t  ZoneHour;

 __declspec(property(get=get_ZoneMinute)) int32_t  ZoneMinute;

constexpr void __set_dt(::System::DateTime  value) ;

constexpr ::System::DateTime& __get_dt() ;

constexpr ::System::DateTime const& __get_dt() const;

constexpr void __set_extra(uint32_t  value) ;

constexpr uint32_t& __get_extra() ;

constexpr uint32_t const& __get_extra() const;

static inline void setStaticF_Lzyyyy(int32_t  value) ;

static inline int32_t getStaticF_Lzyyyy() ;

static inline void setStaticF_Lzyyyy_(int32_t  value) ;

static inline int32_t getStaticF_Lzyyyy_() ;

static inline void setStaticF_Lzyyyy_MM(int32_t  value) ;

static inline int32_t getStaticF_Lzyyyy_MM() ;

static inline void setStaticF_Lzyyyy_MM_(int32_t  value) ;

static inline int32_t getStaticF_Lzyyyy_MM_() ;

static inline void setStaticF_Lzyyyy_MM_dd(int32_t  value) ;

static inline int32_t getStaticF_Lzyyyy_MM_dd() ;

static inline void setStaticF_Lzyyyy_MM_ddT(int32_t  value) ;

static inline int32_t getStaticF_Lzyyyy_MM_ddT() ;

static inline void setStaticF_LzHH(int32_t  value) ;

static inline int32_t getStaticF_LzHH() ;

static inline void setStaticF_LzHH_(int32_t  value) ;

static inline int32_t getStaticF_LzHH_() ;

static inline void setStaticF_LzHH_mm(int32_t  value) ;

static inline int32_t getStaticF_LzHH_mm() ;

static inline void setStaticF_LzHH_mm_(int32_t  value) ;

static inline int32_t getStaticF_LzHH_mm_() ;

static inline void setStaticF_LzHH_mm_ss(int32_t  value) ;

static inline int32_t getStaticF_LzHH_mm_ss() ;

static inline void setStaticF_Lz_(int32_t  value) ;

static inline int32_t getStaticF_Lz_() ;

static inline void setStaticF_Lz_zz(int32_t  value) ;

static inline int32_t getStaticF_Lz_zz() ;

static inline void setStaticF_Lz_zz_(int32_t  value) ;

static inline int32_t getStaticF_Lz_zz_() ;

static inline void setStaticF_Lz_zz_zz(int32_t  value) ;

static inline int32_t getStaticF_Lz_zz_zz() ;

static inline void setStaticF_Lz__(int32_t  value) ;

static inline int32_t getStaticF_Lz__() ;

static inline void setStaticF_Lz__mm(int32_t  value) ;

static inline int32_t getStaticF_Lz__mm() ;

static inline void setStaticF_Lz__mm_(int32_t  value) ;

static inline int32_t getStaticF_Lz__mm_() ;

static inline void setStaticF_Lz__mm__(int32_t  value) ;

static inline int32_t getStaticF_Lz__mm__() ;

static inline void setStaticF_Lz__mm_dd(int32_t  value) ;

static inline int32_t getStaticF_Lz__mm_dd() ;

static inline void setStaticF_Lz___(int32_t  value) ;

static inline int32_t getStaticF_Lz___() ;

static inline void setStaticF_Lz___dd(int32_t  value) ;

static inline int32_t getStaticF_Lz___dd() ;

static inline void setStaticF_typeCodes(::ArrayW<::System::Xml::Schema::XmlTypeCode,::Array<::System::Xml::Schema::XmlTypeCode>*>  value) ;

static inline ::ArrayW<::System::Xml::Schema::XmlTypeCode,::Array<::System::Xml::Schema::XmlTypeCode>*> getStaticF_typeCodes() ;

/// @brief Method .ctor addr 0x28e685c size 0x13c virtual false final false
inline void _ctor(::StringW  text, ::System::Xml::Schema::XsdDateTimeFlags  kinds) ;

/// @brief Method .ctor addr 0x28e72c4 size 0x30 virtual false final false
inline void _ctor(::System::Xml::Schema::__XsdDateTime__Parser  parser) ;

/// @brief Method InitiateXsdDateTime addr 0x28e7248 size 0x7c virtual false final false
inline void InitiateXsdDateTime(::System::Xml::Schema::__XsdDateTime__Parser  parser) ;

/// @brief Method TryParse addr 0x28e72f4 size 0x74 virtual false final false
static inline bool TryParse(::StringW  text, ::System::Xml::Schema::XsdDateTimeFlags  kinds, ByRef<::System::Xml::Schema::XsdDateTime>  result) ;

/// @brief Method .ctor addr 0x28e7368 size 0x15c virtual false final false
inline void _ctor(::System::DateTime  dateTime, ::System::Xml::Schema::XsdDateTimeFlags  kinds) ;

/// @brief Method .ctor addr 0x28e74c4 size 0x8 virtual false final false
inline void _ctor(::System::DateTimeOffset  dateTimeOffset) ;

/// @brief Method .ctor addr 0x28e74cc size 0x114 virtual false final false
inline void _ctor(::System::DateTimeOffset  dateTimeOffset, ::System::Xml::Schema::XsdDateTimeFlags  kinds) ;

/// @brief Method get_InternalTypeCode addr 0x28e75e0 size 0x8 virtual false final false
inline ::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode get_InternalTypeCode() ;

/// @brief Method get_InternalKind addr 0x28e75e8 size 0x8 virtual false final false
inline ::System::Xml::Schema::__XsdDateTime__XsdDateTimeKind get_InternalKind() ;

/// @brief Method get_Year addr 0x28e75f0 size 0x8 virtual false final false
inline int32_t get_Year() ;

/// @brief Method get_Month addr 0x28e75f8 size 0x8 virtual false final false
inline int32_t get_Month() ;

/// @brief Method get_Day addr 0x28e7600 size 0x8 virtual false final false
inline int32_t get_Day() ;

/// @brief Method get_Hour addr 0x28e7608 size 0x8 virtual false final false
inline int32_t get_Hour() ;

/// @brief Method get_Minute addr 0x28e7610 size 0x8 virtual false final false
inline int32_t get_Minute() ;

/// @brief Method get_Second addr 0x28e7618 size 0x8 virtual false final false
inline int32_t get_Second() ;

/// @brief Method get_Fraction addr 0x28e7620 size 0xd8 virtual false final false
inline int32_t get_Fraction() ;

/// @brief Method get_ZoneHour addr 0x28e76f8 size 0x8 virtual false final false
inline int32_t get_ZoneHour() ;

/// @brief Method get_ZoneMinute addr 0x28e7700 size 0x8 virtual false final false
inline int32_t get_ZoneMinute() ;

/// @brief Method op_Implicit addr 0x28e7708 size 0x420 virtual false final false
static inline ::System::DateTime op_Implicit___System__DateTime(::System::Xml::Schema::XsdDateTime  xdt) ;

/// @brief Method op_Implicit addr 0x28e7b28 size 0x280 virtual false final false
static inline ::System::DateTimeOffset op_Implicit___System__DateTimeOffset(::System::Xml::Schema::XsdDateTime  xdt) ;

/// @brief Method ToString addr 0x28e7da8 size 0x3d8 virtual true final false
inline ::StringW ToString() ;

/// @brief Method PrintDate addr 0x28e8180 size 0x150 virtual false final false
inline void PrintDate(::System::Text::StringBuilder*  sb) ;

/// @brief Method PrintTime addr 0x28e82d0 size 0x20c virtual false final false
inline void PrintTime(::System::Text::StringBuilder*  sb) ;

/// @brief Method PrintZone addr 0x28e85ac size 0x188 virtual false final false
inline void PrintZone(::System::Text::StringBuilder*  sb) ;

/// @brief Method IntToCharArray addr 0x28e84dc size 0x68 virtual false final false
inline void IntToCharArray(::ArrayW<char16_t,::Array<char16_t>*>  text, int32_t  start, int32_t  value, int32_t  digits) ;

/// @brief Method ShortToCharArray addr 0x28e8544 size 0x68 virtual false final false
inline void ShortToCharArray(::ArrayW<char16_t,::Array<char16_t>*>  text, int32_t  start, int32_t  value) ;

// Ctor Parameters [CppParam { name: "dt", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "extra", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr XsdDateTime(::System::DateTime  dt, uint32_t  extra) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit XsdDateTime(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 XsdDateTime()  = default;


// Fields

// Static field Lzyyyy

// Static field Lzyyyy_

// Static field Lzyyyy_MM

// Static field Lzyyyy_MM_

// Static field Lzyyyy_MM_dd

// Static field Lzyyyy_MM_ddT

// Static field LzHH

// Static field LzHH_

// Static field LzHH_mm

// Static field LzHH_mm_

// Static field LzHH_mm_ss

// Static field Lz_

// Static field Lz_zz

// Static field Lz_zz_

// Static field Lz_zz_zz

// Static field Lz__

// Static field Lz__mm

// Static field Lz__mm_

// Static field Lz__mm__

// Static field Lz__mm_dd

// Static field Lz___

// Static field Lz___dd

// Static field typeCodes


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdDateTime, 0x10>, "Size mismatch!");

} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XsdDateTime__DateTimeTypeCode, "System.Xml.Schema", "XsdDateTime/DateTimeTypeCode");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XsdDateTime__XsdDateTimeKind, "System.Xml.Schema", "XsdDateTime/XsdDateTimeKind");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdDateTime, "System.Xml.Schema", "XsdDateTime");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XsdDateTime__Parser, "System.Xml.Schema", "XsdDateTime/Parser");
