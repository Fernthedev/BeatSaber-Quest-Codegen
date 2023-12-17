#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/zzzz__SolverManager_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FingerRig)
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class Finger;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class FingerRig;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::FingerRig);
// Type: RootMotion.FinalIK::FingerRig
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12499))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12516))
// CS Name: ::RootMotion.FinalIK::FingerRig*
class CORDL_TYPE FingerRig : public ::RootMotion::SolverManager {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::RootMotion::SolverManager)]{};

/// @brief Field weight offset 0x34
 __declspec(property(get=__get_weight, put=__set_weight)) float_t  weight;

/// @brief Field fingers offset 0x38
 __declspec(property(get=__get_fingers, put=__set_fingers)) ::ArrayW<::RootMotion::FinalIK::Finger*,::Array<::RootMotion::FinalIK::Finger*>*>  fingers;

/// @brief Field <initiated>k__BackingField offset 0x40
 __declspec(property(get=__get__initiated_k__BackingField, put=__set__initiated_k__BackingField)) bool  _initiated_k__BackingField;

 __declspec(property(get=get_initiated, put=set_initiated)) bool  initiated;

constexpr void __set_weight(float_t  value) ;

constexpr float_t& __get_weight() ;

constexpr float_t const& __get_weight() const;

constexpr void __set_fingers(::ArrayW<::RootMotion::FinalIK::Finger*,::Array<::RootMotion::FinalIK::Finger*>*>  value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::Finger*,::Array<::RootMotion::FinalIK::Finger*>*>& __get_fingers() ;

constexpr ::ArrayW<::RootMotion::FinalIK::Finger*,::Array<::RootMotion::FinalIK::Finger*>*> const& __get_fingers() const;

constexpr void __set__initiated_k__BackingField(bool  value) ;

constexpr bool& __get__initiated_k__BackingField() ;

constexpr bool const& __get__initiated_k__BackingField() const;

/// @brief Method get_initiated addr 0x1243a38 size 0x8 virtual false final false
inline bool get_initiated() ;

/// @brief Method set_initiated addr 0x1243a40 size 0xc virtual false final false
inline void set_initiated(bool  value) ;

/// @brief Method IsValid addr 0x1243a4c size 0x74 virtual false final false
inline bool IsValid(ByRef<::StringW>  errorMessage) ;

/// @brief Method AutoDetect addr 0x1243ac0 size 0x224 virtual false final false
inline void AutoDetect() ;

/// @brief Method AddFinger addr 0x1243dcc size 0x16c virtual false final false
inline void AddFinger(::UnityEngine::Transform*  bone1, ::UnityEngine::Transform*  bone2, ::UnityEngine::Transform*  bone3, ::UnityEngine::Transform*  tip, ::UnityEngine::Transform*  target) ;

/// @brief Method RemoveFinger addr 0x1243f38 size 0x160 virtual false final false
inline void RemoveFinger(int32_t  index) ;

/// @brief Method AddChildrenRecursive addr 0x1243ce4 size 0xe8 virtual false final false
inline void AddChildrenRecursive(::UnityEngine::Transform*  parent, ByRef<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>>  array) ;

/// @brief Method InitiateSolver addr 0x1244098 size 0xa8 virtual true final false
inline void InitiateSolver() ;

/// @brief Method UpdateFingerSolvers addr 0x1244140 size 0x64 virtual false final false
inline void UpdateFingerSolvers() ;

/// @brief Method FixFingerTransforms addr 0x12441a4 size 0x68 virtual false final false
inline void FixFingerTransforms() ;

/// @brief Method StoreDefaultLocalState addr 0x124420c size 0x5c virtual false final false
inline void StoreDefaultLocalState() ;

/// @brief Method UpdateSolver addr 0x1244268 size 0x4 virtual true final false
inline void UpdateSolver() ;

/// @brief Method FixTransforms addr 0x124426c size 0x14 virtual true final false
inline void FixTransforms() ;

static inline ::RootMotion::FinalIK::FingerRig* New_ctor() ;

/// @brief Method .ctor addr 0x1244280 size 0x68 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FingerRig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerRig(FingerRig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerRig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerRig(FingerRig const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FingerRig()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::FingerRig, 0x48>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::FingerRig);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FingerRig*, "RootMotion.FinalIK", "FingerRig");
