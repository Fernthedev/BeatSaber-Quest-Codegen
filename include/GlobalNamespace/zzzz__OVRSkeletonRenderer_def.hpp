#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSkeletonRenderer)
namespace GlobalNamespace {
class __OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider;
}
namespace GlobalNamespace {
struct __OVRSkeletonRenderer__ConfidenceBehavior;
}
namespace GlobalNamespace {
struct __OVRSkeletonRenderer__SkeletonRendererData;
}
namespace UnityEngine {
class Material;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct __OVRSkeletonRenderer__SystemGestureBehavior;
}
namespace GlobalNamespace {
class __OVRSkeletonRenderer__CapsuleVisualization;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace GlobalNamespace {
class __OVRSkeletonRenderer__BoneVisualization;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace GlobalNamespace {
class OVRBoneCapsule;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRSkeletonRenderer__ConfidenceBehavior;
}
namespace GlobalNamespace {
struct __OVRSkeletonRenderer__SystemGestureBehavior;
}
namespace GlobalNamespace {
class OVRSkeletonRenderer;
}
namespace GlobalNamespace {
class __OVRSkeletonRenderer__BoneVisualization;
}
namespace GlobalNamespace {
class __OVRSkeletonRenderer__CapsuleVisualization;
}
namespace GlobalNamespace {
class __OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider;
}
namespace GlobalNamespace {
struct __OVRSkeletonRenderer__SkeletonRendererData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior);
MARK_VAL_T(::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior);
MARK_REF_PTR_T(::GlobalNamespace::OVRSkeletonRenderer);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider);
MARK_VAL_T(::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData);
// Type: ::IOVRSkeletonRendererDataProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8173))
// CS Name: ::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider*
class CORDL_TYPE __OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider {
public:
// Declarations
/// @brief Method GetSkeletonRendererData addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData GetSkeletonRendererData() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider(__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider(__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SkeletonRendererData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8174))
// CS Name: ::OVRSkeletonRenderer::SkeletonRendererData
struct CORDL_TYPE __OVRSkeletonRenderer__SkeletonRendererData : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <RootScale>k__BackingField offset 0x0
 __declspec(property(get=__get__RootScale_k__BackingField, put=__set__RootScale_k__BackingField)) float_t  _RootScale_k__BackingField;

/// @brief Field <IsDataValid>k__BackingField offset 0x4
 __declspec(property(get=__get__IsDataValid_k__BackingField, put=__set__IsDataValid_k__BackingField)) bool  _IsDataValid_k__BackingField;

/// @brief Field <IsDataHighConfidence>k__BackingField offset 0x5
 __declspec(property(get=__get__IsDataHighConfidence_k__BackingField, put=__set__IsDataHighConfidence_k__BackingField)) bool  _IsDataHighConfidence_k__BackingField;

/// @brief Field <ShouldUseSystemGestureMaterial>k__BackingField offset 0x6
 __declspec(property(get=__get__ShouldUseSystemGestureMaterial_k__BackingField, put=__set__ShouldUseSystemGestureMaterial_k__BackingField)) bool  _ShouldUseSystemGestureMaterial_k__BackingField;

 __declspec(property(get=get_RootScale, put=set_RootScale)) float_t  RootScale;

 __declspec(property(get=get_IsDataValid, put=set_IsDataValid)) bool  IsDataValid;

 __declspec(property(get=get_IsDataHighConfidence, put=set_IsDataHighConfidence)) bool  IsDataHighConfidence;

 __declspec(property(get=get_ShouldUseSystemGestureMaterial, put=set_ShouldUseSystemGestureMaterial)) bool  ShouldUseSystemGestureMaterial;

constexpr void __set__RootScale_k__BackingField(float_t  value) ;

constexpr float_t& __get__RootScale_k__BackingField() ;

constexpr float_t const& __get__RootScale_k__BackingField() const;

constexpr void __set__IsDataValid_k__BackingField(bool  value) ;

constexpr bool& __get__IsDataValid_k__BackingField() ;

constexpr bool const& __get__IsDataValid_k__BackingField() const;

constexpr void __set__IsDataHighConfidence_k__BackingField(bool  value) ;

constexpr bool& __get__IsDataHighConfidence_k__BackingField() ;

constexpr bool const& __get__IsDataHighConfidence_k__BackingField() const;

constexpr void __set__ShouldUseSystemGestureMaterial_k__BackingField(bool  value) ;

constexpr bool& __get__ShouldUseSystemGestureMaterial_k__BackingField() ;

constexpr bool const& __get__ShouldUseSystemGestureMaterial_k__BackingField() const;

/// @brief Method get_RootScale addr 0x27c15fc size 0x8 virtual false final false
inline float_t get_RootScale() ;

/// @brief Method set_RootScale addr 0x27c1604 size 0x8 virtual false final false
inline void set_RootScale(float_t  value) ;

/// @brief Method get_IsDataValid addr 0x27c160c size 0x8 virtual false final false
inline bool get_IsDataValid() ;

/// @brief Method set_IsDataValid addr 0x27c1614 size 0xc virtual false final false
inline void set_IsDataValid(bool  value) ;

/// @brief Method get_IsDataHighConfidence addr 0x27c1620 size 0x8 virtual false final false
inline bool get_IsDataHighConfidence() ;

/// @brief Method set_IsDataHighConfidence addr 0x27c1628 size 0xc virtual false final false
inline void set_IsDataHighConfidence(bool  value) ;

/// @brief Method get_ShouldUseSystemGestureMaterial addr 0x27c1634 size 0x8 virtual false final false
inline bool get_ShouldUseSystemGestureMaterial() ;

/// @brief Method set_ShouldUseSystemGestureMaterial addr 0x27c163c size 0xc virtual false final false
inline void set_ShouldUseSystemGestureMaterial(bool  value) ;

// Ctor Parameters [CppParam { name: "_RootScale_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_IsDataValid_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_IsDataHighConfidence_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_ShouldUseSystemGestureMaterial_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr __OVRSkeletonRenderer__SkeletonRendererData(float_t  _RootScale_k__BackingField, bool  _IsDataValid_k__BackingField, bool  _IsDataHighConfidence_k__BackingField, bool  _ShouldUseSystemGestureMaterial_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRSkeletonRenderer__SkeletonRendererData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRSkeletonRenderer__SkeletonRendererData()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData, 0x8>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ConfidenceBehavior
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8175))
// CS Name: ::OVRSkeletonRenderer::ConfidenceBehavior
struct CORDL_TYPE __OVRSkeletonRenderer__ConfidenceBehavior : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVRSkeletonRenderer__ConfidenceBehavior_Unwrapped
enum struct ____OVRSkeletonRenderer__ConfidenceBehavior_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ToggleRenderer = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior const None;

/// @brief Field ToggleRenderer value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior const ToggleRenderer;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVRSkeletonRenderer__ConfidenceBehavior_Unwrapped () const noexcept {
return std::bit_cast<____OVRSkeletonRenderer__ConfidenceBehavior_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRSkeletonRenderer__ConfidenceBehavior(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRSkeletonRenderer__ConfidenceBehavior(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRSkeletonRenderer__ConfidenceBehavior()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SystemGestureBehavior
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8176))
// CS Name: ::OVRSkeletonRenderer::SystemGestureBehavior
struct CORDL_TYPE __OVRSkeletonRenderer__SystemGestureBehavior : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVRSkeletonRenderer__SystemGestureBehavior_Unwrapped
enum struct ____OVRSkeletonRenderer__SystemGestureBehavior_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_SwapMaterial = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior const None;

/// @brief Field SwapMaterial value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior const SwapMaterial;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVRSkeletonRenderer__SystemGestureBehavior_Unwrapped () const noexcept {
return std::bit_cast<____OVRSkeletonRenderer__SystemGestureBehavior_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRSkeletonRenderer__SystemGestureBehavior(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRSkeletonRenderer__SystemGestureBehavior(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRSkeletonRenderer__SystemGestureBehavior()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BoneVisualization
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8177))
// CS Name: ::OVRSkeletonRenderer::BoneVisualization*
class CORDL_TYPE __OVRSkeletonRenderer__BoneVisualization : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field BoneGO offset 0x10
 __declspec(property(get=__get_BoneGO, put=__set_BoneGO)) ::UnityEngine::GameObject*  BoneGO;

/// @brief Field BoneBegin offset 0x18
 __declspec(property(get=__get_BoneBegin, put=__set_BoneBegin)) ::UnityEngine::Transform*  BoneBegin;

/// @brief Field BoneEnd offset 0x20
 __declspec(property(get=__get_BoneEnd, put=__set_BoneEnd)) ::UnityEngine::Transform*  BoneEnd;

/// @brief Field Line offset 0x28
 __declspec(property(get=__get_Line, put=__set_Line)) ::UnityEngine::LineRenderer*  Line;

/// @brief Field RenderMaterial offset 0x30
 __declspec(property(get=__get_RenderMaterial, put=__set_RenderMaterial)) ::UnityEngine::Material*  RenderMaterial;

/// @brief Field SystemGestureMaterial offset 0x38
 __declspec(property(get=__get_SystemGestureMaterial, put=__set_SystemGestureMaterial)) ::UnityEngine::Material*  SystemGestureMaterial;

constexpr void __set_BoneGO(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_BoneGO() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_BoneGO() const;

constexpr void __set_BoneBegin(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_BoneBegin() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_BoneBegin() const;

constexpr void __set_BoneEnd(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_BoneEnd() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_BoneEnd() const;

constexpr void __set_Line(::UnityEngine::LineRenderer*  value) ;

constexpr ::UnityEngine::LineRenderer* __get_Line() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::LineRenderer*> __get_Line() const;

constexpr void __set_RenderMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_RenderMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_RenderMaterial() const;

constexpr void __set_SystemGestureMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_SystemGestureMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_SystemGestureMaterial() const;

static inline ::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization* New_ctor(::UnityEngine::GameObject*  rootGO, ::UnityEngine::Material*  renderMat, ::UnityEngine::Material*  systemGestureMat, float_t  scale, ::UnityEngine::Transform*  begin, ::UnityEngine::Transform*  end) ;

/// @brief Method .ctor addr 0x27c0a1c size 0x1d8 virtual false final false
inline void _ctor(::UnityEngine::GameObject*  rootGO, ::UnityEngine::Material*  renderMat, ::UnityEngine::Material*  systemGestureMat, float_t  scale, ::UnityEngine::Transform*  begin, ::UnityEngine::Transform*  end) ;

/// @brief Method Update addr 0x27c0f7c size 0x1d0 virtual false final false
inline void Update(float_t  scale, bool  shouldRender, bool  shouldUseSystemGestureMaterial, ::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior  confidenceBehavior, ::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior  systemGestureBehavior) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRSkeletonRenderer__BoneVisualization", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRSkeletonRenderer__BoneVisualization(__OVRSkeletonRenderer__BoneVisualization && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRSkeletonRenderer__BoneVisualization", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRSkeletonRenderer__BoneVisualization(__OVRSkeletonRenderer__BoneVisualization const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRSkeletonRenderer__BoneVisualization()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::CapsuleVisualization
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8178))
// CS Name: ::OVRSkeletonRenderer::CapsuleVisualization*
class CORDL_TYPE __OVRSkeletonRenderer__CapsuleVisualization : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field CapsuleGO offset 0x10
 __declspec(property(get=__get_CapsuleGO, put=__set_CapsuleGO)) ::UnityEngine::GameObject*  CapsuleGO;

/// @brief Field BoneCapsule offset 0x18
 __declspec(property(get=__get_BoneCapsule, put=__set_BoneCapsule)) ::GlobalNamespace::OVRBoneCapsule*  BoneCapsule;

/// @brief Field capsuleScale offset 0x20
 __declspec(property(get=__get_capsuleScale, put=__set_capsuleScale)) ::UnityEngine::Vector3  capsuleScale;

/// @brief Field Renderer offset 0x30
 __declspec(property(get=__get_Renderer, put=__set_Renderer)) ::UnityEngine::MeshRenderer*  Renderer;

/// @brief Field RenderMaterial offset 0x38
 __declspec(property(get=__get_RenderMaterial, put=__set_RenderMaterial)) ::UnityEngine::Material*  RenderMaterial;

/// @brief Field SystemGestureMaterial offset 0x40
 __declspec(property(get=__get_SystemGestureMaterial, put=__set_SystemGestureMaterial)) ::UnityEngine::Material*  SystemGestureMaterial;

constexpr void __set_CapsuleGO(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_CapsuleGO() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_CapsuleGO() const;

constexpr void __set_BoneCapsule(::GlobalNamespace::OVRBoneCapsule*  value) ;

constexpr ::GlobalNamespace::OVRBoneCapsule* __get_BoneCapsule() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRBoneCapsule*> __get_BoneCapsule() const;

constexpr void __set_capsuleScale(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_capsuleScale() ;

constexpr ::UnityEngine::Vector3 const& __get_capsuleScale() const;

constexpr void __set_Renderer(::UnityEngine::MeshRenderer*  value) ;

constexpr ::UnityEngine::MeshRenderer* __get_Renderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> __get_Renderer() const;

constexpr void __set_RenderMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_RenderMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_RenderMaterial() const;

constexpr void __set_SystemGestureMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_SystemGestureMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_SystemGestureMaterial() const;

static inline ::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization* New_ctor(::UnityEngine::GameObject*  rootGO, ::UnityEngine::Material*  renderMat, ::UnityEngine::Material*  systemGestureMat, float_t  scale, ::GlobalNamespace::OVRBoneCapsule*  boneCapsule) ;

/// @brief Method .ctor addr 0x27c0bf4 size 0x1c0 virtual false final false
inline void _ctor(::UnityEngine::GameObject*  rootGO, ::UnityEngine::Material*  renderMat, ::UnityEngine::Material*  systemGestureMat, float_t  scale, ::GlobalNamespace::OVRBoneCapsule*  boneCapsule) ;

/// @brief Method Update addr 0x27c114c size 0x310 virtual false final false
inline void Update(float_t  scale, bool  shouldRender, bool  shouldUseSystemGestureMaterial, ::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior  confidenceBehavior, ::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior  systemGestureBehavior) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRSkeletonRenderer__CapsuleVisualization", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRSkeletonRenderer__CapsuleVisualization(__OVRSkeletonRenderer__CapsuleVisualization && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRSkeletonRenderer__CapsuleVisualization", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRSkeletonRenderer__CapsuleVisualization(__OVRSkeletonRenderer__CapsuleVisualization const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRSkeletonRenderer__CapsuleVisualization()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRSkeletonRenderer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8179))
// CS Name: ::OVRSkeletonRenderer*
class CORDL_TYPE OVRSkeletonRenderer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CapsuleVisualization = ::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization;

using BoneVisualization = ::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization;

using SystemGestureBehavior = ::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior;

using ConfidenceBehavior = ::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior;

using SkeletonRendererData = ::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData;

using IOVRSkeletonRendererDataProvider = ::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field LINE_RENDERER_WIDTH offset 0x0
static constexpr float_t  LINE_RENDERER_WIDTH{0.005};

/// @brief Field _dataProvider offset 0x18
 __declspec(property(get=__get__dataProvider, put=__set__dataProvider)) ::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider*  _dataProvider;

/// @brief Field _confidenceBehavior offset 0x20
 __declspec(property(get=__get__confidenceBehavior, put=__set__confidenceBehavior)) ::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior  _confidenceBehavior;

/// @brief Field _systemGestureBehavior offset 0x24
 __declspec(property(get=__get__systemGestureBehavior, put=__set__systemGestureBehavior)) ::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior  _systemGestureBehavior;

/// @brief Field _renderPhysicsCapsules offset 0x28
 __declspec(property(get=__get__renderPhysicsCapsules, put=__set__renderPhysicsCapsules)) bool  _renderPhysicsCapsules;

/// @brief Field _skeletonMaterial offset 0x30
 __declspec(property(get=__get__skeletonMaterial, put=__set__skeletonMaterial)) ::UnityEngine::Material*  _skeletonMaterial;

/// @brief Field _skeletonDefaultMaterial offset 0x38
 __declspec(property(get=__get__skeletonDefaultMaterial, put=__set__skeletonDefaultMaterial)) ::UnityEngine::Material*  _skeletonDefaultMaterial;

/// @brief Field _capsuleMaterial offset 0x40
 __declspec(property(get=__get__capsuleMaterial, put=__set__capsuleMaterial)) ::UnityEngine::Material*  _capsuleMaterial;

/// @brief Field _capsuleDefaultMaterial offset 0x48
 __declspec(property(get=__get__capsuleDefaultMaterial, put=__set__capsuleDefaultMaterial)) ::UnityEngine::Material*  _capsuleDefaultMaterial;

/// @brief Field _systemGestureMaterial offset 0x50
 __declspec(property(get=__get__systemGestureMaterial, put=__set__systemGestureMaterial)) ::UnityEngine::Material*  _systemGestureMaterial;

/// @brief Field _systemGestureDefaultMaterial offset 0x58
 __declspec(property(get=__get__systemGestureDefaultMaterial, put=__set__systemGestureDefaultMaterial)) ::UnityEngine::Material*  _systemGestureDefaultMaterial;

/// @brief Field _boneVisualizations offset 0x60
 __declspec(property(get=__get__boneVisualizations, put=__set__boneVisualizations)) ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization*>*  _boneVisualizations;

/// @brief Field _capsuleVisualizations offset 0x68
 __declspec(property(get=__get__capsuleVisualizations, put=__set__capsuleVisualizations)) ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization*>*  _capsuleVisualizations;

/// @brief Field _ovrSkeleton offset 0x70
 __declspec(property(get=__get__ovrSkeleton, put=__set__ovrSkeleton)) ::GlobalNamespace::OVRSkeleton*  _ovrSkeleton;

/// @brief Field _skeletonGO offset 0x78
 __declspec(property(get=__get__skeletonGO, put=__set__skeletonGO)) ::UnityEngine::GameObject*  _skeletonGO;

/// @brief Field _scale offset 0x80
 __declspec(property(get=__get__scale, put=__set__scale)) float_t  _scale;

/// @brief Field <IsInitialized>k__BackingField offset 0x84
 __declspec(property(get=__get__IsInitialized_k__BackingField, put=__set__IsInitialized_k__BackingField)) bool  _IsInitialized_k__BackingField;

/// @brief Field <IsDataValid>k__BackingField offset 0x85
 __declspec(property(get=__get__IsDataValid_k__BackingField, put=__set__IsDataValid_k__BackingField)) bool  _IsDataValid_k__BackingField;

/// @brief Field <IsDataHighConfidence>k__BackingField offset 0x86
 __declspec(property(get=__get__IsDataHighConfidence_k__BackingField, put=__set__IsDataHighConfidence_k__BackingField)) bool  _IsDataHighConfidence_k__BackingField;

/// @brief Field <ShouldUseSystemGestureMaterial>k__BackingField offset 0x87
 __declspec(property(get=__get__ShouldUseSystemGestureMaterial_k__BackingField, put=__set__ShouldUseSystemGestureMaterial_k__BackingField)) bool  _ShouldUseSystemGestureMaterial_k__BackingField;

 __declspec(property(get=get_IsInitialized, put=set_IsInitialized)) bool  IsInitialized;

 __declspec(property(get=get_IsDataValid, put=set_IsDataValid)) bool  IsDataValid;

 __declspec(property(get=get_IsDataHighConfidence, put=set_IsDataHighConfidence)) bool  IsDataHighConfidence;

 __declspec(property(get=get_ShouldUseSystemGestureMaterial, put=set_ShouldUseSystemGestureMaterial)) bool  ShouldUseSystemGestureMaterial;

constexpr void __set__dataProvider(::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider*  value) ;

constexpr ::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider* __get__dataProvider() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider*> __get__dataProvider() const;

constexpr void __set__confidenceBehavior(::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior  value) ;

constexpr ::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior& __get__confidenceBehavior() ;

constexpr ::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior const& __get__confidenceBehavior() const;

constexpr void __set__systemGestureBehavior(::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior  value) ;

constexpr ::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior& __get__systemGestureBehavior() ;

constexpr ::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior const& __get__systemGestureBehavior() const;

constexpr void __set__renderPhysicsCapsules(bool  value) ;

constexpr bool& __get__renderPhysicsCapsules() ;

constexpr bool const& __get__renderPhysicsCapsules() const;

constexpr void __set__skeletonMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__skeletonMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__skeletonMaterial() const;

constexpr void __set__skeletonDefaultMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__skeletonDefaultMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__skeletonDefaultMaterial() const;

constexpr void __set__capsuleMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__capsuleMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__capsuleMaterial() const;

constexpr void __set__capsuleDefaultMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__capsuleDefaultMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__capsuleDefaultMaterial() const;

constexpr void __set__systemGestureMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__systemGestureMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__systemGestureMaterial() const;

constexpr void __set__systemGestureDefaultMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__systemGestureDefaultMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__systemGestureDefaultMaterial() const;

constexpr void __set__boneVisualizations(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization*>* __get__boneVisualizations() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization*>*> __get__boneVisualizations() const;

constexpr void __set__capsuleVisualizations(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization*>* __get__capsuleVisualizations() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization*>*> __get__capsuleVisualizations() const;

constexpr void __set__ovrSkeleton(::GlobalNamespace::OVRSkeleton*  value) ;

constexpr ::GlobalNamespace::OVRSkeleton* __get__ovrSkeleton() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSkeleton*> __get__ovrSkeleton() const;

constexpr void __set__skeletonGO(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__skeletonGO() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__skeletonGO() const;

constexpr void __set__scale(float_t  value) ;

constexpr float_t& __get__scale() ;

constexpr float_t const& __get__scale() const;

static inline void setStaticF__capsuleRotationOffset(::UnityEngine::Quaternion  value) ;

static inline ::UnityEngine::Quaternion getStaticF__capsuleRotationOffset() ;

constexpr void __set__IsInitialized_k__BackingField(bool  value) ;

constexpr bool& __get__IsInitialized_k__BackingField() ;

constexpr bool const& __get__IsInitialized_k__BackingField() const;

constexpr void __set__IsDataValid_k__BackingField(bool  value) ;

constexpr bool& __get__IsDataValid_k__BackingField() ;

constexpr bool const& __get__IsDataValid_k__BackingField() const;

constexpr void __set__IsDataHighConfidence_k__BackingField(bool  value) ;

constexpr bool& __get__IsDataHighConfidence_k__BackingField() ;

constexpr bool const& __get__IsDataHighConfidence_k__BackingField() const;

constexpr void __set__ShouldUseSystemGestureMaterial_k__BackingField(bool  value) ;

constexpr bool& __get__ShouldUseSystemGestureMaterial_k__BackingField() ;

constexpr bool const& __get__ShouldUseSystemGestureMaterial_k__BackingField() const;

/// @brief Method get_IsInitialized addr 0x27c00e8 size 0x8 virtual false final false
inline bool get_IsInitialized() ;

/// @brief Method set_IsInitialized addr 0x27c00f0 size 0xc virtual false final false
inline void set_IsInitialized(bool  value) ;

/// @brief Method get_IsDataValid addr 0x27c00fc size 0x8 virtual false final false
inline bool get_IsDataValid() ;

/// @brief Method set_IsDataValid addr 0x27c0104 size 0xc virtual false final false
inline void set_IsDataValid(bool  value) ;

/// @brief Method get_IsDataHighConfidence addr 0x27c0110 size 0x8 virtual false final false
inline bool get_IsDataHighConfidence() ;

/// @brief Method set_IsDataHighConfidence addr 0x27c0118 size 0xc virtual false final false
inline void set_IsDataHighConfidence(bool  value) ;

/// @brief Method get_ShouldUseSystemGestureMaterial addr 0x27c0124 size 0x8 virtual false final false
inline bool get_ShouldUseSystemGestureMaterial() ;

/// @brief Method set_ShouldUseSystemGestureMaterial addr 0x27c012c size 0xc virtual false final false
inline void set_ShouldUseSystemGestureMaterial(bool  value) ;

/// @brief Method Awake addr 0x27c0138 size 0xb8 virtual false final false
inline void Awake() ;

/// @brief Method Start addr 0x27c01f0 size 0xac virtual false final false
inline void Start() ;

/// @brief Method ShouldInitialize addr 0x27c029c size 0x34 virtual false final false
inline bool ShouldInitialize() ;

/// @brief Method Initialize addr 0x27c02d0 size 0x74c virtual false final false
inline void Initialize() ;

/// @brief Method Update addr 0x27c0db4 size 0x1c8 virtual false final false
inline void Update() ;

/// @brief Method OnDestroy addr 0x27c145c size 0x12c virtual false final false
inline void OnDestroy() ;

static inline ::GlobalNamespace::OVRSkeletonRenderer* New_ctor() ;

/// @brief Method .ctor addr 0x27c1588 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRSkeletonRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSkeletonRenderer(OVRSkeletonRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSkeletonRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSkeletonRenderer(OVRSkeletonRenderer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRSkeletonRenderer()  = default;
public:


// Fields

// Static field _capsuleRotationOffset


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSkeletonRenderer, 0x88>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSkeletonRenderer__ConfidenceBehavior, "", "OVRSkeletonRenderer/ConfidenceBehavior");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSkeletonRenderer__SystemGestureBehavior, "", "OVRSkeletonRenderer/SystemGestureBehavior");
NEED_NO_BOX(::GlobalNamespace::OVRSkeletonRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeletonRenderer*, "", "OVRSkeletonRenderer");
NEED_NO_BOX(::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSkeletonRenderer__BoneVisualization*, "", "OVRSkeletonRenderer/BoneVisualization");
NEED_NO_BOX(::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSkeletonRenderer__CapsuleVisualization*, "", "OVRSkeletonRenderer/CapsuleVisualization");
NEED_NO_BOX(::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider*, "", "OVRSkeletonRenderer/IOVRSkeletonRendererDataProvider");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSkeletonRenderer__SkeletonRendererData, "", "OVRSkeletonRenderer/SkeletonRendererData");
