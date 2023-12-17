#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlyingGameHUDRotation)
namespace GlobalNamespace {
class EnvironmentSpawnRotation;
}
namespace GlobalNamespace {
class BeatLineManager;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingGameHUDRotation;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlyingGameHUDRotation);
// Type: ::FlyingGameHUDRotation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4987))
// CS Name: ::FlyingGameHUDRotation*
class CORDL_TYPE FlyingGameHUDRotation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _smooth offset 0x18
 __declspec(property(get=__get__smooth, put=__set__smooth)) float_t  _smooth;

/// @brief Field _beatLineManager offset 0x20
 __declspec(property(get=__get__beatLineManager, put=__set__beatLineManager)) ::GlobalNamespace::BeatLineManager*  _beatLineManager;

/// @brief Field _environmentSpawnRotation offset 0x28
 __declspec(property(get=__get__environmentSpawnRotation, put=__set__environmentSpawnRotation)) ::GlobalNamespace::EnvironmentSpawnRotation*  _environmentSpawnRotation;

/// @brief Field _prevYAngle offset 0x30
 __declspec(property(get=__get__prevYAngle, put=__set__prevYAngle)) float_t  _prevYAngle;

/// @brief Field _yAngle offset 0x34
 __declspec(property(get=__get__yAngle, put=__set__yAngle)) float_t  _yAngle;

constexpr void __set__smooth(float_t  value) ;

constexpr float_t& __get__smooth() ;

constexpr float_t const& __get__smooth() const;

constexpr void __set__beatLineManager(::GlobalNamespace::BeatLineManager*  value) ;

constexpr ::GlobalNamespace::BeatLineManager* __get__beatLineManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatLineManager*> __get__beatLineManager() const;

constexpr void __set__environmentSpawnRotation(::GlobalNamespace::EnvironmentSpawnRotation*  value) ;

constexpr ::GlobalNamespace::EnvironmentSpawnRotation* __get__environmentSpawnRotation() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentSpawnRotation*> __get__environmentSpawnRotation() const;

constexpr void __set__prevYAngle(float_t  value) ;

constexpr float_t& __get__prevYAngle() ;

constexpr float_t const& __get__prevYAngle() const;

constexpr void __set__yAngle(float_t  value) ;

constexpr float_t& __get__yAngle() ;

constexpr float_t const& __get__yAngle() const;

/// @brief Method Start addr 0x23b4684 size 0xdc virtual false final false
inline void Start() ;

/// @brief Method FixedUpdate addr 0x23b4760 size 0x178 virtual false final false
inline void FixedUpdate() ;

/// @brief Method LateUpdate addr 0x23b48d8 size 0x88 virtual false final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::FlyingGameHUDRotation* New_ctor() ;

/// @brief Method .ctor addr 0x23b4960 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FlyingGameHUDRotation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlyingGameHUDRotation(FlyingGameHUDRotation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlyingGameHUDRotation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlyingGameHUDRotation(FlyingGameHUDRotation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FlyingGameHUDRotation()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingGameHUDRotation, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlyingGameHUDRotation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingGameHUDRotation*, "", "FlyingGameHUDRotation");
