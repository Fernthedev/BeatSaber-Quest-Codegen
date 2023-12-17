#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiTapInteraction)
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
namespace UnityEngine::InputSystem::Interactions {
struct __MultiTapInteraction__TapPhase;
}
namespace UnityEngine::InputSystem {
template<typename TValue>
class IInputInteraction_1;
}
namespace UnityEngine::InputSystem {
struct InputInteractionContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Interactions {
struct __MultiTapInteraction__TapPhase;
}
namespace UnityEngine::InputSystem::Interactions {
class MultiTapInteraction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Interactions::MultiTapInteraction);
// Type: ::TapPhase
namespace UnityEngine::InputSystem::Interactions {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6647))
// CS Name: ::MultiTapInteraction::TapPhase
struct CORDL_TYPE __MultiTapInteraction__TapPhase : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____MultiTapInteraction__TapPhase_Unwrapped
enum struct ____MultiTapInteraction__TapPhase_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_WaitingForNextRelease = static_cast<int32_t>(0x1),
__E_WaitingForNextPress = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase const None;

/// @brief Field WaitingForNextRelease value: static_cast<int32_t>(0x1)
static ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase const WaitingForNextRelease;

/// @brief Field WaitingForNextPress value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase const WaitingForNextPress;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____MultiTapInteraction__TapPhase_Unwrapped () const noexcept {
return std::bit_cast<____MultiTapInteraction__TapPhase_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __MultiTapInteraction__TapPhase(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MultiTapInteraction__TapPhase(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MultiTapInteraction__TapPhase()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Interactions
// Type: UnityEngine.InputSystem.Interactions::MultiTapInteraction
namespace UnityEngine::InputSystem::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6648))
// CS Name: ::UnityEngine.InputSystem.Interactions::MultiTapInteraction*
class CORDL_TYPE MultiTapInteraction : public ::System::Object {
public:
// Declarations
using TapPhase = ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field tapTime offset 0x10
 __declspec(property(get=__get_tapTime, put=__set_tapTime)) float_t  tapTime;

/// @brief Field tapDelay offset 0x14
 __declspec(property(get=__get_tapDelay, put=__set_tapDelay)) float_t  tapDelay;

/// @brief Field tapCount offset 0x18
 __declspec(property(get=__get_tapCount, put=__set_tapCount)) int32_t  tapCount;

/// @brief Field pressPoint offset 0x1c
 __declspec(property(get=__get_pressPoint, put=__set_pressPoint)) float_t  pressPoint;

/// @brief Field m_CurrentTapPhase offset 0x20
 __declspec(property(get=__get_m_CurrentTapPhase, put=__set_m_CurrentTapPhase)) ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase  m_CurrentTapPhase;

/// @brief Field m_CurrentTapCount offset 0x24
 __declspec(property(get=__get_m_CurrentTapCount, put=__set_m_CurrentTapCount)) int32_t  m_CurrentTapCount;

/// @brief Field m_CurrentTapStartTime offset 0x28
 __declspec(property(get=__get_m_CurrentTapStartTime, put=__set_m_CurrentTapStartTime)) double_t  m_CurrentTapStartTime;

/// @brief Field m_LastTapReleaseTime offset 0x30
 __declspec(property(get=__get_m_LastTapReleaseTime, put=__set_m_LastTapReleaseTime)) double_t  m_LastTapReleaseTime;

 __declspec(property(get=get_tapTimeOrDefault)) float_t  tapTimeOrDefault;

 __declspec(property(get=get_tapDelayOrDefault)) float_t  tapDelayOrDefault;

 __declspec(property(get=get_pressPointOrDefault)) float_t  pressPointOrDefault;

 __declspec(property(get=get_releasePointOrDefault)) float_t  releasePointOrDefault;

/// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction_1<float_t>"
constexpr operator  ::UnityEngine::InputSystem::IInputInteraction_1<float_t>*() noexcept;

/// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction"
constexpr operator  ::UnityEngine::InputSystem::IInputInteraction*() noexcept;

constexpr void __set_tapTime(float_t  value) ;

constexpr float_t& __get_tapTime() ;

constexpr float_t const& __get_tapTime() const;

constexpr void __set_tapDelay(float_t  value) ;

constexpr float_t& __get_tapDelay() ;

constexpr float_t const& __get_tapDelay() const;

constexpr void __set_tapCount(int32_t  value) ;

constexpr int32_t& __get_tapCount() ;

constexpr int32_t const& __get_tapCount() const;

constexpr void __set_pressPoint(float_t  value) ;

constexpr float_t& __get_pressPoint() ;

constexpr float_t const& __get_pressPoint() const;

constexpr void __set_m_CurrentTapPhase(::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase  value) ;

constexpr ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase& __get_m_CurrentTapPhase() ;

constexpr ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase const& __get_m_CurrentTapPhase() const;

constexpr void __set_m_CurrentTapCount(int32_t  value) ;

constexpr int32_t& __get_m_CurrentTapCount() ;

constexpr int32_t const& __get_m_CurrentTapCount() const;

constexpr void __set_m_CurrentTapStartTime(double_t  value) ;

constexpr double_t& __get_m_CurrentTapStartTime() ;

constexpr double_t const& __get_m_CurrentTapStartTime() const;

constexpr void __set_m_LastTapReleaseTime(double_t  value) ;

constexpr double_t& __get_m_LastTapReleaseTime() ;

constexpr double_t const& __get_m_LastTapReleaseTime() const;

/// @brief Method get_tapTimeOrDefault addr 0x2b0c6e4 size 0x70 virtual false final false
inline float_t get_tapTimeOrDefault() ;

/// @brief Method get_tapDelayOrDefault addr 0x2b0c754 size 0x70 virtual false final false
inline float_t get_tapDelayOrDefault() ;

/// @brief Method get_pressPointOrDefault addr 0x2b0c7c4 size 0x58 virtual false final false
inline float_t get_pressPointOrDefault() ;

/// @brief Method get_releasePointOrDefault addr 0x2b0c81c size 0x88 virtual false final false
inline float_t get_releasePointOrDefault() ;

/// @brief Method Process addr 0x2b0c8a4 size 0x280 virtual true final true
inline void Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext>  context) ;

/// @brief Method Reset addr 0x2b0cb24 size 0xc virtual true final true
inline void Reset() ;

static inline ::UnityEngine::InputSystem::Interactions::MultiTapInteraction* New_ctor() ;

/// @brief Method .ctor addr 0x2b0cb30 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiTapInteraction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiTapInteraction(MultiTapInteraction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiTapInteraction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiTapInteraction(MultiTapInteraction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiTapInteraction()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Interactions::MultiTapInteraction, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Interactions
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase, "UnityEngine.InputSystem.Interactions", "MultiTapInteraction/TapPhase");
NEED_NO_BOX(::UnityEngine::InputSystem::Interactions::MultiTapInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::MultiTapInteraction*, "UnityEngine.InputSystem.Interactions", "MultiTapInteraction");
