#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassLightsUpdateSystem)
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassLightsUpdateSystem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassLightsUpdateSystem);
// Type: ::BloomPrePassLightsUpdateSystem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14475))
// CS Name: ::BloomPrePassLightsUpdateSystem*
class CORDL_TYPE BloomPrePassLightsUpdateSystem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Method LateUpdate addr 0x2106e78 size 0x2f0 virtual false final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::BloomPrePassLightsUpdateSystem* New_ctor() ;

/// @brief Method .ctor addr 0x2107168 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLightsUpdateSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomPrePassLightsUpdateSystem(BloomPrePassLightsUpdateSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLightsUpdateSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomPrePassLightsUpdateSystem(BloomPrePassLightsUpdateSystem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomPrePassLightsUpdateSystem()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassLightsUpdateSystem, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassLightsUpdateSystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassLightsUpdateSystem*, "", "BloomPrePassLightsUpdateSystem");
