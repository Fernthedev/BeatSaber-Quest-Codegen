#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__HumiditySensor_def.hpp"
CORDL_MODULE_EXPORT(AndroidRelativeHumidity)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidRelativeHumidity;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidRelativeHumidity);
// Type: UnityEngine.InputSystem.Android::AndroidRelativeHumidity
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6284))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6441))
// CS Name: ::UnityEngine.InputSystem.Android::AndroidRelativeHumidity*
class CORDL_TYPE AndroidRelativeHumidity : public ::UnityEngine::InputSystem::HumiditySensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x160};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x160 - sizeof(::UnityEngine::InputSystem::HumiditySensor)]{};

static inline ::UnityEngine::InputSystem::Android::AndroidRelativeHumidity* New_ctor() ;

/// @brief Method .ctor addr 0x2ae5a10 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AndroidRelativeHumidity", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidRelativeHumidity(AndroidRelativeHumidity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidRelativeHumidity", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidRelativeHumidity(AndroidRelativeHumidity const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AndroidRelativeHumidity()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidRelativeHumidity, 0x160>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidRelativeHumidity);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidRelativeHumidity*, "UnityEngine.InputSystem.Android", "AndroidRelativeHumidity");
