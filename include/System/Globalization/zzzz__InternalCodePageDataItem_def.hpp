#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternalCodePageDataItem)
// Forward declare root types
namespace System::Globalization {
struct InternalCodePageDataItem;
}
// Write type traits
MARK_VAL_T(::System::Globalization::InternalCodePageDataItem);
// Type: System.Globalization::InternalCodePageDataItem
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3717))
// CS Name: ::System.Globalization::InternalCodePageDataItem
struct CORDL_TYPE InternalCodePageDataItem : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field codePage offset 0x0
 __declspec(property(get=__get_codePage, put=__set_codePage)) uint16_t  codePage;

/// @brief Field uiFamilyCodePage offset 0x2
 __declspec(property(get=__get_uiFamilyCodePage, put=__set_uiFamilyCodePage)) uint16_t  uiFamilyCodePage;

/// @brief Field flags offset 0x4
 __declspec(property(get=__get_flags, put=__set_flags)) uint32_t  flags;

/// @brief Field Names offset 0x8
 __declspec(property(get=__get_Names, put=__set_Names)) ::StringW  Names;

constexpr void __set_codePage(uint16_t  value) ;

constexpr uint16_t& __get_codePage() ;

constexpr uint16_t const& __get_codePage() const;

constexpr void __set_uiFamilyCodePage(uint16_t  value) ;

constexpr uint16_t& __get_uiFamilyCodePage() ;

constexpr uint16_t const& __get_uiFamilyCodePage() const;

constexpr void __set_flags(uint32_t  value) ;

constexpr uint32_t& __get_flags() ;

constexpr uint32_t const& __get_flags() const;

constexpr void __set_Names(::StringW  value) ;

constexpr ::StringW& __get_Names() ;

constexpr ::StringW const& __get_Names() const;

// Ctor Parameters [CppParam { name: "codePage", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "uiFamilyCodePage", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Names", ty: "::StringW", modifiers: "", def_value: None }]
constexpr InternalCodePageDataItem(uint16_t  codePage, uint16_t  uiFamilyCodePage, uint32_t  flags, ::StringW  Names) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InternalCodePageDataItem(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InternalCodePageDataItem()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::InternalCodePageDataItem, 0x10>, "Size mismatch!");

} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::InternalCodePageDataItem, "System.Globalization", "InternalCodePageDataItem");
