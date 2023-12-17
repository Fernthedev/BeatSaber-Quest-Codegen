#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CuttableBySaber_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BoxCuttableBySaber)
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class BoxCollider;
}
// Forward declare root types
namespace GlobalNamespace {
class BoxCuttableBySaber;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BoxCuttableBySaber);
// Type: ::BoxCuttableBySaber
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5286))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5284))
// CS Name: ::BoxCuttableBySaber*
class CORDL_TYPE BoxCuttableBySaber : public ::GlobalNamespace::CuttableBySaber {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::CuttableBySaber)]{};

/// @brief Field _collider offset 0x20
 __declspec(property(get=__get__collider, put=__set__collider)) ::UnityEngine::BoxCollider*  _collider;

/// @brief Field _canBeCut offset 0x28
 __declspec(property(get=__get__canBeCut, put=__set__canBeCut)) bool  _canBeCut;

/// @brief Field _radius offset 0x2c
 __declspec(property(get=__get__radius, put=__set__radius)) float_t  _radius;

 __declspec(property(get=get_radius)) float_t  radius;

 __declspec(property(get=get_canBeCut, put=set_canBeCut)) bool  canBeCut;

 __declspec(property(get=get_colliderSize, put=set_colliderSize)) ::UnityEngine::Vector3  colliderSize;

 __declspec(property(get=get_colliderCenter, put=set_colliderCenter)) ::UnityEngine::Vector3  colliderCenter;

constexpr void __set__collider(::UnityEngine::BoxCollider*  value) ;

constexpr ::UnityEngine::BoxCollider* __get__collider() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::BoxCollider*> __get__collider() const;

constexpr void __set__canBeCut(bool  value) ;

constexpr bool& __get__canBeCut() ;

constexpr bool const& __get__canBeCut() const;

constexpr void __set__radius(float_t  value) ;

constexpr float_t& __get__radius() ;

constexpr float_t const& __get__radius() const;

/// @brief Method get_radius addr 0x2262200 size 0x8 virtual true final false
inline float_t get_radius() ;

/// @brief Method set_canBeCut addr 0x2262208 size 0x38 virtual true final false
inline void set_canBeCut(bool  value) ;

/// @brief Method get_canBeCut addr 0x2262240 size 0x8 virtual true final false
inline bool get_canBeCut() ;

/// @brief Method set_colliderSize addr 0x2262248 size 0x28 virtual false final false
inline void set_colliderSize(::UnityEngine::Vector3  value) ;

/// @brief Method get_colliderSize addr 0x22622d8 size 0x1c virtual false final false
inline ::UnityEngine::Vector3 get_colliderSize() ;

/// @brief Method set_colliderCenter addr 0x22622f4 size 0x1c virtual false final false
inline void set_colliderCenter(::UnityEngine::Vector3  value) ;

/// @brief Method get_colliderCenter addr 0x2262310 size 0x1c virtual false final false
inline ::UnityEngine::Vector3 get_colliderCenter() ;

/// @brief Method Awake addr 0x226232c size 0x30 virtual false final false
inline void Awake() ;

/// @brief Method Cut addr 0x226235c size 0x34 virtual true final false
inline void Cut(::GlobalNamespace::Saber*  saber, ::UnityEngine::Vector3  cutPoint, ::UnityEngine::Quaternion  orientation, ::UnityEngine::Vector3  cutDirVec) ;

/// @brief Method SetColliderCenterAndSize addr 0x22623bc size 0x58 virtual false final false
inline void SetColliderCenterAndSize(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  size) ;

/// @brief Method RefreshRadius addr 0x2262270 size 0x68 virtual false final false
inline void RefreshRadius() ;

static inline ::GlobalNamespace::BoxCuttableBySaber* New_ctor() ;

/// @brief Method .ctor addr 0x2262414 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BoxCuttableBySaber", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BoxCuttableBySaber(BoxCuttableBySaber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoxCuttableBySaber", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoxCuttableBySaber(BoxCuttableBySaber const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BoxCuttableBySaber()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BoxCuttableBySaber, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BoxCuttableBySaber);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BoxCuttableBySaber*, "", "BoxCuttableBySaber");
