#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HFLayerType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HFLayerType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HFLayerType);
// Type: HoudiniEngineUnity::HFLayerType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9951))
// CS Name: ::HoudiniEngineUnity::HFLayerType
struct CORDL_TYPE HFLayerType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HFLayerType_Unwrapped
enum struct __HFLayerType_Unwrapped : int32_t {
__E_DEFAULT = static_cast<int32_t>(0x0),
__E_HEIGHT = static_cast<int32_t>(0x1),
__E_MASK = static_cast<int32_t>(0x2),
__E_DETAIL = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field DEFAULT value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::HFLayerType const DEFAULT;

/// @brief Field HEIGHT value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::HFLayerType const HEIGHT;

/// @brief Field MASK value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::HFLayerType const MASK;

/// @brief Field DETAIL value: static_cast<int32_t>(0x3)
static ::HoudiniEngineUnity::HFLayerType const DETAIL;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __HFLayerType_Unwrapped () const noexcept {
return std::bit_cast<__HFLayerType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HFLayerType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HFLayerType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HFLayerType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HFLayerType, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HFLayerType, "HoudiniEngineUnity", "HFLayerType");
