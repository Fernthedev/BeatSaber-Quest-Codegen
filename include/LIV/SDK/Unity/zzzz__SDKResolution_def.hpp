#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDKResolution)
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKResolution;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKResolution);
// Type: LIV.SDK.Unity::SDKResolution
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15108))
// CS Name: ::LIV.SDK.Unity::SDKResolution
struct CORDL_TYPE SDKResolution : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field width offset 0x0
 __declspec(property(get=__get_width, put=__set_width)) int32_t  width;

/// @brief Field height offset 0x4
 __declspec(property(get=__get_height, put=__set_height)) int32_t  height;

constexpr void __set_width(int32_t  value) ;

constexpr int32_t& __get_width() ;

constexpr int32_t const& __get_width() const;

constexpr void __set_height(int32_t  value) ;

constexpr int32_t& __get_height() ;

constexpr int32_t const& __get_height() const;

/// @brief Method get_zero addr 0x220fba4 size 0x8 virtual false final false
static inline ::LIV::SDK::Unity::SDKResolution get_zero() ;

/// @brief Method ToString addr 0x2213df4 size 0xa0 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SDKResolution(int32_t  width, int32_t  height) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SDKResolution(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SDKResolution()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKResolution, 0x8>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKResolution, "LIV.SDK.Unity", "SDKResolution");
