#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScaleVector3Processor)
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class ScaleVector3Processor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::ScaleVector3Processor);
// Type: UnityEngine.InputSystem.Processors::ScaleVector3Processor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6236)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 412 }), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6592))
// CS Name: ::UnityEngine.InputSystem.Processors::ScaleVector3Processor*
class CORDL_TYPE ScaleVector3Processor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3>)]{};

/// @brief Field x offset 0x10
 __declspec(property(get=__get_x, put=__set_x)) float_t  x;

/// @brief Field y offset 0x14
 __declspec(property(get=__get_y, put=__set_y)) float_t  y;

/// @brief Field z offset 0x18
 __declspec(property(get=__get_z, put=__set_z)) float_t  z;

constexpr void __set_x(float_t  value) ;

constexpr float_t& __get_x() ;

constexpr float_t const& __get_x() const;

constexpr void __set_y(float_t  value) ;

constexpr float_t& __get_y() ;

constexpr float_t const& __get_y() const;

constexpr void __set_z(float_t  value) ;

constexpr float_t& __get_z() ;

constexpr float_t const& __get_z() const;

/// @brief Method Process addr 0x2af9cec size 0x18 virtual true final false
inline ::UnityEngine::Vector3 Process(::UnityEngine::Vector3  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ToString addr 0x2af9d04 size 0xc4 virtual true final false
inline ::StringW ToString() ;

static inline ::UnityEngine::InputSystem::Processors::ScaleVector3Processor* New_ctor() ;

/// @brief Method .ctor addr 0x2af9dc8 size 0x58 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ScaleVector3Processor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleVector3Processor(ScaleVector3Processor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleVector3Processor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleVector3Processor(ScaleVector3Processor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ScaleVector3Processor()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::ScaleVector3Processor, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::ScaleVector3Processor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::ScaleVector3Processor*, "UnityEngine.InputSystem.Processors", "ScaleVector3Processor");
