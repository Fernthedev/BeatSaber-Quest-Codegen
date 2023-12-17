#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeRawInfo)
namespace System {
struct __DateTimeParse__TM;
}
// Forward declare root types
namespace System {
struct DateTimeRawInfo;
}
// Write type traits
MARK_VAL_T(::System::DateTimeRawInfo);
// Type: System::DateTimeRawInfo
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2396))
// CS Name: ::System::DateTimeRawInfo
struct CORDL_TYPE DateTimeRawInfo : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field num offset 0x0
 __declspec(property(get=__get_num, put=__set_num)) ::cordl_internals::Ptr<int32_t>  num;

/// @brief Field numCount offset 0x8
 __declspec(property(get=__get_numCount, put=__set_numCount)) int32_t  numCount;

/// @brief Field month offset 0xc
 __declspec(property(get=__get_month, put=__set_month)) int32_t  month;

/// @brief Field year offset 0x10
 __declspec(property(get=__get_year, put=__set_year)) int32_t  year;

/// @brief Field dayOfWeek offset 0x14
 __declspec(property(get=__get_dayOfWeek, put=__set_dayOfWeek)) int32_t  dayOfWeek;

/// @brief Field era offset 0x18
 __declspec(property(get=__get_era, put=__set_era)) int32_t  era;

/// @brief Field timeMark offset 0x1c
 __declspec(property(get=__get_timeMark, put=__set_timeMark)) ::System::__DateTimeParse__TM  timeMark;

/// @brief Field fraction offset 0x20
 __declspec(property(get=__get_fraction, put=__set_fraction)) double_t  fraction;

/// @brief Field hasSameDateAndTimeSeparators offset 0x28
 __declspec(property(get=__get_hasSameDateAndTimeSeparators, put=__set_hasSameDateAndTimeSeparators)) bool  hasSameDateAndTimeSeparators;

constexpr void __set_num(::cordl_internals::Ptr<int32_t>  value) ;

constexpr ::cordl_internals::Ptr<int32_t>& __get_num() ;

constexpr ::cordl_internals::Ptr<int32_t> const& __get_num() const;

constexpr void __set_numCount(int32_t  value) ;

constexpr int32_t& __get_numCount() ;

constexpr int32_t const& __get_numCount() const;

constexpr void __set_month(int32_t  value) ;

constexpr int32_t& __get_month() ;

constexpr int32_t const& __get_month() const;

constexpr void __set_year(int32_t  value) ;

constexpr int32_t& __get_year() ;

constexpr int32_t const& __get_year() const;

constexpr void __set_dayOfWeek(int32_t  value) ;

constexpr int32_t& __get_dayOfWeek() ;

constexpr int32_t const& __get_dayOfWeek() const;

constexpr void __set_era(int32_t  value) ;

constexpr int32_t& __get_era() ;

constexpr int32_t const& __get_era() const;

constexpr void __set_timeMark(::System::__DateTimeParse__TM  value) ;

constexpr ::System::__DateTimeParse__TM& __get_timeMark() ;

constexpr ::System::__DateTimeParse__TM const& __get_timeMark() const;

constexpr void __set_fraction(double_t  value) ;

constexpr double_t& __get_fraction() ;

constexpr double_t const& __get_fraction() const;

constexpr void __set_hasSameDateAndTimeSeparators(bool  value) ;

constexpr bool& __get_hasSameDateAndTimeSeparators() ;

constexpr bool const& __get_hasSameDateAndTimeSeparators() const;

/// @brief Method Init addr 0x25a5870 size 0x20 virtual false final false
inline void Init(::cordl_internals::Ptr<int32_t>  numberBuffer) ;

/// @brief Method AddNumber addr 0x25a5890 size 0x18 virtual false final false
inline void AddNumber(int32_t  value) ;

/// @brief Method GetNumber addr 0x25a58a8 size 0xc virtual false final false
inline int32_t GetNumber(int32_t  index) ;

// Ctor Parameters [CppParam { name: "num", ty: "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: None }, CppParam { name: "numCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "month", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "year", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dayOfWeek", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "era", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "timeMark", ty: "::System::__DateTimeParse__TM", modifiers: "", def_value: None }, CppParam { name: "fraction", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "hasSameDateAndTimeSeparators", ty: "bool", modifiers: "", def_value: None }]
constexpr DateTimeRawInfo(::cordl_internals::Ptr<int32_t>  num, int32_t  numCount, int32_t  month, int32_t  year, int32_t  dayOfWeek, int32_t  era, ::System::__DateTimeParse__TM  timeMark, double_t  fraction, bool  hasSameDateAndTimeSeparators) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DateTimeRawInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DateTimeRawInfo()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DateTimeRawInfo, 0x30>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeRawInfo, "System", "DateTimeRawInfo");
