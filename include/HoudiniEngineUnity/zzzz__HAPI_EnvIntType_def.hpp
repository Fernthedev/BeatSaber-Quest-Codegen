#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_EnvIntType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_EnvIntType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_EnvIntType);
// Type: HoudiniEngineUnity::HAPI_EnvIntType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9718))
// CS Name: ::HoudiniEngineUnity::HAPI_EnvIntType
struct CORDL_TYPE HAPI_EnvIntType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HAPI_EnvIntType_Unwrapped
enum struct __HAPI_EnvIntType_Unwrapped : int32_t {
__E_HAPI_ENVINT_INVALID = static_cast<int32_t>(0xffffffff),
__E_HAPI_ENVINT_VERSION_HOUDINI_MAJOR = static_cast<int32_t>(0x64),
__E_HAPI_ENVINT_VERSION_HOUDINI_MINOR = static_cast<int32_t>(0x6e),
__E_HAPI_ENVINT_VERSION_HOUDINI_BUILD = static_cast<int32_t>(0x78),
__E_HAPI_ENVINT_VERSION_HOUDINI_PATCH = static_cast<int32_t>(0x82),
__E_HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MAJOR = static_cast<int32_t>(0xc8),
__E_HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MINOR = static_cast<int32_t>(0xd2),
__E_HAPI_ENVINT_VERSION_HOUDINI_ENGINE_API = static_cast<int32_t>(0xdc),
__E_HAPI_ENVINT_MAX = static_cast<int32_t>(0xdd),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field HAPI_ENVINT_INVALID value: static_cast<int32_t>(0xffffffff)
static ::HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_INVALID;

/// @brief Field HAPI_ENVINT_VERSION_HOUDINI_MAJOR value: static_cast<int32_t>(0x64)
static ::HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_MAJOR;

/// @brief Field HAPI_ENVINT_VERSION_HOUDINI_MINOR value: static_cast<int32_t>(0x6e)
static ::HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_MINOR;

/// @brief Field HAPI_ENVINT_VERSION_HOUDINI_BUILD value: static_cast<int32_t>(0x78)
static ::HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_BUILD;

/// @brief Field HAPI_ENVINT_VERSION_HOUDINI_PATCH value: static_cast<int32_t>(0x82)
static ::HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_PATCH;

/// @brief Field HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MAJOR value: static_cast<int32_t>(0xc8)
static ::HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MAJOR;

/// @brief Field HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MINOR value: static_cast<int32_t>(0xd2)
static ::HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MINOR;

/// @brief Field HAPI_ENVINT_VERSION_HOUDINI_ENGINE_API value: static_cast<int32_t>(0xdc)
static ::HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_ENGINE_API;

/// @brief Field HAPI_ENVINT_MAX value: static_cast<int32_t>(0xdd)
static ::HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_MAX;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_EnvIntType_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_EnvIntType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_EnvIntType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_EnvIntType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_EnvIntType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_EnvIntType, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_EnvIntType, "HoudiniEngineUnity", "HAPI_EnvIntType");
