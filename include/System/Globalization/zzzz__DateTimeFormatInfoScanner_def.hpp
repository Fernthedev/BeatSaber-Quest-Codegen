#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeFormatInfoScanner)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Globalization {
struct __DateTimeFormatInfoScanner__FoundDatePattern;
}
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Globalization {
struct FORMATFLAGS;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace System::Globalization {
struct __DateTimeFormatInfoScanner__FoundDatePattern;
}
namespace System::Globalization {
class DateTimeFormatInfoScanner;
}
// Write type traits
MARK_VAL_T(::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern);
MARK_REF_PTR_T(::System::Globalization::DateTimeFormatInfoScanner);
// Type: ::FoundDatePattern
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3668))
// CS Name: ::DateTimeFormatInfoScanner::FoundDatePattern
struct CORDL_TYPE __DateTimeFormatInfoScanner__FoundDatePattern : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____DateTimeFormatInfoScanner__FoundDatePattern_Unwrapped
enum struct ____DateTimeFormatInfoScanner__FoundDatePattern_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_FoundYearPatternFlag = static_cast<int32_t>(0x1),
__E_FoundMonthPatternFlag = static_cast<int32_t>(0x2),
__E_FoundDayPatternFlag = static_cast<int32_t>(0x4),
__E_FoundYMDPatternFlag = static_cast<int32_t>(0x7),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern const None;

/// @brief Field FoundYearPatternFlag value: static_cast<int32_t>(0x1)
static ::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern const FoundYearPatternFlag;

/// @brief Field FoundMonthPatternFlag value: static_cast<int32_t>(0x2)
static ::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern const FoundMonthPatternFlag;

/// @brief Field FoundDayPatternFlag value: static_cast<int32_t>(0x4)
static ::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern const FoundDayPatternFlag;

/// @brief Field FoundYMDPatternFlag value: static_cast<int32_t>(0x7)
static ::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern const FoundYMDPatternFlag;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____DateTimeFormatInfoScanner__FoundDatePattern_Unwrapped () const noexcept {
return std::bit_cast<____DateTimeFormatInfoScanner__FoundDatePattern_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __DateTimeFormatInfoScanner__FoundDatePattern(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __DateTimeFormatInfoScanner__FoundDatePattern(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __DateTimeFormatInfoScanner__FoundDatePattern()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern, 0x4>, "Size mismatch!");

} // namespace end def System::Globalization
// Type: System.Globalization::DateTimeFormatInfoScanner
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3669))
// CS Name: ::System.Globalization::DateTimeFormatInfoScanner*
class CORDL_TYPE DateTimeFormatInfoScanner : public ::System::Object {
public:
// Declarations
using FoundDatePattern = ::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_dateWords offset 0x10
 __declspec(property(get=__get_m_dateWords, put=__set_m_dateWords)) ::System::Collections::Generic::List_1<::StringW>*  m_dateWords;

/// @brief Field _ymdFlags offset 0x18
 __declspec(property(get=__get__ymdFlags, put=__set__ymdFlags)) ::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern  _ymdFlags;

constexpr void __set_m_dateWords(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get_m_dateWords() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get_m_dateWords() const;

static inline void setStaticF_s_knownWords(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_s_knownWords() ;

constexpr void __set__ymdFlags(::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern  value) ;

constexpr ::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern& __get__ymdFlags() ;

constexpr ::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern const& __get__ymdFlags() const;

/// @brief Method get_KnownWords addr 0x2553a64 size 0x400 virtual false final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_KnownWords() ;

/// @brief Method SkipWhiteSpacesAndNonLetter addr 0x2553e64 size 0xfc virtual false final false
static inline int32_t SkipWhiteSpacesAndNonLetter(::StringW  pattern, int32_t  currentIndex) ;

/// @brief Method AddDateWordOrPostfix addr 0x2553f60 size 0x2b0 virtual false final false
inline void AddDateWordOrPostfix(::StringW  formatPostfix, ::StringW  str) ;

/// @brief Method AddDateWords addr 0x255435c size 0x1d8 virtual false final false
inline int32_t AddDateWords(::StringW  pattern, int32_t  index, ::StringW  formatPostfix) ;

/// @brief Method ScanRepeatChar addr 0x2554534 size 0x84 virtual false final false
static inline int32_t ScanRepeatChar(::StringW  pattern, char16_t  ch, int32_t  index, ByRef<int32_t>  count) ;

/// @brief Method AddIgnorableSymbols addr 0x2554210 size 0x14c virtual false final false
inline void AddIgnorableSymbols(::StringW  text) ;

/// @brief Method ScanDateWord addr 0x25545b8 size 0x23c virtual false final false
inline void ScanDateWord(::StringW  pattern) ;

/// @brief Method GetDateWordsOfDTFI addr 0x2552860 size 0x2c0 virtual false final false
inline ::ArrayW<::StringW,::Array<::StringW>*> GetDateWordsOfDTFI(::System::Globalization::DateTimeFormatInfo*  dtfi) ;

/// @brief Method GetFormatFlagGenitiveMonth addr 0x2550c94 size 0x40 virtual false final false
static inline ::System::Globalization::FORMATFLAGS GetFormatFlagGenitiveMonth(::ArrayW<::StringW,::Array<::StringW>*>  monthNames, ::ArrayW<::StringW,::Array<::StringW>*>  genitveMonthNames, ::ArrayW<::StringW,::Array<::StringW>*>  abbrevMonthNames, ::ArrayW<::StringW,::Array<::StringW>*>  genetiveAbbrevMonthNames) ;

/// @brief Method GetFormatFlagUseSpaceInMonthNames addr 0x2550cd4 size 0xa4 virtual false final false
static inline ::System::Globalization::FORMATFLAGS GetFormatFlagUseSpaceInMonthNames(::ArrayW<::StringW,::Array<::StringW>*>  monthNames, ::ArrayW<::StringW,::Array<::StringW>*>  genitveMonthNames, ::ArrayW<::StringW,::Array<::StringW>*>  abbrevMonthNames, ::ArrayW<::StringW,::Array<::StringW>*>  genetiveAbbrevMonthNames) ;

/// @brief Method GetFormatFlagUseSpaceInDayNames addr 0x2550d78 size 0x30 virtual false final false
static inline ::System::Globalization::FORMATFLAGS GetFormatFlagUseSpaceInDayNames(::ArrayW<::StringW,::Array<::StringW>*>  dayNames, ::ArrayW<::StringW,::Array<::StringW>*>  abbrevDayNames) ;

/// @brief Method GetFormatFlagUseHebrewCalendar addr 0x2550da8 size 0x10 virtual false final false
static inline ::System::Globalization::FORMATFLAGS GetFormatFlagUseHebrewCalendar(int32_t  calID) ;

/// @brief Method EqualStringArrays addr 0x25547f4 size 0xa8 virtual false final false
static inline bool EqualStringArrays(::ArrayW<::StringW,::Array<::StringW>*>  array1, ::ArrayW<::StringW,::Array<::StringW>*>  array2) ;

/// @brief Method ArrayElementsHaveSpace addr 0x2554af8 size 0xf4 virtual false final false
static inline bool ArrayElementsHaveSpace(::ArrayW<::StringW,::Array<::StringW>*>  array) ;

/// @brief Method ArrayElementsBeginWithDigit addr 0x255489c size 0x25c virtual false final false
static inline bool ArrayElementsBeginWithDigit(::ArrayW<::StringW,::Array<::StringW>*>  array) ;

static inline ::System::Globalization::DateTimeFormatInfoScanner* New_ctor() ;

/// @brief Method .ctor addr 0x25527e4 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeFormatInfoScanner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DateTimeFormatInfoScanner(DateTimeFormatInfoScanner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeFormatInfoScanner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DateTimeFormatInfoScanner(DateTimeFormatInfoScanner const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DateTimeFormatInfoScanner()  = default;
public:


// Fields

// Static field s_knownWords


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::DateTimeFormatInfoScanner, 0x20>, "Size mismatch!");

} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__DateTimeFormatInfoScanner__FoundDatePattern, "System.Globalization", "DateTimeFormatInfoScanner/FoundDatePattern");
NEED_NO_BOX(::System::Globalization::DateTimeFormatInfoScanner);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::DateTimeFormatInfoScanner*, "System.Globalization", "DateTimeFormatInfoScanner");
