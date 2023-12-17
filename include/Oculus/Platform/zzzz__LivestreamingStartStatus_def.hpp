#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LivestreamingStartStatus)
// Forward declare root types
namespace Oculus::Platform {
struct LivestreamingStartStatus;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::LivestreamingStartStatus);
// Type: Oculus.Platform::LivestreamingStartStatus
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13257))
// CS Name: ::Oculus.Platform::LivestreamingStartStatus
struct CORDL_TYPE LivestreamingStartStatus : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LivestreamingStartStatus_Unwrapped
enum struct __LivestreamingStartStatus_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x1),
__E_Unknown = static_cast<int32_t>(0x0),
__E_NoPackageSet = static_cast<int32_t>(0xffffffff),
__E_NoFbConnect = static_cast<int32_t>(0xfffffffe),
__E_NoSessionId = static_cast<int32_t>(0xfffffffd),
__E_MissingParameters = static_cast<int32_t>(0xfffffffc),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Success value: static_cast<int32_t>(0x1)
static ::Oculus::Platform::LivestreamingStartStatus const Success;

/// @brief Field Unknown value: static_cast<int32_t>(0x0)
static ::Oculus::Platform::LivestreamingStartStatus const Unknown;

/// @brief Field NoPackageSet value: static_cast<int32_t>(0xffffffff)
static ::Oculus::Platform::LivestreamingStartStatus const NoPackageSet;

/// @brief Field NoFbConnect value: static_cast<int32_t>(0xfffffffe)
static ::Oculus::Platform::LivestreamingStartStatus const NoFbConnect;

/// @brief Field NoSessionId value: static_cast<int32_t>(0xfffffffd)
static ::Oculus::Platform::LivestreamingStartStatus const NoSessionId;

/// @brief Field MissingParameters value: static_cast<int32_t>(0xfffffffc)
static ::Oculus::Platform::LivestreamingStartStatus const MissingParameters;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __LivestreamingStartStatus_Unwrapped () const noexcept {
return std::bit_cast<__LivestreamingStartStatus_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LivestreamingStartStatus(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LivestreamingStartStatus(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LivestreamingStartStatus()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::LivestreamingStartStatus, 0x4>, "Size mismatch!");

} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::LivestreamingStartStatus, "Oculus.Platform", "LivestreamingStartStatus");
