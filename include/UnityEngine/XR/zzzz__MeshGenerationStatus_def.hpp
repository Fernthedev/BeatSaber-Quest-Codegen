#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshGenerationStatus)
// Forward declare root types
namespace UnityEngine::XR {
struct MeshGenerationStatus;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::MeshGenerationStatus);
// Type: UnityEngine.XR::MeshGenerationStatus
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15634))
// CS Name: ::UnityEngine.XR::MeshGenerationStatus
struct CORDL_TYPE MeshGenerationStatus : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MeshGenerationStatus_Unwrapped
enum struct __MeshGenerationStatus_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_InvalidMeshId = static_cast<int32_t>(0x1),
__E_GenerationAlreadyInProgress = static_cast<int32_t>(0x2),
__E_Canceled = static_cast<int32_t>(0x3),
__E_UnknownError = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Success value: static_cast<int32_t>(0x0)
static ::UnityEngine::XR::MeshGenerationStatus const Success;

/// @brief Field InvalidMeshId value: static_cast<int32_t>(0x1)
static ::UnityEngine::XR::MeshGenerationStatus const InvalidMeshId;

/// @brief Field GenerationAlreadyInProgress value: static_cast<int32_t>(0x2)
static ::UnityEngine::XR::MeshGenerationStatus const GenerationAlreadyInProgress;

/// @brief Field Canceled value: static_cast<int32_t>(0x3)
static ::UnityEngine::XR::MeshGenerationStatus const Canceled;

/// @brief Field UnknownError value: static_cast<int32_t>(0x4)
static ::UnityEngine::XR::MeshGenerationStatus const UnknownError;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __MeshGenerationStatus_Unwrapped () const noexcept {
return std::bit_cast<__MeshGenerationStatus_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MeshGenerationStatus(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MeshGenerationStatus(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MeshGenerationStatus()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::MeshGenerationStatus, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::MeshGenerationStatus, "UnityEngine.XR", "MeshGenerationStatus");
