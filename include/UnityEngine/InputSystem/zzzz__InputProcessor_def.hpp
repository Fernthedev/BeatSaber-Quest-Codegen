#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputProcessor)
namespace UnityEngine::InputSystem::Utilities {
struct TypeTable;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputProcessor);
// Type: UnityEngine.InputSystem::InputProcessor
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6235))
// CS Name: ::UnityEngine.InputSystem::InputProcessor*
class CORDL_TYPE InputProcessor : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_Processors(::UnityEngine::InputSystem::Utilities::TypeTable  value) ;

static inline ::UnityEngine::InputSystem::Utilities::TypeTable getStaticF_s_Processors() ;

/// @brief Method ProcessAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ProcessAsObject(::System::Object*  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method Process addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Process(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method GetValueTypeFromType addr 0x2a6a5e8 size 0xf4 virtual false final false
static inline ::System::Type* GetValueTypeFromType(::System::Type*  processorType) ;

static inline ::UnityEngine::InputSystem::InputProcessor* New_ctor() ;

/// @brief Method .ctor addr 0x2a6a6dc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputProcessor(InputProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputProcessor(InputProcessor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputProcessor()  = default;
public:


// Fields

// Static field s_Processors


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputProcessor, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::InputProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputProcessor*, "UnityEngine.InputSystem", "InputProcessor");
