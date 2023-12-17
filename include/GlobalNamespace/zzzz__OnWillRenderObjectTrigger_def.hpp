#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OnWillRenderObjectTrigger)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class MeshFilter;
}
// Forward declare root types
namespace GlobalNamespace {
class OnWillRenderObjectTrigger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OnWillRenderObjectTrigger);
// Type: ::OnWillRenderObjectTrigger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14578))
// CS Name: ::OnWillRenderObjectTrigger*
class CORDL_TYPE OnWillRenderObjectTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _overrideShader offset 0x18
 __declspec(property(get=__get__overrideShader, put=__set__overrideShader)) ::UnityEngine::Shader*  _overrideShader;

/// @brief Field _renderQueue offset 0x20
 __declspec(property(get=__get__renderQueue, put=__set__renderQueue)) int32_t  _renderQueue;

/// @brief Field _material offset 0x28
 __declspec(property(get=__get__material, put=__set__material)) ::UnityEngine::Material*  _material;

/// @brief Field _mesh offset 0x30
 __declspec(property(get=__get__mesh, put=__set__mesh)) ::UnityEngine::Mesh*  _mesh;

/// @brief Field _meshFilter offset 0x38
 __declspec(property(get=__get__meshFilter, put=__set__meshFilter)) ::UnityEngine::MeshFilter*  _meshFilter;

/// @brief Field _meshRenderer offset 0x40
 __declspec(property(get=__get__meshRenderer, put=__set__meshRenderer)) ::UnityEngine::MeshRenderer*  _meshRenderer;

constexpr void __set__overrideShader(::UnityEngine::Shader*  value) ;

constexpr ::UnityEngine::Shader* __get__overrideShader() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> __get__overrideShader() const;

constexpr void __set__renderQueue(int32_t  value) ;

constexpr int32_t& __get__renderQueue() ;

constexpr int32_t const& __get__renderQueue() const;

constexpr void __set__material(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__material() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__material() const;

constexpr void __set__mesh(::UnityEngine::Mesh*  value) ;

constexpr ::UnityEngine::Mesh* __get__mesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> __get__mesh() const;

constexpr void __set__meshFilter(::UnityEngine::MeshFilter*  value) ;

constexpr ::UnityEngine::MeshFilter* __get__meshFilter() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> __get__meshFilter() const;

constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer*  value) ;

constexpr ::UnityEngine::MeshRenderer* __get__meshRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> __get__meshRenderer() const;

/// @brief Method OnEnable addr 0x21159a4 size 0x3f8 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x2115d9c size 0x30 virtual false final false
inline void OnDisable() ;

static inline ::GlobalNamespace::OnWillRenderObjectTrigger* New_ctor() ;

/// @brief Method .ctor addr 0x2115dcc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OnWillRenderObjectTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnWillRenderObjectTrigger(OnWillRenderObjectTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnWillRenderObjectTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnWillRenderObjectTrigger(OnWillRenderObjectTrigger const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OnWillRenderObjectTrigger()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OnWillRenderObjectTrigger, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OnWillRenderObjectTrigger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OnWillRenderObjectTrigger*, "", "OnWillRenderObjectTrigger");
