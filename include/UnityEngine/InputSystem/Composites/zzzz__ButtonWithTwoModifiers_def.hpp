#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ButtonWithTwoModifiers)
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
class ButtonWithTwoModifiers;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers);
// Type: UnityEngine.InputSystem.Composites::ButtonWithTwoModifiers
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6190), inst: 391 }), TypeDefinitionIndex(TypeDefinitionIndex(6190))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6716))
// CS Name: ::UnityEngine.InputSystem.Composites::ButtonWithTwoModifiers*
class CORDL_TYPE ButtonWithTwoModifiers : public ::UnityEngine::InputSystem::InputBindingComposite_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::InputSystem::InputBindingComposite_1<float_t>)]{};

/// @brief Field modifier1 offset 0x10
 __declspec(property(get=__get_modifier1, put=__set_modifier1)) int32_t  modifier1;

/// @brief Field modifier2 offset 0x14
 __declspec(property(get=__get_modifier2, put=__set_modifier2)) int32_t  modifier2;

/// @brief Field button offset 0x18
 __declspec(property(get=__get_button, put=__set_button)) int32_t  button;

/// @brief Field overrideModifiersNeedToBePressedFirst offset 0x1c
 __declspec(property(get=__get_overrideModifiersNeedToBePressedFirst, put=__set_overrideModifiersNeedToBePressedFirst)) bool  overrideModifiersNeedToBePressedFirst;

constexpr void __set_modifier1(int32_t  value) ;

constexpr int32_t& __get_modifier1() ;

constexpr int32_t const& __get_modifier1() const;

constexpr void __set_modifier2(int32_t  value) ;

constexpr int32_t& __get_modifier2() ;

constexpr int32_t const& __get_modifier2() const;

constexpr void __set_button(int32_t  value) ;

constexpr int32_t& __get_button() ;

constexpr int32_t const& __get_button() const;

constexpr void __set_overrideModifiersNeedToBePressedFirst(bool  value) ;

constexpr bool& __get_overrideModifiersNeedToBePressedFirst() ;

constexpr bool const& __get_overrideModifiersNeedToBePressedFirst() const;

/// @brief Method ReadValue addr 0x2a5ae64 size 0x70 virtual true final false
inline float_t ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

/// @brief Method ModifiersArePressed addr 0x2a5aed4 size 0xb4 virtual false final false
inline bool ModifiersArePressed(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

/// @brief Method EvaluateMagnitude addr 0x2a5af88 size 0xc virtual true final false
inline float_t EvaluateMagnitude(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

/// @brief Method FinishSetup addr 0x2a5af94 size 0x90 virtual true final false
inline void FinishSetup(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

static inline ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers* New_ctor() ;

/// @brief Method .ctor addr 0x2a5b024 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ButtonWithTwoModifiers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ButtonWithTwoModifiers(ButtonWithTwoModifiers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ButtonWithTwoModifiers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ButtonWithTwoModifiers(ButtonWithTwoModifiers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ButtonWithTwoModifiers()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Composites
NEED_NO_BOX(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers*, "UnityEngine.InputSystem.Composites", "ButtonWithTwoModifiers");
