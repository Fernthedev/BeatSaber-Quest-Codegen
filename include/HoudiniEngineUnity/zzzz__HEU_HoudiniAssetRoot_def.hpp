#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HEU_HoudiniAssetRoot)
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_HoudiniAssetRoot;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_HoudiniAssetRoot);
// Type: HoudiniEngineUnity::HEU_HoudiniAssetRoot
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9640))
// CS Name: ::HoudiniEngineUnity::HEU_HoudiniAssetRoot*
class CORDL_TYPE HEU_HoudiniAssetRoot : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _houdiniAsset offset 0x18
 __declspec(property(get=__get__houdiniAsset, put=__set__houdiniAsset)) ::HoudiniEngineUnity::HEU_HoudiniAsset*  _houdiniAsset;

/// @brief Field _bakeTargets offset 0x20
 __declspec(property(get=__get__bakeTargets, put=__set__bakeTargets)) ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  _bakeTargets;

constexpr void __set__houdiniAsset(::HoudiniEngineUnity::HEU_HoudiniAsset*  value) ;

constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset* __get__houdiniAsset() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HoudiniAsset*> __get__houdiniAsset() const;

constexpr void __set__bakeTargets(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* __get__bakeTargets() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> __get__bakeTargets() const;

/// @brief Method OnDestroy addr 0x216d488 size 0x1c8 virtual false final false
inline void OnDestroy() ;

/// @brief Method RemoveHoudiniEngineAssetData addr 0x216d650 size 0xdc virtual false final false
inline void RemoveHoudiniEngineAssetData() ;

/// @brief Method ClearHoudiniEngineReferences addr 0x216d72c size 0x74 virtual false final false
inline void ClearHoudiniEngineReferences() ;

/// @brief Method DestroyRootComponent addr 0x216d7a0 size 0x10 virtual false final false
static inline void DestroyRootComponent(::HoudiniEngineUnity::HEU_HoudiniAssetRoot*  assetRoot) ;

/// @brief Method Reset addr 0x216d7b0 size 0xe8 virtual false final false
inline void Reset() ;

static inline ::HoudiniEngineUnity::HEU_HoudiniAssetRoot* New_ctor() ;

/// @brief Method .ctor addr 0x216d898 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniAssetRoot", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_HoudiniAssetRoot(HEU_HoudiniAssetRoot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniAssetRoot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_HoudiniAssetRoot(HEU_HoudiniAssetRoot const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_HoudiniAssetRoot()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HoudiniAssetRoot, 0x28>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HoudiniAssetRoot);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, "HoudiniEngineUnity", "HEU_HoudiniAssetRoot");
