#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_CompositorOptions)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_CompositorOptions;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_CompositorOptions);
// Type: HoudiniEngineUnity::HAPI_CompositorOptions
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9757))
// CS Name: ::HoudiniEngineUnity::HAPI_CompositorOptions
struct CORDL_TYPE HAPI_CompositorOptions : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field maximumResolutionX offset 0x0
 __declspec(property(get=__get_maximumResolutionX, put=__set_maximumResolutionX)) int32_t  maximumResolutionX;

/// @brief Field maximumResolutionY offset 0x4
 __declspec(property(get=__get_maximumResolutionY, put=__set_maximumResolutionY)) int32_t  maximumResolutionY;

constexpr void __set_maximumResolutionX(int32_t  value) ;

constexpr int32_t& __get_maximumResolutionX() ;

constexpr int32_t const& __get_maximumResolutionX() const;

constexpr void __set_maximumResolutionY(int32_t  value) ;

constexpr int32_t& __get_maximumResolutionY() ;

constexpr int32_t const& __get_maximumResolutionY() const;

// Ctor Parameters [CppParam { name: "maximumResolutionX", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maximumResolutionY", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_CompositorOptions(int32_t  maximumResolutionX, int32_t  maximumResolutionY) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_CompositorOptions(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_CompositorOptions()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_CompositorOptions, 0x8>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_CompositorOptions, "HoudiniEngineUnity", "HAPI_CompositorOptions");
