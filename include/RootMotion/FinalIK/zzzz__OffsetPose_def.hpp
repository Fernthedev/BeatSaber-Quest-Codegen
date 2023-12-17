#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OffsetPose)
namespace RootMotion::FinalIK {
class IKSolverFullBodyBiped;
}
namespace RootMotion::FinalIK {
class __OffsetPose__EffectorLink;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class OffsetPose;
}
namespace RootMotion::FinalIK {
class __OffsetPose__EffectorLink;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::OffsetPose);
MARK_REF_PTR_T(::RootMotion::FinalIK::__OffsetPose__EffectorLink);
// Type: ::EffectorLink
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12659))
// CS Name: ::OffsetPose::EffectorLink*
class CORDL_TYPE __OffsetPose__EffectorLink : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field effector offset 0x10
 __declspec(property(get=__get_effector, put=__set_effector)) ::RootMotion::FinalIK::FullBodyBipedEffector  effector;

/// @brief Field offset offset 0x14
 __declspec(property(get=__get_offset, put=__set_offset)) ::UnityEngine::Vector3  offset;

/// @brief Field pin offset 0x20
 __declspec(property(get=__get_pin, put=__set_pin)) ::UnityEngine::Vector3  pin;

/// @brief Field pinWeight offset 0x2c
 __declspec(property(get=__get_pinWeight, put=__set_pinWeight)) ::UnityEngine::Vector3  pinWeight;

constexpr void __set_effector(::RootMotion::FinalIK::FullBodyBipedEffector  value) ;

constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& __get_effector() ;

constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& __get_effector() const;

constexpr void __set_offset(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_offset() ;

constexpr ::UnityEngine::Vector3 const& __get_offset() const;

constexpr void __set_pin(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_pin() ;

constexpr ::UnityEngine::Vector3 const& __get_pin() const;

constexpr void __set_pinWeight(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_pinWeight() ;

constexpr ::UnityEngine::Vector3 const& __get_pinWeight() const;

/// @brief Method Apply addr 0x1298680 size 0x250 virtual false final false
inline void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped*  solver, float_t  weight, ::UnityEngine::Quaternion  rotation) ;

static inline ::RootMotion::FinalIK::__OffsetPose__EffectorLink* New_ctor() ;

/// @brief Method .ctor addr 0x12989cc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__OffsetPose__EffectorLink", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OffsetPose__EffectorLink(__OffsetPose__EffectorLink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OffsetPose__EffectorLink", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OffsetPose__EffectorLink(__OffsetPose__EffectorLink const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OffsetPose__EffectorLink()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__OffsetPose__EffectorLink, 0x38>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::OffsetPose
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12660))
// CS Name: ::RootMotion.FinalIK::OffsetPose*
class CORDL_TYPE OffsetPose : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EffectorLink = ::RootMotion::FinalIK::__OffsetPose__EffectorLink;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field effectorLinks offset 0x18
 __declspec(property(get=__get_effectorLinks, put=__set_effectorLinks)) ::ArrayW<::RootMotion::FinalIK::__OffsetPose__EffectorLink*,::Array<::RootMotion::FinalIK::__OffsetPose__EffectorLink*>*>  effectorLinks;

constexpr void __set_effectorLinks(::ArrayW<::RootMotion::FinalIK::__OffsetPose__EffectorLink*,::Array<::RootMotion::FinalIK::__OffsetPose__EffectorLink*>*>  value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::__OffsetPose__EffectorLink*,::Array<::RootMotion::FinalIK::__OffsetPose__EffectorLink*>*>& __get_effectorLinks() ;

constexpr ::ArrayW<::RootMotion::FinalIK::__OffsetPose__EffectorLink*,::Array<::RootMotion::FinalIK::__OffsetPose__EffectorLink*>*> const& __get_effectorLinks() const;

/// @brief Method Apply addr 0x1294c80 size 0xb4 virtual false final false
inline void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped*  solver, float_t  weight) ;

/// @brief Method Apply addr 0x12988d0 size 0xa4 virtual false final false
inline void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped*  solver, float_t  weight, ::UnityEngine::Quaternion  rotation) ;

static inline ::RootMotion::FinalIK::OffsetPose* New_ctor() ;

/// @brief Method .ctor addr 0x1298974 size 0x58 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OffsetPose", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OffsetPose(OffsetPose && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OffsetPose", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OffsetPose(OffsetPose const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OffsetPose()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::OffsetPose, 0x20>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::OffsetPose);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::OffsetPose*, "RootMotion.FinalIK", "OffsetPose");
NEED_NO_BOX(::RootMotion::FinalIK::__OffsetPose__EffectorLink);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__OffsetPose__EffectorLink*, "RootMotion.FinalIK", "OffsetPose/EffectorLink");
