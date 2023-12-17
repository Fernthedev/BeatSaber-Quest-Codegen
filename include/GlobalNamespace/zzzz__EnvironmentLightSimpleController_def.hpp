#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentLightSimpleController)
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentLightSimpleController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentLightSimpleController);
// Type: ::EnvironmentLightSimpleController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4866))
// CS Name: ::EnvironmentLightSimpleController*
class CORDL_TYPE EnvironmentLightSimpleController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _color offset 0x18
 __declspec(property(get=__get__color, put=__set__color)) ::UnityEngine::Color  _color;

/// @brief Field _colorId offset 0x28
 __declspec(property(get=__get__colorId, put=__set__colorId)) int32_t  _colorId;

/// @brief Field _lightManager offset 0x30
 __declspec(property(get=__get__lightManager, put=__set__lightManager)) ::GlobalNamespace::LightWithIdManager*  _lightManager;

constexpr void __set__color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color() ;

constexpr ::UnityEngine::Color const& __get__color() const;

constexpr void __set__colorId(int32_t  value) ;

constexpr int32_t& __get__colorId() ;

constexpr int32_t const& __get__colorId() const;

constexpr void __set__lightManager(::GlobalNamespace::LightWithIdManager*  value) ;

constexpr ::GlobalNamespace::LightWithIdManager* __get__lightManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightWithIdManager*> __get__lightManager() const;

/// @brief Method LateUpdate addr 0x239a28c size 0x2c virtual false final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::EnvironmentLightSimpleController* New_ctor() ;

/// @brief Method .ctor addr 0x239a2b8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentLightSimpleController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentLightSimpleController(EnvironmentLightSimpleController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentLightSimpleController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentLightSimpleController(EnvironmentLightSimpleController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnvironmentLightSimpleController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentLightSimpleController, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentLightSimpleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentLightSimpleController*, "", "EnvironmentLightSimpleController");
