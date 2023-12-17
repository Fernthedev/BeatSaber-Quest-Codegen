#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternalEncodingDataItem)
// Forward declare root types
namespace System::Globalization {
struct InternalEncodingDataItem;
}
// Write type traits
MARK_VAL_T(::System::Globalization::InternalEncodingDataItem);
// Type: System.Globalization::InternalEncodingDataItem
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3716))
// CS Name: ::System.Globalization::InternalEncodingDataItem
struct CORDL_TYPE InternalEncodingDataItem : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field webName offset 0x0
 __declspec(property(get=__get_webName, put=__set_webName)) ::StringW  webName;

/// @brief Field codePage offset 0x8
 __declspec(property(get=__get_codePage, put=__set_codePage)) uint16_t  codePage;

constexpr void __set_webName(::StringW  value) ;

constexpr ::StringW& __get_webName() ;

constexpr ::StringW const& __get_webName() const;

constexpr void __set_codePage(uint16_t  value) ;

constexpr uint16_t& __get_codePage() ;

constexpr uint16_t const& __get_codePage() const;

// Ctor Parameters [CppParam { name: "webName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "codePage", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr InternalEncodingDataItem(::StringW  webName, uint16_t  codePage) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InternalEncodingDataItem(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InternalEncodingDataItem()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::InternalEncodingDataItem, 0x10>, "Size mismatch!");

} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::InternalEncodingDataItem, "System.Globalization", "InternalEncodingDataItem");
