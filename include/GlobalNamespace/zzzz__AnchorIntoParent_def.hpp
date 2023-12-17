#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AnchorIntoParent)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AnchorIntoParent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AnchorIntoParent);
// Type: ::AnchorIntoParent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5351))
// CS Name: ::AnchorIntoParent*
class CORDL_TYPE AnchorIntoParent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _parentTransform offset 0x18
 __declspec(property(get=__get__parentTransform, put=__set__parentTransform)) ::UnityEngine::Transform*  _parentTransform;

/// @brief Field _positionOffset offset 0x20
 __declspec(property(get=__get__positionOffset, put=__set__positionOffset)) ::UnityEngine::Vector3  _positionOffset;

constexpr void __set__parentTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__parentTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__parentTransform() const;

constexpr void __set__positionOffset(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__positionOffset() ;

constexpr ::UnityEngine::Vector3 const& __get__positionOffset() const;

/// @brief Method Start addr 0x226be24 size 0x100 virtual false final false
inline void Start() ;

static inline ::GlobalNamespace::AnchorIntoParent* New_ctor() ;

/// @brief Method .ctor addr 0x226bf24 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AnchorIntoParent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnchorIntoParent(AnchorIntoParent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnchorIntoParent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnchorIntoParent(AnchorIntoParent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AnchorIntoParent()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnchorIntoParent, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AnchorIntoParent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnchorIntoParent*, "", "AnchorIntoParent");
