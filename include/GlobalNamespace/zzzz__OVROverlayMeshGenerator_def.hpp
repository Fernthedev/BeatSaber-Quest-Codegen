#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class MeshCollider;
}
namespace GlobalNamespace {
class OVROverlay;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVROverlay__OverlayShape;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__OVROverlayMeshGenerator__CubeFace;
}
namespace GlobalNamespace {
class OVROverlayMeshGenerator;
}
// Type: ::CubeFace
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8562))
// CS Name: OVROverlayMeshGenerator::CubeFace
struct CORDL_TYPE ____GlobalNamespace__OVROverlayMeshGenerator__CubeFace : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVROverlayMeshGenerator__CubeFace(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__OVROverlayMeshGenerator__CubeFace(____GlobalNamespace__OVROverlayMeshGenerator__CubeFace const&) = default;
                    constexpr ____GlobalNamespace__OVROverlayMeshGenerator__CubeFace(____GlobalNamespace__OVROverlayMeshGenerator__CubeFace&&) = default;
                    constexpr ____GlobalNamespace__OVROverlayMeshGenerator__CubeFace& operator=(____GlobalNamespace__OVROverlayMeshGenerator__CubeFace const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVROverlayMeshGenerator__CubeFace& operator=(____GlobalNamespace__OVROverlayMeshGenerator__CubeFace&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVROverlayMeshGenerator__CubeFace(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__OVROverlayMeshGenerator__CubeFace_Unwrapped : int32_t {
__Right = 0,
__Left = 1,
__Top = 2,
__Bottom = 3,
__Front = 4,
__Back = 5,
__COUNT = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__OVROverlayMeshGenerator__CubeFace_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__OVROverlayMeshGenerator__CubeFace_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Right offset 0
static ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace const Right;

/// @brief Field Left offset 0
static ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace const Left;

/// @brief Field Top offset 0
static ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace const Top;

/// @brief Field Bottom offset 0
static ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace const Bottom;

/// @brief Field Front offset 0
static ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace const Front;

/// @brief Field Back offset 0
static ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace const Back;

/// @brief Field COUNT offset 0
static ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace const COUNT;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVROverlayMeshGenerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8563))
// CS Name: OVROverlayMeshGenerator
class CORDL_TYPE OVROverlayMeshGenerator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CubeFace = ::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd8};

virtual ~OVROverlayMeshGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayMeshGenerator", modifiers: " const&", def_value: None }]
constexpr OVROverlayMeshGenerator(OVROverlayMeshGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVROverlayMeshGenerator", modifiers: "&&", def_value: None }]
constexpr OVROverlayMeshGenerator(OVROverlayMeshGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVROverlayMeshGenerator(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVROverlayMeshGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVROverlayMeshGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVROverlayMeshGenerator& operator=(OVROverlayMeshGenerator&& o) noexcept = default;
  constexpr OVROverlayMeshGenerator& operator=(OVROverlayMeshGenerator const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Mesh __declspec(property(get=__get__Mesh, put=__set__Mesh))  _Mesh;

constexpr void __set__Mesh(::UnityEngine::Mesh value) ;

constexpr ::UnityEngine::Mesh __get__Mesh() const;

 ::System::Collections::Generic::List_1<::UnityEngine::Vector3> __declspec(property(get=__get__Verts, put=__set__Verts))  _Verts;

constexpr void __set__Verts(::System::Collections::Generic::List_1<::UnityEngine::Vector3> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3> __get__Verts() const;

 ::System::Collections::Generic::List_1<::UnityEngine::Vector2> __declspec(property(get=__get__UV, put=__set__UV))  _UV;

constexpr void __set__UV(::System::Collections::Generic::List_1<::UnityEngine::Vector2> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2> __get__UV() const;

 ::System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get__Tris, put=__set__Tris))  _Tris;

constexpr void __set__Tris(::System::Collections::Generic::List_1<int32_t> value) ;

constexpr ::System::Collections::Generic::List_1<int32_t> __get__Tris() const;

 ::GlobalNamespace::OVROverlay __declspec(property(get=__get__Overlay, put=__set__Overlay))  _Overlay;

constexpr void __set__Overlay(::GlobalNamespace::OVROverlay value) ;

constexpr ::GlobalNamespace::OVROverlay __get__Overlay() const;

 ::UnityEngine::MeshFilter __declspec(property(get=__get__MeshFilter, put=__set__MeshFilter))  _MeshFilter;

constexpr void __set__MeshFilter(::UnityEngine::MeshFilter value) ;

constexpr ::UnityEngine::MeshFilter __get__MeshFilter() const;

 ::UnityEngine::MeshCollider __declspec(property(get=__get__MeshCollider, put=__set__MeshCollider))  _MeshCollider;

constexpr void __set__MeshCollider(::UnityEngine::MeshCollider value) ;

constexpr ::UnityEngine::MeshCollider __get__MeshCollider() const;

 ::UnityEngine::MeshRenderer __declspec(property(get=__get__MeshRenderer, put=__set__MeshRenderer))  _MeshRenderer;

constexpr void __set__MeshRenderer(::UnityEngine::MeshRenderer value) ;

constexpr ::UnityEngine::MeshRenderer __get__MeshRenderer() const;

 ::UnityEngine::Transform __declspec(property(get=__get__CameraRoot, put=__set__CameraRoot))  _CameraRoot;

constexpr void __set__CameraRoot(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__CameraRoot() const;

 ::UnityEngine::Transform __declspec(property(get=__get__Transform, put=__set__Transform))  _Transform;

constexpr void __set__Transform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__Transform() const;

 ::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape __declspec(property(get=__get__LastShape, put=__set__LastShape))  _LastShape;

constexpr void __set__LastShape(::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape __get__LastShape() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__LastPosition, put=__set__LastPosition))  _LastPosition;

constexpr void __set__LastPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__LastPosition() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get__LastRotation, put=__set__LastRotation))  _LastRotation;

constexpr void __set__LastRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get__LastRotation() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__LastScale, put=__set__LastScale))  _LastScale;

constexpr void __set__LastScale(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__LastScale() const;

 ::UnityEngine::Rect __declspec(property(get=__get__LastDestRectLeft, put=__set__LastDestRectLeft))  _LastDestRectLeft;

constexpr void __set__LastDestRectLeft(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get__LastDestRectLeft() const;

 ::UnityEngine::Rect __declspec(property(get=__get__LastDestRectRight, put=__set__LastDestRectRight))  _LastDestRectRight;

constexpr void __set__LastDestRectRight(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get__LastDestRectRight() const;

 ::UnityEngine::Rect __declspec(property(get=__get__LastSrcRectLeft, put=__set__LastSrcRectLeft))  _LastSrcRectLeft;

constexpr void __set__LastSrcRectLeft(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get__LastSrcRectLeft() const;

 ::UnityEngine::Texture __declspec(property(get=__get__LastTexture, put=__set__LastTexture))  _LastTexture;

constexpr void __set__LastTexture(::UnityEngine::Texture value) ;

constexpr ::UnityEngine::Texture __get__LastTexture() const;

 bool __declspec(property(get=__get__Awake, put=__set__Awake))  _Awake;

constexpr void __set__Awake(bool value) ;

constexpr bool __get__Awake() const;

static ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get_BottomLeft, put=__set_BottomLeft))  BottomLeft;

static void __set_BottomLeft(::ArrayW<::UnityEngine::Vector3> value) ;

static ::ArrayW<::UnityEngine::Vector3> __get_BottomLeft() ;

static ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get_RightVector, put=__set_RightVector))  RightVector;

static void __set_RightVector(::ArrayW<::UnityEngine::Vector3> value) ;

static ::ArrayW<::UnityEngine::Vector3> __get_RightVector() ;

static ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get_UpVector, put=__set_UpVector))  UpVector;

static void __set_UpVector(::ArrayW<::UnityEngine::Vector3> value) ;

static ::ArrayW<::UnityEngine::Vector3> __get_UpVector() ;


// Methods

/// @brief Method Awake addr 0x25d55dc size 0x174 virtual false final false
 void Awake() ;

/// @brief Method SetOverlay addr 0x25d5750 size 0x8 virtual false final false
 void SetOverlay(::GlobalNamespace::OVROverlay overlay) ;

/// @brief Method GetBoundingRect addr 0x25d5758 size 0x144 virtual false final false
 ::UnityEngine::Rect GetBoundingRect(::UnityEngine::Rect a, ::UnityEngine::Rect b) ;

/// @brief Method OnEnable addr 0x25d589c size 0x4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x25d58a0 size 0x4 virtual false final false
 void OnDisable() ;

/// @brief Method Update addr 0x25d58a4 size 0x624 virtual false final false
 void Update() ;

/// @brief Method UpdateMesh addr 0x25d5ec8 size 0x2e0 virtual false final false
 void UpdateMesh(::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape shape, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect) ;

/// @brief Method GenerateMesh addr 0x25d61a8 size 0x338 virtual false final false
static void GenerateMesh(::System::Collections::Generic::List_1<::UnityEngine::Vector3> verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2> uvs, ::System::Collections::Generic::List_1<int32_t> tris, ::GlobalNamespace::____GlobalNamespace__OVROverlay__OverlayShape shape, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect) ;

/// @brief Method GetSphereUV addr 0x25d7f48 size 0x38 virtual false final false
static ::UnityEngine::Vector2 GetSphereUV(float_t theta, float_t phi, float_t expand_coef) ;

/// @brief Method GetSphereVert addr 0x25d7f80 size 0x54 virtual false final false
static ::UnityEngine::Vector3 GetSphereVert(float_t theta, float_t phi) ;

/// @brief Method BuildSphere addr 0x25d64e0 size 0x784 virtual false final false
static void BuildSphere(::System::Collections::Generic::List_1<::UnityEngine::Vector3> verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2> uv, ::System::Collections::Generic::List_1<int32_t> triangles, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect, float_t worldScale, int32_t latitudes, int32_t longitudes, float_t expand_coef) ;

/// @brief Method GetCubeUV addr 0x25d7fd4 size 0x140 virtual false final false
static ::UnityEngine::Vector2 GetCubeUV(::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace face, ::UnityEngine::Vector2 sideUV, float_t expand_coef) ;

/// @brief Method GetCubeVert addr 0x25d8114 size 0x10c virtual false final false
static ::UnityEngine::Vector3 GetCubeVert(::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace face, ::UnityEngine::Vector2 sideUV, float_t expand_coef) ;

/// @brief Method BuildCube addr 0x25d6c64 size 0x564 virtual false final false
static void BuildCube(::System::Collections::Generic::List_1<::UnityEngine::Vector3> verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2> uv, ::System::Collections::Generic::List_1<int32_t> triangles, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, float_t worldScale, int32_t subQuads, float_t expand_coef) ;

/// @brief Method BuildQuad addr 0x25d71c8 size 0x720 virtual false final false
static void BuildQuad(::System::Collections::Generic::List_1<::UnityEngine::Vector3> verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2> uv, ::System::Collections::Generic::List_1<int32_t> triangles, ::UnityEngine::Rect rect) ;

/// @brief Method BuildHemicylinder addr 0x25d78e8 size 0x660 virtual false final false
static void BuildHemicylinder(::System::Collections::Generic::List_1<::UnityEngine::Vector3> verts, ::System::Collections::Generic::List_1<::UnityEngine::Vector2> uv, ::System::Collections::Generic::List_1<int32_t> triangles, ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect, int32_t longitudes) ;

// Ctor Parameters []
explicit OVROverlayMeshGenerator() ;

/// @brief Method .ctor addr 0x25d8220 size 0x104 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVROverlayMeshGenerator__CubeFace, "", "OVROverlayMeshGenerator/CubeFace");
NEED_NO_BOX(::GlobalNamespace::OVROverlayMeshGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVROverlayMeshGenerator, "", "OVROverlayMeshGenerator");
