#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScaleVector2Processor)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class ScaleVector2Processor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::ScaleVector2Processor);
// Type: UnityEngine.InputSystem.Processors::ScaleVector2Processor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 411 }), TypeDefinitionIndex(TypeDefinitionIndex(6236)), TypeDefinitionIndex(TypeDefinitionIndex(10243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6591))
// CS Name: ::UnityEngine.InputSystem.Processors::ScaleVector2Processor*
class CORDL_TYPE ScaleVector2Processor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2>)]{};

/// @brief Field x offset 0x10
 __declspec(property(get=__get_x, put=__set_x)) float_t  x;

/// @brief Field y offset 0x14
 __declspec(property(get=__get_y, put=__set_y)) float_t  y;

constexpr void __set_x(float_t  value) ;

constexpr float_t& __get_x() ;

constexpr float_t const& __get_x() const;

constexpr void __set_y(float_t  value) ;

constexpr float_t& __get_y() ;

constexpr float_t const& __get_y() const;

/// @brief Method Process addr 0x2af9bec size 0x10 virtual true final false
inline ::UnityEngine::Vector2 Process(::UnityEngine::Vector2  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ToString addr 0x2af9bfc size 0xa0 virtual true final false
inline ::StringW ToString() ;

static inline ::UnityEngine::InputSystem::Processors::ScaleVector2Processor* New_ctor() ;

/// @brief Method .ctor addr 0x2af9c9c size 0x50 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ScaleVector2Processor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleVector2Processor(ScaleVector2Processor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleVector2Processor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleVector2Processor(ScaleVector2Processor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ScaleVector2Processor()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::ScaleVector2Processor, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::ScaleVector2Processor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::ScaleVector2Processor*, "UnityEngine.InputSystem.Processors", "ScaleVector2Processor");
