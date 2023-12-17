#pragma once
#include "GlobalNamespace/zzzz__OVRGLTFScene_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimatinonNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimationNodeMorphTargetHandler_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFInputNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
constexpr void GlobalNamespace::OVRGLTFScene::__set_root(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::OVRGLTFScene::__get_root()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::OVRGLTFScene::__get_root() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::OVRGLTFScene::__set_nodes(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GlobalNamespace::OVRGLTFScene::__get_nodes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> GlobalNamespace::OVRGLTFScene::__get_nodes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::OVRGLTFScene::__set_animationNodes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>* GlobalNamespace::OVRGLTFScene::__get_animationNodes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*> GlobalNamespace::OVRGLTFScene::__get_animationNodes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::OVRGLTFScene::__set_animationNodeLookup(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>* GlobalNamespace::OVRGLTFScene::__get_animationNodeLookup()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*> GlobalNamespace::OVRGLTFScene::__get_animationNodeLookup() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::OVRGLTFScene::__set_morphTargetHandlers(::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>* GlobalNamespace::OVRGLTFScene::__get_morphTargetHandlers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*> GlobalNamespace::OVRGLTFScene::__get_morphTargetHandlers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "root", ty: "::UnityEngine::GameObject*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "nodes", ty: "::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "animationNodes", ty: "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "animationNodeLookup", ty: "::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "morphTargetHandlers", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::OVRGLTFScene::OVRGLTFScene(::UnityEngine::GameObject*  root, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  nodes, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*  animationNodes, ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*  animationNodeLookup, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*  morphTargetHandlers) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->root = root;
this->nodes = nodes;
this->animationNodes = animationNodes;
this->animationNodeLookup = animationNodeLookup;
this->morphTargetHandlers = morphTargetHandlers;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
