#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParsingInfo)
namespace System::Globalization {
class Calendar;
}
namespace System {
class __DateTimeParse__MatchNumberDelegate;
}
namespace System {
struct __DateTimeParse__TM;
}
// Forward declare root types
namespace System {
struct ParsingInfo;
}
// Write type traits
MARK_VAL_T(::System::ParsingInfo);
// Type: System::ParsingInfo
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2400))
// CS Name: ::System::ParsingInfo
struct CORDL_TYPE ParsingInfo : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field calendar offset 0x0
 __declspec(property(get=__get_calendar, put=__set_calendar)) ::System::Globalization::Calendar*  calendar;

/// @brief Field dayOfWeek offset 0x8
 __declspec(property(get=__get_dayOfWeek, put=__set_dayOfWeek)) int32_t  dayOfWeek;

/// @brief Field timeMark offset 0xc
 __declspec(property(get=__get_timeMark, put=__set_timeMark)) ::System::__DateTimeParse__TM  timeMark;

/// @brief Field fUseHour12 offset 0x10
 __declspec(property(get=__get_fUseHour12, put=__set_fUseHour12)) bool  fUseHour12;

/// @brief Field fUseTwoDigitYear offset 0x11
 __declspec(property(get=__get_fUseTwoDigitYear, put=__set_fUseTwoDigitYear)) bool  fUseTwoDigitYear;

/// @brief Field fAllowInnerWhite offset 0x12
 __declspec(property(get=__get_fAllowInnerWhite, put=__set_fAllowInnerWhite)) bool  fAllowInnerWhite;

/// @brief Field fAllowTrailingWhite offset 0x13
 __declspec(property(get=__get_fAllowTrailingWhite, put=__set_fAllowTrailingWhite)) bool  fAllowTrailingWhite;

/// @brief Field fCustomNumberParser offset 0x14
 __declspec(property(get=__get_fCustomNumberParser, put=__set_fCustomNumberParser)) bool  fCustomNumberParser;

/// @brief Field parseNumberDelegate offset 0x18
 __declspec(property(get=__get_parseNumberDelegate, put=__set_parseNumberDelegate)) ::System::__DateTimeParse__MatchNumberDelegate*  parseNumberDelegate;

constexpr void __set_calendar(::System::Globalization::Calendar*  value) ;

constexpr ::System::Globalization::Calendar* __get_calendar() ;

constexpr ::cordl_internals::to_const_pointer<::System::Globalization::Calendar*> __get_calendar() const;

constexpr void __set_dayOfWeek(int32_t  value) ;

constexpr int32_t& __get_dayOfWeek() ;

constexpr int32_t const& __get_dayOfWeek() const;

constexpr void __set_timeMark(::System::__DateTimeParse__TM  value) ;

constexpr ::System::__DateTimeParse__TM& __get_timeMark() ;

constexpr ::System::__DateTimeParse__TM const& __get_timeMark() const;

constexpr void __set_fUseHour12(bool  value) ;

constexpr bool& __get_fUseHour12() ;

constexpr bool const& __get_fUseHour12() const;

constexpr void __set_fUseTwoDigitYear(bool  value) ;

constexpr bool& __get_fUseTwoDigitYear() ;

constexpr bool const& __get_fUseTwoDigitYear() const;

constexpr void __set_fAllowInnerWhite(bool  value) ;

constexpr bool& __get_fAllowInnerWhite() ;

constexpr bool const& __get_fAllowInnerWhite() const;

constexpr void __set_fAllowTrailingWhite(bool  value) ;

constexpr bool& __get_fAllowTrailingWhite() ;

constexpr bool const& __get_fAllowTrailingWhite() const;

constexpr void __set_fCustomNumberParser(bool  value) ;

constexpr bool& __get_fCustomNumberParser() ;

constexpr bool const& __get_fCustomNumberParser() const;

constexpr void __set_parseNumberDelegate(::System::__DateTimeParse__MatchNumberDelegate*  value) ;

constexpr ::System::__DateTimeParse__MatchNumberDelegate* __get_parseNumberDelegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::__DateTimeParse__MatchNumberDelegate*> __get_parseNumberDelegate() const;

/// @brief Method Init addr 0x25a5a54 size 0xc virtual false final false
inline void Init() ;

// Ctor Parameters [CppParam { name: "calendar", ty: "::System::Globalization::Calendar*", modifiers: "", def_value: None }, CppParam { name: "dayOfWeek", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "timeMark", ty: "::System::__DateTimeParse__TM", modifiers: "", def_value: None }, CppParam { name: "fUseHour12", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fUseTwoDigitYear", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fAllowInnerWhite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fAllowTrailingWhite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fCustomNumberParser", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "parseNumberDelegate", ty: "::System::__DateTimeParse__MatchNumberDelegate*", modifiers: "", def_value: None }]
constexpr ParsingInfo(::System::Globalization::Calendar*  calendar, int32_t  dayOfWeek, ::System::__DateTimeParse__TM  timeMark, bool  fUseHour12, bool  fUseTwoDigitYear, bool  fAllowInnerWhite, bool  fAllowTrailingWhite, bool  fCustomNumberParser, ::System::__DateTimeParse__MatchNumberDelegate*  parseNumberDelegate) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ParsingInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ParsingInfo()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ParsingInfo, 0x20>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::ParsingInfo, "System", "ParsingInfo");
