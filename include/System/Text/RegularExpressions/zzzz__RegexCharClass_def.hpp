#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegexCharClass)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Globalization {
struct UnicodeCategory;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Text::RegularExpressions {
class __RegexCharClass__SingleRangeComparer;
}
namespace System::Text::RegularExpressions {
struct __RegexCharClass__LowerCaseMapping;
}
namespace System::Text::RegularExpressions {
struct __RegexCharClass__SingleRange;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexCharClass;
}
namespace System::Text::RegularExpressions {
class __RegexCharClass__SingleRangeComparer;
}
namespace System::Text::RegularExpressions {
struct __RegexCharClass__LowerCaseMapping;
}
namespace System::Text::RegularExpressions {
struct __RegexCharClass__SingleRange;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexCharClass);
MARK_REF_PTR_T(::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer);
MARK_VAL_T(::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping);
MARK_VAL_T(::System::Text::RegularExpressions::__RegexCharClass__SingleRange);
// Type: ::LowerCaseMapping
namespace System::Text::RegularExpressions {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8915))
// CS Name: ::RegexCharClass::LowerCaseMapping
struct CORDL_TYPE __RegexCharClass__LowerCaseMapping : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field ChMin offset 0x0
 __declspec(property(get=__get_ChMin, put=__set_ChMin)) char16_t  ChMin;

/// @brief Field ChMax offset 0x2
 __declspec(property(get=__get_ChMax, put=__set_ChMax)) char16_t  ChMax;

/// @brief Field LcOp offset 0x4
 __declspec(property(get=__get_LcOp, put=__set_LcOp)) int32_t  LcOp;

/// @brief Field Data offset 0x8
 __declspec(property(get=__get_Data, put=__set_Data)) int32_t  Data;

constexpr void __set_ChMin(char16_t  value) ;

constexpr char16_t& __get_ChMin() ;

constexpr char16_t const& __get_ChMin() const;

constexpr void __set_ChMax(char16_t  value) ;

constexpr char16_t& __get_ChMax() ;

constexpr char16_t const& __get_ChMax() const;

constexpr void __set_LcOp(int32_t  value) ;

constexpr int32_t& __get_LcOp() ;

constexpr int32_t const& __get_LcOp() const;

constexpr void __set_Data(int32_t  value) ;

constexpr int32_t& __get_Data() ;

constexpr int32_t const& __get_Data() const;

/// @brief Method .ctor addr 0x295ebc0 size 0x10 virtual false final false
inline void _ctor(char16_t  chMin, char16_t  chMax, int32_t  lcOp, int32_t  data) ;

// Ctor Parameters [CppParam { name: "ChMin", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "ChMax", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "LcOp", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Data", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __RegexCharClass__LowerCaseMapping(char16_t  ChMin, char16_t  ChMax, int32_t  LcOp, int32_t  Data) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __RegexCharClass__LowerCaseMapping(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __RegexCharClass__LowerCaseMapping()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping, 0xc>, "Size mismatch!");

} // namespace end def System::Text::RegularExpressions
// Type: ::SingleRangeComparer
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8916))
// CS Name: ::RegexCharClass::SingleRangeComparer*
class CORDL_TYPE __RegexCharClass__SingleRangeComparer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>*() noexcept;

static inline void setStaticF_Instance(::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer*  value) ;

static inline ::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer* getStaticF_Instance() ;

static inline ::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer* New_ctor() ;

/// @brief Method .ctor addr 0x295ebd0 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method Compare addr 0x295ebd8 size 0x20 virtual true final true
inline int32_t Compare(::System::Text::RegularExpressions::__RegexCharClass__SingleRange  x, ::System::Text::RegularExpressions::__RegexCharClass__SingleRange  y) ;

// Ctor Parameters [CppParam { name: "", ty: "__RegexCharClass__SingleRangeComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RegexCharClass__SingleRangeComparer(__RegexCharClass__SingleRangeComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RegexCharClass__SingleRangeComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RegexCharClass__SingleRangeComparer(__RegexCharClass__SingleRangeComparer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RegexCharClass__SingleRangeComparer()  = default;
public:


// Fields

// Static field Instance


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer, 0x10>, "Size mismatch!");

} // namespace end def System::Text::RegularExpressions
// Type: ::SingleRange
namespace System::Text::RegularExpressions {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8917))
// CS Name: ::RegexCharClass::SingleRange
struct CORDL_TYPE __RegexCharClass__SingleRange : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field First offset 0x0
 __declspec(property(get=__get_First, put=__set_First)) char16_t  First;

/// @brief Field Last offset 0x2
 __declspec(property(get=__get_Last, put=__set_Last)) char16_t  Last;

constexpr void __set_First(char16_t  value) ;

constexpr char16_t& __get_First() ;

constexpr char16_t const& __get_First() const;

constexpr void __set_Last(char16_t  value) ;

constexpr char16_t& __get_Last() ;

constexpr char16_t const& __get_Last() const;

/// @brief Method .ctor addr 0x295ec5c size 0xc virtual false final false
inline void _ctor(char16_t  first, char16_t  last) ;

// Ctor Parameters [CppParam { name: "First", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "Last", ty: "char16_t", modifiers: "", def_value: None }]
constexpr __RegexCharClass__SingleRange(char16_t  First, char16_t  Last) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __RegexCharClass__SingleRange(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __RegexCharClass__SingleRange()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::__RegexCharClass__SingleRange, 0x4>, "Size mismatch!");

} // namespace end def System::Text::RegularExpressions
// Type: System.Text.RegularExpressions::RegexCharClass
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8918))
// CS Name: ::System.Text.RegularExpressions::RegexCharClass*
class CORDL_TYPE RegexCharClass : public ::System::Object {
public:
// Declarations
using SingleRange = ::System::Text::RegularExpressions::__RegexCharClass__SingleRange;

using SingleRangeComparer = ::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer;

using LowerCaseMapping = ::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _rangelist offset 0x10
 __declspec(property(get=__get__rangelist, put=__set__rangelist)) ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>*  _rangelist;

/// @brief Field _categories offset 0x18
 __declspec(property(get=__get__categories, put=__set__categories)) ::System::Text::StringBuilder*  _categories;

/// @brief Field _canonical offset 0x20
 __declspec(property(get=__get__canonical, put=__set__canonical)) bool  _canonical;

/// @brief Field _negate offset 0x21
 __declspec(property(get=__get__negate, put=__set__negate)) bool  _negate;

/// @brief Field _subtractor offset 0x28
 __declspec(property(get=__get__subtractor, put=__set__subtractor)) ::System::Text::RegularExpressions::RegexCharClass*  _subtractor;

 __declspec(property(get=get_CanMerge)) bool  CanMerge;

 __declspec(property(put=set_Negate)) bool  Negate;

static inline void setStaticF_s_internalRegexIgnoreCase(::StringW  value) ;

static inline ::StringW getStaticF_s_internalRegexIgnoreCase() ;

static inline void setStaticF_s_space(::StringW  value) ;

static inline ::StringW getStaticF_s_space() ;

static inline void setStaticF_s_notSpace(::StringW  value) ;

static inline ::StringW getStaticF_s_notSpace() ;

static inline void setStaticF_s_word(::StringW  value) ;

static inline ::StringW getStaticF_s_word() ;

static inline void setStaticF_s_notWord(::StringW  value) ;

static inline ::StringW getStaticF_s_notWord() ;

static inline void setStaticF_SpaceClass(::StringW  value) ;

static inline ::StringW getStaticF_SpaceClass() ;

static inline void setStaticF_NotSpaceClass(::StringW  value) ;

static inline ::StringW getStaticF_NotSpaceClass() ;

static inline void setStaticF_WordClass(::StringW  value) ;

static inline ::StringW getStaticF_WordClass() ;

static inline void setStaticF_NotWordClass(::StringW  value) ;

static inline ::StringW getStaticF_NotWordClass() ;

static inline void setStaticF_DigitClass(::StringW  value) ;

static inline ::StringW getStaticF_DigitClass() ;

static inline void setStaticF_NotDigitClass(::StringW  value) ;

static inline ::StringW getStaticF_NotDigitClass() ;

static inline void setStaticF_s_definedCategories(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_s_definedCategories() ;

static inline void setStaticF_s_propTable(::ArrayW<::ArrayW<::StringW,::Array<::StringW>*>,::Array<::ArrayW<::StringW,::Array<::StringW>*>>*>  value) ;

static inline ::ArrayW<::ArrayW<::StringW,::Array<::StringW>*>,::Array<::ArrayW<::StringW,::Array<::StringW>*>>*> getStaticF_s_propTable() ;

static inline void setStaticF_s_lcTable(::ArrayW<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping,::Array<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping>*>  value) ;

static inline ::ArrayW<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping,::Array<::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping>*> getStaticF_s_lcTable() ;

constexpr void __set__rangelist(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>*  value) ;

constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>* __get__rangelist() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>*> __get__rangelist() const;

constexpr void __set__categories(::System::Text::StringBuilder*  value) ;

constexpr ::System::Text::StringBuilder* __get__categories() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> __get__categories() const;

constexpr void __set__canonical(bool  value) ;

constexpr bool& __get__canonical() ;

constexpr bool const& __get__canonical() const;

constexpr void __set__negate(bool  value) ;

constexpr bool& __get__negate() ;

constexpr bool const& __get__negate() const;

constexpr void __set__subtractor(::System::Text::RegularExpressions::RegexCharClass*  value) ;

constexpr ::System::Text::RegularExpressions::RegexCharClass* __get__subtractor() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexCharClass*> __get__subtractor() const;

static inline ::System::Text::RegularExpressions::RegexCharClass* New_ctor() ;

/// @brief Method .ctor addr 0x2954714 size 0xbc virtual false final false
inline void _ctor() ;

static inline ::System::Text::RegularExpressions::RegexCharClass* New_ctor(bool  negate, ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>*  ranges, ::System::Text::StringBuilder*  categories, ::System::Text::RegularExpressions::RegexCharClass*  subtraction) ;

/// @brief Method .ctor addr 0x29547d0 size 0x4c virtual false final false
inline void _ctor(bool  negate, ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::__RegexCharClass__SingleRange>*  ranges, ::System::Text::StringBuilder*  categories, ::System::Text::RegularExpressions::RegexCharClass*  subtraction) ;

/// @brief Method get_CanMerge addr 0x295481c size 0x20 virtual false final false
inline bool get_CanMerge() ;

/// @brief Method set_Negate addr 0x295483c size 0xc virtual false final false
inline void set_Negate(bool  value) ;

/// @brief Method AddChar addr 0x2954848 size 0x8 virtual false final false
inline void AddChar(char16_t  c) ;

/// @brief Method AddCharClass addr 0x2954970 size 0x174 virtual false final false
inline void AddCharClass(::System::Text::RegularExpressions::RegexCharClass*  cc) ;

/// @brief Method AddSet addr 0x2954b8c size 0x22c virtual false final false
inline void AddSet(::StringW  set) ;

/// @brief Method AddSubtraction addr 0x2954db8 size 0x8 virtual false final false
inline void AddSubtraction(::System::Text::RegularExpressions::RegexCharClass*  sub) ;

/// @brief Method AddRange addr 0x2954850 size 0x120 virtual false final false
inline void AddRange(char16_t  first, char16_t  last) ;

/// @brief Method AddCategoryFromName addr 0x2954dc0 size 0x210 virtual false final false
inline void AddCategoryFromName(::StringW  categoryName, bool  invert, bool  caseInsensitive, ::StringW  pattern) ;

/// @brief Method AddCategory addr 0x29552bc size 0x1c virtual false final false
inline void AddCategory(::StringW  category) ;

/// @brief Method AddLowercase addr 0x29552d8 size 0x13c virtual false final false
inline void AddLowercase(::System::Globalization::CultureInfo*  culture) ;

/// @brief Method AddLowercaseRange addr 0x2955414 size 0x230 virtual false final false
inline void AddLowercaseRange(char16_t  chMin, char16_t  chMax, ::System::Globalization::CultureInfo*  culture) ;

/// @brief Method AddWord addr 0x2955644 size 0xf4 virtual false final false
inline void AddWord(bool  ecma, bool  negate) ;

/// @brief Method AddSpace addr 0x2955738 size 0xf4 virtual false final false
inline void AddSpace(bool  ecma, bool  negate) ;

/// @brief Method AddDigit addr 0x295582c size 0xb4 virtual false final false
inline void AddDigit(bool  ecma, bool  negate, ::StringW  pattern) ;

/// @brief Method SingletonChar addr 0x29558e0 size 0x18 virtual false final false
static inline char16_t SingletonChar(::StringW  set) ;

/// @brief Method IsMergeable addr 0x29558f8 size 0x9c virtual false final false
static inline bool IsMergeable(::StringW  charClass) ;

/// @brief Method IsEmpty addr 0x2955a14 size 0xc0 virtual false final false
static inline bool IsEmpty(::StringW  charClass) ;

/// @brief Method IsSingleton addr 0x2955ad4 size 0x10c virtual false final false
static inline bool IsSingleton(::StringW  set) ;

/// @brief Method IsSingletonInverse addr 0x2955be0 size 0x110 virtual false final false
static inline bool IsSingletonInverse(::StringW  set) ;

/// @brief Method IsSubtraction addr 0x29559bc size 0x58 virtual false final false
static inline bool IsSubtraction(::StringW  charClass) ;

/// @brief Method IsNegated addr 0x2955994 size 0x28 virtual false final false
static inline bool IsNegated(::StringW  set) ;

/// @brief Method IsECMAWordChar addr 0x2955cf0 size 0x6c virtual false final false
static inline bool IsECMAWordChar(char16_t  ch) ;

/// @brief Method IsWordChar addr 0x2955dc4 size 0x80 virtual false final false
static inline bool IsWordChar(char16_t  ch) ;

/// @brief Method CharInClass addr 0x2955d5c size 0x68 virtual false final false
static inline bool CharInClass(char16_t  ch, ::StringW  set) ;

/// @brief Method CharInClassRecursive addr 0x2955e44 size 0x128 virtual false final false
static inline bool CharInClassRecursive(char16_t  ch, ::StringW  set, int32_t  start) ;

/// @brief Method CharInClassInternal addr 0x2955f6c size 0x110 virtual false final false
static inline bool CharInClassInternal(char16_t  ch, ::StringW  set, int32_t  start, int32_t  mySetLength, int32_t  myCategoryLength) ;

/// @brief Method CharInCategory addr 0x295607c size 0x188 virtual false final false
static inline bool CharInCategory(char16_t  ch, ::StringW  set, int32_t  start, int32_t  mySetLength, int32_t  myCategoryLength) ;

/// @brief Method CharInCategoryGroup addr 0x2956204 size 0xd0 virtual false final false
static inline bool CharInCategoryGroup(char16_t  ch, ::System::Globalization::UnicodeCategory  chcategory, ::StringW  category, ByRef<int32_t>  i) ;

/// @brief Method NegateCategory addr 0x2954fd0 size 0x88 virtual false final false
static inline ::StringW NegateCategory(::StringW  category) ;

/// @brief Method Parse addr 0x29562d4 size 0x58 virtual false final false
static inline ::System::Text::RegularExpressions::RegexCharClass* Parse(::StringW  charClass) ;

/// @brief Method ParseRecursive addr 0x295632c size 0x288 virtual false final false
static inline ::System::Text::RegularExpressions::RegexCharClass* ParseRecursive(::StringW  charClass, int32_t  start) ;

/// @brief Method RangeCount addr 0x2954ae4 size 0x48 virtual false final false
inline int32_t RangeCount() ;

/// @brief Method ToStringClass addr 0x29565b4 size 0x19c virtual false final false
inline ::StringW ToStringClass() ;

/// @brief Method GetRangeAt addr 0x2954b2c size 0x60 virtual false final false
inline ::System::Text::RegularExpressions::__RegexCharClass__SingleRange GetRangeAt(int32_t  i) ;

/// @brief Method Canonicalize addr 0x2956750 size 0x23c virtual false final false
inline void Canonicalize() ;

/// @brief Method SetFromProperty addr 0x2955058 size 0x264 virtual false final false
static inline ::StringW SetFromProperty(::StringW  capname, bool  invert, ::StringW  pattern) ;

// Ctor Parameters [CppParam { name: "", ty: "RegexCharClass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RegexCharClass(RegexCharClass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegexCharClass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegexCharClass(RegexCharClass const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RegexCharClass()  = default;
public:


// Fields

// Static field s_internalRegexIgnoreCase

// Static field s_space

// Static field s_notSpace

// Static field s_word

// Static field s_notWord

// Static field SpaceClass

// Static field NotSpaceClass

// Static field WordClass

// Static field NotWordClass

// Static field DigitClass

// Static field NotDigitClass

// Static field s_definedCategories

// Static field s_propTable

// Static field s_lcTable


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexCharClass, 0x30>, "Size mismatch!");

} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexCharClass);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexCharClass*, "System.Text.RegularExpressions", "RegexCharClass");
NEED_NO_BOX(::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::__RegexCharClass__SingleRangeComparer*, "System.Text.RegularExpressions", "RegexCharClass/SingleRangeComparer");
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::__RegexCharClass__LowerCaseMapping, "System.Text.RegularExpressions", "RegexCharClass/LowerCaseMapping");
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::__RegexCharClass__SingleRange, "System.Text.RegularExpressions", "RegexCharClass/SingleRange");
