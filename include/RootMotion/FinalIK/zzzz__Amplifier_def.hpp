#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__OffsetModifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Amplifier)
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace RootMotion::FinalIK {
class __Amplifier__Body;
}
namespace RootMotion::FinalIK {
class IKSolverFullBodyBiped;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class __Amplifier__Body__EffectorLink;
}
// Forward declare root types
namespace GlobalNamespace {
class __Amplifier__Body__EffectorLink;
}
namespace RootMotion::FinalIK {
class Amplifier;
}
namespace RootMotion::FinalIK {
class __Amplifier__Body;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__Amplifier__Body__EffectorLink);
MARK_REF_PTR_T(::RootMotion::FinalIK::Amplifier);
MARK_REF_PTR_T(::RootMotion::FinalIK::__Amplifier__Body);
// Type: ::EffectorLink
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12633))
// CS Name: ::Amplifier::Body::EffectorLink*
class CORDL_TYPE __Amplifier__Body__EffectorLink : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field effector offset 0x10
 __declspec(property(get=__get_effector, put=__set_effector)) ::RootMotion::FinalIK::FullBodyBipedEffector  effector;

/// @brief Field weight offset 0x14
 __declspec(property(get=__get_weight, put=__set_weight)) float_t  weight;

constexpr void __set_effector(::RootMotion::FinalIK::FullBodyBipedEffector  value) ;

constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& __get_effector() ;

constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& __get_effector() const;

constexpr void __set_weight(float_t  value) ;

constexpr float_t& __get_weight() ;

constexpr float_t const& __get_weight() const;

static inline ::GlobalNamespace::__Amplifier__Body__EffectorLink* New_ctor() ;

/// @brief Method .ctor addr 0x1294a24 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__Amplifier__Body__EffectorLink", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Amplifier__Body__EffectorLink(__Amplifier__Body__EffectorLink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Amplifier__Body__EffectorLink", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Amplifier__Body__EffectorLink(__Amplifier__Body__EffectorLink const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Amplifier__Body__EffectorLink()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Amplifier__Body__EffectorLink, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Body
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12634))
// CS Name: ::Amplifier::Body*
class CORDL_TYPE __Amplifier__Body : public ::System::Object {
public:
// Declarations
using EffectorLink = ::GlobalNamespace::__Amplifier__Body__EffectorLink;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field transform offset 0x10
 __declspec(property(get=__get_transform, put=__set_transform)) ::UnityEngine::Transform*  transform;

/// @brief Field relativeTo offset 0x18
 __declspec(property(get=__get_relativeTo, put=__set_relativeTo)) ::UnityEngine::Transform*  relativeTo;

/// @brief Field effectorLinks offset 0x20
 __declspec(property(get=__get_effectorLinks, put=__set_effectorLinks)) ::ArrayW<::GlobalNamespace::__Amplifier__Body__EffectorLink*,::Array<::GlobalNamespace::__Amplifier__Body__EffectorLink*>*>  effectorLinks;

/// @brief Field verticalWeight offset 0x28
 __declspec(property(get=__get_verticalWeight, put=__set_verticalWeight)) float_t  verticalWeight;

/// @brief Field horizontalWeight offset 0x2c
 __declspec(property(get=__get_horizontalWeight, put=__set_horizontalWeight)) float_t  horizontalWeight;

/// @brief Field speed offset 0x30
 __declspec(property(get=__get_speed, put=__set_speed)) float_t  speed;

/// @brief Field lastRelativePos offset 0x34
 __declspec(property(get=__get_lastRelativePos, put=__set_lastRelativePos)) ::UnityEngine::Vector3  lastRelativePos;

/// @brief Field smoothDelta offset 0x40
 __declspec(property(get=__get_smoothDelta, put=__set_smoothDelta)) ::UnityEngine::Vector3  smoothDelta;

/// @brief Field firstUpdate offset 0x4c
 __declspec(property(get=__get_firstUpdate, put=__set_firstUpdate)) bool  firstUpdate;

constexpr void __set_transform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_transform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_transform() const;

constexpr void __set_relativeTo(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_relativeTo() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_relativeTo() const;

constexpr void __set_effectorLinks(::ArrayW<::GlobalNamespace::__Amplifier__Body__EffectorLink*,::Array<::GlobalNamespace::__Amplifier__Body__EffectorLink*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__Amplifier__Body__EffectorLink*,::Array<::GlobalNamespace::__Amplifier__Body__EffectorLink*>*>& __get_effectorLinks() ;

constexpr ::ArrayW<::GlobalNamespace::__Amplifier__Body__EffectorLink*,::Array<::GlobalNamespace::__Amplifier__Body__EffectorLink*>*> const& __get_effectorLinks() const;

constexpr void __set_verticalWeight(float_t  value) ;

constexpr float_t& __get_verticalWeight() ;

constexpr float_t const& __get_verticalWeight() const;

constexpr void __set_horizontalWeight(float_t  value) ;

constexpr float_t& __get_horizontalWeight() ;

constexpr float_t const& __get_horizontalWeight() const;

constexpr void __set_speed(float_t  value) ;

constexpr float_t& __get_speed() ;

constexpr float_t const& __get_speed() const;

constexpr void __set_lastRelativePos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_lastRelativePos() ;

constexpr ::UnityEngine::Vector3 const& __get_lastRelativePos() const;

constexpr void __set_smoothDelta(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_smoothDelta() ;

constexpr ::UnityEngine::Vector3 const& __get_smoothDelta() const;

constexpr void __set_firstUpdate(bool  value) ;

constexpr bool& __get_firstUpdate() ;

constexpr bool const& __get_firstUpdate() const;

/// @brief Method Update addr 0x12946cc size 0x310 virtual false final false
inline void Update(::RootMotion::FinalIK::IKSolverFullBodyBiped*  solver, float_t  w, float_t  deltaTime) ;

/// @brief Method Multiply addr 0x12949fc size 0x10 virtual false final false
static inline ::UnityEngine::Vector3 Multiply(::UnityEngine::Vector3  v1, ::UnityEngine::Vector3  v2) ;

static inline ::RootMotion::FinalIK::__Amplifier__Body* New_ctor() ;

/// @brief Method .ctor addr 0x1294a0c size 0x18 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__Amplifier__Body", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Amplifier__Body(__Amplifier__Body && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Amplifier__Body", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Amplifier__Body(__Amplifier__Body const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Amplifier__Body()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__Amplifier__Body, 0x50>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::Amplifier
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12635))
// CS Name: ::RootMotion.FinalIK::Amplifier*
class CORDL_TYPE Amplifier : public ::RootMotion::FinalIK::OffsetModifier {
public:
// Declarations
using Body = ::RootMotion::FinalIK::__Amplifier__Body;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::RootMotion::FinalIK::OffsetModifier)]{};

/// @brief Field bodies offset 0x30
 __declspec(property(get=__get_bodies, put=__set_bodies)) ::ArrayW<::RootMotion::FinalIK::__Amplifier__Body*,::Array<::RootMotion::FinalIK::__Amplifier__Body*>*>  bodies;

constexpr void __set_bodies(::ArrayW<::RootMotion::FinalIK::__Amplifier__Body*,::Array<::RootMotion::FinalIK::__Amplifier__Body*>*>  value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::__Amplifier__Body*,::Array<::RootMotion::FinalIK::__Amplifier__Body*>*>& __get_bodies() ;

constexpr ::ArrayW<::RootMotion::FinalIK::__Amplifier__Body*,::Array<::RootMotion::FinalIK::__Amplifier__Body*>*> const& __get_bodies() const;

/// @brief Method OnModifyOffset addr 0x129457c size 0x130 virtual true final false
inline void OnModifyOffset() ;

static inline ::RootMotion::FinalIK::Amplifier* New_ctor() ;

/// @brief Method .ctor addr 0x12949dc size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Amplifier", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Amplifier(Amplifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Amplifier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Amplifier(Amplifier const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Amplifier()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::Amplifier, 0x38>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::GlobalNamespace::__Amplifier__Body__EffectorLink);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Amplifier__Body__EffectorLink*, "RootMotion.FinalIK", "Amplifier/Body/EffectorLink");
NEED_NO_BOX(::RootMotion::FinalIK::Amplifier);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Amplifier*, "RootMotion.FinalIK", "Amplifier");
NEED_NO_BOX(::RootMotion::FinalIK::__Amplifier__Body);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__Amplifier__Body*, "RootMotion.FinalIK", "Amplifier/Body");
