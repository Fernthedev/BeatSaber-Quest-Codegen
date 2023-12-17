#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TapInteraction)
namespace UnityEngine::InputSystem {
struct InputInteractionContext;
}
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Interactions {
class TapInteraction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Interactions::TapInteraction);
// Type: UnityEngine.InputSystem.Interactions::TapInteraction
namespace UnityEngine::InputSystem::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6652))
// CS Name: ::UnityEngine.InputSystem.Interactions::TapInteraction*
class CORDL_TYPE TapInteraction : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field duration offset 0x10
 __declspec(property(get=__get_duration, put=__set_duration)) float_t  duration;

/// @brief Field pressPoint offset 0x14
 __declspec(property(get=__get_pressPoint, put=__set_pressPoint)) float_t  pressPoint;

/// @brief Field m_TapStartTime offset 0x18
 __declspec(property(get=__get_m_TapStartTime, put=__set_m_TapStartTime)) double_t  m_TapStartTime;

 __declspec(property(get=get_durationOrDefault)) float_t  durationOrDefault;

 __declspec(property(get=get_pressPointOrDefault)) float_t  pressPointOrDefault;

 __declspec(property(get=get_releasePointOrDefault)) float_t  releasePointOrDefault;

/// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction"
constexpr operator  ::UnityEngine::InputSystem::IInputInteraction*() noexcept;

constexpr void __set_duration(float_t  value) ;

constexpr float_t& __get_duration() ;

constexpr float_t const& __get_duration() const;

constexpr void __set_pressPoint(float_t  value) ;

constexpr float_t& __get_pressPoint() ;

constexpr float_t const& __get_pressPoint() const;

constexpr void __set_m_TapStartTime(double_t  value) ;

constexpr double_t& __get_m_TapStartTime() ;

constexpr double_t const& __get_m_TapStartTime() const;

/// @brief Method get_durationOrDefault addr 0x2b0d234 size 0x70 virtual false final false
inline float_t get_durationOrDefault() ;

/// @brief Method get_pressPointOrDefault addr 0x2b0d2a4 size 0x58 virtual false final false
inline float_t get_pressPointOrDefault() ;

/// @brief Method get_releasePointOrDefault addr 0x2b0d2fc size 0x88 virtual false final false
inline float_t get_releasePointOrDefault() ;

/// @brief Method Process addr 0x2b0d384 size 0x160 virtual true final true
inline void Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext>  context) ;

/// @brief Method Reset addr 0x2b0d4e4 size 0x8 virtual true final true
inline void Reset() ;

static inline ::UnityEngine::InputSystem::Interactions::TapInteraction* New_ctor() ;

/// @brief Method .ctor addr 0x2b0d4ec size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TapInteraction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TapInteraction(TapInteraction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TapInteraction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TapInteraction(TapInteraction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TapInteraction()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Interactions::TapInteraction, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Interactions
NEED_NO_BOX(::UnityEngine::InputSystem::Interactions::TapInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::TapInteraction*, "UnityEngine.InputSystem.Interactions", "TapInteraction");
