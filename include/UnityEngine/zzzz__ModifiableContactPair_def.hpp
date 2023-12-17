#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModifiableContactPair)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct ModifiableContactPair;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ModifiableContactPair);
// Type: UnityEngine::ModifiableContactPair
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15485))
// CS Name: ::UnityEngine::ModifiableContactPair
struct CORDL_TYPE ModifiableContactPair : public ::bs_hook::ValueTypeWrapper<0x68> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field actor offset 0x0
 __declspec(property(get=__get_actor, put=__set_actor)) ::cordl_internals::intptr_t  actor;

/// @brief Field otherActor offset 0x8
 __declspec(property(get=__get_otherActor, put=__set_otherActor)) ::cordl_internals::intptr_t  otherActor;

/// @brief Field shape offset 0x10
 __declspec(property(get=__get_shape, put=__set_shape)) ::cordl_internals::intptr_t  shape;

/// @brief Field otherShape offset 0x18
 __declspec(property(get=__get_otherShape, put=__set_otherShape)) ::cordl_internals::intptr_t  otherShape;

/// @brief Field rotation offset 0x20
 __declspec(property(get=__get_rotation, put=__set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief Field position offset 0x30
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector3  position;

/// @brief Field otherRotation offset 0x3c
 __declspec(property(get=__get_otherRotation, put=__set_otherRotation)) ::UnityEngine::Quaternion  otherRotation;

/// @brief Field otherPosition offset 0x4c
 __declspec(property(get=__get_otherPosition, put=__set_otherPosition)) ::UnityEngine::Vector3  otherPosition;

/// @brief Field numContacts offset 0x58
 __declspec(property(get=__get_numContacts, put=__set_numContacts)) int32_t  numContacts;

/// @brief Field contacts offset 0x60
 __declspec(property(get=__get_contacts, put=__set_contacts)) ::cordl_internals::intptr_t  contacts;

constexpr void __set_actor(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_actor() ;

constexpr ::cordl_internals::intptr_t const& __get_actor() const;

constexpr void __set_otherActor(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_otherActor() ;

constexpr ::cordl_internals::intptr_t const& __get_otherActor() const;

constexpr void __set_shape(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_shape() ;

constexpr ::cordl_internals::intptr_t const& __get_shape() const;

constexpr void __set_otherShape(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_otherShape() ;

constexpr ::cordl_internals::intptr_t const& __get_otherShape() const;

constexpr void __set_rotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_rotation() ;

constexpr ::UnityEngine::Quaternion const& __get_rotation() const;

constexpr void __set_position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_position() ;

constexpr ::UnityEngine::Vector3 const& __get_position() const;

constexpr void __set_otherRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_otherRotation() ;

constexpr ::UnityEngine::Quaternion const& __get_otherRotation() const;

constexpr void __set_otherPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_otherPosition() ;

constexpr ::UnityEngine::Vector3 const& __get_otherPosition() const;

constexpr void __set_numContacts(int32_t  value) ;

constexpr int32_t& __get_numContacts() ;

constexpr int32_t const& __get_numContacts() const;

constexpr void __set_contacts(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_contacts() ;

constexpr ::cordl_internals::intptr_t const& __get_contacts() const;

// Ctor Parameters [CppParam { name: "actor", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "otherActor", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "shape", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "otherShape", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "otherRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "otherPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "numContacts", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "contacts", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ModifiableContactPair(::cordl_internals::intptr_t  actor, ::cordl_internals::intptr_t  otherActor, ::cordl_internals::intptr_t  shape, ::cordl_internals::intptr_t  otherShape, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  otherRotation, ::UnityEngine::Vector3  otherPosition, int32_t  numContacts, ::cordl_internals::intptr_t  contacts) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ModifiableContactPair(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x68>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ModifiableContactPair()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ModifiableContactPair, 0x68>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ModifiableContactPair, "UnityEngine", "ModifiableContactPair");
