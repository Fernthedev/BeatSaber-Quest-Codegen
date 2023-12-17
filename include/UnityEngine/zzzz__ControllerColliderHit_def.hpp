#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerColliderHit)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class CharacterController;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class ControllerColliderHit;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ControllerColliderHit);
// Type: UnityEngine::ControllerColliderHit
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15501))
// CS Name: ::UnityEngine::ControllerColliderHit*
class CORDL_TYPE ControllerColliderHit : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field m_Controller offset 0x10
 __declspec(property(get=__get_m_Controller, put=__set_m_Controller)) ::UnityEngine::CharacterController*  m_Controller;

/// @brief Field m_Collider offset 0x18
 __declspec(property(get=__get_m_Collider, put=__set_m_Collider)) ::UnityEngine::Collider*  m_Collider;

/// @brief Field m_Point offset 0x20
 __declspec(property(get=__get_m_Point, put=__set_m_Point)) ::UnityEngine::Vector3  m_Point;

/// @brief Field m_Normal offset 0x2c
 __declspec(property(get=__get_m_Normal, put=__set_m_Normal)) ::UnityEngine::Vector3  m_Normal;

/// @brief Field m_MoveDirection offset 0x38
 __declspec(property(get=__get_m_MoveDirection, put=__set_m_MoveDirection)) ::UnityEngine::Vector3  m_MoveDirection;

/// @brief Field m_MoveLength offset 0x44
 __declspec(property(get=__get_m_MoveLength, put=__set_m_MoveLength)) float_t  m_MoveLength;

/// @brief Field m_Push offset 0x48
 __declspec(property(get=__get_m_Push, put=__set_m_Push)) int32_t  m_Push;

constexpr void __set_m_Controller(::UnityEngine::CharacterController*  value) ;

constexpr ::UnityEngine::CharacterController* __get_m_Controller() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CharacterController*> __get_m_Controller() const;

constexpr void __set_m_Collider(::UnityEngine::Collider*  value) ;

constexpr ::UnityEngine::Collider* __get_m_Collider() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> __get_m_Collider() const;

constexpr void __set_m_Point(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Point() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Point() const;

constexpr void __set_m_Normal(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Normal() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Normal() const;

constexpr void __set_m_MoveDirection(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_MoveDirection() ;

constexpr ::UnityEngine::Vector3 const& __get_m_MoveDirection() const;

constexpr void __set_m_MoveLength(float_t  value) ;

constexpr float_t& __get_m_MoveLength() ;

constexpr float_t const& __get_m_MoveLength() const;

constexpr void __set_m_Push(int32_t  value) ;

constexpr int32_t& __get_m_Push() ;

constexpr int32_t const& __get_m_Push() const;

// Ctor Parameters [CppParam { name: "", ty: "ControllerColliderHit", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerColliderHit(ControllerColliderHit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerColliderHit", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerColliderHit(ControllerColliderHit const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ControllerColliderHit()  = default;
public:


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ControllerColliderHit, 0x50>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ControllerColliderHit);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ControllerColliderHit*, "UnityEngine", "ControllerColliderHit");
