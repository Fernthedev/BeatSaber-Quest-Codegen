#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MaterialController)
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialController);
// Type: ::MaterialController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14562))
// CS Name: ::MaterialController*
class CORDL_TYPE MaterialController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _material offset 0x18
 __declspec(property(get=__get__material, put=__set__material)) ::UnityEngine::Material*  _material;

/// @brief Field _renderers offset 0x20
 __declspec(property(get=__get__renderers, put=__set__renderers)) ::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>  _renderers;

 __declspec(property(get=get_material)) ::UnityEngine::Material*  material;

constexpr void __set__material(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__material() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__material() const;

constexpr void __set__renderers(::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>& __get__renderers() ;

constexpr ::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*> const& __get__renderers() const;

/// @brief Method get_material addr 0x2114950 size 0x8 virtual false final false
inline ::UnityEngine::Material* get_material() ;

/// @brief Method OnValidate addr 0x2114958 size 0x2c virtual false final false
inline void OnValidate() ;

static inline ::GlobalNamespace::MaterialController* New_ctor() ;

/// @brief Method .ctor addr 0x2114984 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MaterialController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialController(MaterialController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialController(MaterialController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MaterialController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialController, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialController*, "", "MaterialController");
