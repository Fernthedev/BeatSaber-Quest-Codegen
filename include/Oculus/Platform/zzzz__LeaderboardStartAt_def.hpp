#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardStartAt)
// Forward declare root types
namespace Oculus::Platform {
struct LeaderboardStartAt;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::LeaderboardStartAt);
// Type: Oculus.Platform::LeaderboardStartAt
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13254))
// CS Name: ::Oculus.Platform::LeaderboardStartAt
struct CORDL_TYPE LeaderboardStartAt : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LeaderboardStartAt_Unwrapped
enum struct __LeaderboardStartAt_Unwrapped : int32_t {
__E_Top = static_cast<int32_t>(0x0),
__E_CenteredOnViewer = static_cast<int32_t>(0x1),
__E_CenteredOnViewerOrTop = static_cast<int32_t>(0x2),
__E_Unknown = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Top value: static_cast<int32_t>(0x0)
static ::Oculus::Platform::LeaderboardStartAt const Top;

/// @brief Field CenteredOnViewer value: static_cast<int32_t>(0x1)
static ::Oculus::Platform::LeaderboardStartAt const CenteredOnViewer;

/// @brief Field CenteredOnViewerOrTop value: static_cast<int32_t>(0x2)
static ::Oculus::Platform::LeaderboardStartAt const CenteredOnViewerOrTop;

/// @brief Field Unknown value: static_cast<int32_t>(0x3)
static ::Oculus::Platform::LeaderboardStartAt const Unknown;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __LeaderboardStartAt_Unwrapped () const noexcept {
return std::bit_cast<__LeaderboardStartAt_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LeaderboardStartAt(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LeaderboardStartAt(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LeaderboardStartAt()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::LeaderboardStartAt, 0x4>, "Size mismatch!");

} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::LeaderboardStartAt, "Oculus.Platform", "LeaderboardStartAt");
