#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NormalizeVector2Processor)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class NormalizeVector2Processor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::NormalizeVector2Processor);
// Type: UnityEngine.InputSystem.Processors::NormalizeVector2Processor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 411 }), TypeDefinitionIndex(TypeDefinitionIndex(6236))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6588))
// CS Name: ::UnityEngine.InputSystem.Processors::NormalizeVector2Processor*
class CORDL_TYPE NormalizeVector2Processor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2>)]{};

/// @brief Method Process addr 0x2af9878 size 0xb4 virtual true final false
inline ::UnityEngine::Vector2 Process(::UnityEngine::Vector2  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ToString addr 0x2af992c size 0x40 virtual true final false
inline ::StringW ToString() ;

static inline ::UnityEngine::InputSystem::Processors::NormalizeVector2Processor* New_ctor() ;

/// @brief Method .ctor addr 0x2af996c size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NormalizeVector2Processor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NormalizeVector2Processor(NormalizeVector2Processor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NormalizeVector2Processor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NormalizeVector2Processor(NormalizeVector2Processor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NormalizeVector2Processor()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::NormalizeVector2Processor, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::NormalizeVector2Processor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::NormalizeVector2Processor*, "UnityEngine.InputSystem.Processors", "NormalizeVector2Processor");
