#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_ImageFileFormat)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ImageFileFormat;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_ImageFileFormat);
// Type: HoudiniEngineUnity::HAPI_ImageFileFormat
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9743))
// CS Name: ::HoudiniEngineUnity::HAPI_ImageFileFormat
struct CORDL_TYPE HAPI_ImageFileFormat : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field nameSH offset 0x0
 __declspec(property(get=__get_nameSH, put=__set_nameSH)) int32_t  nameSH;

/// @brief Field descriptionSH offset 0x4
 __declspec(property(get=__get_descriptionSH, put=__set_descriptionSH)) int32_t  descriptionSH;

/// @brief Field defaultExtensionSH offset 0x8
 __declspec(property(get=__get_defaultExtensionSH, put=__set_defaultExtensionSH)) int32_t  defaultExtensionSH;

constexpr void __set_nameSH(int32_t  value) ;

constexpr int32_t& __get_nameSH() ;

constexpr int32_t const& __get_nameSH() const;

constexpr void __set_descriptionSH(int32_t  value) ;

constexpr int32_t& __get_descriptionSH() ;

constexpr int32_t const& __get_descriptionSH() const;

constexpr void __set_defaultExtensionSH(int32_t  value) ;

constexpr int32_t& __get_defaultExtensionSH() ;

constexpr int32_t const& __get_defaultExtensionSH() const;

// Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "descriptionSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "defaultExtensionSH", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_ImageFileFormat(int32_t  nameSH, int32_t  descriptionSH, int32_t  defaultExtensionSH) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_ImageFileFormat(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_ImageFileFormat()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ImageFileFormat, 0xc>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ImageFileFormat, "HoudiniEngineUnity", "HAPI_ImageFileFormat");
