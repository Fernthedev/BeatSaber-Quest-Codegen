#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_ImageDataFormat)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ImageDataFormat;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_ImageDataFormat);
// Type: HoudiniEngineUnity::HAPI_ImageDataFormat
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9716))
// CS Name: ::HoudiniEngineUnity::HAPI_ImageDataFormat
struct CORDL_TYPE HAPI_ImageDataFormat : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HAPI_ImageDataFormat_Unwrapped
enum struct __HAPI_ImageDataFormat_Unwrapped : int32_t {
__E_HAPI_IMAGE_DATA_UNKNOWN = static_cast<int32_t>(0xffffffff),
__E_HAPI_IMAGE_DATA_INT8 = static_cast<int32_t>(0x0),
__E_HAPI_IMAGE_DATA_INT16 = static_cast<int32_t>(0x1),
__E_HAPI_IMAGE_DATA_INT32 = static_cast<int32_t>(0x2),
__E_HAPI_IMAGE_DATA_FLOAT16 = static_cast<int32_t>(0x3),
__E_HAPI_IMAGE_DATA_FLOAT32 = static_cast<int32_t>(0x4),
__E_HAPI_IMAGE_DATA_MAX = static_cast<int32_t>(0x5),
__E_HAPI_IMAGE_DATA_DEFAULT = static_cast<int32_t>(0x0),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field HAPI_IMAGE_DATA_UNKNOWN value: static_cast<int32_t>(0xffffffff)
static ::HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_UNKNOWN;

/// @brief Field HAPI_IMAGE_DATA_INT8 value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_INT8;

/// @brief Field HAPI_IMAGE_DATA_INT16 value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_INT16;

/// @brief Field HAPI_IMAGE_DATA_INT32 value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_INT32;

/// @brief Field HAPI_IMAGE_DATA_FLOAT16 value: static_cast<int32_t>(0x3)
static ::HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_FLOAT16;

/// @brief Field HAPI_IMAGE_DATA_FLOAT32 value: static_cast<int32_t>(0x4)
static ::HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_FLOAT32;

/// @brief Field HAPI_IMAGE_DATA_MAX value: static_cast<int32_t>(0x5)
static ::HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_MAX;

/// @brief Field HAPI_IMAGE_DATA_DEFAULT value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::HAPI_ImageDataFormat const HAPI_IMAGE_DATA_DEFAULT;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_ImageDataFormat_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_ImageDataFormat_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_ImageDataFormat(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_ImageDataFormat(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_ImageDataFormat()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ImageDataFormat, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ImageDataFormat, "HoudiniEngineUnity", "HAPI_ImageDataFormat");
