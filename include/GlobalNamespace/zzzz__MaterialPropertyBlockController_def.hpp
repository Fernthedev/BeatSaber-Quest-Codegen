#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyBlockController)
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyBlockController);
// Type: ::MaterialPropertyBlockController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14566))
// CS Name: ::MaterialPropertyBlockController*
class CORDL_TYPE MaterialPropertyBlockController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _renderers offset 0x18
 __declspec(property(get=__get__renderers, put=__set__renderers)) ::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>  _renderers;

/// @brief Field _materialPropertyBlock offset 0x20
 __declspec(property(get=__get__materialPropertyBlock, put=__set__materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  _materialPropertyBlock;

/// @brief Field _numberOfMaterialsInRenderers offset 0x28
 __declspec(property(get=__get__numberOfMaterialsInRenderers, put=__set__numberOfMaterialsInRenderers)) ::System::Collections::Generic::List_1<int32_t>*  _numberOfMaterialsInRenderers;

/// @brief Field _isInitialized offset 0x30
 __declspec(property(get=__get__isInitialized, put=__set__isInitialized)) bool  _isInitialized;

 __declspec(property(get=get_renderers)) ::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>  renderers;

 __declspec(property(get=get_materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock;

constexpr void __set__renderers(::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>& __get__renderers() ;

constexpr ::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*> const& __get__renderers() const;

constexpr void __set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr ::UnityEngine::MaterialPropertyBlock* __get__materialPropertyBlock() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> __get__materialPropertyBlock() const;

constexpr void __set__numberOfMaterialsInRenderers(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::List_1<int32_t>* __get__numberOfMaterialsInRenderers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> __get__numberOfMaterialsInRenderers() const;

constexpr void __set__isInitialized(bool  value) ;

constexpr bool& __get__isInitialized() ;

constexpr bool const& __get__isInitialized() const;

/// @brief Method get_renderers addr 0x2115060 size 0x8 virtual false final false
inline ::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*> get_renderers() ;

/// @brief Method get_materialPropertyBlock addr 0x2114d60 size 0x6c virtual false final false
inline ::UnityEngine::MaterialPropertyBlock* get_materialPropertyBlock() ;

/// @brief Method ApplyChanges addr 0x2114afc size 0x1f0 virtual false final false
inline void ApplyChanges() ;

static inline ::GlobalNamespace::MaterialPropertyBlockController* New_ctor() ;

/// @brief Method .ctor addr 0x2115068 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialPropertyBlockController(MaterialPropertyBlockController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialPropertyBlockController(MaterialPropertyBlockController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MaterialPropertyBlockController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockController, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockController*, "", "MaterialPropertyBlockController");
