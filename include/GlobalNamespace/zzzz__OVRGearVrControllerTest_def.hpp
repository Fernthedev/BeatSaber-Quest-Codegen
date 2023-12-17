#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRGearVrControllerTest)
// Forward declare root types
namespace GlobalNamespace {
class OVRGearVrControllerTest;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGearVrControllerTest);
// Type: ::OVRGearVrControllerTest
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8109))
// CS Name: ::OVRGearVrControllerTest*
class CORDL_TYPE OVRGearVrControllerTest : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::MonoBehaviour)]{};

static inline ::GlobalNamespace::OVRGearVrControllerTest* New_ctor() ;

/// @brief Method .ctor addr 0x27ac7dc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRGearVrControllerTest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRGearVrControllerTest(OVRGearVrControllerTest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRGearVrControllerTest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRGearVrControllerTest(OVRGearVrControllerTest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRGearVrControllerTest()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGearVrControllerTest, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGearVrControllerTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGearVrControllerTest*, "", "OVRGearVrControllerTest");
