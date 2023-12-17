#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SliderMeshController)
namespace GlobalNamespace {
class SliderData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace UnityEngine {
class Mesh;
}
namespace GlobalNamespace {
class SliderMeshConstructor;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class PathsHolder;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderMeshController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderMeshController);
// Type: ::SliderMeshController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4823))
// CS Name: ::SliderMeshController*
class CORDL_TYPE SliderMeshController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kDefaultGameNoteSize offset 0x0
static constexpr float_t  kDefaultGameNoteSize{0.45};

/// @brief Field _numberOfFixedVertexPathSegments offset 0x18
 __declspec(property(get=__get__numberOfFixedVertexPathSegments, put=__set__numberOfFixedVertexPathSegments)) int32_t  _numberOfFixedVertexPathSegments;

/// @brief Field _controlPointDistancePerSqrtNotesDistance offset 0x1c
 __declspec(property(get=__get__controlPointDistancePerSqrtNotesDistance, put=__set__controlPointDistancePerSqrtNotesDistance)) float_t  _controlPointDistancePerSqrtNotesDistance;

/// @brief Field _middleAnchorPointOffsetAmount offset 0x20
 __declspec(property(get=__get__middleAnchorPointOffsetAmount, put=__set__middleAnchorPointOffsetAmount)) float_t  _middleAnchorPointOffsetAmount;

/// @brief Field _middleControlPointZDistanceModifier offset 0x24
 __declspec(property(get=__get__middleControlPointZDistanceModifier, put=__set__middleControlPointZDistanceModifier)) float_t  _middleControlPointZDistanceModifier;

/// @brief Field _middleControlPointYDistanceModifier offset 0x28
 __declspec(property(get=__get__middleControlPointYDistanceModifier, put=__set__middleControlPointYDistanceModifier)) float_t  _middleControlPointYDistanceModifier;

/// @brief Field _middleControlPointXDistanceModifier offset 0x2c
 __declspec(property(get=__get__middleControlPointXDistanceModifier, put=__set__middleControlPointXDistanceModifier)) float_t  _middleControlPointXDistanceModifier;

/// @brief Field _sliderMeshConstructor offset 0x30
 __declspec(property(get=__get__sliderMeshConstructor, put=__set__sliderMeshConstructor)) ::GlobalNamespace::SliderMeshConstructor*  _sliderMeshConstructor;

/// @brief Field _pathsHolder offset 0x38
 __declspec(property(get=__get__pathsHolder, put=__set__pathsHolder)) ::GlobalNamespace::PathsHolder*  _pathsHolder;

/// @brief Field _reusableAnchorsList offset 0x40
 __declspec(property(get=__get__reusableAnchorsList, put=__set__reusableAnchorsList)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  _reusableAnchorsList;

/// @brief Field _reusableControlPointsArray4 offset 0x48
 __declspec(property(get=__get__reusableControlPointsArray4, put=__set__reusableControlPointsArray4)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _reusableControlPointsArray4;

/// @brief Field _reusableControlPointsArray2 offset 0x50
 __declspec(property(get=__get__reusableControlPointsArray2, put=__set__reusableControlPointsArray2)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  _reusableControlPointsArray2;

 __declspec(property(get=get_pathLength)) float_t  pathLength;

 __declspec(property(get=get_mesh)) ::UnityEngine::Mesh*  mesh;

 __declspec(property(get=get_pathsHolder)) ::GlobalNamespace::PathsHolder*  pathsHolder;

constexpr void __set__numberOfFixedVertexPathSegments(int32_t  value) ;

constexpr int32_t& __get__numberOfFixedVertexPathSegments() ;

constexpr int32_t const& __get__numberOfFixedVertexPathSegments() const;

constexpr void __set__controlPointDistancePerSqrtNotesDistance(float_t  value) ;

constexpr float_t& __get__controlPointDistancePerSqrtNotesDistance() ;

constexpr float_t const& __get__controlPointDistancePerSqrtNotesDistance() const;

constexpr void __set__middleAnchorPointOffsetAmount(float_t  value) ;

constexpr float_t& __get__middleAnchorPointOffsetAmount() ;

constexpr float_t const& __get__middleAnchorPointOffsetAmount() const;

constexpr void __set__middleControlPointZDistanceModifier(float_t  value) ;

constexpr float_t& __get__middleControlPointZDistanceModifier() ;

constexpr float_t const& __get__middleControlPointZDistanceModifier() const;

constexpr void __set__middleControlPointYDistanceModifier(float_t  value) ;

constexpr float_t& __get__middleControlPointYDistanceModifier() ;

constexpr float_t const& __get__middleControlPointYDistanceModifier() const;

constexpr void __set__middleControlPointXDistanceModifier(float_t  value) ;

constexpr float_t& __get__middleControlPointXDistanceModifier() ;

constexpr float_t const& __get__middleControlPointXDistanceModifier() const;

constexpr void __set__sliderMeshConstructor(::GlobalNamespace::SliderMeshConstructor*  value) ;

constexpr ::GlobalNamespace::SliderMeshConstructor* __get__sliderMeshConstructor() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderMeshConstructor*> __get__sliderMeshConstructor() const;

constexpr void __set__pathsHolder(::GlobalNamespace::PathsHolder*  value) ;

constexpr ::GlobalNamespace::PathsHolder* __get__pathsHolder() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PathsHolder*> __get__pathsHolder() const;

constexpr void __set__reusableAnchorsList(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* __get__reusableAnchorsList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> __get__reusableAnchorsList() const;

constexpr void __set__reusableControlPointsArray4(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __get__reusableControlPointsArray4() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __get__reusableControlPointsArray4() const;

constexpr void __set__reusableControlPointsArray2(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __get__reusableControlPointsArray2() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __get__reusableControlPointsArray2() const;

/// @brief Method get_pathLength addr 0x2394bd0 size 0x24 virtual false final false
inline float_t get_pathLength() ;

/// @brief Method get_mesh addr 0x2394bf4 size 0x1c virtual false final false
inline ::UnityEngine::Mesh* get_mesh() ;

/// @brief Method get_pathsHolder addr 0x2394c10 size 0x8 virtual false final false
inline ::GlobalNamespace::PathsHolder* get_pathsHolder() ;

/// @brief Method CreateBezierPathAndMesh addr 0x2390124 size 0x758 virtual false final false
inline void CreateBezierPathAndMesh(::GlobalNamespace::SliderData*  sliderData, ::UnityEngine::Vector3  headNotePos, ::UnityEngine::Vector3  tailNotePos, float_t  jumpSpeed, float_t  noteUniformScale) ;

/// @brief Method CutDirectionToControlPointPosition addr 0x2394c18 size 0xdc virtual false final false
static inline ::UnityEngine::Vector3 CutDirectionToControlPointPosition(::GlobalNamespace::NoteCutDirection  noteCutDirection) ;

static inline ::GlobalNamespace::SliderMeshController* New_ctor() ;

/// @brief Method .ctor addr 0x2394cf4 size 0xd0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SliderMeshController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SliderMeshController(SliderMeshController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SliderMeshController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SliderMeshController(SliderMeshController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SliderMeshController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderMeshController, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderMeshController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderMeshController*, "", "SliderMeshController");
