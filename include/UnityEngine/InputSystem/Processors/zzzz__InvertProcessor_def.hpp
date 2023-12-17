#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InvertProcessor)
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Processors {
class InvertProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Processors::InvertProcessor);
// Type: UnityEngine.InputSystem.Processors::InvertProcessor
namespace UnityEngine::InputSystem::Processors {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6236)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 391 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6584))
// CS Name: ::UnityEngine.InputSystem.Processors::InvertProcessor*
class CORDL_TYPE InvertProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::InputProcessor_1<float_t>)]{};

/// @brief Method Process addr 0x2af9354 size 0x8 virtual true final false
inline float_t Process(float_t  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ToString addr 0x2af935c size 0x40 virtual true final false
inline ::StringW ToString() ;

static inline ::UnityEngine::InputSystem::Processors::InvertProcessor* New_ctor() ;

/// @brief Method .ctor addr 0x2af939c size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InvertProcessor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvertProcessor(InvertProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvertProcessor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvertProcessor(InvertProcessor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvertProcessor()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Processors::InvertProcessor, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Processors
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::InvertProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::InvertProcessor*, "UnityEngine.InputSystem.Processors", "InvertProcessor");
