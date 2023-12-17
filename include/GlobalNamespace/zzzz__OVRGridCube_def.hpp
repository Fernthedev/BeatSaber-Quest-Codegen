#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGridCube)
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGridCube;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGridCube);
// Type: ::OVRGridCube
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8112))
// CS Name: ::OVRGridCube*
class CORDL_TYPE OVRGridCube : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field GridKey offset 0x18
 __declspec(property(get=__get_GridKey, put=__set_GridKey)) ::UnityEngine::KeyCode  GridKey;

/// @brief Field CubeGrid offset 0x20
 __declspec(property(get=__get_CubeGrid, put=__set_CubeGrid)) ::UnityEngine::GameObject*  CubeGrid;

/// @brief Field CubeGridOn offset 0x28
 __declspec(property(get=__get_CubeGridOn, put=__set_CubeGridOn)) bool  CubeGridOn;

/// @brief Field CubeSwitchColorOld offset 0x29
 __declspec(property(get=__get_CubeSwitchColorOld, put=__set_CubeSwitchColorOld)) bool  CubeSwitchColorOld;

/// @brief Field CubeSwitchColor offset 0x2a
 __declspec(property(get=__get_CubeSwitchColor, put=__set_CubeSwitchColor)) bool  CubeSwitchColor;

/// @brief Field gridSizeX offset 0x2c
 __declspec(property(get=__get_gridSizeX, put=__set_gridSizeX)) int32_t  gridSizeX;

/// @brief Field gridSizeY offset 0x30
 __declspec(property(get=__get_gridSizeY, put=__set_gridSizeY)) int32_t  gridSizeY;

/// @brief Field gridSizeZ offset 0x34
 __declspec(property(get=__get_gridSizeZ, put=__set_gridSizeZ)) int32_t  gridSizeZ;

/// @brief Field gridScale offset 0x38
 __declspec(property(get=__get_gridScale, put=__set_gridScale)) float_t  gridScale;

/// @brief Field cubeScale offset 0x3c
 __declspec(property(get=__get_cubeScale, put=__set_cubeScale)) float_t  cubeScale;

/// @brief Field CameraController offset 0x40
 __declspec(property(get=__get_CameraController, put=__set_CameraController)) ::GlobalNamespace::OVRCameraRig*  CameraController;

constexpr void __set_GridKey(::UnityEngine::KeyCode  value) ;

constexpr ::UnityEngine::KeyCode& __get_GridKey() ;

constexpr ::UnityEngine::KeyCode const& __get_GridKey() const;

constexpr void __set_CubeGrid(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_CubeGrid() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_CubeGrid() const;

constexpr void __set_CubeGridOn(bool  value) ;

constexpr bool& __get_CubeGridOn() ;

constexpr bool const& __get_CubeGridOn() const;

constexpr void __set_CubeSwitchColorOld(bool  value) ;

constexpr bool& __get_CubeSwitchColorOld() ;

constexpr bool const& __get_CubeSwitchColorOld() const;

constexpr void __set_CubeSwitchColor(bool  value) ;

constexpr bool& __get_CubeSwitchColor() ;

constexpr bool const& __get_CubeSwitchColor() const;

constexpr void __set_gridSizeX(int32_t  value) ;

constexpr int32_t& __get_gridSizeX() ;

constexpr int32_t const& __get_gridSizeX() const;

constexpr void __set_gridSizeY(int32_t  value) ;

constexpr int32_t& __get_gridSizeY() ;

constexpr int32_t const& __get_gridSizeY() const;

constexpr void __set_gridSizeZ(int32_t  value) ;

constexpr int32_t& __get_gridSizeZ() ;

constexpr int32_t const& __get_gridSizeZ() const;

constexpr void __set_gridScale(float_t  value) ;

constexpr float_t& __get_gridScale() ;

constexpr float_t const& __get_gridScale() const;

constexpr void __set_cubeScale(float_t  value) ;

constexpr float_t& __get_cubeScale() ;

constexpr float_t const& __get_cubeScale() const;

constexpr void __set_CameraController(::GlobalNamespace::OVRCameraRig*  value) ;

constexpr ::GlobalNamespace::OVRCameraRig* __get_CameraController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> __get_CameraController() const;

/// @brief Method Update addr 0x27ae3c8 size 0x4 virtual false final false
inline void Update() ;

/// @brief Method SetOVRCameraController addr 0x27ae5e4 size 0xc virtual false final false
inline void SetOVRCameraController(ByRef<::GlobalNamespace::OVRCameraRig*>  cameraController) ;

/// @brief Method UpdateCubeGrid addr 0x27ae3cc size 0x218 virtual false final false
inline void UpdateCubeGrid() ;

/// @brief Method CreateCubeGrid addr 0x27ae5f0 size 0x3a8 virtual false final false
inline void CreateCubeGrid() ;

/// @brief Method CubeGridSwitchColor addr 0x27ae998 size 0x188 virtual false final false
inline void CubeGridSwitchColor(bool  CubeSwitchColor) ;

static inline ::GlobalNamespace::OVRGridCube* New_ctor() ;

/// @brief Method .ctor addr 0x27aeb20 size 0x30 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRGridCube", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRGridCube(OVRGridCube && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRGridCube", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRGridCube(OVRGridCube const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRGridCube()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGridCube, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGridCube);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGridCube*, "", "OVRGridCube");
