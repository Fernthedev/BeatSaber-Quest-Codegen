#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFAnimatinonNode)
namespace GlobalNamespace {
struct OVRGLTFInputNode;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace GlobalNamespace {
struct OVRBinaryChunk;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace OVRSimpleJSON {
class JSONNode;
}
namespace GlobalNamespace {
struct __OVRGLTFAnimatinonNode__OVRInterpolationType;
}
namespace GlobalNamespace {
struct __OVRGLTFAnimatinonNode__OVRGLTFTransformType;
}
namespace GlobalNamespace {
struct __OVRGLTFAnimatinonNode__InputNodeState;
}
namespace GlobalNamespace {
struct __OVRGLTFAnimatinonNode__ThumbstickDirection;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class OVRGLTFAnimationNodeMorphTargetHandler;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRGLTFAnimatinonNode__OVRGLTFTransformType;
}
namespace GlobalNamespace {
struct __OVRGLTFAnimatinonNode__OVRInterpolationType;
}
namespace GlobalNamespace {
struct __OVRGLTFAnimatinonNode__ThumbstickDirection;
}
namespace GlobalNamespace {
class OVRGLTFAnimatinonNode;
}
namespace GlobalNamespace {
struct __OVRGLTFAnimatinonNode__InputNodeState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType);
MARK_VAL_T(::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType);
MARK_VAL_T(::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection);
MARK_REF_PTR_T(::GlobalNamespace::OVRGLTFAnimatinonNode);
MARK_VAL_T(::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState);
// Type: ::ThumbstickDirection
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7555))
// CS Name: ::OVRGLTFAnimatinonNode::ThumbstickDirection
struct CORDL_TYPE __OVRGLTFAnimatinonNode__ThumbstickDirection : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVRGLTFAnimatinonNode__ThumbstickDirection_Unwrapped
enum struct ____OVRGLTFAnimatinonNode__ThumbstickDirection_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_North = static_cast<int32_t>(0x1),
__E_NorthEast = static_cast<int32_t>(0x2),
__E_East = static_cast<int32_t>(0x3),
__E_SouthEast = static_cast<int32_t>(0x4),
__E_South = static_cast<int32_t>(0x5),
__E_SouthWest = static_cast<int32_t>(0x6),
__E_West = static_cast<int32_t>(0x7),
__E_NorthWest = static_cast<int32_t>(0x8),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection const None;

/// @brief Field North value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection const North;

/// @brief Field NorthEast value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection const NorthEast;

/// @brief Field East value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection const East;

/// @brief Field SouthEast value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection const SouthEast;

/// @brief Field South value: static_cast<int32_t>(0x5)
static ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection const South;

/// @brief Field SouthWest value: static_cast<int32_t>(0x6)
static ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection const SouthWest;

/// @brief Field West value: static_cast<int32_t>(0x7)
static ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection const West;

/// @brief Field NorthWest value: static_cast<int32_t>(0x8)
static ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection const NorthWest;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVRGLTFAnimatinonNode__ThumbstickDirection_Unwrapped () const noexcept {
return std::bit_cast<____OVRGLTFAnimatinonNode__ThumbstickDirection_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRGLTFAnimatinonNode__ThumbstickDirection(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRGLTFAnimatinonNode__ThumbstickDirection(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRGLTFAnimatinonNode__ThumbstickDirection()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRGLTFTransformType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7556))
// CS Name: ::OVRGLTFAnimatinonNode::OVRGLTFTransformType
struct CORDL_TYPE __OVRGLTFAnimatinonNode__OVRGLTFTransformType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVRGLTFAnimatinonNode__OVRGLTFTransformType_Unwrapped
enum struct ____OVRGLTFAnimatinonNode__OVRGLTFTransformType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Translation = static_cast<int32_t>(0x1),
__E_Rotation = static_cast<int32_t>(0x2),
__E_Scale = static_cast<int32_t>(0x3),
__E_Weights = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType const None;

/// @brief Field Translation value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType const Translation;

/// @brief Field Rotation value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType const Rotation;

/// @brief Field Scale value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType const Scale;

/// @brief Field Weights value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType const Weights;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVRGLTFAnimatinonNode__OVRGLTFTransformType_Unwrapped () const noexcept {
return std::bit_cast<____OVRGLTFAnimatinonNode__OVRGLTFTransformType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRGLTFAnimatinonNode__OVRGLTFTransformType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRGLTFAnimatinonNode__OVRGLTFTransformType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRGLTFAnimatinonNode__OVRGLTFTransformType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRInterpolationType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7557))
// CS Name: ::OVRGLTFAnimatinonNode::OVRInterpolationType
struct CORDL_TYPE __OVRGLTFAnimatinonNode__OVRInterpolationType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVRGLTFAnimatinonNode__OVRInterpolationType_Unwrapped
enum struct ____OVRGLTFAnimatinonNode__OVRInterpolationType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_LINEAR = static_cast<int32_t>(0x1),
__E_STEP = static_cast<int32_t>(0x2),
__E_CUBICSPLINE = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType const None;

/// @brief Field LINEAR value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType const LINEAR;

/// @brief Field STEP value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType const STEP;

/// @brief Field CUBICSPLINE value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType const CUBICSPLINE;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVRGLTFAnimatinonNode__OVRInterpolationType_Unwrapped () const noexcept {
return std::bit_cast<____OVRGLTFAnimatinonNode__OVRInterpolationType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRGLTFAnimatinonNode__OVRInterpolationType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRGLTFAnimatinonNode__OVRInterpolationType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRGLTFAnimatinonNode__OVRInterpolationType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::InputNodeState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7558))
// CS Name: ::OVRGLTFAnimatinonNode::InputNodeState
struct CORDL_TYPE __OVRGLTFAnimatinonNode__InputNodeState : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field down offset 0x0
 __declspec(property(get=__get_down, put=__set_down)) bool  down;

/// @brief Field t offset 0x4
 __declspec(property(get=__get_t, put=__set_t)) float_t  t;

/// @brief Field vecT offset 0x8
 __declspec(property(get=__get_vecT, put=__set_vecT)) ::UnityEngine::Vector2  vecT;

constexpr void __set_down(bool  value) ;

constexpr bool& __get_down() ;

constexpr bool const& __get_down() const;

constexpr void __set_t(float_t  value) ;

constexpr float_t& __get_t() ;

constexpr float_t const& __get_t() const;

constexpr void __set_vecT(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_vecT() ;

constexpr ::UnityEngine::Vector2 const& __get_vecT() const;

// Ctor Parameters [CppParam { name: "down", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "t", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "vecT", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr __OVRGLTFAnimatinonNode__InputNodeState(bool  down, float_t  t, ::UnityEngine::Vector2  vecT) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRGLTFAnimatinonNode__InputNodeState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRGLTFAnimatinonNode__InputNodeState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRGLTFAnimatinonNode
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7559))
// CS Name: ::OVRGLTFAnimatinonNode*
class CORDL_TYPE OVRGLTFAnimatinonNode : public ::System::Object {
public:
// Declarations
using InputNodeState = ::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState;

using OVRInterpolationType = ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType;

using OVRGLTFTransformType = ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType;

using ThumbstickDirection = ::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::Object)]{};

/// @brief Field m_intputNodeType offset 0x10
 __declspec(property(get=__get_m_intputNodeType, put=__set_m_intputNodeType)) ::GlobalNamespace::OVRGLTFInputNode  m_intputNodeType;

/// @brief Field m_jsonData offset 0x18
 __declspec(property(get=__get_m_jsonData, put=__set_m_jsonData)) ::OVRSimpleJSON::JSONNode*  m_jsonData;

/// @brief Field m_binaryChunk offset 0x20
 __declspec(property(get=__get_m_binaryChunk, put=__set_m_binaryChunk)) ::GlobalNamespace::OVRBinaryChunk  m_binaryChunk;

/// @brief Field m_gameObj offset 0x38
 __declspec(property(get=__get_m_gameObj, put=__set_m_gameObj)) ::UnityEngine::GameObject*  m_gameObj;

/// @brief Field m_inputNodeState offset 0x40
 __declspec(property(get=__get_m_inputNodeState, put=__set_m_inputNodeState)) ::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState  m_inputNodeState;

/// @brief Field m_morphTargetHandler offset 0x50
 __declspec(property(get=__get_m_morphTargetHandler, put=__set_m_morphTargetHandler)) ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*  m_morphTargetHandler;

/// @brief Field m_translations offset 0x58
 __declspec(property(get=__get_m_translations, put=__set_m_translations)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  m_translations;

/// @brief Field m_rotations offset 0x60
 __declspec(property(get=__get_m_rotations, put=__set_m_rotations)) ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*  m_rotations;

/// @brief Field m_scales offset 0x68
 __declspec(property(get=__get_m_scales, put=__set_m_scales)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  m_scales;

/// @brief Field m_weights offset 0x70
 __declspec(property(get=__get_m_weights, put=__set_m_weights)) ::System::Collections::Generic::List_1<float_t>*  m_weights;

/// @brief Field m_additiveWeightIndex offset 0x78
 __declspec(property(get=__get_m_additiveWeightIndex, put=__set_m_additiveWeightIndex)) int32_t  m_additiveWeightIndex;

constexpr void __set_m_intputNodeType(::GlobalNamespace::OVRGLTFInputNode  value) ;

constexpr ::GlobalNamespace::OVRGLTFInputNode& __get_m_intputNodeType() ;

constexpr ::GlobalNamespace::OVRGLTFInputNode const& __get_m_intputNodeType() const;

constexpr void __set_m_jsonData(::OVRSimpleJSON::JSONNode*  value) ;

constexpr ::OVRSimpleJSON::JSONNode* __get_m_jsonData() ;

constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONNode*> __get_m_jsonData() const;

constexpr void __set_m_binaryChunk(::GlobalNamespace::OVRBinaryChunk  value) ;

constexpr ::GlobalNamespace::OVRBinaryChunk& __get_m_binaryChunk() ;

constexpr ::GlobalNamespace::OVRBinaryChunk const& __get_m_binaryChunk() const;

constexpr void __set_m_gameObj(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_m_gameObj() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_m_gameObj() const;

constexpr void __set_m_inputNodeState(::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState  value) ;

constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState& __get_m_inputNodeState() ;

constexpr ::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState const& __get_m_inputNodeState() const;

constexpr void __set_m_morphTargetHandler(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*  value) ;

constexpr ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler* __get_m_morphTargetHandler() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*> __get_m_morphTargetHandler() const;

constexpr void __set_m_translations(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* __get_m_translations() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> __get_m_translations() const;

constexpr void __set_m_rotations(::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* __get_m_rotations() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*> __get_m_rotations() const;

constexpr void __set_m_scales(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* __get_m_scales() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> __get_m_scales() const;

constexpr void __set_m_weights(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr ::System::Collections::Generic::List_1<float_t>* __get_m_weights() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<float_t>*> __get_m_weights() const;

constexpr void __set_m_additiveWeightIndex(int32_t  value) ;

constexpr int32_t& __get_m_additiveWeightIndex() ;

constexpr int32_t const& __get_m_additiveWeightIndex() const;

static inline void setStaticF_InputNodeKeyFrames(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,int32_t>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,int32_t>* getStaticF_InputNodeKeyFrames() ;

static inline void setStaticF_ThumbStickKeyFrames(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_ThumbStickKeyFrames() ;

static inline void setStaticF_CardDirections(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value) ;

static inline ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> getStaticF_CardDirections() ;

static inline ::GlobalNamespace::OVRGLTFAnimatinonNode* New_ctor(::OVRSimpleJSON::JSONNode*  jsonData, ::GlobalNamespace::OVRBinaryChunk  binaryChunk, ::GlobalNamespace::OVRGLTFInputNode  inputNodeType, ::UnityEngine::GameObject*  gameObj, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*  morphTargetHandler) ;

/// @brief Method .ctor addr 0x271fa1c size 0x334 virtual false final false
inline void _ctor(::OVRSimpleJSON::JSONNode*  jsonData, ::GlobalNamespace::OVRBinaryChunk  binaryChunk, ::GlobalNamespace::OVRGLTFInputNode  inputNodeType, ::UnityEngine::GameObject*  gameObj, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*  morphTargetHandler) ;

/// @brief Method AddChannel addr 0x271fd58 size 0x190 virtual false final false
inline void AddChannel(::OVRSimpleJSON::JSONNode*  channel, ::OVRSimpleJSON::JSONNode*  samplers) ;

/// @brief Method UpdatePose addr 0x2720830 size 0x18c virtual false final false
inline void UpdatePose(bool  down) ;

/// @brief Method UpdatePose addr 0x27209bc size 0x448 virtual false final false
inline void UpdatePose(float_t  t, bool  applyDeadZone) ;

/// @brief Method UpdatePose addr 0x2720e04 size 0x34c virtual false final false
inline void UpdatePose(::UnityEngine::Vector2  joystick) ;

/// @brief Method GetCardinalThumbsticks addr 0x2721150 size 0x1bc virtual false final false
inline ::System::Tuple_2<::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection,::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection>* GetCardinalThumbsticks(::UnityEngine::Vector2  joystick) ;

/// @brief Method GetCardinalWeights addr 0x272130c size 0x158 virtual false final false
inline ::UnityEngine::Vector2 GetCardinalWeights(::UnityEngine::Vector2  joystick, ::System::Tuple_2<::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection,::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection>*  cardinals) ;

/// @brief Method ProcessAnimationSampler addr 0x272005c size 0x7d4 virtual false final false
inline void ProcessAnimationSampler(::OVRSimpleJSON::JSONNode*  samplerNode, int32_t  nodeId, ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType  transformType, ::OVRSimpleJSON::JSONNode*  extras) ;

/// @brief Method GetTransformType addr 0x271fee8 size 0x174 virtual false final false
inline ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType GetTransformType(::StringW  transform) ;

/// @brief Method ToOVRInterpolationType addr 0x2721464 size 0x154 virtual false final false
inline ::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType ToOVRInterpolationType(::StringW  interpolationType) ;

/// @brief Method CopyData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void CopyData(ByRef<::System::Collections::Generic::List_1<T>*>  dest, ::ArrayW<T,::Array<T>*>  src) ;

/// @brief Method CloneVector3 addr 0x271fd50 size 0x4 virtual false final false
inline ::UnityEngine::Vector3 CloneVector3(::UnityEngine::Vector3  v) ;

/// @brief Method CloneQuaternion addr 0x271fd54 size 0x4 virtual false final false
inline ::UnityEngine::Quaternion CloneQuaternion(::UnityEngine::Quaternion  q) ;

// Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAnimatinonNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRGLTFAnimatinonNode(OVRGLTFAnimatinonNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAnimatinonNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRGLTFAnimatinonNode(OVRGLTFAnimatinonNode const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRGLTFAnimatinonNode()  = default;
public:


// Fields

// Static field InputNodeKeyFrames

// Static field ThumbStickKeyFrames

// Static field CardDirections


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFAnimatinonNode, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRGLTFTransformType, "", "OVRGLTFAnimatinonNode/OVRGLTFTransformType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRGLTFAnimatinonNode__OVRInterpolationType, "", "OVRGLTFAnimatinonNode/OVRInterpolationType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRGLTFAnimatinonNode__ThumbstickDirection, "", "OVRGLTFAnimatinonNode/ThumbstickDirection");
NEED_NO_BOX(::GlobalNamespace::OVRGLTFAnimatinonNode);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAnimatinonNode*, "", "OVRGLTFAnimatinonNode");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRGLTFAnimatinonNode__InputNodeState, "", "OVRGLTFAnimatinonNode/InputNodeState");
