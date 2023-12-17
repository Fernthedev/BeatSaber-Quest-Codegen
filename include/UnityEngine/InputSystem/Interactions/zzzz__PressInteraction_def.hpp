#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PressInteraction)
namespace UnityEngine::InputSystem {
struct InputInteractionContext;
}
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
namespace UnityEngine::InputSystem::Interactions {
struct PressBehavior;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Interactions {
class PressInteraction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Interactions::PressInteraction);
// Type: UnityEngine.InputSystem.Interactions::PressInteraction
namespace UnityEngine::InputSystem::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6649))
// CS Name: ::UnityEngine.InputSystem.Interactions::PressInteraction*
class CORDL_TYPE PressInteraction : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field pressPoint offset 0x10
 __declspec(property(get=__get_pressPoint, put=__set_pressPoint)) float_t  pressPoint;

/// @brief Field behavior offset 0x14
 __declspec(property(get=__get_behavior, put=__set_behavior)) ::UnityEngine::InputSystem::Interactions::PressBehavior  behavior;

/// @brief Field m_WaitingForRelease offset 0x18
 __declspec(property(get=__get_m_WaitingForRelease, put=__set_m_WaitingForRelease)) bool  m_WaitingForRelease;

 __declspec(property(get=get_pressPointOrDefault)) float_t  pressPointOrDefault;

 __declspec(property(get=get_releasePointOrDefault)) float_t  releasePointOrDefault;

/// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction"
constexpr operator  ::UnityEngine::InputSystem::IInputInteraction*() noexcept;

constexpr void __set_pressPoint(float_t  value) ;

constexpr float_t& __get_pressPoint() ;

constexpr float_t const& __get_pressPoint() const;

constexpr void __set_behavior(::UnityEngine::InputSystem::Interactions::PressBehavior  value) ;

constexpr ::UnityEngine::InputSystem::Interactions::PressBehavior& __get_behavior() ;

constexpr ::UnityEngine::InputSystem::Interactions::PressBehavior const& __get_behavior() const;

constexpr void __set_m_WaitingForRelease(bool  value) ;

constexpr bool& __get_m_WaitingForRelease() ;

constexpr bool const& __get_m_WaitingForRelease() const;

/// @brief Method get_pressPointOrDefault addr 0x2b0cb40 size 0x58 virtual false final false
inline float_t get_pressPointOrDefault() ;

/// @brief Method get_releasePointOrDefault addr 0x2b0cb98 size 0x88 virtual false final false
inline float_t get_releasePointOrDefault() ;

/// @brief Method Process addr 0x2b0cc20 size 0x3c4 virtual true final true
inline void Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext>  context) ;

/// @brief Method Reset addr 0x2b0cfe4 size 0x8 virtual true final true
inline void Reset() ;

static inline ::UnityEngine::InputSystem::Interactions::PressInteraction* New_ctor() ;

/// @brief Method .ctor addr 0x2b0cfec size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PressInteraction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PressInteraction(PressInteraction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PressInteraction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PressInteraction(PressInteraction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PressInteraction()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Interactions::PressInteraction, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Interactions
NEED_NO_BOX(::UnityEngine::InputSystem::Interactions::PressInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::PressInteraction*, "UnityEngine.InputSystem.Interactions", "PressInteraction");
