#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanParse)
namespace System::Globalization {
struct __TimeSpanParse__StringParser;
}
namespace System::Globalization {
struct TimeSpanStyles;
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
struct __TimeSpanParse__TimeSpanRawInfo;
}
namespace System::Globalization {
struct __TimeSpanParse__TimeSpanTokenizer;
}
namespace System::Globalization {
struct __TimeSpanParse__ParseFailureKind;
}
namespace System {
struct TimeSpan;
}
namespace System::Globalization {
struct __TimeSpanParse__TTT;
}
namespace System::Globalization {
struct __TimeSpanParse__TimeSpanStandardStyles;
}
namespace System::Globalization {
struct __TimeSpanParse__TimeSpanToken;
}
namespace System::Globalization {
struct __TimeSpanParse__TimeSpanResult;
}
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Globalization {
struct __TimeSpanFormat__FormatLiterals;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Globalization {
struct __TimeSpanParse__ParseFailureKind;
}
namespace System::Globalization {
struct __TimeSpanParse__TTT;
}
namespace System::Globalization {
struct __TimeSpanParse__TimeSpanStandardStyles;
}
namespace System::Globalization {
class TimeSpanParse;
}
namespace System::Globalization {
struct __TimeSpanParse__StringParser;
}
namespace System::Globalization {
struct __TimeSpanParse__TimeSpanRawInfo;
}
namespace System::Globalization {
struct __TimeSpanParse__TimeSpanResult;
}
namespace System::Globalization {
struct __TimeSpanParse__TimeSpanToken;
}
namespace System::Globalization {
struct __TimeSpanParse__TimeSpanTokenizer;
}
// Write type traits
MARK_VAL_T(::System::Globalization::__TimeSpanParse__ParseFailureKind);
MARK_VAL_T(::System::Globalization::__TimeSpanParse__TTT);
MARK_VAL_T(::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles);
MARK_REF_PTR_T(::System::Globalization::TimeSpanParse);
MARK_VAL_T(::System::Globalization::__TimeSpanParse__StringParser);
MARK_VAL_T(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo);
MARK_VAL_T(::System::Globalization::__TimeSpanParse__TimeSpanResult);
MARK_VAL_T(::System::Globalization::__TimeSpanParse__TimeSpanToken);
MARK_VAL_T(::System::Globalization::__TimeSpanParse__TimeSpanTokenizer);
// Type: ::ParseFailureKind
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3684))
// CS Name: ::TimeSpanParse::ParseFailureKind
struct CORDL_TYPE __TimeSpanParse__ParseFailureKind : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct ____TimeSpanParse__ParseFailureKind_Unwrapped
enum struct ____TimeSpanParse__ParseFailureKind_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_ArgumentNull = static_cast<uint8_t>(0x1u),
__E_Format = static_cast<uint8_t>(0x2u),
__E_FormatWithParameter = static_cast<uint8_t>(0x3u),
__E_Overflow = static_cast<uint8_t>(0x4u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field None value: static_cast<uint8_t>(0x0u)
static ::System::Globalization::__TimeSpanParse__ParseFailureKind const None;

/// @brief Field ArgumentNull value: static_cast<uint8_t>(0x1u)
static ::System::Globalization::__TimeSpanParse__ParseFailureKind const ArgumentNull;

/// @brief Field Format value: static_cast<uint8_t>(0x2u)
static ::System::Globalization::__TimeSpanParse__ParseFailureKind const Format;

/// @brief Field FormatWithParameter value: static_cast<uint8_t>(0x3u)
static ::System::Globalization::__TimeSpanParse__ParseFailureKind const FormatWithParameter;

/// @brief Field Overflow value: static_cast<uint8_t>(0x4u)
static ::System::Globalization::__TimeSpanParse__ParseFailureKind const Overflow;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____TimeSpanParse__ParseFailureKind_Unwrapped () const noexcept {
return std::bit_cast<____TimeSpanParse__ParseFailureKind_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __TimeSpanParse__ParseFailureKind(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TimeSpanParse__ParseFailureKind(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TimeSpanParse__ParseFailureKind()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanParse__ParseFailureKind, 0x1>, "Size mismatch!");

} // namespace end def System::Globalization
// Type: ::TimeSpanStandardStyles
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3685))
// CS Name: ::TimeSpanParse::TimeSpanStandardStyles
struct CORDL_TYPE __TimeSpanParse__TimeSpanStandardStyles : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct ____TimeSpanParse__TimeSpanStandardStyles_Unwrapped
enum struct ____TimeSpanParse__TimeSpanStandardStyles_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_Invariant = static_cast<uint8_t>(0x1u),
__E_Localized = static_cast<uint8_t>(0x2u),
__E_RequireFull = static_cast<uint8_t>(0x4u),
__E_Any = static_cast<uint8_t>(0x3u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field None value: static_cast<uint8_t>(0x0u)
static ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles const None;

/// @brief Field Invariant value: static_cast<uint8_t>(0x1u)
static ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles const Invariant;

/// @brief Field Localized value: static_cast<uint8_t>(0x2u)
static ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles const Localized;

/// @brief Field RequireFull value: static_cast<uint8_t>(0x4u)
static ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles const RequireFull;

/// @brief Field Any value: static_cast<uint8_t>(0x3u)
static ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles const Any;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____TimeSpanParse__TimeSpanStandardStyles_Unwrapped () const noexcept {
return std::bit_cast<____TimeSpanParse__TimeSpanStandardStyles_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __TimeSpanParse__TimeSpanStandardStyles(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TimeSpanParse__TimeSpanStandardStyles(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TimeSpanParse__TimeSpanStandardStyles()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles, 0x1>, "Size mismatch!");

} // namespace end def System::Globalization
// Type: ::TTT
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3686))
// CS Name: ::TimeSpanParse::TTT
struct CORDL_TYPE __TimeSpanParse__TTT : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct ____TimeSpanParse__TTT_Unwrapped
enum struct ____TimeSpanParse__TTT_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_End = static_cast<uint8_t>(0x1u),
__E_Num = static_cast<uint8_t>(0x2u),
__E_Sep = static_cast<uint8_t>(0x3u),
__E_NumOverflow = static_cast<uint8_t>(0x4u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field None value: static_cast<uint8_t>(0x0u)
static ::System::Globalization::__TimeSpanParse__TTT const None;

/// @brief Field End value: static_cast<uint8_t>(0x1u)
static ::System::Globalization::__TimeSpanParse__TTT const End;

/// @brief Field Num value: static_cast<uint8_t>(0x2u)
static ::System::Globalization::__TimeSpanParse__TTT const Num;

/// @brief Field Sep value: static_cast<uint8_t>(0x3u)
static ::System::Globalization::__TimeSpanParse__TTT const Sep;

/// @brief Field NumOverflow value: static_cast<uint8_t>(0x4u)
static ::System::Globalization::__TimeSpanParse__TTT const NumOverflow;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____TimeSpanParse__TTT_Unwrapped () const noexcept {
return std::bit_cast<____TimeSpanParse__TTT_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __TimeSpanParse__TTT(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TimeSpanParse__TTT(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TimeSpanParse__TTT()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanParse__TTT, 0x1>, "Size mismatch!");

} // namespace end def System::Globalization
// Type: ::TimeSpanToken
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3687))
// CS Name: ::TimeSpanParse::TimeSpanToken
struct CORDL_TYPE __TimeSpanParse__TimeSpanToken : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _ttt offset 0x0
 __declspec(property(get=__get__ttt, put=__set__ttt)) ::System::Globalization::__TimeSpanParse__TTT  _ttt;

/// @brief Field _num offset 0x4
 __declspec(property(get=__get__num, put=__set__num)) int32_t  _num;

/// @brief Field _zeroes offset 0x8
 __declspec(property(get=__get__zeroes, put=__set__zeroes)) int32_t  _zeroes;

/// @brief Field _sep offset 0x10
 __declspec(property(get=__get__sep, put=__set__sep)) ::System::ReadOnlySpan_1<char16_t>  _sep;

constexpr void __set__ttt(::System::Globalization::__TimeSpanParse__TTT  value) ;

constexpr ::System::Globalization::__TimeSpanParse__TTT& __get__ttt() ;

constexpr ::System::Globalization::__TimeSpanParse__TTT const& __get__ttt() const;

constexpr void __set__num(int32_t  value) ;

constexpr int32_t& __get__num() ;

constexpr int32_t const& __get__num() const;

constexpr void __set__zeroes(int32_t  value) ;

constexpr int32_t& __get__zeroes() ;

constexpr int32_t const& __get__zeroes() const;

constexpr void __set__sep(::System::ReadOnlySpan_1<char16_t>  value) ;

constexpr ::System::ReadOnlySpan_1<char16_t>& __get__sep() ;

constexpr ::System::ReadOnlySpan_1<char16_t> const& __get__sep() const;

/// @brief Method .ctor addr 0x255d5f8 size 0x10 virtual false final false
inline void _ctor(::System::Globalization::__TimeSpanParse__TTT  type) ;

/// @brief Method .ctor addr 0x255a200 size 0x14 virtual false final false
inline void _ctor(int32_t  number) ;

/// @brief Method .ctor addr 0x255d5d0 size 0x14 virtual false final false
inline void _ctor(int32_t  number, int32_t  leadingZeroes) ;

/// @brief Method .ctor addr 0x255d608 size 0x10 virtual false final false
inline void _ctor(::System::Globalization::__TimeSpanParse__TTT  type, int32_t  number, int32_t  leadingZeroes, ::System::ReadOnlySpan_1<char16_t>  separator) ;

/// @brief Method IsInvalidFraction addr 0x2556be8 size 0x5c virtual false final false
inline bool IsInvalidFraction() ;

// Ctor Parameters [CppParam { name: "_ttt", ty: "::System::Globalization::__TimeSpanParse__TTT", modifiers: "", def_value: None }, CppParam { name: "_num", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_zeroes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_sep", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }]
constexpr __TimeSpanParse__TimeSpanToken(::System::Globalization::__TimeSpanParse__TTT  _ttt, int32_t  _num, int32_t  _zeroes, ::System::ReadOnlySpan_1<char16_t>  _sep) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TimeSpanParse__TimeSpanToken(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TimeSpanParse__TimeSpanToken()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanParse__TimeSpanToken, 0x20>, "Size mismatch!");

} // namespace end def System::Globalization
// Type: ::TimeSpanTokenizer
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3688))
// CS Name: ::TimeSpanParse::TimeSpanTokenizer
struct CORDL_TYPE __TimeSpanParse__TimeSpanTokenizer : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _value offset 0x0
 __declspec(property(get=__get__value, put=__set__value)) ::System::ReadOnlySpan_1<char16_t>  _value;

/// @brief Field _pos offset 0x10
 __declspec(property(get=__get__pos, put=__set__pos)) int32_t  _pos;

 __declspec(property(get=get_EOL)) bool  EOL;

 __declspec(property(get=get_NextChar)) char16_t  NextChar;

constexpr void __set__value(::System::ReadOnlySpan_1<char16_t>  value) ;

constexpr ::System::ReadOnlySpan_1<char16_t>& __get__value() ;

constexpr ::System::ReadOnlySpan_1<char16_t> const& __get__value() const;

constexpr void __set__pos(int32_t  value) ;

constexpr int32_t& __get__pos() ;

constexpr int32_t const& __get__pos() const;

/// @brief Method .ctor addr 0x255705c size 0xc virtual false final false
inline void _ctor(::System::ReadOnlySpan_1<char16_t>  input) ;

/// @brief Method .ctor addr 0x255d398 size 0xc virtual false final false
inline void _ctor(::System::ReadOnlySpan_1<char16_t>  input, int32_t  startPosition) ;

/// @brief Method GetNextToken addr 0x25570b4 size 0x240 virtual false final false
inline ::System::Globalization::__TimeSpanParse__TimeSpanToken GetNextToken() ;

/// @brief Method get_EOL addr 0x255d584 size 0x4c virtual false final false
inline bool get_EOL() ;

/// @brief Method BackOne addr 0x255d5e4 size 0x14 virtual false final false
inline void BackOne() ;

/// @brief Method get_NextChar addr 0x255d524 size 0x60 virtual false final false
inline char16_t get_NextChar() ;

// Ctor Parameters [CppParam { name: "_value", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __TimeSpanParse__TimeSpanTokenizer(::System::ReadOnlySpan_1<char16_t>  _value, int32_t  _pos) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TimeSpanParse__TimeSpanTokenizer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TimeSpanParse__TimeSpanTokenizer()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer, 0x18>, "Size mismatch!");

} // namespace end def System::Globalization
// Type: ::TimeSpanRawInfo
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3689))
// CS Name: ::TimeSpanParse::TimeSpanRawInfo
struct CORDL_TYPE __TimeSpanParse__TimeSpanRawInfo : public ::bs_hook::ValueTypeWrapper<0x178> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x178};

/// @brief Field _lastSeenTTT offset 0x0
 __declspec(property(get=__get__lastSeenTTT, put=__set__lastSeenTTT)) ::System::Globalization::__TimeSpanParse__TTT  _lastSeenTTT;

/// @brief Field _tokenCount offset 0x4
 __declspec(property(get=__get__tokenCount, put=__set__tokenCount)) int32_t  _tokenCount;

/// @brief Field _sepCount offset 0x8
 __declspec(property(get=__get__sepCount, put=__set__sepCount)) int32_t  _sepCount;

/// @brief Field _numCount offset 0xc
 __declspec(property(get=__get__numCount, put=__set__numCount)) int32_t  _numCount;

/// @brief Field _posLoc offset 0x10
 __declspec(property(get=__get__posLoc, put=__set__posLoc)) ::System::Globalization::__TimeSpanFormat__FormatLiterals  _posLoc;

/// @brief Field _negLoc offset 0x38
 __declspec(property(get=__get__negLoc, put=__set__negLoc)) ::System::Globalization::__TimeSpanFormat__FormatLiterals  _negLoc;

/// @brief Field _posLocInit offset 0x60
 __declspec(property(get=__get__posLocInit, put=__set__posLocInit)) bool  _posLocInit;

/// @brief Field _negLocInit offset 0x61
 __declspec(property(get=__get__negLocInit, put=__set__negLocInit)) bool  _negLocInit;

/// @brief Field _fullPosPattern offset 0x68
 __declspec(property(get=__get__fullPosPattern, put=__set__fullPosPattern)) ::StringW  _fullPosPattern;

/// @brief Field _fullNegPattern offset 0x70
 __declspec(property(get=__get__fullNegPattern, put=__set__fullNegPattern)) ::StringW  _fullNegPattern;

/// @brief Field _numbers0 offset 0x78
 __declspec(property(get=__get__numbers0, put=__set__numbers0)) ::System::Globalization::__TimeSpanParse__TimeSpanToken  _numbers0;

/// @brief Field _numbers1 offset 0x98
 __declspec(property(get=__get__numbers1, put=__set__numbers1)) ::System::Globalization::__TimeSpanParse__TimeSpanToken  _numbers1;

/// @brief Field _numbers2 offset 0xb8
 __declspec(property(get=__get__numbers2, put=__set__numbers2)) ::System::Globalization::__TimeSpanParse__TimeSpanToken  _numbers2;

/// @brief Field _numbers3 offset 0xd8
 __declspec(property(get=__get__numbers3, put=__set__numbers3)) ::System::Globalization::__TimeSpanParse__TimeSpanToken  _numbers3;

/// @brief Field _numbers4 offset 0xf8
 __declspec(property(get=__get__numbers4, put=__set__numbers4)) ::System::Globalization::__TimeSpanParse__TimeSpanToken  _numbers4;

/// @brief Field _literals0 offset 0x118
 __declspec(property(get=__get__literals0, put=__set__literals0)) ::System::ReadOnlySpan_1<char16_t>  _literals0;

/// @brief Field _literals1 offset 0x128
 __declspec(property(get=__get__literals1, put=__set__literals1)) ::System::ReadOnlySpan_1<char16_t>  _literals1;

/// @brief Field _literals2 offset 0x138
 __declspec(property(get=__get__literals2, put=__set__literals2)) ::System::ReadOnlySpan_1<char16_t>  _literals2;

/// @brief Field _literals3 offset 0x148
 __declspec(property(get=__get__literals3, put=__set__literals3)) ::System::ReadOnlySpan_1<char16_t>  _literals3;

/// @brief Field _literals4 offset 0x158
 __declspec(property(get=__get__literals4, put=__set__literals4)) ::System::ReadOnlySpan_1<char16_t>  _literals4;

/// @brief Field _literals5 offset 0x168
 __declspec(property(get=__get__literals5, put=__set__literals5)) ::System::ReadOnlySpan_1<char16_t>  _literals5;

 __declspec(property(get=get_PositiveInvariant)) ::System::Globalization::__TimeSpanFormat__FormatLiterals  PositiveInvariant;

 __declspec(property(get=get_NegativeInvariant)) ::System::Globalization::__TimeSpanFormat__FormatLiterals  NegativeInvariant;

 __declspec(property(get=get_PositiveLocalized)) ::System::Globalization::__TimeSpanFormat__FormatLiterals  PositiveLocalized;

 __declspec(property(get=get_NegativeLocalized)) ::System::Globalization::__TimeSpanFormat__FormatLiterals  NegativeLocalized;

constexpr void __set__lastSeenTTT(::System::Globalization::__TimeSpanParse__TTT  value) ;

constexpr ::System::Globalization::__TimeSpanParse__TTT& __get__lastSeenTTT() ;

constexpr ::System::Globalization::__TimeSpanParse__TTT const& __get__lastSeenTTT() const;

constexpr void __set__tokenCount(int32_t  value) ;

constexpr int32_t& __get__tokenCount() ;

constexpr int32_t const& __get__tokenCount() const;

constexpr void __set__sepCount(int32_t  value) ;

constexpr int32_t& __get__sepCount() ;

constexpr int32_t const& __get__sepCount() const;

constexpr void __set__numCount(int32_t  value) ;

constexpr int32_t& __get__numCount() ;

constexpr int32_t const& __get__numCount() const;

constexpr void __set__posLoc(::System::Globalization::__TimeSpanFormat__FormatLiterals  value) ;

constexpr ::System::Globalization::__TimeSpanFormat__FormatLiterals& __get__posLoc() ;

constexpr ::System::Globalization::__TimeSpanFormat__FormatLiterals const& __get__posLoc() const;

constexpr void __set__negLoc(::System::Globalization::__TimeSpanFormat__FormatLiterals  value) ;

constexpr ::System::Globalization::__TimeSpanFormat__FormatLiterals& __get__negLoc() ;

constexpr ::System::Globalization::__TimeSpanFormat__FormatLiterals const& __get__negLoc() const;

constexpr void __set__posLocInit(bool  value) ;

constexpr bool& __get__posLocInit() ;

constexpr bool const& __get__posLocInit() const;

constexpr void __set__negLocInit(bool  value) ;

constexpr bool& __get__negLocInit() ;

constexpr bool const& __get__negLocInit() const;

constexpr void __set__fullPosPattern(::StringW  value) ;

constexpr ::StringW& __get__fullPosPattern() ;

constexpr ::StringW const& __get__fullPosPattern() const;

constexpr void __set__fullNegPattern(::StringW  value) ;

constexpr ::StringW& __get__fullNegPattern() ;

constexpr ::StringW const& __get__fullNegPattern() const;

constexpr void __set__numbers0(::System::Globalization::__TimeSpanParse__TimeSpanToken  value) ;

constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken& __get__numbers0() ;

constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken const& __get__numbers0() const;

constexpr void __set__numbers1(::System::Globalization::__TimeSpanParse__TimeSpanToken  value) ;

constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken& __get__numbers1() ;

constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken const& __get__numbers1() const;

constexpr void __set__numbers2(::System::Globalization::__TimeSpanParse__TimeSpanToken  value) ;

constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken& __get__numbers2() ;

constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken const& __get__numbers2() const;

constexpr void __set__numbers3(::System::Globalization::__TimeSpanParse__TimeSpanToken  value) ;

constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken& __get__numbers3() ;

constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken const& __get__numbers3() const;

constexpr void __set__numbers4(::System::Globalization::__TimeSpanParse__TimeSpanToken  value) ;

constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken& __get__numbers4() ;

constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken const& __get__numbers4() const;

constexpr void __set__literals0(::System::ReadOnlySpan_1<char16_t>  value) ;

constexpr ::System::ReadOnlySpan_1<char16_t>& __get__literals0() ;

constexpr ::System::ReadOnlySpan_1<char16_t> const& __get__literals0() const;

constexpr void __set__literals1(::System::ReadOnlySpan_1<char16_t>  value) ;

constexpr ::System::ReadOnlySpan_1<char16_t>& __get__literals1() ;

constexpr ::System::ReadOnlySpan_1<char16_t> const& __get__literals1() const;

constexpr void __set__literals2(::System::ReadOnlySpan_1<char16_t>  value) ;

constexpr ::System::ReadOnlySpan_1<char16_t>& __get__literals2() ;

constexpr ::System::ReadOnlySpan_1<char16_t> const& __get__literals2() const;

constexpr void __set__literals3(::System::ReadOnlySpan_1<char16_t>  value) ;

constexpr ::System::ReadOnlySpan_1<char16_t>& __get__literals3() ;

constexpr ::System::ReadOnlySpan_1<char16_t> const& __get__literals3() const;

constexpr void __set__literals4(::System::ReadOnlySpan_1<char16_t>  value) ;

constexpr ::System::ReadOnlySpan_1<char16_t>& __get__literals4() ;

constexpr ::System::ReadOnlySpan_1<char16_t> const& __get__literals4() const;

constexpr void __set__literals5(::System::ReadOnlySpan_1<char16_t>  value) ;

constexpr ::System::ReadOnlySpan_1<char16_t>& __get__literals5() ;

constexpr ::System::ReadOnlySpan_1<char16_t> const& __get__literals5() const;

/// @brief Method get_PositiveInvariant addr 0x255d618 size 0x68 virtual false final false
inline ::System::Globalization::__TimeSpanFormat__FormatLiterals get_PositiveInvariant() ;

/// @brief Method get_NegativeInvariant addr 0x255d680 size 0x6c virtual false final false
inline ::System::Globalization::__TimeSpanFormat__FormatLiterals get_NegativeInvariant() ;

/// @brief Method get_PositiveLocalized addr 0x255a09c size 0xb0 virtual false final false
inline ::System::Globalization::__TimeSpanFormat__FormatLiterals get_PositiveLocalized() ;

/// @brief Method get_NegativeLocalized addr 0x255a14c size 0xb4 virtual false final false
inline ::System::Globalization::__TimeSpanFormat__FormatLiterals get_NegativeLocalized() ;

/// @brief Method FullAppCompatMatch addr 0x255af14 size 0x678 virtual false final false
inline bool FullAppCompatMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals  pattern) ;

/// @brief Method PartialAppCompatMatch addr 0x255c024 size 0x544 virtual false final false
inline bool PartialAppCompatMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals  pattern) ;

/// @brief Method FullMatch addr 0x25598e8 size 0x7b4 virtual false final false
inline bool FullMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals  pattern) ;

/// @brief Method FullDMatch addr 0x255c980 size 0x2e4 virtual false final false
inline bool FullDMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals  pattern) ;

/// @brief Method FullHMMatch addr 0x255c568 size 0x418 virtual false final false
inline bool FullHMMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals  pattern) ;

/// @brief Method FullDHMMatch addr 0x255bad8 size 0x54c virtual false final false
inline bool FullDHMMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals  pattern) ;

/// @brief Method FullHMSMatch addr 0x255b58c size 0x54c virtual false final false
inline bool FullHMSMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals  pattern) ;

/// @brief Method FullDHMSMatch addr 0x255a894 size 0x680 virtual false final false
inline bool FullDHMSMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals  pattern) ;

/// @brief Method FullHMSFMatch addr 0x255a214 size 0x680 virtual false final false
inline bool FullHMSFMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals  pattern) ;

/// @brief Method Init addr 0x2557068 size 0x4c virtual false final false
inline void Init(::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method ProcessToken addr 0x25572f4 size 0x120 virtual false final false
inline bool ProcessToken(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanToken>  tok, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result) ;

/// @brief Method AddSep addr 0x255d6ec size 0x114 virtual false final false
inline bool AddSep(::System::ReadOnlySpan_1<char16_t>  sep, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result) ;

/// @brief Method AddNum addr 0x255d800 size 0x118 virtual false final false
inline bool AddNum(::System::Globalization::__TimeSpanParse__TimeSpanToken  num, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result) ;

// Ctor Parameters [CppParam { name: "_lastSeenTTT", ty: "::System::Globalization::__TimeSpanParse__TTT", modifiers: "", def_value: None }, CppParam { name: "_tokenCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_sepCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_numCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_posLoc", ty: "::System::Globalization::__TimeSpanFormat__FormatLiterals", modifiers: "", def_value: None }, CppParam { name: "_negLoc", ty: "::System::Globalization::__TimeSpanFormat__FormatLiterals", modifiers: "", def_value: None }, CppParam { name: "_posLocInit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_negLocInit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_fullPosPattern", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_fullNegPattern", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_numbers0", ty: "::System::Globalization::__TimeSpanParse__TimeSpanToken", modifiers: "", def_value: None }, CppParam { name: "_numbers1", ty: "::System::Globalization::__TimeSpanParse__TimeSpanToken", modifiers: "", def_value: None }, CppParam { name: "_numbers2", ty: "::System::Globalization::__TimeSpanParse__TimeSpanToken", modifiers: "", def_value: None }, CppParam { name: "_numbers3", ty: "::System::Globalization::__TimeSpanParse__TimeSpanToken", modifiers: "", def_value: None }, CppParam { name: "_numbers4", ty: "::System::Globalization::__TimeSpanParse__TimeSpanToken", modifiers: "", def_value: None }, CppParam { name: "_literals0", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_literals1", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_literals2", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_literals3", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_literals4", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_literals5", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }]
constexpr __TimeSpanParse__TimeSpanRawInfo(::System::Globalization::__TimeSpanParse__TTT  _lastSeenTTT, int32_t  _tokenCount, int32_t  _sepCount, int32_t  _numCount, ::System::Globalization::__TimeSpanFormat__FormatLiterals  _posLoc, ::System::Globalization::__TimeSpanFormat__FormatLiterals  _negLoc, bool  _posLocInit, bool  _negLocInit, ::StringW  _fullPosPattern, ::StringW  _fullNegPattern, ::System::Globalization::__TimeSpanParse__TimeSpanToken  _numbers0, ::System::Globalization::__TimeSpanParse__TimeSpanToken  _numbers1, ::System::Globalization::__TimeSpanParse__TimeSpanToken  _numbers2, ::System::Globalization::__TimeSpanParse__TimeSpanToken  _numbers3, ::System::Globalization::__TimeSpanParse__TimeSpanToken  _numbers4, ::System::ReadOnlySpan_1<char16_t>  _literals0, ::System::ReadOnlySpan_1<char16_t>  _literals1, ::System::ReadOnlySpan_1<char16_t>  _literals2, ::System::ReadOnlySpan_1<char16_t>  _literals3, ::System::ReadOnlySpan_1<char16_t>  _literals4, ::System::ReadOnlySpan_1<char16_t>  _literals5) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TimeSpanParse__TimeSpanRawInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x178>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TimeSpanParse__TimeSpanRawInfo()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, 0x178>, "Size mismatch!");

} // namespace end def System::Globalization
// Type: ::TimeSpanResult
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3690))
// CS Name: ::TimeSpanParse::TimeSpanResult
struct CORDL_TYPE __TimeSpanParse__TimeSpanResult : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field parsedTimeSpan offset 0x0
 __declspec(property(get=__get_parsedTimeSpan, put=__set_parsedTimeSpan)) ::System::TimeSpan  parsedTimeSpan;

/// @brief Field _throwOnFailure offset 0x8
 __declspec(property(get=__get__throwOnFailure, put=__set__throwOnFailure)) bool  _throwOnFailure;

constexpr void __set_parsedTimeSpan(::System::TimeSpan  value) ;

constexpr ::System::TimeSpan& __get_parsedTimeSpan() ;

constexpr ::System::TimeSpan const& __get_parsedTimeSpan() const;

constexpr void __set__throwOnFailure(bool  value) ;

constexpr bool& __get__throwOnFailure() ;

constexpr bool const& __get__throwOnFailure() const;

/// @brief Method .ctor addr 0x255d918 size 0x10 virtual false final false
inline void _ctor(bool  throwOnFailure) ;

/// @brief Method SetFailure addr 0x255d928 size 0x148 virtual false final false
inline bool SetFailure(::System::Globalization::__TimeSpanParse__ParseFailureKind  kind, ::StringW  resourceKey, ::System::Object*  messageArgument, ::StringW  argumentName) ;

// Ctor Parameters [CppParam { name: "parsedTimeSpan", ty: "::System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "_throwOnFailure", ty: "bool", modifiers: "", def_value: None }]
constexpr __TimeSpanParse__TimeSpanResult(::System::TimeSpan  parsedTimeSpan, bool  _throwOnFailure) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TimeSpanParse__TimeSpanResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TimeSpanParse__TimeSpanResult()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanParse__TimeSpanResult, 0x10>, "Size mismatch!");

} // namespace end def System::Globalization
// Type: ::StringParser
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3691))
// CS Name: ::TimeSpanParse::StringParser
struct CORDL_TYPE __TimeSpanParse__StringParser : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _str offset 0x0
 __declspec(property(get=__get__str, put=__set__str)) ::System::ReadOnlySpan_1<char16_t>  _str;

/// @brief Field _ch offset 0x10
 __declspec(property(get=__get__ch, put=__set__ch)) char16_t  _ch;

/// @brief Field _pos offset 0x14
 __declspec(property(get=__get__pos, put=__set__pos)) int32_t  _pos;

/// @brief Field _len offset 0x18
 __declspec(property(get=__get__len, put=__set__len)) int32_t  _len;

constexpr void __set__str(::System::ReadOnlySpan_1<char16_t>  value) ;

constexpr ::System::ReadOnlySpan_1<char16_t>& __get__str() ;

constexpr ::System::ReadOnlySpan_1<char16_t> const& __get__str() const;

constexpr void __set__ch(char16_t  value) ;

constexpr char16_t& __get__ch() ;

constexpr char16_t const& __get__ch() const;

constexpr void __set__pos(int32_t  value) ;

constexpr int32_t& __get__pos() ;

constexpr int32_t const& __get__pos() const;

constexpr void __set__len(int32_t  value) ;

constexpr int32_t& __get__len() ;

constexpr int32_t const& __get__len() const;

/// @brief Method NextChar addr 0x255da70 size 0x4c virtual false final false
inline void NextChar() ;

/// @brief Method NextNonDigit addr 0x255dabc size 0x5c virtual false final false
inline char16_t NextNonDigit() ;

/// @brief Method TryParse addr 0x255db18 size 0x1ec virtual false final false
inline bool TryParse(::System::ReadOnlySpan_1<char16_t>  input, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result) ;

/// @brief Method ParseInt addr 0x255def4 size 0x118 virtual false final false
inline bool ParseInt(int32_t  max, ByRef<int32_t>  i, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result) ;

/// @brief Method ParseTime addr 0x255dd34 size 0x1c0 virtual false final false
inline bool ParseTime(ByRef<int64_t>  time, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result) ;

/// @brief Method SkipBlanks addr 0x255dd04 size 0x30 virtual false final false
inline void SkipBlanks() ;

// Ctor Parameters [CppParam { name: "_str", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_ch", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_len", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __TimeSpanParse__StringParser(::System::ReadOnlySpan_1<char16_t>  _str, char16_t  _ch, int32_t  _pos, int32_t  _len) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TimeSpanParse__StringParser(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TimeSpanParse__StringParser()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanParse__StringParser, 0x20>, "Size mismatch!");

} // namespace end def System::Globalization
// Type: System.Globalization::TimeSpanParse
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3692))
// CS Name: ::System.Globalization::TimeSpanParse*
class CORDL_TYPE TimeSpanParse : public ::System::Object {
public:
// Declarations
using StringParser = ::System::Globalization::__TimeSpanParse__StringParser;

using TimeSpanResult = ::System::Globalization::__TimeSpanParse__TimeSpanResult;

using TimeSpanRawInfo = ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo;

using TimeSpanTokenizer = ::System::Globalization::__TimeSpanParse__TimeSpanTokenizer;

using TimeSpanToken = ::System::Globalization::__TimeSpanParse__TimeSpanToken;

using TTT = ::System::Globalization::__TimeSpanParse__TTT;

using TimeSpanStandardStyles = ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles;

using ParseFailureKind = ::System::Globalization::__TimeSpanParse__ParseFailureKind;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Pow10 addr 0x2556650 size 0x90 virtual false final false
static inline int64_t Pow10(int32_t  pow) ;

/// @brief Method TryTimeToTicks addr 0x2556a88 size 0x160 virtual false final false
static inline bool TryTimeToTicks(bool  positive, ::System::Globalization::__TimeSpanParse__TimeSpanToken  days, ::System::Globalization::__TimeSpanParse__TimeSpanToken  hours, ::System::Globalization::__TimeSpanParse__TimeSpanToken  minutes, ::System::Globalization::__TimeSpanParse__TimeSpanToken  seconds, ::System::Globalization::__TimeSpanParse__TimeSpanToken  fraction, ByRef<int64_t>  result) ;

/// @brief Method Parse addr 0x2556c44 size 0x58 virtual false final false
static inline ::System::TimeSpan Parse(::System::ReadOnlySpan_1<char16_t>  input, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method TryParseExact addr 0x2556e38 size 0x98 virtual false final false
static inline bool TryParseExact(::System::ReadOnlySpan_1<char16_t>  input, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  formatProvider, ::System::Globalization::TimeSpanStyles  styles, ByRef<::System::TimeSpan>  result) ;

/// @brief Method TryParseTimeSpan addr 0x2556c9c size 0x19c virtual false final false
static inline bool TryParseTimeSpan(::System::ReadOnlySpan_1<char16_t>  input, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles  style, ::System::IFormatProvider*  formatProvider, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result) ;

/// @brief Method ProcessTerminalState addr 0x2557414 size 0x138 virtual false final false
static inline bool ProcessTerminalState(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>  raw, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles  style, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result) ;

/// @brief Method ProcessTerminal_DHMSF addr 0x2559678 size 0x270 virtual false final false
static inline bool ProcessTerminal_DHMSF(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>  raw, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles  style, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result) ;

/// @brief Method ProcessTerminal_HMS_F_D addr 0x2558a9c size 0xbdc virtual false final false
static inline bool ProcessTerminal_HMS_F_D(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>  raw, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles  style, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result) ;

/// @brief Method ProcessTerminal_HM_S_D addr 0x2557c34 size 0xe68 virtual false final false
static inline bool ProcessTerminal_HM_S_D(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>  raw, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles  style, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result) ;

/// @brief Method ProcessTerminal_HM addr 0x25578dc size 0x358 virtual false final false
static inline bool ProcessTerminal_HM(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>  raw, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles  style, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result) ;

/// @brief Method ProcessTerminal_D addr 0x255754c size 0x390 virtual false final false
static inline bool ProcessTerminal_D(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>  raw, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles  style, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result) ;

/// @brief Method TryParseExactTimeSpan addr 0x2556ed0 size 0x18c virtual false final false
static inline bool TryParseExactTimeSpan(::System::ReadOnlySpan_1<char16_t>  input, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  formatProvider, ::System::Globalization::TimeSpanStyles  styles, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result) ;

/// @brief Method TryParseByFormat addr 0x255cc9c size 0x6fc virtual false final false
static inline bool TryParseByFormat(::System::ReadOnlySpan_1<char16_t>  input, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::TimeSpanStyles  styles, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result) ;

/// @brief Method ParseExactDigits addr 0x255d3a4 size 0x30 virtual false final false
static inline bool ParseExactDigits(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>  tokenizer, int32_t  minDigitLength, ByRef<int32_t>  result) ;

/// @brief Method ParseExactDigits addr 0x255d3d4 size 0xc4 virtual false final false
static inline bool ParseExactDigits(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>  tokenizer, int32_t  minDigitLength, int32_t  maxDigitLength, ByRef<int32_t>  zeroes, ByRef<int32_t>  result) ;

/// @brief Method ParseExactLiteral addr 0x255d498 size 0x8c virtual false final false
static inline bool ParseExactLiteral(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>  tokenizer, ::System::Text::StringBuilder*  enquotedString) ;

/// @brief Method TryParseTimeSpanConstant addr 0x255cc64 size 0x38 virtual false final false
static inline bool TryParseTimeSpanConstant(::System::ReadOnlySpan_1<char16_t>  input, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result) ;

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanParse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSpanParse(TimeSpanParse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanParse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSpanParse(TimeSpanParse const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimeSpanParse()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::TimeSpanParse, 0x10>, "Size mismatch!");

} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanParse__ParseFailureKind, "System.Globalization", "TimeSpanParse/ParseFailureKind");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanParse__TTT, "System.Globalization", "TimeSpanParse/TTT");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles, "System.Globalization", "TimeSpanParse/TimeSpanStandardStyles");
NEED_NO_BOX(::System::Globalization::TimeSpanParse);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse*, "System.Globalization", "TimeSpanParse");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanParse__StringParser, "System.Globalization", "TimeSpanParse/StringParser");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, "System.Globalization", "TimeSpanParse/TimeSpanRawInfo");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanParse__TimeSpanResult, "System.Globalization", "TimeSpanParse/TimeSpanResult");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanParse__TimeSpanToken, "System.Globalization", "TimeSpanParse/TimeSpanToken");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanParse__TimeSpanTokenizer, "System.Globalization", "TimeSpanParse/TimeSpanTokenizer");
