#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SonyFirstPersonFlyingControllerHandler)
namespace GlobalNamespace {
class FirstPersonFlyingController;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyFirstPersonFlyingControllerHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyFirstPersonFlyingControllerHandler);
// Type: ::SonyFirstPersonFlyingControllerHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5837))
// CS Name: ::SonyFirstPersonFlyingControllerHandler*
class CORDL_TYPE SonyFirstPersonFlyingControllerHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _fpsFlying offset 0x18
 __declspec(property(get=__get__fpsFlying, put=__set__fpsFlying)) ::GlobalNamespace::FirstPersonFlyingController*  _fpsFlying;

constexpr void __set__fpsFlying(::GlobalNamespace::FirstPersonFlyingController*  value) ;

constexpr ::GlobalNamespace::FirstPersonFlyingController* __get__fpsFlying() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FirstPersonFlyingController*> __get__fpsFlying() const;

static inline ::GlobalNamespace::SonyFirstPersonFlyingControllerHandler* New_ctor() ;

/// @brief Method .ctor addr 0x22ee8bc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SonyFirstPersonFlyingControllerHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SonyFirstPersonFlyingControllerHandler(SonyFirstPersonFlyingControllerHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SonyFirstPersonFlyingControllerHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SonyFirstPersonFlyingControllerHandler(SonyFirstPersonFlyingControllerHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SonyFirstPersonFlyingControllerHandler()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyFirstPersonFlyingControllerHandler, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyFirstPersonFlyingControllerHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyFirstPersonFlyingControllerHandler*, "", "SonyFirstPersonFlyingControllerHandler");
