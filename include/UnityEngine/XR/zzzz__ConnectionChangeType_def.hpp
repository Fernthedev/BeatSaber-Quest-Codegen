#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionChangeType)
// Forward declare root types
namespace UnityEngine::XR {
struct ConnectionChangeType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::ConnectionChangeType);
// Type: UnityEngine.XR::ConnectionChangeType
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15616))
// CS Name: ::UnityEngine.XR::ConnectionChangeType
struct CORDL_TYPE ConnectionChangeType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __ConnectionChangeType_Unwrapped
enum struct __ConnectionChangeType_Unwrapped : uint32_t {
__E_Connected = static_cast<uint32_t>(0x20100u),
__E_Disconnected = static_cast<uint32_t>(0x1000201u),
__E_ConfigChange = static_cast<uint32_t>(0x2010002u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Connected value: static_cast<uint32_t>(0x20100u)
static ::UnityEngine::XR::ConnectionChangeType const Connected;

/// @brief Field Disconnected value: static_cast<uint32_t>(0x1000201u)
static ::UnityEngine::XR::ConnectionChangeType const Disconnected;

/// @brief Field ConfigChange value: static_cast<uint32_t>(0x2010002u)
static ::UnityEngine::XR::ConnectionChangeType const ConfigChange;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ConnectionChangeType_Unwrapped () const noexcept {
return std::bit_cast<__ConnectionChangeType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(uint32_t  value) ;

constexpr uint32_t& __get_value__() ;

constexpr uint32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ConnectionChangeType(uint32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConnectionChangeType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConnectionChangeType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::ConnectionChangeType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::ConnectionChangeType, "UnityEngine.XR", "ConnectionChangeType");
