#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeParser)
namespace Newtonsoft::Json::Utilities {
struct ParserTimeZone;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
struct DateTimeParser;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Utilities::DateTimeParser);
// Type: Newtonsoft.Json.Utilities::DateTimeParser
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11846))
// CS Name: ::Newtonsoft.Json.Utilities::DateTimeParser
struct CORDL_TYPE DateTimeParser : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field MaxFractionDigits offset 0x0
static constexpr int16_t  MaxFractionDigits{static_cast<int16_t>(0x7)};

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

/// @brief Field Fraction offset 0x18
 __declspec(property(get=__get_Fraction, put=__set_Fraction)) int32_t  Fraction;

/// @brief Field ZoneHour offset 0x1c
 __declspec(property(get=__get_ZoneHour, put=__set_ZoneHour)) int32_t  ZoneHour;

/// @brief Field ZoneMinute offset 0x20
 __declspec(property(get=__get_ZoneMinute, put=__set_ZoneMinute)) int32_t  ZoneMinute;

/// @brief Field Zone offset 0x24
 __declspec(property(get=__get_Zone, put=__set_Zone)) ::Newtonsoft::Json::Utilities::ParserTimeZone  Zone;

/// @brief Field _text offset 0x28
 __declspec(property(get=__get__text, put=__set__text)) ::ArrayW<char16_t,::Array<char16_t>*>  _text;

/// @brief Field _end offset 0x30
 __declspec(property(get=__get__end, put=__set__end)) int32_t  _end;

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

constexpr void __set_Fraction(int32_t  value) ;

constexpr int32_t& __get_Fraction() ;

constexpr int32_t const& __get_Fraction() const;

constexpr void __set_ZoneHour(int32_t  value) ;

constexpr int32_t& __get_ZoneHour() ;

constexpr int32_t const& __get_ZoneHour() const;

constexpr void __set_ZoneMinute(int32_t  value) ;

constexpr int32_t& __get_ZoneMinute() ;

constexpr int32_t const& __get_ZoneMinute() const;

constexpr void __set_Zone(::Newtonsoft::Json::Utilities::ParserTimeZone  value) ;

constexpr ::Newtonsoft::Json::Utilities::ParserTimeZone& __get_Zone() ;

constexpr ::Newtonsoft::Json::Utilities::ParserTimeZone const& __get_Zone() const;

constexpr void __set__text(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __get__text() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __get__text() const;

constexpr void __set__end(int32_t  value) ;

constexpr int32_t& __get__end() ;

constexpr int32_t const& __get__end() const;

static inline void setStaticF_Power10(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_Power10() ;

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

/// @brief Method Parse addr 0x2658ff4 size 0xd8 virtual false final false
inline bool Parse(::ArrayW<char16_t,::Array<char16_t>*>  text, int32_t  startIndex, int32_t  length) ;

/// @brief Method ParseDate addr 0x26590cc size 0x198 virtual false final false
inline bool ParseDate(int32_t  start) ;

/// @brief Method ParseTimeAndZoneAndWhitespace addr 0x26592b0 size 0x40 virtual false final false
inline bool ParseTimeAndZoneAndWhitespace(int32_t  start) ;

/// @brief Method ParseTime addr 0x2659460 size 0x2c0 virtual false final false
inline bool ParseTime(ByRef<int32_t>  start) ;

/// @brief Method ParseZone addr 0x2659720 size 0x1d0 virtual false final false
inline bool ParseZone(int32_t  start) ;

/// @brief Method Parse4Digit addr 0x26592f0 size 0xdc virtual false final false
inline bool Parse4Digit(int32_t  start, ByRef<int32_t>  num) ;

/// @brief Method Parse2Digit addr 0x26593cc size 0x94 virtual false final false
inline bool Parse2Digit(int32_t  start, ByRef<int32_t>  num) ;

/// @brief Method ParseChar addr 0x2659264 size 0x4c virtual false final false
inline bool ParseChar(int32_t  start, char16_t  ch) ;

// Ctor Parameters [CppParam { name: "Year", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Month", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Day", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Hour", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Minute", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Second", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Fraction", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ZoneHour", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ZoneMinute", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Zone", ty: "::Newtonsoft::Json::Utilities::ParserTimeZone", modifiers: "", def_value: None }, CppParam { name: "_text", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }, CppParam { name: "_end", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DateTimeParser(int32_t  Year, int32_t  Month, int32_t  Day, int32_t  Hour, int32_t  Minute, int32_t  Second, int32_t  Fraction, int32_t  ZoneHour, int32_t  ZoneMinute, ::Newtonsoft::Json::Utilities::ParserTimeZone  Zone, ::ArrayW<char16_t,::Array<char16_t>*>  _text, int32_t  _end) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DateTimeParser(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DateTimeParser()  = default;


// Fields

// Static field Power10

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


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::DateTimeParser, 0x38>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::DateTimeParser, "Newtonsoft.Json.Utilities", "DateTimeParser");
