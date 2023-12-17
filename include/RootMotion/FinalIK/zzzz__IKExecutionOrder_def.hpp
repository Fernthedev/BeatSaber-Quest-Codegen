#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(IKExecutionOrder)
namespace RootMotion::FinalIK {
class IK;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKExecutionOrder;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKExecutionOrder);
// Type: RootMotion.FinalIK::IKExecutionOrder
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12537))
// CS Name: ::RootMotion.FinalIK::IKExecutionOrder*
class CORDL_TYPE IKExecutionOrder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field IKComponents offset 0x18
 __declspec(property(get=__get_IKComponents, put=__set_IKComponents)) ::ArrayW<::RootMotion::FinalIK::IK*,::Array<::RootMotion::FinalIK::IK*>*>  IKComponents;

/// @brief Field animator offset 0x20
 __declspec(property(get=__get_animator, put=__set_animator)) ::UnityEngine::Animator*  animator;

/// @brief Field fixedFrame offset 0x28
 __declspec(property(get=__get_fixedFrame, put=__set_fixedFrame)) bool  fixedFrame;

 __declspec(property(get=get_animatePhysics)) bool  animatePhysics;

constexpr void __set_IKComponents(::ArrayW<::RootMotion::FinalIK::IK*,::Array<::RootMotion::FinalIK::IK*>*>  value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::IK*,::Array<::RootMotion::FinalIK::IK*>*>& __get_IKComponents() ;

constexpr ::ArrayW<::RootMotion::FinalIK::IK*,::Array<::RootMotion::FinalIK::IK*>*> const& __get_IKComponents() const;

constexpr void __set_animator(::UnityEngine::Animator*  value) ;

constexpr ::UnityEngine::Animator* __get_animator() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> __get_animator() const;

constexpr void __set_fixedFrame(bool  value) ;

constexpr bool& __get_fixedFrame() ;

constexpr bool const& __get_fixedFrame() const;

/// @brief Method get_animatePhysics addr 0x124f24c size 0x8c virtual false final false
inline bool get_animatePhysics() ;

/// @brief Method Start addr 0x124f2d8 size 0x64 virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x124f33c size 0x24 virtual false final false
inline void Update() ;

/// @brief Method FixedUpdate addr 0x124f3dc size 0x2c virtual false final false
inline void FixedUpdate() ;

/// @brief Method LateUpdate addr 0x124f408 size 0x84 virtual false final false
inline void LateUpdate() ;

/// @brief Method FixTransforms addr 0x124f360 size 0x7c virtual false final false
inline void FixTransforms() ;

static inline ::RootMotion::FinalIK::IKExecutionOrder* New_ctor() ;

/// @brief Method .ctor addr 0x124f48c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IKExecutionOrder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IKExecutionOrder(IKExecutionOrder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IKExecutionOrder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IKExecutionOrder(IKExecutionOrder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IKExecutionOrder()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKExecutionOrder, 0x30>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKExecutionOrder);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKExecutionOrder*, "RootMotion.FinalIK", "IKExecutionOrder");
