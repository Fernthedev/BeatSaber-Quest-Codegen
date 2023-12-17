#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanFormat)
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Globalization {
struct __TimeSpanFormat__FormatLiterals;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
struct TimeSpan;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class IFormatProvider;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Globalization {
struct __TimeSpanFormat__Pattern;
}
// Forward declare root types
namespace System::Globalization {
struct __TimeSpanFormat__Pattern;
}
namespace System::Globalization {
class TimeSpanFormat;
}
namespace System::Globalization {
struct __TimeSpanFormat__FormatLiterals;
}
// Write type traits
MARK_VAL_T(::System::Globalization::__TimeSpanFormat__Pattern);
MARK_REF_PTR_T(::System::Globalization::TimeSpanFormat);
MARK_VAL_T(::System::Globalization::__TimeSpanFormat__FormatLiterals);
// Type: ::Pattern
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3681))
// CS Name: ::TimeSpanFormat::Pattern
struct CORDL_TYPE __TimeSpanFormat__Pattern : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____TimeSpanFormat__Pattern_Unwrapped
enum struct ____TimeSpanFormat__Pattern_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Minimum = static_cast<int32_t>(0x1),
__E_Full = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Globalization::__TimeSpanFormat__Pattern const None;

/// @brief Field Minimum value: static_cast<int32_t>(0x1)
static ::System::Globalization::__TimeSpanFormat__Pattern const Minimum;

/// @brief Field Full value: static_cast<int32_t>(0x2)
static ::System::Globalization::__TimeSpanFormat__Pattern const Full;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____TimeSpanFormat__Pattern_Unwrapped () const noexcept {
return std::bit_cast<____TimeSpanFormat__Pattern_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __TimeSpanFormat__Pattern(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TimeSpanFormat__Pattern(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TimeSpanFormat__Pattern()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanFormat__Pattern, 0x4>, "Size mismatch!");

} // namespace end def System::Globalization
// Type: ::FormatLiterals
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3682))
// CS Name: ::TimeSpanFormat::FormatLiterals
struct CORDL_TYPE __TimeSpanFormat__FormatLiterals : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field AppCompatLiteral offset 0x0
 __declspec(property(get=__get_AppCompatLiteral, put=__set_AppCompatLiteral)) ::StringW  AppCompatLiteral;

/// @brief Field dd offset 0x8
 __declspec(property(get=__get_dd, put=__set_dd)) int32_t  dd;

/// @brief Field hh offset 0xc
 __declspec(property(get=__get_hh, put=__set_hh)) int32_t  hh;

/// @brief Field mm offset 0x10
 __declspec(property(get=__get_mm, put=__set_mm)) int32_t  mm;

/// @brief Field ss offset 0x14
 __declspec(property(get=__get_ss, put=__set_ss)) int32_t  ss;

/// @brief Field ff offset 0x18
 __declspec(property(get=__get_ff, put=__set_ff)) int32_t  ff;

/// @brief Field _literals offset 0x20
 __declspec(property(get=__get__literals, put=__set__literals)) ::ArrayW<::StringW,::Array<::StringW>*>  _literals;

 __declspec(property(get=get_Start)) ::StringW  Start;

 __declspec(property(get=get_DayHourSep)) ::StringW  DayHourSep;

 __declspec(property(get=get_HourMinuteSep)) ::StringW  HourMinuteSep;

 __declspec(property(get=get_MinuteSecondSep)) ::StringW  MinuteSecondSep;

 __declspec(property(get=get_SecondFractionSep)) ::StringW  SecondFractionSep;

 __declspec(property(get=get_End)) ::StringW  End;

constexpr void __set_AppCompatLiteral(::StringW  value) ;

constexpr ::StringW& __get_AppCompatLiteral() ;

constexpr ::StringW const& __get_AppCompatLiteral() const;

constexpr void __set_dd(int32_t  value) ;

constexpr int32_t& __get_dd() ;

constexpr int32_t const& __get_dd() const;

constexpr void __set_hh(int32_t  value) ;

constexpr int32_t& __get_hh() ;

constexpr int32_t const& __get_hh() const;

constexpr void __set_mm(int32_t  value) ;

constexpr int32_t& __get_mm() ;

constexpr int32_t const& __get_mm() const;

constexpr void __set_ss(int32_t  value) ;

constexpr int32_t& __get_ss() ;

constexpr int32_t const& __get_ss() const;

constexpr void __set_ff(int32_t  value) ;

constexpr int32_t& __get_ff() ;

constexpr int32_t const& __get_ff() const;

constexpr void __set__literals(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get__literals() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get__literals() const;

/// @brief Method get_Start addr 0x25566e0 size 0x28 virtual false final false
inline ::StringW get_Start() ;

/// @brief Method get_DayHourSep addr 0x2556708 size 0x2c virtual false final false
inline ::StringW get_DayHourSep() ;

/// @brief Method get_HourMinuteSep addr 0x2556734 size 0x2c virtual false final false
inline ::StringW get_HourMinuteSep() ;

/// @brief Method get_MinuteSecondSep addr 0x2556760 size 0x2c virtual false final false
inline ::StringW get_MinuteSecondSep() ;

/// @brief Method get_SecondFractionSep addr 0x255678c size 0x2c virtual false final false
inline ::StringW get_SecondFractionSep() ;

/// @brief Method get_End addr 0x25567b8 size 0x2c virtual false final false
inline ::StringW get_End() ;

/// @brief Method InitInvariant addr 0x2556878 size 0x210 virtual false final false
static inline ::System::Globalization::__TimeSpanFormat__FormatLiterals InitInvariant(bool  isNegative) ;

/// @brief Method Init addr 0x2556258 size 0x3f8 virtual false final false
inline void Init(::System::ReadOnlySpan_1<char16_t>  format, bool  useInvariantFieldLengths) ;

// Ctor Parameters [CppParam { name: "AppCompatLiteral", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "dd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hh", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "mm", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ss", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ff", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_literals", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
constexpr __TimeSpanFormat__FormatLiterals(::StringW  AppCompatLiteral, int32_t  dd, int32_t  hh, int32_t  mm, int32_t  ss, int32_t  ff, ::ArrayW<::StringW,::Array<::StringW>*>  _literals) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TimeSpanFormat__FormatLiterals(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TimeSpanFormat__FormatLiterals()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanFormat__FormatLiterals, 0x28>, "Size mismatch!");

} // namespace end def System::Globalization
// Type: System.Globalization::TimeSpanFormat
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3683))
// CS Name: ::System.Globalization::TimeSpanFormat*
class CORDL_TYPE TimeSpanFormat : public ::System::Object {
public:
// Declarations
using FormatLiterals = ::System::Globalization::__TimeSpanFormat__FormatLiterals;

using Pattern = ::System::Globalization::__TimeSpanFormat__Pattern;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_PositiveInvariantFormatLiterals(::System::Globalization::__TimeSpanFormat__FormatLiterals  value) ;

static inline ::System::Globalization::__TimeSpanFormat__FormatLiterals getStaticF_PositiveInvariantFormatLiterals() ;

static inline void setStaticF_NegativeInvariantFormatLiterals(::System::Globalization::__TimeSpanFormat__FormatLiterals  value) ;

static inline ::System::Globalization::__TimeSpanFormat__FormatLiterals getStaticF_NegativeInvariantFormatLiterals() ;

/// @brief Method AppendNonNegativeInt32 addr 0x2555160 size 0xf8 virtual false final false
static inline void AppendNonNegativeInt32(::System::Text::StringBuilder*  sb, int32_t  n, int32_t  digits) ;

/// @brief Method Format addr 0x2555258 size 0xb8 virtual false final false
static inline ::StringW Format(::System::TimeSpan  value, ::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method TryFormat addr 0x25555b8 size 0x11c virtual false final false
static inline bool TryFormat(::System::TimeSpan  value, ::System::Span_1<char16_t>  destination, ByRef<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method FormatToBuilder addr 0x2555310 size 0x2a8 virtual false final false
static inline ::System::Text::StringBuilder* FormatToBuilder(::System::TimeSpan  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method FormatStandard addr 0x25556d4 size 0x48c virtual false final false
static inline ::System::Text::StringBuilder* FormatStandard(::System::TimeSpan  value, bool  isInvariant, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::__TimeSpanFormat__Pattern  pattern) ;

/// @brief Method FormatCustomized addr 0x2555b60 size 0x6f8 virtual false final false
static inline ::System::Text::StringBuilder* FormatCustomized(::System::TimeSpan  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Text::StringBuilder*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanFormat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSpanFormat(TimeSpanFormat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanFormat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSpanFormat(TimeSpanFormat const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimeSpanFormat()  = default;
public:


// Fields

// Static field PositiveInvariantFormatLiterals

// Static field NegativeInvariantFormatLiterals


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::TimeSpanFormat, 0x10>, "Size mismatch!");

} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanFormat__Pattern, "System.Globalization", "TimeSpanFormat/Pattern");
NEED_NO_BOX(::System::Globalization::TimeSpanFormat);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanFormat*, "System.Globalization", "TimeSpanFormat");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanFormat__FormatLiterals, "System.Globalization", "TimeSpanFormat/FormatLiterals");
