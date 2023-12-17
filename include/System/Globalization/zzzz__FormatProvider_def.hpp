#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FormatProvider)
namespace System::Text {
struct ValueStringBuilder;
}
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Globalization {
class __FormatProvider__Number;
}
namespace GlobalNamespace {
struct __FormatProvider__Number__NumberBuffer;
}
// Forward declare root types
namespace System::Globalization {
class FormatProvider;
}
namespace System::Globalization {
class __FormatProvider__Number;
}
namespace GlobalNamespace {
struct __FormatProvider__Number__NumberBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::FormatProvider);
MARK_REF_PTR_T(::System::Globalization::__FormatProvider__Number);
MARK_VAL_T(::GlobalNamespace::__FormatProvider__Number__NumberBuffer);
// Type: ::NumberBuffer
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15652))
// CS Name: ::FormatProvider::Number::NumberBuffer
struct CORDL_TYPE __FormatProvider__Number__NumberBuffer : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field precision offset 0x0
 __declspec(property(get=__get_precision, put=__set_precision)) int32_t  precision;

/// @brief Field scale offset 0x4
 __declspec(property(get=__get_scale, put=__set_scale)) int32_t  scale;

/// @brief Field sign offset 0x8
 __declspec(property(get=__get_sign, put=__set_sign)) bool  sign;

/// @brief Field overrideDigits offset 0x10
 __declspec(property(get=__get_overrideDigits, put=__set_overrideDigits)) ::cordl_internals::Ptr<char16_t>  overrideDigits;

 __declspec(property(get=get_digits)) ::cordl_internals::Ptr<char16_t>  digits;

constexpr void __set_precision(int32_t  value) ;

constexpr int32_t& __get_precision() ;

constexpr int32_t const& __get_precision() const;

constexpr void __set_scale(int32_t  value) ;

constexpr int32_t& __get_scale() ;

constexpr int32_t const& __get_scale() const;

constexpr void __set_sign(bool  value) ;

constexpr bool& __get_sign() ;

constexpr bool const& __get_sign() const;

constexpr void __set_overrideDigits(::cordl_internals::Ptr<char16_t>  value) ;

constexpr ::cordl_internals::Ptr<char16_t>& __get_overrideDigits() ;

constexpr ::cordl_internals::Ptr<char16_t> const& __get_overrideDigits() const;

/// @brief Method get_digits addr 0x284bf10 size 0x8 virtual false final false
inline ::cordl_internals::Ptr<char16_t> get_digits() ;

// Ctor Parameters [CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sign", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "overrideDigits", ty: "::cordl_internals::Ptr<char16_t>", modifiers: "", def_value: None }]
constexpr __FormatProvider__Number__NumberBuffer(int32_t  precision, int32_t  scale, bool  sign, ::cordl_internals::Ptr<char16_t>  overrideDigits) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FormatProvider__Number__NumberBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FormatProvider__Number__NumberBuffer()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FormatProvider__Number__NumberBuffer, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Number
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15653))
// CS Name: ::FormatProvider::Number*
class CORDL_TYPE __FormatProvider__Number : public ::System::Object {
public:
// Declarations
using NumberBuffer = ::GlobalNamespace::__FormatProvider__Number__NumberBuffer;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_posCurrencyFormats(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_s_posCurrencyFormats() ;

static inline void setStaticF_s_negCurrencyFormats(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_s_negCurrencyFormats() ;

static inline void setStaticF_s_posPercentFormats(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_s_posPercentFormats() ;

static inline void setStaticF_s_negPercentFormats(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_s_negPercentFormats() ;

static inline void setStaticF_s_negNumberFormats(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_s_negNumberFormats() ;

static inline void setStaticF_s_posNumberFormat(::StringW  value) ;

static inline ::StringW getStaticF_s_posNumberFormat() ;

/// @brief Method Int32ToDecChars addr 0x2849a74 size 0x5c virtual false final false
static inline void Int32ToDecChars(::cordl_internals::Ptr<char16_t>  buffer, ByRef<int32_t>  index, uint32_t  value, int32_t  digits) ;

/// @brief Method ParseFormatSpecifier addr 0x284836c size 0x140 virtual false final false
static inline char16_t ParseFormatSpecifier(::System::ReadOnlySpan_1<char16_t>  format, ByRef<int32_t>  digits) ;

/// @brief Method NumberToString addr 0x28484ac size 0x548 virtual false final false
static inline void NumberToString(ByRef<::System::Text::ValueStringBuilder>  sb, ByRef<::GlobalNamespace::__FormatProvider__Number__NumberBuffer>  number, char16_t  format, int32_t  nMaxDigits, ::System::Globalization::NumberFormatInfo*  info, bool  isDecimal) ;

/// @brief Method FormatCurrency addr 0x2849ba4 size 0x260 virtual false final false
static inline void FormatCurrency(ByRef<::System::Text::ValueStringBuilder>  sb, ByRef<::GlobalNamespace::__FormatProvider__Number__NumberBuffer>  number, int32_t  nMinDigits, int32_t  nMaxDigits, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method wcslen addr 0x284adc0 size 0x20 virtual false final false
static inline int32_t wcslen(::cordl_internals::Ptr<char16_t>  s) ;

/// @brief Method FormatFixed addr 0x2849e04 size 0x53c virtual false final false
static inline void FormatFixed(ByRef<::System::Text::ValueStringBuilder>  sb, ByRef<::GlobalNamespace::__FormatProvider__Number__NumberBuffer>  number, int32_t  nMinDigits, int32_t  nMaxDigits, ::System::Globalization::NumberFormatInfo*  info, ::ArrayW<int32_t,::Array<int32_t>*>  groupDigits, ::StringW  sDecimal, ::StringW  sGroup) ;

/// @brief Method FormatNumber addr 0x284a340 size 0x248 virtual false final false
static inline void FormatNumber(ByRef<::System::Text::ValueStringBuilder>  sb, ByRef<::GlobalNamespace::__FormatProvider__Number__NumberBuffer>  number, int32_t  nMinDigits, int32_t  nMaxDigits, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method FormatScientific addr 0x284a588 size 0x23c virtual false final false
static inline void FormatScientific(ByRef<::System::Text::ValueStringBuilder>  sb, ByRef<::GlobalNamespace::__FormatProvider__Number__NumberBuffer>  number, int32_t  nMinDigits, int32_t  nMaxDigits, ::System::Globalization::NumberFormatInfo*  info, char16_t  expChar) ;

/// @brief Method FormatExponent addr 0x284af9c size 0x2f0 virtual false final false
static inline void FormatExponent(ByRef<::System::Text::ValueStringBuilder>  sb, ::System::Globalization::NumberFormatInfo*  info, int32_t  value, char16_t  expChar, int32_t  minDigits, bool  positiveSign) ;

/// @brief Method FormatGeneral addr 0x284a7c4 size 0x39c virtual false final false
static inline void FormatGeneral(ByRef<::System::Text::ValueStringBuilder>  sb, ByRef<::GlobalNamespace::__FormatProvider__Number__NumberBuffer>  number, int32_t  nMinDigits, int32_t  nMaxDigits, ::System::Globalization::NumberFormatInfo*  info, char16_t  expChar, bool  bSuppressScientific) ;

/// @brief Method FormatPercent addr 0x284ab60 size 0x260 virtual false final false
static inline void FormatPercent(ByRef<::System::Text::ValueStringBuilder>  sb, ByRef<::GlobalNamespace::__FormatProvider__Number__NumberBuffer>  number, int32_t  nMinDigits, int32_t  nMaxDigits, ::System::Globalization::NumberFormatInfo*  info) ;

/// @brief Method RoundNumber addr 0x2849ad0 size 0xd4 virtual false final false
static inline void RoundNumber(ByRef<::GlobalNamespace::__FormatProvider__Number__NumberBuffer>  number, int32_t  pos) ;

/// @brief Method FindSection addr 0x284b28c size 0x134 virtual false final false
static inline int32_t FindSection(::System::ReadOnlySpan_1<char16_t>  format, int32_t  section) ;

/// @brief Method NumberToStringFormat addr 0x28489f4 size 0x1080 virtual false final false
static inline void NumberToStringFormat(ByRef<::System::Text::ValueStringBuilder>  sb, ByRef<::GlobalNamespace::__FormatProvider__Number__NumberBuffer>  number, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::NumberFormatInfo*  info) ;

// Ctor Parameters [CppParam { name: "", ty: "__FormatProvider__Number", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FormatProvider__Number(__FormatProvider__Number && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FormatProvider__Number", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FormatProvider__Number(__FormatProvider__Number const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FormatProvider__Number()  = default;
public:


// Fields

// Static field s_posCurrencyFormats

// Static field s_negCurrencyFormats

// Static field s_posPercentFormats

// Static field s_negPercentFormats

// Static field s_negNumberFormats

// Static field s_posNumberFormat


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__FormatProvider__Number, 0x10>, "Size mismatch!");

} // namespace end def System::Globalization
// Type: System.Globalization::FormatProvider
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15654))
// CS Name: ::System.Globalization::FormatProvider*
class CORDL_TYPE FormatProvider : public ::System::Object {
public:
// Declarations
using Number = ::System::Globalization::__FormatProvider__Number;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method FormatBigInteger addr 0x2848224 size 0x140 virtual false final false
static inline void FormatBigInteger(ByRef<::System::Text::ValueStringBuilder>  sb, int32_t  precision, int32_t  scale, bool  sign, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::NumberFormatInfo*  numberFormatInfo, ::ArrayW<char16_t,::Array<char16_t>*>  digits, int32_t  startIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "FormatProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FormatProvider(FormatProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormatProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormatProvider(FormatProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FormatProvider()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::FormatProvider, 0x10>, "Size mismatch!");

} // namespace end def System::Globalization
NEED_NO_BOX(::System::Globalization::FormatProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::FormatProvider*, "System.Globalization", "FormatProvider");
NEED_NO_BOX(::System::Globalization::__FormatProvider__Number);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__FormatProvider__Number*, "System.Globalization", "FormatProvider/Number");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FormatProvider__Number__NumberBuffer, "System.Globalization", "FormatProvider/Number/NumberBuffer");
