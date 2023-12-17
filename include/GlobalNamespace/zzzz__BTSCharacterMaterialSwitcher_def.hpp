#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BTSCharacterMaterialSwitcher)
namespace GlobalNamespace {
class __BTSCharacterMaterialSwitcher__RendererMaterialsPairs;
}
namespace GlobalNamespace {
class __BTSCharacterMaterialSwitcher__MaterialPairs;
}
namespace UnityEngine {
class Material;
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
class BTSCharacterMaterialSwitcher;
}
namespace GlobalNamespace {
class __BTSCharacterMaterialSwitcher__MaterialPairs;
}
namespace GlobalNamespace {
class __BTSCharacterMaterialSwitcher__RendererMaterialsPairs;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSCharacterMaterialSwitcher);
MARK_REF_PTR_T(::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs);
MARK_REF_PTR_T(::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs);
// Type: ::RendererMaterialsPairs
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3966))
// CS Name: ::BTSCharacterMaterialSwitcher::RendererMaterialsPairs*
class CORDL_TYPE __BTSCharacterMaterialSwitcher__RendererMaterialsPairs : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _renderer offset 0x10
 __declspec(property(get=__get__renderer, put=__set__renderer)) ::UnityEngine::Renderer*  _renderer;

/// @brief Field _materialPairs offset 0x18
 __declspec(property(get=__get__materialPairs, put=__set__materialPairs)) ::System::Collections::Generic::List_1<::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs*>*  _materialPairs;

 __declspec(property(get=get_renderer)) ::UnityEngine::Renderer*  renderer;

 __declspec(property(get=get_materialPairs)) ::System::Collections::Generic::List_1<::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs*>*  materialPairs;

constexpr void __set__renderer(::UnityEngine::Renderer*  value) ;

constexpr ::UnityEngine::Renderer* __get__renderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> __get__renderer() const;

constexpr void __set__materialPairs(::System::Collections::Generic::List_1<::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs*>* __get__materialPairs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs*>*> __get__materialPairs() const;

/// @brief Method get_renderer addr 0x2219afc size 0x8 virtual false final false
inline ::UnityEngine::Renderer* get_renderer() ;

/// @brief Method get_materialPairs addr 0x2219b04 size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs*>* get_materialPairs() ;

static inline ::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs* New_ctor(::UnityEngine::Renderer*  renderer) ;

/// @brief Method .ctor addr 0x2219b0c size 0x90 virtual false final false
inline void _ctor(::UnityEngine::Renderer*  renderer) ;

// Ctor Parameters [CppParam { name: "", ty: "__BTSCharacterMaterialSwitcher__RendererMaterialsPairs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BTSCharacterMaterialSwitcher__RendererMaterialsPairs(__BTSCharacterMaterialSwitcher__RendererMaterialsPairs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BTSCharacterMaterialSwitcher__RendererMaterialsPairs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BTSCharacterMaterialSwitcher__RendererMaterialsPairs(__BTSCharacterMaterialSwitcher__RendererMaterialsPairs const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BTSCharacterMaterialSwitcher__RendererMaterialsPairs()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MaterialPairs
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3967))
// CS Name: ::BTSCharacterMaterialSwitcher::MaterialPairs*
class CORDL_TYPE __BTSCharacterMaterialSwitcher__MaterialPairs : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field materialIndex offset 0x10
 __declspec(property(get=__get_materialIndex, put=__set_materialIndex)) int32_t  materialIndex;

/// @brief Field defaultMaterial offset 0x18
 __declspec(property(get=__get_defaultMaterial, put=__set_defaultMaterial)) ::UnityEngine::Material*  defaultMaterial;

/// @brief Field alternativeMaterial offset 0x20
 __declspec(property(get=__get_alternativeMaterial, put=__set_alternativeMaterial)) ::UnityEngine::Material*  alternativeMaterial;

constexpr void __set_materialIndex(int32_t  value) ;

constexpr int32_t& __get_materialIndex() ;

constexpr int32_t const& __get_materialIndex() const;

constexpr void __set_defaultMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_defaultMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_defaultMaterial() const;

constexpr void __set_alternativeMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_alternativeMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_alternativeMaterial() const;

static inline ::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs* New_ctor() ;

/// @brief Method .ctor addr 0x2219b9c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__BTSCharacterMaterialSwitcher__MaterialPairs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BTSCharacterMaterialSwitcher__MaterialPairs(__BTSCharacterMaterialSwitcher__MaterialPairs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BTSCharacterMaterialSwitcher__MaterialPairs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BTSCharacterMaterialSwitcher__MaterialPairs(__BTSCharacterMaterialSwitcher__MaterialPairs const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BTSCharacterMaterialSwitcher__MaterialPairs()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BTSCharacterMaterialSwitcher
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3968))
// CS Name: ::BTSCharacterMaterialSwitcher*
class CORDL_TYPE BTSCharacterMaterialSwitcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MaterialPairs = ::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs;

using RendererMaterialsPairs = ::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _rendererMaterialsPairs offset 0x18
 __declspec(property(get=__get__rendererMaterialsPairs, put=__set__rendererMaterialsPairs)) ::ArrayW<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*,::Array<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*>*>  _rendererMaterialsPairs;

constexpr void __set__rendererMaterialsPairs(::ArrayW<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*,::Array<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*,::Array<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*>*>& __get__rendererMaterialsPairs() ;

constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*,::Array<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*>*> const& __get__rendererMaterialsPairs() const;

/// @brief Method SwapMaterials addr 0x2219850 size 0x254 virtual false final false
inline void SwapMaterials(bool  alternative) ;

static inline ::GlobalNamespace::BTSCharacterMaterialSwitcher* New_ctor() ;

/// @brief Method .ctor addr 0x2219af4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterMaterialSwitcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BTSCharacterMaterialSwitcher(BTSCharacterMaterialSwitcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterMaterialSwitcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BTSCharacterMaterialSwitcher(BTSCharacterMaterialSwitcher const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BTSCharacterMaterialSwitcher()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacterMaterialSwitcher, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacterMaterialSwitcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterMaterialSwitcher*, "", "BTSCharacterMaterialSwitcher");
NEED_NO_BOX(::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs*, "", "BTSCharacterMaterialSwitcher/MaterialPairs");
NEED_NO_BOX(::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*, "", "BTSCharacterMaterialSwitcher/RendererMaterialsPairs");
