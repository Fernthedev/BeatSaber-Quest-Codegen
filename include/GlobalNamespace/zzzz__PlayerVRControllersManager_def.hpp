#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlayerVRControllersManager)
namespace GlobalNamespace {
class VRController;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerVRControllersManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerVRControllersManager);
// Type: ::PlayerVRControllersManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5278))
// CS Name: ::PlayerVRControllersManager*
class CORDL_TYPE PlayerVRControllersManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _leftHandVRController offset 0x18
 __declspec(property(get=__get__leftHandVRController, put=__set__leftHandVRController)) ::GlobalNamespace::VRController*  _leftHandVRController;

/// @brief Field _rightHandVRController offset 0x20
 __declspec(property(get=__get__rightHandVRController, put=__set__rightHandVRController)) ::GlobalNamespace::VRController*  _rightHandVRController;

 __declspec(property(get=get_leftHandVRController)) ::GlobalNamespace::VRController*  leftHandVRController;

 __declspec(property(get=get_rightHandVRController)) ::GlobalNamespace::VRController*  rightHandVRController;

constexpr void __set__leftHandVRController(::GlobalNamespace::VRController*  value) ;

constexpr ::GlobalNamespace::VRController* __get__leftHandVRController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRController*> __get__leftHandVRController() const;

constexpr void __set__rightHandVRController(::GlobalNamespace::VRController*  value) ;

constexpr ::GlobalNamespace::VRController* __get__rightHandVRController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRController*> __get__rightHandVRController() const;

/// @brief Method get_leftHandVRController addr 0x22610f4 size 0x8 virtual false final false
inline ::GlobalNamespace::VRController* get_leftHandVRController() ;

/// @brief Method get_rightHandVRController addr 0x22610fc size 0x8 virtual false final false
inline ::GlobalNamespace::VRController* get_rightHandVRController() ;

/// @brief Method DisableAllVRControllers addr 0x2261104 size 0x38 virtual false final false
inline void DisableAllVRControllers() ;

/// @brief Method EnableAllVRControllers addr 0x226113c size 0x38 virtual false final false
inline void EnableAllVRControllers() ;

static inline ::GlobalNamespace::PlayerVRControllersManager* New_ctor() ;

/// @brief Method .ctor addr 0x2261174 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PlayerVRControllersManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerVRControllersManager(PlayerVRControllersManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerVRControllersManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerVRControllersManager(PlayerVRControllersManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlayerVRControllersManager()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerVRControllersManager, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerVRControllersManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerVRControllersManager*, "", "PlayerVRControllersManager");
