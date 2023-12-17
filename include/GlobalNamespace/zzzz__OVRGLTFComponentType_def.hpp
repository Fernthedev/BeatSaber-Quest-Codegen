#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFComponentType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRGLTFComponentType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRGLTFComponentType);
// Type: ::OVRGLTFComponentType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7552))
// CS Name: ::OVRGLTFComponentType
struct CORDL_TYPE OVRGLTFComponentType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRGLTFComponentType_Unwrapped
enum struct __OVRGLTFComponentType_Unwrapped : int32_t {
__E_BYTE = static_cast<int32_t>(0x1400),
__E_UNSIGNED_BYTE = static_cast<int32_t>(0x1401),
__E_SHORT = static_cast<int32_t>(0x1402),
__E_UNSIGNED_SHORT = static_cast<int32_t>(0x1403),
__E_UNSIGNED_INT = static_cast<int32_t>(0x1405),
__E_FLOAT = static_cast<int32_t>(0x1406),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field BYTE value: static_cast<int32_t>(0x1400)
static ::GlobalNamespace::OVRGLTFComponentType const BYTE;

/// @brief Field UNSIGNED_BYTE value: static_cast<int32_t>(0x1401)
static ::GlobalNamespace::OVRGLTFComponentType const UNSIGNED_BYTE;

/// @brief Field SHORT value: static_cast<int32_t>(0x1402)
static ::GlobalNamespace::OVRGLTFComponentType const SHORT;

/// @brief Field UNSIGNED_SHORT value: static_cast<int32_t>(0x1403)
static ::GlobalNamespace::OVRGLTFComponentType const UNSIGNED_SHORT;

/// @brief Field UNSIGNED_INT value: static_cast<int32_t>(0x1405)
static ::GlobalNamespace::OVRGLTFComponentType const UNSIGNED_INT;

/// @brief Field FLOAT value: static_cast<int32_t>(0x1406)
static ::GlobalNamespace::OVRGLTFComponentType const FLOAT;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRGLTFComponentType_Unwrapped () const noexcept {
return std::bit_cast<__OVRGLTFComponentType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OVRGLTFComponentType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OVRGLTFComponentType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OVRGLTFComponentType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFComponentType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFComponentType, "", "OVRGLTFComponentType");
