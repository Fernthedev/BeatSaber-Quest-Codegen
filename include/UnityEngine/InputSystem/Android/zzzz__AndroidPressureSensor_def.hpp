#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__PressureSensor_def.hpp"
CORDL_MODULE_EXPORT(AndroidPressureSensor)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidPressureSensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidPressureSensor);
// Type: UnityEngine.InputSystem.Android::AndroidPressureSensor
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6282))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6436))
// CS Name: ::UnityEngine.InputSystem.Android::AndroidPressureSensor*
class CORDL_TYPE AndroidPressureSensor : public ::UnityEngine::InputSystem::PressureSensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x160};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x160 - sizeof(::UnityEngine::InputSystem::PressureSensor)]{};

static inline ::UnityEngine::InputSystem::Android::AndroidPressureSensor* New_ctor() ;

/// @brief Method .ctor addr 0x2ae59e8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AndroidPressureSensor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidPressureSensor(AndroidPressureSensor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidPressureSensor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidPressureSensor(AndroidPressureSensor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AndroidPressureSensor()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidPressureSensor, 0x160>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidPressureSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidPressureSensor*, "UnityEngine.InputSystem.Android", "AndroidPressureSensor");
