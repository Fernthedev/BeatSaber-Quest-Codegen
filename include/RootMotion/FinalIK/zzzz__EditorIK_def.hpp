#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EditorIK)
namespace RootMotion::FinalIK {
class IK;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class EditorIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::EditorIK);
// Type: RootMotion.FinalIK::EditorIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12637))
// CS Name: ::RootMotion.FinalIK::EditorIK*
class CORDL_TYPE EditorIK : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field ik offset 0x18
 __declspec(property(get=__get_ik, put=__set_ik)) ::RootMotion::FinalIK::IK*  ik;

constexpr void __set_ik(::RootMotion::FinalIK::IK*  value) ;

constexpr ::RootMotion::FinalIK::IK* __get_ik() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IK*> __get_ik() const;

/// @brief Method Start addr 0x1294d50 size 0x8c virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x1294ddc size 0xc0 virtual false final false
inline void Update() ;

static inline ::RootMotion::FinalIK::EditorIK* New_ctor() ;

/// @brief Method .ctor addr 0x1294e9c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EditorIK", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EditorIK(EditorIK && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EditorIK", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EditorIK(EditorIK const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EditorIK()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::EditorIK, 0x20>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::EditorIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::EditorIK*, "RootMotion.FinalIK", "EditorIK");
