#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenControl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OnScreenStick)
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::OnScreen {
class OnScreenStick;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::OnScreen::OnScreenStick);
// Type: UnityEngine.InputSystem.OnScreen::OnScreenStick
namespace UnityEngine::InputSystem::OnScreen {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6388))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6389))
// CS Name: ::UnityEngine.InputSystem.OnScreen::OnScreenStick*
class CORDL_TYPE OnScreenStick : public ::UnityEngine::InputSystem::OnScreen::OnScreenControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::UnityEngine::InputSystem::OnScreen::OnScreenControl)]{};

/// @brief Field m_MovementRange offset 0x30
 __declspec(property(get=__get_m_MovementRange, put=__set_m_MovementRange)) float_t  m_MovementRange;

/// @brief Field m_ControlPath offset 0x38
 __declspec(property(get=__get_m_ControlPath, put=__set_m_ControlPath)) ::StringW  m_ControlPath;

/// @brief Field m_StartPos offset 0x40
 __declspec(property(get=__get_m_StartPos, put=__set_m_StartPos)) ::UnityEngine::Vector3  m_StartPos;

/// @brief Field m_PointerDownPos offset 0x4c
 __declspec(property(get=__get_m_PointerDownPos, put=__set_m_PointerDownPos)) ::UnityEngine::Vector2  m_PointerDownPos;

 __declspec(property(get=get_movementRange, put=set_movementRange)) float_t  movementRange;

 __declspec(property(get=get_controlPathInternal, put=set_controlPathInternal)) ::StringW  controlPathInternal;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IDragHandler*() noexcept;

constexpr void __set_m_MovementRange(float_t  value) ;

constexpr float_t& __get_m_MovementRange() ;

constexpr float_t const& __get_m_MovementRange() const;

constexpr void __set_m_ControlPath(::StringW  value) ;

constexpr ::StringW& __get_m_ControlPath() ;

constexpr ::StringW const& __get_m_ControlPath() const;

constexpr void __set_m_StartPos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_StartPos() ;

constexpr ::UnityEngine::Vector3 const& __get_m_StartPos() const;

constexpr void __set_m_PointerDownPos(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_m_PointerDownPos() ;

constexpr ::UnityEngine::Vector2 const& __get_m_PointerDownPos() const;

/// @brief Method OnPointerDown addr 0x2ad99f8 size 0x124 virtual true final true
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnDrag addr 0x2ad9b1c size 0x224 virtual true final true
inline void OnDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerUp addr 0x2ad9d40 size 0xc4 virtual true final true
inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method Start addr 0x2ad9e04 size 0x78 virtual false final false
inline void Start() ;

/// @brief Method get_movementRange addr 0x2ad9e7c size 0x8 virtual false final false
inline float_t get_movementRange() ;

/// @brief Method set_movementRange addr 0x2ad9e84 size 0x8 virtual false final false
inline void set_movementRange(float_t  value) ;

/// @brief Method get_controlPathInternal addr 0x2ad9e8c size 0x8 virtual true final false
inline ::StringW get_controlPathInternal() ;

/// @brief Method set_controlPathInternal addr 0x2ad9e94 size 0x8 virtual true final false
inline void set_controlPathInternal(::StringW  value) ;

static inline ::UnityEngine::InputSystem::OnScreen::OnScreenStick* New_ctor() ;

/// @brief Method .ctor addr 0x2ad9e9c size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OnScreenStick", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnScreenStick(OnScreenStick && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnScreenStick", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnScreenStick(OnScreenStick const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OnScreenStick()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::OnScreen::OnScreenStick, 0x58>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::OnScreen
NEED_NO_BOX(::UnityEngine::InputSystem::OnScreen::OnScreenStick);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::OnScreen::OnScreenStick*, "UnityEngine.InputSystem.OnScreen", "OnScreenStick");
