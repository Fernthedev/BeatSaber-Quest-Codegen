#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Processors/zzzz__CompensateRotationProcessor_def.hpp"
CORDL_MODULE_EXPORT(AndroidCompensateRotationProcessor)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
class AndroidCompensateRotationProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor);
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidCompensateRotationProcessor
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6583))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6459))
// CS Name: ::UnityEngine.InputSystem.Android.LowLevel::AndroidCompensateRotationProcessor*
class CORDL_TYPE AndroidCompensateRotationProcessor : public ::UnityEngine::InputSystem::Processors::CompensateRotationProcessor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::InputSystem::Processors::CompensateRotationProcessor)]{};

/// @brief Method Process addr 0x2ae6f64 size 0x34 virtual true final false
inline ::UnityEngine::Quaternion Process(::UnityEngine::Quaternion  value, ::UnityEngine::InputSystem::InputControl*  control) ;

static inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor* New_ctor() ;

/// @brief Method .ctor addr 0x2ae6f98 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AndroidCompensateRotationProcessor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidCompensateRotationProcessor(AndroidCompensateRotationProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidCompensateRotationProcessor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidCompensateRotationProcessor(AndroidCompensateRotationProcessor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AndroidCompensateRotationProcessor()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor*, "UnityEngine.InputSystem.Android.LowLevel", "AndroidCompensateRotationProcessor");
