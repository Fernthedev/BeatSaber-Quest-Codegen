#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AlwaysVisibleQuad)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class AlwaysVisibleQuad;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AlwaysVisibleQuad);
// Type: ::AlwaysVisibleQuad
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15273))
// CS Name: ::AlwaysVisibleQuad*
class CORDL_TYPE AlwaysVisibleQuad : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _mesh offset 0x18
 __declspec(property(get=__get__mesh, put=__set__mesh)) ::UnityEngine::Mesh*  _mesh;

constexpr void __set__mesh(::UnityEngine::Mesh*  value) ;

constexpr ::UnityEngine::Mesh* __get__mesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> __get__mesh() const;

/// @brief Method OnEnable addr 0x28061a8 size 0x224 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x28063cc size 0xc virtual false final false
inline void OnDisable() ;

static inline ::GlobalNamespace::AlwaysVisibleQuad* New_ctor() ;

/// @brief Method .ctor addr 0x28063d8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AlwaysVisibleQuad", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AlwaysVisibleQuad(AlwaysVisibleQuad && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlwaysVisibleQuad", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlwaysVisibleQuad(AlwaysVisibleQuad const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AlwaysVisibleQuad()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AlwaysVisibleQuad, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AlwaysVisibleQuad);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlwaysVisibleQuad*, "", "AlwaysVisibleQuad");
