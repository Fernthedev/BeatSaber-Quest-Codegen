#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlyingCar)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingCar;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlyingCar);
// Type: ::FlyingCar
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4986))
// CS Name: ::FlyingCar*
class CORDL_TYPE FlyingCar : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _startZ offset 0x18
 __declspec(property(get=__get__startZ, put=__set__startZ)) float_t  _startZ;

/// @brief Field _endZ offset 0x1c
 __declspec(property(get=__get__endZ, put=__set__endZ)) float_t  _endZ;

/// @brief Field _speed offset 0x20
 __declspec(property(get=__get__speed, put=__set__speed)) float_t  _speed;

/// @brief Field _progress offset 0x24
 __declspec(property(get=__get__progress, put=__set__progress)) float_t  _progress;

/// @brief Field _pos offset 0x28
 __declspec(property(get=__get__pos, put=__set__pos)) ::UnityEngine::Vector3  _pos;

constexpr void __set__startZ(float_t  value) ;

constexpr float_t& __get__startZ() ;

constexpr float_t const& __get__startZ() const;

constexpr void __set__endZ(float_t  value) ;

constexpr float_t& __get__endZ() ;

constexpr float_t const& __get__endZ() const;

constexpr void __set__speed(float_t  value) ;

constexpr float_t& __get__speed() ;

constexpr float_t const& __get__speed() const;

constexpr void __set__progress(float_t  value) ;

constexpr float_t& __get__progress() ;

constexpr float_t const& __get__progress() const;

constexpr void __set__pos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__pos() ;

constexpr ::UnityEngine::Vector3 const& __get__pos() const;

/// @brief Method Start addr 0x23b4580 size 0x44 virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x23b4608 size 0x60 virtual false final false
inline void Update() ;

/// @brief Method UpdatePos addr 0x23b45c4 size 0x44 virtual false final false
inline void UpdatePos() ;

static inline ::GlobalNamespace::FlyingCar* New_ctor() ;

/// @brief Method .ctor addr 0x23b4668 size 0x1c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FlyingCar", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlyingCar(FlyingCar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlyingCar", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlyingCar(FlyingCar const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FlyingCar()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingCar, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlyingCar);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingCar*, "", "FlyingCar");
