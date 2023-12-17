#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Grounder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GrounderFBBIK)
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class __GrounderFBBIK__SpineEffector;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class FullBodyBipedIK;
}
namespace RootMotion::FinalIK {
class IKEffector;
}
namespace RootMotion::FinalIK {
class __Grounding__Leg;
}
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class GrounderFBBIK;
}
namespace RootMotion::FinalIK {
class __GrounderFBBIK__SpineEffector;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::GrounderFBBIK);
MARK_REF_PTR_T(::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector);
// Type: ::SpineEffector
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12520))
// CS Name: ::GrounderFBBIK::SpineEffector*
class CORDL_TYPE __GrounderFBBIK__SpineEffector : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field effectorType offset 0x10
 __declspec(property(get=__get_effectorType, put=__set_effectorType)) ::RootMotion::FinalIK::FullBodyBipedEffector  effectorType;

/// @brief Field horizontalWeight offset 0x14
 __declspec(property(get=__get_horizontalWeight, put=__set_horizontalWeight)) float_t  horizontalWeight;

/// @brief Field verticalWeight offset 0x18
 __declspec(property(get=__get_verticalWeight, put=__set_verticalWeight)) float_t  verticalWeight;

constexpr void __set_effectorType(::RootMotion::FinalIK::FullBodyBipedEffector  value) ;

constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& __get_effectorType() ;

constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& __get_effectorType() const;

constexpr void __set_horizontalWeight(float_t  value) ;

constexpr float_t& __get_horizontalWeight() ;

constexpr float_t const& __get_horizontalWeight() const;

constexpr void __set_verticalWeight(float_t  value) ;

constexpr float_t& __get_verticalWeight() ;

constexpr float_t const& __get_verticalWeight() const;

static inline ::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector* New_ctor() ;

/// @brief Method .ctor addr 0x12477f4 size 0x10 virtual false final false
inline void _ctor() ;

static inline ::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector* New_ctor(::RootMotion::FinalIK::FullBodyBipedEffector  effectorType, float_t  horizontalWeight, float_t  verticalWeight) ;

/// @brief Method .ctor addr 0x1247804 size 0x44 virtual false final false
inline void _ctor(::RootMotion::FinalIK::FullBodyBipedEffector  effectorType, float_t  horizontalWeight, float_t  verticalWeight) ;

// Ctor Parameters [CppParam { name: "", ty: "__GrounderFBBIK__SpineEffector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GrounderFBBIK__SpineEffector(__GrounderFBBIK__SpineEffector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GrounderFBBIK__SpineEffector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GrounderFBBIK__SpineEffector(__GrounderFBBIK__SpineEffector const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GrounderFBBIK__SpineEffector()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector, 0x20>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::GrounderFBBIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12518))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12521))
// CS Name: ::RootMotion.FinalIK::GrounderFBBIK*
class CORDL_TYPE GrounderFBBIK : public ::RootMotion::FinalIK::Grounder {
public:
// Declarations
using SpineEffector = ::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::RootMotion::FinalIK::Grounder)]{};

/// @brief Field ik offset 0x40
 __declspec(property(get=__get_ik, put=__set_ik)) ::RootMotion::FinalIK::FullBodyBipedIK*  ik;

/// @brief Field spineBend offset 0x48
 __declspec(property(get=__get_spineBend, put=__set_spineBend)) float_t  spineBend;

/// @brief Field spineSpeed offset 0x4c
 __declspec(property(get=__get_spineSpeed, put=__set_spineSpeed)) float_t  spineSpeed;

/// @brief Field spine offset 0x50
 __declspec(property(get=__get_spine, put=__set_spine)) ::ArrayW<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*,::Array<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*>*>  spine;

/// @brief Field feet offset 0x58
 __declspec(property(get=__get_feet, put=__set_feet)) ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  feet;

/// @brief Field spineOffset offset 0x60
 __declspec(property(get=__get_spineOffset, put=__set_spineOffset)) ::UnityEngine::Vector3  spineOffset;

/// @brief Field firstSolve offset 0x6c
 __declspec(property(get=__get_firstSolve, put=__set_firstSolve)) bool  firstSolve;

constexpr void __set_ik(::RootMotion::FinalIK::FullBodyBipedIK*  value) ;

constexpr ::RootMotion::FinalIK::FullBodyBipedIK* __get_ik() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::FullBodyBipedIK*> __get_ik() const;

constexpr void __set_spineBend(float_t  value) ;

constexpr float_t& __get_spineBend() ;

constexpr float_t const& __get_spineBend() const;

constexpr void __set_spineSpeed(float_t  value) ;

constexpr float_t& __get_spineSpeed() ;

constexpr float_t const& __get_spineSpeed() const;

constexpr void __set_spine(::ArrayW<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*,::Array<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*>*>  value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*,::Array<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*>*>& __get_spine() ;

constexpr ::ArrayW<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*,::Array<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*>*> const& __get_spine() const;

constexpr void __set_feet(::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>& __get_feet() ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*> const& __get_feet() const;

constexpr void __set_spineOffset(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_spineOffset() ;

constexpr ::UnityEngine::Vector3 const& __get_spineOffset() const;

constexpr void __set_firstSolve(bool  value) ;

constexpr bool& __get_firstSolve() ;

constexpr bool const& __get_firstSolve() const;

/// @brief Method OpenTutorial addr 0x1246700 size 0x44 virtual false final false
inline void OpenTutorial() ;

/// @brief Method OpenUserManual addr 0x1246744 size 0x44 virtual true final false
inline void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x1246788 size 0x44 virtual true final false
inline void OpenScriptReference() ;

/// @brief Method ResetPosition addr 0x12467cc size 0x68 virtual true final false
inline void ResetPosition() ;

/// @brief Method IsReadyToInitiate addr 0x12468ac size 0x88 virtual false final false
inline bool IsReadyToInitiate() ;

/// @brief Method Update addr 0x1246934 size 0x5c virtual false final false
inline void Update() ;

/// @brief Method FixedUpdate addr 0x1246ba4 size 0xc virtual false final false
inline void FixedUpdate() ;

/// @brief Method LateUpdate addr 0x1246bb0 size 0xc virtual false final false
inline void LateUpdate() ;

/// @brief Method Initiate addr 0x1246990 size 0x214 virtual false final false
inline void Initiate() ;

/// @brief Method OnSolverUpdate addr 0x1246e30 size 0x374 virtual false final false
inline void OnSolverUpdate() ;

/// @brief Method SetLegIK addr 0x1247398 size 0x184 virtual false final false
inline void SetLegIK(::RootMotion::FinalIK::IKEffector*  effector, ::RootMotion::FinalIK::__Grounding__Leg*  leg) ;

/// @brief Method OnDrawGizmosSelected addr 0x124751c size 0x134 virtual false final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnDestroy addr 0x1247650 size 0x114 virtual false final false
inline void OnDestroy() ;

static inline ::RootMotion::FinalIK::GrounderFBBIK* New_ctor() ;

/// @brief Method .ctor addr 0x1247764 size 0x90 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GrounderFBBIK", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GrounderFBBIK(GrounderFBBIK && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrounderFBBIK", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrounderFBBIK(GrounderFBBIK const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GrounderFBBIK()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::GrounderFBBIK, 0x70>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::GrounderFBBIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::GrounderFBBIK*, "RootMotion.FinalIK", "GrounderFBBIK");
NEED_NO_BOX(::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*, "RootMotion.FinalIK", "GrounderFBBIK/SpineEffector");
