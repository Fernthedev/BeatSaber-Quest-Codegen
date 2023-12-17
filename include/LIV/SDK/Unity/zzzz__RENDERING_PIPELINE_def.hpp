#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RENDERING_PIPELINE)
// Forward declare root types
namespace LIV::SDK::Unity {
struct RENDERING_PIPELINE;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::RENDERING_PIPELINE);
// Type: LIV.SDK.Unity::RENDERING_PIPELINE
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15107))
// CS Name: ::LIV.SDK.Unity::RENDERING_PIPELINE
struct CORDL_TYPE RENDERING_PIPELINE : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __RENDERING_PIPELINE_Unwrapped
enum struct __RENDERING_PIPELINE_Unwrapped : uint32_t {
__E_UNDEFINED = static_cast<uint32_t>(0x3020100u),
__E_FORWARD = static_cast<uint32_t>(0x4030201u),
__E_DEFERRED = static_cast<uint32_t>(0x5040302u),
__E_VERTEX_LIT = static_cast<uint32_t>(0x50403u),
__E_UNIVERSAL = static_cast<uint32_t>(0x2000504u),
__E_HIGH_DEFINITION = static_cast<uint32_t>(0x20005u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field UNDEFINED value: static_cast<uint32_t>(0x3020100u)
static ::LIV::SDK::Unity::RENDERING_PIPELINE const UNDEFINED;

/// @brief Field FORWARD value: static_cast<uint32_t>(0x4030201u)
static ::LIV::SDK::Unity::RENDERING_PIPELINE const FORWARD;

/// @brief Field DEFERRED value: static_cast<uint32_t>(0x5040302u)
static ::LIV::SDK::Unity::RENDERING_PIPELINE const DEFERRED;

/// @brief Field VERTEX_LIT value: static_cast<uint32_t>(0x50403u)
static ::LIV::SDK::Unity::RENDERING_PIPELINE const VERTEX_LIT;

/// @brief Field UNIVERSAL value: static_cast<uint32_t>(0x2000504u)
static ::LIV::SDK::Unity::RENDERING_PIPELINE const UNIVERSAL;

/// @brief Field HIGH_DEFINITION value: static_cast<uint32_t>(0x20005u)
static ::LIV::SDK::Unity::RENDERING_PIPELINE const HIGH_DEFINITION;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __RENDERING_PIPELINE_Unwrapped () const noexcept {
return std::bit_cast<__RENDERING_PIPELINE_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(uint32_t  value) ;

constexpr uint32_t& __get_value__() ;

constexpr uint32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr RENDERING_PIPELINE(uint32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RENDERING_PIPELINE(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RENDERING_PIPELINE()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::RENDERING_PIPELINE, 0x4>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::RENDERING_PIPELINE, "LIV.SDK.Unity", "RENDERING_PIPELINE");
