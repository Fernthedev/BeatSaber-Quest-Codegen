#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_def.hpp"
CORDL_MODULE_EXPORT(MaterialPropertyBlockPositionUpdater)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockPositionUpdater;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyBlockPositionUpdater);
// Type: ::MaterialPropertyBlockPositionUpdater
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14563))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14569))
// CS Name: ::MaterialPropertyBlockPositionUpdater*
class CORDL_TYPE MaterialPropertyBlockPositionUpdater : public ::GlobalNamespace::MaterialPropertyBlockAnimator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::MaterialPropertyBlockAnimator)]{};

/// @brief Field _targetTransform offset 0x30
 __declspec(property(get=__get__targetTransform, put=__set__targetTransform)) ::UnityEngine::Transform*  _targetTransform;

constexpr void __set__targetTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__targetTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__targetTransform() const;

/// @brief Method SetProperty addr 0x2115150 size 0xb4 virtual true final false
inline void SetProperty() ;

static inline ::GlobalNamespace::MaterialPropertyBlockPositionUpdater* New_ctor() ;

/// @brief Method .ctor addr 0x2115204 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockPositionUpdater", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialPropertyBlockPositionUpdater(MaterialPropertyBlockPositionUpdater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockPositionUpdater", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialPropertyBlockPositionUpdater(MaterialPropertyBlockPositionUpdater const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MaterialPropertyBlockPositionUpdater()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockPositionUpdater, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockPositionUpdater);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockPositionUpdater*, "", "MaterialPropertyBlockPositionUpdater");
