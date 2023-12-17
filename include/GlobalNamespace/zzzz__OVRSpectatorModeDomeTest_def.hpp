#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpectatorModeDomeTest)
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
struct __OVRPlugin__Fovf;
}
namespace GlobalNamespace {
class __OVRSpectatorModeDomeTest___TimerCoroutine_d__20;
}
namespace GlobalNamespace {
struct __OVRPlugin__Media__PlatformCameraMode;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSpectatorModeDomeTest;
}
namespace GlobalNamespace {
class __OVRSpectatorModeDomeTest___TimerCoroutine_d__20;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSpectatorModeDomeTest);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSpectatorModeDomeTest___TimerCoroutine_d__20);
// Type: ::<TimerCoroutine>d__20
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8180))
// CS Name: ::OVRSpectatorModeDomeTest::<TimerCoroutine>d__20*
class CORDL_TYPE __OVRSpectatorModeDomeTest___TimerCoroutine_d__20 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OVRSpectatorModeDomeTest*  __4__this;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Object*  value) ;

constexpr ::System::Object* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get___2__current() const;

constexpr void __set___4__this(::GlobalNamespace::OVRSpectatorModeDomeTest*  value) ;

constexpr ::GlobalNamespace::OVRSpectatorModeDomeTest* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSpectatorModeDomeTest*> __get___4__this() const;

static inline ::GlobalNamespace::__OVRSpectatorModeDomeTest___TimerCoroutine_d__20* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x27c21e4 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x27c23b0 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x27c23b4 size 0xb4 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x27c2468 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x27c2470 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x27c24b0 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRSpectatorModeDomeTest___TimerCoroutine_d__20", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRSpectatorModeDomeTest___TimerCoroutine_d__20(__OVRSpectatorModeDomeTest___TimerCoroutine_d__20 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRSpectatorModeDomeTest___TimerCoroutine_d__20", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRSpectatorModeDomeTest___TimerCoroutine_d__20(__OVRSpectatorModeDomeTest___TimerCoroutine_d__20 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRSpectatorModeDomeTest___TimerCoroutine_d__20()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSpectatorModeDomeTest___TimerCoroutine_d__20, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRSpectatorModeDomeTest
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8181))
// CS Name: ::OVRSpectatorModeDomeTest*
class CORDL_TYPE OVRSpectatorModeDomeTest : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _TimerCoroutine_d__20 = ::GlobalNamespace::__OVRSpectatorModeDomeTest___TimerCoroutine_d__20;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field distance_near offset 0x0
static constexpr float_t  distance_near{0.5};

/// @brief Field distance_far offset 0x0
static constexpr float_t  distance_far{1.2};

/// @brief Field elevationLimit offset 0x0
static constexpr float_t  elevationLimit{30.0};

/// @brief Field inited offset 0x18
 __declspec(property(get=__get_inited, put=__set_inited)) bool  inited;

/// @brief Field defaultExternalCamera offset 0x20
 __declspec(property(get=__get_defaultExternalCamera, put=__set_defaultExternalCamera)) ::UnityEngine::Camera*  defaultExternalCamera;

/// @brief Field defaultFov offset 0x28
 __declspec(property(get=__get_defaultFov, put=__set_defaultFov)) ::GlobalNamespace::__OVRPlugin__Fovf  defaultFov;

/// @brief Field SpectatorAnchor offset 0x38
 __declspec(property(get=__get_SpectatorAnchor, put=__set_SpectatorAnchor)) ::UnityEngine::Transform*  SpectatorAnchor;

/// @brief Field Head offset 0x40
 __declspec(property(get=__get_Head, put=__set_Head)) ::UnityEngine::Transform*  Head;

/// @brief Field camMode offset 0x48
 __declspec(property(get=__get_camMode, put=__set_camMode)) ::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode  camMode;

/// @brief Field readyToSwitch offset 0x4c
 __declspec(property(get=__get_readyToSwitch, put=__set_readyToSwitch)) bool  readyToSwitch;

/// @brief Field SpectatorCamera offset 0x50
 __declspec(property(get=__get_SpectatorCamera, put=__set_SpectatorCamera)) ::UnityEngine::Transform*  SpectatorCamera;

/// @brief Field distance offset 0x58
 __declspec(property(get=__get_distance, put=__set_distance)) float_t  distance;

/// @brief Field elevation offset 0x5c
 __declspec(property(get=__get_elevation, put=__set_elevation)) float_t  elevation;

/// @brief Field polar offset 0x60
 __declspec(property(get=__get_polar, put=__set_polar)) float_t  polar;

constexpr void __set_inited(bool  value) ;

constexpr bool& __get_inited() ;

constexpr bool const& __get_inited() const;

constexpr void __set_defaultExternalCamera(::UnityEngine::Camera*  value) ;

constexpr ::UnityEngine::Camera* __get_defaultExternalCamera() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> __get_defaultExternalCamera() const;

constexpr void __set_defaultFov(::GlobalNamespace::__OVRPlugin__Fovf  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__Fovf& __get_defaultFov() ;

constexpr ::GlobalNamespace::__OVRPlugin__Fovf const& __get_defaultFov() const;

constexpr void __set_SpectatorAnchor(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_SpectatorAnchor() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_SpectatorAnchor() const;

constexpr void __set_Head(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_Head() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_Head() const;

constexpr void __set_camMode(::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode& __get_camMode() ;

constexpr ::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode const& __get_camMode() const;

constexpr void __set_readyToSwitch(bool  value) ;

constexpr bool& __get_readyToSwitch() ;

constexpr bool const& __get_readyToSwitch() const;

constexpr void __set_SpectatorCamera(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_SpectatorCamera() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_SpectatorCamera() const;

constexpr void __set_distance(float_t  value) ;

constexpr float_t& __get_distance() ;

constexpr float_t const& __get_distance() const;

constexpr void __set_elevation(float_t  value) ;

constexpr float_t& __get_elevation() ;

constexpr float_t const& __get_elevation() const;

constexpr void __set_polar(float_t  value) ;

constexpr float_t& __get_polar() ;

constexpr float_t const& __get_polar() const;

/// @brief Method Awake addr 0x27c1648 size 0x3c virtual false final false
inline void Awake() ;

/// @brief Method Start addr 0x27c1684 size 0xb0 virtual false final false
inline void Start() ;

/// @brief Method Initialize addr 0x27c1734 size 0x228 virtual false final false
inline void Initialize() ;

/// @brief Method UpdateDefaultExternalCamera addr 0x27c195c size 0x428 virtual false final false
inline void UpdateDefaultExternalCamera() ;

/// @brief Method UpdateSpectatorCameraStatus addr 0x27c1d84 size 0x364 virtual false final false
inline void UpdateSpectatorCameraStatus() ;

/// @brief Method SpectatorCameraDomePosition addr 0x27c2150 size 0x94 virtual false final false
inline ::UnityEngine::Vector3 SpectatorCameraDomePosition(::UnityEngine::Vector3  spectatorAnchorPosition, float_t  d, float_t  e, float_t  p) ;

/// @brief Method TimerCoroutine addr 0x27c20e8 size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* TimerCoroutine() ;

/// @brief Method Update addr 0x27c220c size 0x140 virtual false final false
inline void Update() ;

/// @brief Method OnApplicationPause addr 0x27c234c size 0x20 virtual false final false
inline void OnApplicationPause() ;

/// @brief Method OnApplicationQuit addr 0x27c236c size 0x20 virtual false final false
inline void OnApplicationQuit() ;

static inline ::GlobalNamespace::OVRSpectatorModeDomeTest* New_ctor() ;

/// @brief Method .ctor addr 0x27c238c size 0x24 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRSpectatorModeDomeTest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSpectatorModeDomeTest(OVRSpectatorModeDomeTest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSpectatorModeDomeTest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSpectatorModeDomeTest(OVRSpectatorModeDomeTest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRSpectatorModeDomeTest()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpectatorModeDomeTest, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSpectatorModeDomeTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpectatorModeDomeTest*, "", "OVRSpectatorModeDomeTest");
NEED_NO_BOX(::GlobalNamespace::__OVRSpectatorModeDomeTest___TimerCoroutine_d__20);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSpectatorModeDomeTest___TimerCoroutine_d__20*, "", "OVRSpectatorModeDomeTest/<TimerCoroutine>d__20");
