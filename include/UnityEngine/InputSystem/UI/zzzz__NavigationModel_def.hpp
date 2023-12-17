#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigationModel)
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::EventSystems {
struct MoveDirection;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
struct NavigationModel;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::UI::NavigationModel);
// Type: UnityEngine.InputSystem.UI::NavigationModel
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6378))
// CS Name: ::UnityEngine.InputSystem.UI::NavigationModel
struct CORDL_TYPE NavigationModel : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field move offset 0x0
 __declspec(property(get=__get_move, put=__set_move)) ::UnityEngine::Vector2  move;

/// @brief Field consecutiveMoveCount offset 0x8
 __declspec(property(get=__get_consecutiveMoveCount, put=__set_consecutiveMoveCount)) int32_t  consecutiveMoveCount;

/// @brief Field lastMoveDirection offset 0xc
 __declspec(property(get=__get_lastMoveDirection, put=__set_lastMoveDirection)) ::UnityEngine::EventSystems::MoveDirection  lastMoveDirection;

/// @brief Field lastMoveTime offset 0x10
 __declspec(property(get=__get_lastMoveTime, put=__set_lastMoveTime)) float_t  lastMoveTime;

/// @brief Field eventData offset 0x18
 __declspec(property(get=__get_eventData, put=__set_eventData)) ::UnityEngine::EventSystems::AxisEventData*  eventData;

constexpr void __set_move(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_move() ;

constexpr ::UnityEngine::Vector2 const& __get_move() const;

constexpr void __set_consecutiveMoveCount(int32_t  value) ;

constexpr int32_t& __get_consecutiveMoveCount() ;

constexpr int32_t const& __get_consecutiveMoveCount() const;

constexpr void __set_lastMoveDirection(::UnityEngine::EventSystems::MoveDirection  value) ;

constexpr ::UnityEngine::EventSystems::MoveDirection& __get_lastMoveDirection() ;

constexpr ::UnityEngine::EventSystems::MoveDirection const& __get_lastMoveDirection() const;

constexpr void __set_lastMoveTime(float_t  value) ;

constexpr float_t& __get_lastMoveTime() ;

constexpr float_t const& __get_lastMoveTime() const;

constexpr void __set_eventData(::UnityEngine::EventSystems::AxisEventData*  value) ;

constexpr ::UnityEngine::EventSystems::AxisEventData* __get_eventData() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::AxisEventData*> __get_eventData() const;

/// @brief Method Reset addr 0x2ad3f40 size 0x50 virtual false final false
inline void Reset() ;

// Ctor Parameters [CppParam { name: "move", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "consecutiveMoveCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastMoveDirection", ty: "::UnityEngine::EventSystems::MoveDirection", modifiers: "", def_value: None }, CppParam { name: "lastMoveTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "eventData", ty: "::UnityEngine::EventSystems::AxisEventData*", modifiers: "", def_value: None }]
constexpr NavigationModel(::UnityEngine::Vector2  move, int32_t  consecutiveMoveCount, ::UnityEngine::EventSystems::MoveDirection  lastMoveDirection, float_t  lastMoveTime, ::UnityEngine::EventSystems::AxisEventData*  eventData) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NavigationModel(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NavigationModel()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::NavigationModel, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::NavigationModel, "UnityEngine.InputSystem.UI", "NavigationModel");
