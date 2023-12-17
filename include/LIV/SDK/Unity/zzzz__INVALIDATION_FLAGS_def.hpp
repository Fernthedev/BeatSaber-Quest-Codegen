#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(INVALIDATION_FLAGS)
// Forward declare root types
namespace LIV::SDK::Unity {
struct INVALIDATION_FLAGS;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::INVALIDATION_FLAGS);
// Type: LIV.SDK.Unity::INVALIDATION_FLAGS
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15092))
// CS Name: ::LIV.SDK.Unity::INVALIDATION_FLAGS
struct CORDL_TYPE INVALIDATION_FLAGS : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __INVALIDATION_FLAGS_Unwrapped
enum struct __INVALIDATION_FLAGS_Unwrapped : uint32_t {
__E_NONE = static_cast<uint32_t>(0x4020100u),
__E_HMD_CAMERA = static_cast<uint32_t>(0x8040201u),
__E_STAGE = static_cast<uint32_t>(0x80402u),
__E_MR_CAMERA_PREFAB = static_cast<uint32_t>(0x804u),
__E_EXCLUDE_BEHAVIOURS = static_cast<uint32_t>(0x70000008u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NONE value: static_cast<uint32_t>(0x4020100u)
static ::LIV::SDK::Unity::INVALIDATION_FLAGS const NONE;

/// @brief Field HMD_CAMERA value: static_cast<uint32_t>(0x8040201u)
static ::LIV::SDK::Unity::INVALIDATION_FLAGS const HMD_CAMERA;

/// @brief Field STAGE value: static_cast<uint32_t>(0x80402u)
static ::LIV::SDK::Unity::INVALIDATION_FLAGS const STAGE;

/// @brief Field MR_CAMERA_PREFAB value: static_cast<uint32_t>(0x804u)
static ::LIV::SDK::Unity::INVALIDATION_FLAGS const MR_CAMERA_PREFAB;

/// @brief Field EXCLUDE_BEHAVIOURS value: static_cast<uint32_t>(0x70000008u)
static ::LIV::SDK::Unity::INVALIDATION_FLAGS const EXCLUDE_BEHAVIOURS;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __INVALIDATION_FLAGS_Unwrapped () const noexcept {
return std::bit_cast<__INVALIDATION_FLAGS_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(uint32_t  value) ;

constexpr uint32_t& __get_value__() ;

constexpr uint32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr INVALIDATION_FLAGS(uint32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit INVALIDATION_FLAGS(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 INVALIDATION_FLAGS()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::INVALIDATION_FLAGS, 0x4>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::INVALIDATION_FLAGS, "LIV.SDK.Unity", "INVALIDATION_FLAGS");
