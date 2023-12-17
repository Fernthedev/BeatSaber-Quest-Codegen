#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PolyShape)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ProBuilder {
struct __PolyShape__PolyEditMode;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct __PolyShape__PolyEditMode;
}
namespace UnityEngine::ProBuilder {
class PolyShape;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::__PolyShape__PolyEditMode);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::PolyShape);
// Type: ::PolyEditMode
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12149))
// CS Name: ::PolyShape::PolyEditMode
struct CORDL_TYPE __PolyShape__PolyEditMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____PolyShape__PolyEditMode_Unwrapped
enum struct ____PolyShape__PolyEditMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Path = static_cast<int32_t>(0x1),
__E_Height = static_cast<int32_t>(0x2),
__E_Edit = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::ProBuilder::__PolyShape__PolyEditMode const None;

/// @brief Field Path value: static_cast<int32_t>(0x1)
static ::UnityEngine::ProBuilder::__PolyShape__PolyEditMode const Path;

/// @brief Field Height value: static_cast<int32_t>(0x2)
static ::UnityEngine::ProBuilder::__PolyShape__PolyEditMode const Height;

/// @brief Field Edit value: static_cast<int32_t>(0x3)
static ::UnityEngine::ProBuilder::__PolyShape__PolyEditMode const Edit;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____PolyShape__PolyEditMode_Unwrapped () const noexcept {
return std::bit_cast<____PolyShape__PolyEditMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __PolyShape__PolyEditMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PolyShape__PolyEditMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PolyShape__PolyEditMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__PolyShape__PolyEditMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::PolyShape
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12150))
// CS Name: ::UnityEngine.ProBuilder::PolyShape*
class CORDL_TYPE PolyShape : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PolyEditMode = ::UnityEngine::ProBuilder::__PolyShape__PolyEditMode;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field m_Mesh offset 0x18
 __declspec(property(get=__get_m_Mesh, put=__set_m_Mesh)) ::UnityEngine::ProBuilder::ProBuilderMesh*  m_Mesh;

/// @brief Field m_Points offset 0x20
 __declspec(property(get=__get_m_Points, put=__set_m_Points)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  m_Points;

/// @brief Field m_Extrude offset 0x28
 __declspec(property(get=__get_m_Extrude, put=__set_m_Extrude)) float_t  m_Extrude;

/// @brief Field m_EditMode offset 0x2c
 __declspec(property(get=__get_m_EditMode, put=__set_m_EditMode)) ::UnityEngine::ProBuilder::__PolyShape__PolyEditMode  m_EditMode;

/// @brief Field m_FlipNormals offset 0x30
 __declspec(property(get=__get_m_FlipNormals, put=__set_m_FlipNormals)) bool  m_FlipNormals;

/// @brief Field isOnGrid offset 0x31
 __declspec(property(get=__get_isOnGrid, put=__set_isOnGrid)) bool  isOnGrid;

 __declspec(property(get=get_controlPoints)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector3>*  controlPoints;

 __declspec(property(get=get_extrude, put=set_extrude)) float_t  extrude;

 __declspec(property(get=get_polyEditMode, put=set_polyEditMode)) ::UnityEngine::ProBuilder::__PolyShape__PolyEditMode  polyEditMode;

 __declspec(property(get=get_flipNormals, put=set_flipNormals)) bool  flipNormals;

 __declspec(property(get=get_mesh, put=set_mesh)) ::UnityEngine::ProBuilder::ProBuilderMesh*  mesh;

constexpr void __set_m_Mesh(::UnityEngine::ProBuilder::ProBuilderMesh*  value) ;

constexpr ::UnityEngine::ProBuilder::ProBuilderMesh* __get_m_Mesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::ProBuilderMesh*> __get_m_Mesh() const;

constexpr void __set_m_Points(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* __get_m_Points() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> __get_m_Points() const;

constexpr void __set_m_Extrude(float_t  value) ;

constexpr float_t& __get_m_Extrude() ;

constexpr float_t const& __get_m_Extrude() const;

constexpr void __set_m_EditMode(::UnityEngine::ProBuilder::__PolyShape__PolyEditMode  value) ;

constexpr ::UnityEngine::ProBuilder::__PolyShape__PolyEditMode& __get_m_EditMode() ;

constexpr ::UnityEngine::ProBuilder::__PolyShape__PolyEditMode const& __get_m_EditMode() const;

constexpr void __set_m_FlipNormals(bool  value) ;

constexpr bool& __get_m_FlipNormals() ;

constexpr bool const& __get_m_FlipNormals() const;

constexpr void __set_isOnGrid(bool  value) ;

constexpr bool& __get_isOnGrid() ;

constexpr bool const& __get_isOnGrid() const;

/// @brief Method get_controlPoints addr 0x2b55e30 size 0x7c virtual false final false
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Vector3>* get_controlPoints() ;

/// @brief Method SetControlPoints addr 0x2b55eac size 0x5c virtual false final false
inline void SetControlPoints(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*  points) ;

/// @brief Method get_extrude addr 0x2b55f08 size 0x8 virtual false final false
inline float_t get_extrude() ;

/// @brief Method set_extrude addr 0x2b55f10 size 0x8 virtual false final false
inline void set_extrude(float_t  value) ;

/// @brief Method get_polyEditMode addr 0x2b55f18 size 0x8 virtual false final false
inline ::UnityEngine::ProBuilder::__PolyShape__PolyEditMode get_polyEditMode() ;

/// @brief Method set_polyEditMode addr 0x2b55f20 size 0x8 virtual false final false
inline void set_polyEditMode(::UnityEngine::ProBuilder::__PolyShape__PolyEditMode  value) ;

/// @brief Method get_flipNormals addr 0x2b55f28 size 0x8 virtual false final false
inline bool get_flipNormals() ;

/// @brief Method set_flipNormals addr 0x2b55f30 size 0xc virtual false final false
inline void set_flipNormals(bool  value) ;

/// @brief Method get_mesh addr 0x2b55f3c size 0x94 virtual false final false
inline ::UnityEngine::ProBuilder::ProBuilderMesh* get_mesh() ;

/// @brief Method set_mesh addr 0x2b55fd0 size 0x8 virtual false final false
inline void set_mesh(::UnityEngine::ProBuilder::ProBuilderMesh*  value) ;

/// @brief Method IsSnapEnabled addr 0x2b55fd8 size 0x8 virtual false final false
inline bool IsSnapEnabled() ;

static inline ::UnityEngine::ProBuilder::PolyShape* New_ctor() ;

/// @brief Method .ctor addr 0x2b55fe0 size 0x84 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PolyShape", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PolyShape(PolyShape && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolyShape", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolyShape(PolyShape const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PolyShape()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::PolyShape, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__PolyShape__PolyEditMode, "UnityEngine.ProBuilder", "PolyShape/PolyEditMode");
NEED_NO_BOX(::UnityEngine::ProBuilder::PolyShape);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::PolyShape*, "UnityEngine.ProBuilder", "PolyShape");
