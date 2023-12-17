#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFScene)
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class OVRGLTFAnimatinonNode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class OVRGLTFAnimationNodeMorphTargetHandler;
}
namespace GlobalNamespace {
struct OVRGLTFInputNode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRGLTFScene;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRGLTFScene);
// Type: ::OVRGLTFScene
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7567))
// CS Name: ::OVRGLTFScene
struct CORDL_TYPE OVRGLTFScene : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field root offset 0x0
 __declspec(property(get=__get_root, put=__set_root)) ::UnityEngine::GameObject*  root;

/// @brief Field nodes offset 0x8
 __declspec(property(get=__get_nodes, put=__set_nodes)) ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  nodes;

/// @brief Field animationNodes offset 0x10
 __declspec(property(get=__get_animationNodes, put=__set_animationNodes)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*  animationNodes;

/// @brief Field animationNodeLookup offset 0x18
 __declspec(property(get=__get_animationNodeLookup, put=__set_animationNodeLookup)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*  animationNodeLookup;

/// @brief Field morphTargetHandlers offset 0x20
 __declspec(property(get=__get_morphTargetHandlers, put=__set_morphTargetHandlers)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*  morphTargetHandlers;

constexpr void __set_root(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_root() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_root() const;

constexpr void __set_nodes(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* __get_nodes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> __get_nodes() const;

constexpr void __set_animationNodes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>* __get_animationNodes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*> __get_animationNodes() const;

constexpr void __set_animationNodeLookup(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>* __get_animationNodeLookup() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*> __get_animationNodeLookup() const;

constexpr void __set_morphTargetHandlers(::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>* __get_morphTargetHandlers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*> __get_morphTargetHandlers() const;

// Ctor Parameters [CppParam { name: "root", ty: "::UnityEngine::GameObject*", modifiers: "", def_value: None }, CppParam { name: "nodes", ty: "::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*", modifiers: "", def_value: None }, CppParam { name: "animationNodes", ty: "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*", modifiers: "", def_value: None }, CppParam { name: "animationNodeLookup", ty: "::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*", modifiers: "", def_value: None }, CppParam { name: "morphTargetHandlers", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*", modifiers: "", def_value: None }]
constexpr OVRGLTFScene(::UnityEngine::GameObject*  root, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  nodes, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*  animationNodes, ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*  animationNodeLookup, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*  morphTargetHandlers) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OVRGLTFScene(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OVRGLTFScene()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFScene, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFScene, "", "OVRGLTFScene");
