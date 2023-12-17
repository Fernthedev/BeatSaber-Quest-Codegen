#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CustomBoundingBox)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomBoundingBox;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomBoundingBox);
// Type: ::CustomBoundingBox
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14358))
// CS Name: ::CustomBoundingBox*
class CORDL_TYPE CustomBoundingBox : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _boundingBoxCenter offset 0x18
 __declspec(property(get=__get__boundingBoxCenter, put=__set__boundingBoxCenter)) ::UnityEngine::Vector3  _boundingBoxCenter;

/// @brief Field _boundingBoxSize offset 0x24
 __declspec(property(get=__get__boundingBoxSize, put=__set__boundingBoxSize)) ::UnityEngine::Vector3  _boundingBoxSize;

/// @brief Field _meshRenderer offset 0x30
 __declspec(property(get=__get__meshRenderer, put=__set__meshRenderer)) ::UnityEngine::MeshRenderer*  _meshRenderer;

constexpr void __set__boundingBoxCenter(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__boundingBoxCenter() ;

constexpr ::UnityEngine::Vector3 const& __get__boundingBoxCenter() const;

constexpr void __set__boundingBoxSize(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__boundingBoxSize() ;

constexpr ::UnityEngine::Vector3 const& __get__boundingBoxSize() const;

constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer*  value) ;

constexpr ::UnityEngine::MeshRenderer* __get__meshRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> __get__meshRenderer() const;

/// @brief Method Awake addr 0x20f1db4 size 0x6c virtual false final false
inline void Awake() ;

static inline ::GlobalNamespace::CustomBoundingBox* New_ctor() ;

/// @brief Method .ctor addr 0x20f1e20 size 0x60 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CustomBoundingBox", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomBoundingBox(CustomBoundingBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomBoundingBox", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomBoundingBox(CustomBoundingBox const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CustomBoundingBox()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomBoundingBox, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomBoundingBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomBoundingBox*, "", "CustomBoundingBox");
