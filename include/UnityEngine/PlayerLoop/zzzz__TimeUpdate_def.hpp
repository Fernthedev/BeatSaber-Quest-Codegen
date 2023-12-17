#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TimeUpdate)
namespace UnityEngine::PlayerLoop {
struct __TimeUpdate__WaitForLastPresentationAndUpdateTime;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct TimeUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __TimeUpdate__WaitForLastPresentationAndUpdateTime;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::TimeUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__TimeUpdate__WaitForLastPresentationAndUpdateTime);
// Type: ::WaitForLastPresentationAndUpdateTime
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10475))
// CS Name: ::TimeUpdate::WaitForLastPresentationAndUpdateTime
struct CORDL_TYPE __TimeUpdate__WaitForLastPresentationAndUpdateTime : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TimeUpdate__WaitForLastPresentationAndUpdateTime(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TimeUpdate__WaitForLastPresentationAndUpdateTime()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__TimeUpdate__WaitForLastPresentationAndUpdateTime, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::TimeUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10476))
// CS Name: ::UnityEngine.PlayerLoop::TimeUpdate
struct CORDL_TYPE TimeUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using WaitForLastPresentationAndUpdateTime = ::UnityEngine::PlayerLoop::__TimeUpdate__WaitForLastPresentationAndUpdateTime;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TimeUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TimeUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::TimeUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::TimeUpdate, "UnityEngine.PlayerLoop", "TimeUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__TimeUpdate__WaitForLastPresentationAndUpdateTime, "UnityEngine.PlayerLoop", "TimeUpdate/WaitForLastPresentationAndUpdateTime");
