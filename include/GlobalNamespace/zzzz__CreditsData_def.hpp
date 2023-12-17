#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreditsData)
namespace GlobalNamespace {
class __CreditsData__Text;
}
namespace GlobalNamespace {
class __CreditsData__ChildCreditsItem;
}
namespace GlobalNamespace {
class __CreditsData__RootCreditsItem;
}
namespace GlobalNamespace {
struct __CreditsData__TextStyle;
}
// Forward declare root types
namespace GlobalNamespace {
struct __CreditsData__TextStyle;
}
namespace GlobalNamespace {
class CreditsData;
}
namespace GlobalNamespace {
class __CreditsData__ChildCreditsItem;
}
namespace GlobalNamespace {
class __CreditsData__RootCreditsItem;
}
namespace GlobalNamespace {
class __CreditsData__Text;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__CreditsData__TextStyle);
MARK_REF_PTR_T(::GlobalNamespace::CreditsData);
MARK_REF_PTR_T(::GlobalNamespace::__CreditsData__ChildCreditsItem);
MARK_REF_PTR_T(::GlobalNamespace::__CreditsData__RootCreditsItem);
MARK_REF_PTR_T(::GlobalNamespace::__CreditsData__Text);
// Type: ::TextStyle
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5473))
// CS Name: ::CreditsData::TextStyle
struct CORDL_TYPE __CreditsData__TextStyle : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____CreditsData__TextStyle_Unwrapped
enum struct ____CreditsData__TextStyle_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Title = static_cast<int32_t>(0x1),
__E_Header = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Normal value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__CreditsData__TextStyle const Normal;

/// @brief Field Title value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__CreditsData__TextStyle const Title;

/// @brief Field Header value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__CreditsData__TextStyle const Header;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____CreditsData__TextStyle_Unwrapped () const noexcept {
return std::bit_cast<____CreditsData__TextStyle_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __CreditsData__TextStyle(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __CreditsData__TextStyle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __CreditsData__TextStyle()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CreditsData__TextStyle, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Text
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5474))
// CS Name: ::CreditsData::Text*
class CORDL_TYPE __CreditsData__Text : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field text offset 0x10
 __declspec(property(get=__get_text, put=__set_text)) ::StringW  text;

/// @brief Field localized offset 0x18
 __declspec(property(get=__get_localized, put=__set_localized)) bool  localized;

/// @brief Field style offset 0x1c
 __declspec(property(get=__get_style, put=__set_style)) ::GlobalNamespace::__CreditsData__TextStyle  style;

constexpr void __set_text(::StringW  value) ;

constexpr ::StringW& __get_text() ;

constexpr ::StringW const& __get_text() const;

constexpr void __set_localized(bool  value) ;

constexpr bool& __get_localized() ;

constexpr bool const& __get_localized() const;

constexpr void __set_style(::GlobalNamespace::__CreditsData__TextStyle  value) ;

constexpr ::GlobalNamespace::__CreditsData__TextStyle& __get_style() ;

constexpr ::GlobalNamespace::__CreditsData__TextStyle const& __get_style() const;

/// @brief Method IsEmpty addr 0x22834d4 size 0x20 virtual false final false
inline bool IsEmpty() ;

/// @brief Method ToString addr 0x22834f4 size 0xc4 virtual true final false
inline ::StringW ToString() ;

static inline ::GlobalNamespace::__CreditsData__Text* New_ctor() ;

/// @brief Method .ctor addr 0x22835b8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__CreditsData__Text", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CreditsData__Text(__CreditsData__Text && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CreditsData__Text", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CreditsData__Text(__CreditsData__Text const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CreditsData__Text()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CreditsData__Text, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::RootCreditsItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5475))
// CS Name: ::CreditsData::RootCreditsItem*
class CORDL_TYPE __CreditsData__RootCreditsItem : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field title offset 0x10
 __declspec(property(get=__get_title, put=__set_title)) ::GlobalNamespace::__CreditsData__Text*  title;

/// @brief Field text offset 0x18
 __declspec(property(get=__get_text, put=__set_text)) ::GlobalNamespace::__CreditsData__Text*  text;

/// @brief Field rowCountOverride offset 0x20
 __declspec(property(get=__get_rowCountOverride, put=__set_rowCountOverride)) int32_t  rowCountOverride;

/// @brief Field creditsItems offset 0x28
 __declspec(property(get=__get_creditsItems, put=__set_creditsItems)) ::ArrayW<::GlobalNamespace::__CreditsData__ChildCreditsItem*,::Array<::GlobalNamespace::__CreditsData__ChildCreditsItem*>*>  creditsItems;

constexpr void __set_title(::GlobalNamespace::__CreditsData__Text*  value) ;

constexpr ::GlobalNamespace::__CreditsData__Text* __get_title() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CreditsData__Text*> __get_title() const;

constexpr void __set_text(::GlobalNamespace::__CreditsData__Text*  value) ;

constexpr ::GlobalNamespace::__CreditsData__Text* __get_text() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CreditsData__Text*> __get_text() const;

constexpr void __set_rowCountOverride(int32_t  value) ;

constexpr int32_t& __get_rowCountOverride() ;

constexpr int32_t const& __get_rowCountOverride() const;

constexpr void __set_creditsItems(::ArrayW<::GlobalNamespace::__CreditsData__ChildCreditsItem*,::Array<::GlobalNamespace::__CreditsData__ChildCreditsItem*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__CreditsData__ChildCreditsItem*,::Array<::GlobalNamespace::__CreditsData__ChildCreditsItem*>*>& __get_creditsItems() ;

constexpr ::ArrayW<::GlobalNamespace::__CreditsData__ChildCreditsItem*,::Array<::GlobalNamespace::__CreditsData__ChildCreditsItem*>*> const& __get_creditsItems() const;

/// @brief Method HasTitle addr 0x22835c0 size 0x10 virtual false final false
inline bool HasTitle() ;

/// @brief Method HasText addr 0x22835d0 size 0x10 virtual false final false
inline bool HasText() ;

/// @brief Method HasRowItems addr 0x22835e0 size 0x20 virtual false final false
inline bool HasRowItems() ;

static inline ::GlobalNamespace::__CreditsData__RootCreditsItem* New_ctor() ;

/// @brief Method .ctor addr 0x2283600 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__CreditsData__RootCreditsItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CreditsData__RootCreditsItem(__CreditsData__RootCreditsItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CreditsData__RootCreditsItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CreditsData__RootCreditsItem(__CreditsData__RootCreditsItem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CreditsData__RootCreditsItem()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CreditsData__RootCreditsItem, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ChildCreditsItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5476))
// CS Name: ::CreditsData::ChildCreditsItem*
class CORDL_TYPE __CreditsData__ChildCreditsItem : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field title offset 0x10
 __declspec(property(get=__get_title, put=__set_title)) ::GlobalNamespace::__CreditsData__Text*  title;

/// @brief Field text offset 0x18
 __declspec(property(get=__get_text, put=__set_text)) ::GlobalNamespace::__CreditsData__Text*  text;

constexpr void __set_title(::GlobalNamespace::__CreditsData__Text*  value) ;

constexpr ::GlobalNamespace::__CreditsData__Text* __get_title() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CreditsData__Text*> __get_title() const;

constexpr void __set_text(::GlobalNamespace::__CreditsData__Text*  value) ;

constexpr ::GlobalNamespace::__CreditsData__Text* __get_text() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CreditsData__Text*> __get_text() const;

/// @brief Method HasTitle addr 0x2283608 size 0x10 virtual false final false
inline bool HasTitle() ;

/// @brief Method HasText addr 0x2283618 size 0x10 virtual false final false
inline bool HasText() ;

static inline ::GlobalNamespace::__CreditsData__ChildCreditsItem* New_ctor() ;

/// @brief Method .ctor addr 0x2283628 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__CreditsData__ChildCreditsItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CreditsData__ChildCreditsItem(__CreditsData__ChildCreditsItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CreditsData__ChildCreditsItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CreditsData__ChildCreditsItem(__CreditsData__ChildCreditsItem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CreditsData__ChildCreditsItem()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CreditsData__ChildCreditsItem, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::CreditsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5477))
// CS Name: ::CreditsData*
class CORDL_TYPE CreditsData : public ::System::Object {
public:
// Declarations
using ChildCreditsItem = ::GlobalNamespace::__CreditsData__ChildCreditsItem;

using RootCreditsItem = ::GlobalNamespace::__CreditsData__RootCreditsItem;

using Text = ::GlobalNamespace::__CreditsData__Text;

using TextStyle = ::GlobalNamespace::__CreditsData__TextStyle;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field creditsItems offset 0x10
 __declspec(property(get=__get_creditsItems, put=__set_creditsItems)) ::ArrayW<::GlobalNamespace::__CreditsData__RootCreditsItem*,::Array<::GlobalNamespace::__CreditsData__RootCreditsItem*>*>  creditsItems;

constexpr void __set_creditsItems(::ArrayW<::GlobalNamespace::__CreditsData__RootCreditsItem*,::Array<::GlobalNamespace::__CreditsData__RootCreditsItem*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__CreditsData__RootCreditsItem*,::Array<::GlobalNamespace::__CreditsData__RootCreditsItem*>*>& __get_creditsItems() ;

constexpr ::ArrayW<::GlobalNamespace::__CreditsData__RootCreditsItem*,::Array<::GlobalNamespace::__CreditsData__RootCreditsItem*>*> const& __get_creditsItems() const;

/// @brief Method Deserialize addr 0x22833c8 size 0x104 virtual false final false
static inline ::GlobalNamespace::CreditsData* Deserialize(::StringW  text) ;

static inline ::GlobalNamespace::CreditsData* New_ctor() ;

/// @brief Method .ctor addr 0x22834cc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CreditsData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CreditsData(CreditsData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreditsData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreditsData(CreditsData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CreditsData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CreditsData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CreditsData__TextStyle, "", "CreditsData/TextStyle");
NEED_NO_BOX(::GlobalNamespace::CreditsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreditsData*, "", "CreditsData");
NEED_NO_BOX(::GlobalNamespace::__CreditsData__ChildCreditsItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CreditsData__ChildCreditsItem*, "", "CreditsData/ChildCreditsItem");
NEED_NO_BOX(::GlobalNamespace::__CreditsData__RootCreditsItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CreditsData__RootCreditsItem*, "", "CreditsData/RootCreditsItem");
NEED_NO_BOX(::GlobalNamespace::__CreditsData__Text);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CreditsData__Text*, "", "CreditsData/Text");
